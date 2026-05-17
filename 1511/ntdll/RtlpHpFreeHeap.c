/*
 * XREFs of RtlpHpFreeHeap @ 0x18001ABF8
 * Callers:
 *     RtlpHpReallocMove @ 0x18001AAB0 (RtlpHpReallocMove.c)
 *     RtlpHpMetadataFree @ 0x18005A5C4 (RtlpHpMetadataFree.c)
 * Callees:
 *     RtlpHpExtrasGet @ 0x180019CBC (RtlpHpExtrasGet.c)
 *     RtlpHpSegFree @ 0x18001B3B4 (RtlpHpSegFree.c)
 *     RtlpHpSizeHeap @ 0x18001BDD0 (RtlpHpSizeHeap.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x180040100 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpLargeFree @ 0x18005A4D4 (RtlpHpLargeFree.c)
 *     RtlpHpSizeHeapInternal @ 0x18005CAC8 (RtlpHpSizeHeapInternal.c)
 *     RtlpCallInterceptRoutine @ 0x18009524C (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     RtlpLogHeapFreeEvent @ 0x1800F18BC (RtlpLogHeapFreeEvent.c)
 */

_BOOL8 __fastcall RtlpHpFreeHeap(_DWORD *a1, unsigned __int64 a2, int a3, __int64 *a4, _WORD *a5)
{
  int v5; // eax
  __int64 v7; // rcx
  unsigned int v8; // esi
  unsigned __int64 v11; // r14
  unsigned __int16 *v12; // rax
  int v13; // r8d
  int v14; // eax
  BOOL v15; // esi
  int v16; // eax

  v5 = a1[5] & 0x11000001;
  v7 = (unsigned int)a1[10];
  v8 = v5 | a3;
  if ( (_DWORD)v7 && (_DWORD)v7 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    v8 |= 1u;
  v11 = 0LL;
  if ( a5 )
  {
    v12 = (unsigned __int16 *)RtlpHpExtrasGet((__int64)a1, a2, v8, a4);
    v11 = (unsigned __int64)v12;
    if ( v12 )
    {
      v7 = *v12;
      *a5 = v7;
    }
    else
    {
      *a5 = 0;
    }
  }
  else if ( a4 )
  {
    *a4 = RtlpHpSizeHeapInternal(a1, a2, v8, 0LL);
  }
  if ( (v8 & 0x1000000) == 0 )
  {
    if ( a1[8] )
    {
      if ( (v11 || (v11 = RtlpHpExtrasGet((__int64)a1, a2, v8, a4)) != 0) && (*(_BYTE *)(v11 + 2) & 0xF) != 0 )
      {
        if ( (RtlpHpAppCompatFlags & 2) != 0 )
        {
          if ( (_WORD)a2 )
            v14 = 0;
          else
            v14 = RtlSparseBitmapCtxCheckBitsInternal(v7, a2 >> 16);
          v13 = a2;
          if ( !v14 )
            v13 = a2 + 16;
        }
        else
        {
          v13 = a2;
        }
        if ( (int)RtlpCallInterceptRoutine(*(_BYTE *)(v11 + 2) & 0xF, (_DWORD)a1, v13, 3, v11 + 16) < 0 )
          return 0;
      }
    }
  }
  if ( (a1[5] & 0x10000000) != 0 && RtlpHpSizeHeap(a1, a2, v8) == -1 )
  {
    RtlpLogHeapFailure(9, (_DWORD)a1, a2, 0, 0LL, 0LL);
    return 0;
  }
  if ( (_WORD)a2 )
    v16 = 0;
  else
    v16 = RtlSparseBitmapCtxCheckBitsInternal(v7, a2 >> 16);
  if ( v16 )
  {
    v15 = RtlpHpLargeFree(a1, a2, v8) != 0;
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 && v15 )
      RtlpLogHeapFreeEvent(a1, a2, 3LL);
  }
  else
  {
    return (BOOL)RtlpHpSegFree(a1, a2, v8);
  }
  return v15;
}
