/*
 * XREFs of RtlpHpFreeHeap @ 0x180038098
 * Callers:
 *     RtlpHpReallocMove @ 0x180037FD0 (RtlpHpReallocMove.c)
 *     RtlpHpMetadataFree @ 0x1800586CC (RtlpHpMetadataFree.c)
 *     RtlpFreeHeapInternal @ 0x1800DD1F4 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlpHpSizeHeap @ 0x18002A810 (RtlpHpSizeHeap.c)
 *     RtlpHpSegFree @ 0x18002B710 (RtlpHpSegFree.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpExtrasGet @ 0x1800582D4 (RtlpHpExtrasGet.c)
 *     RtlpHpLargeFree @ 0x1800585DC (RtlpHpLargeFree.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlpCallInterceptRoutine @ 0x1800D8A44 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapFreeEvent @ 0x1800EF964 (RtlpLogHeapFreeEvent.c)
 */

_BOOL8 __fastcall RtlpHpFreeHeap(__int64 a1, unsigned __int64 a2, int a3)
{
  int v3; // eax
  __int64 v5; // rcx
  unsigned int v6; // esi
  int v8; // eax
  BOOL v9; // esi
  __int64 v11; // rax
  __int64 v12; // rbp
  int v13; // r8d
  int v14; // eax

  v3 = *(_DWORD *)(a1 + 20) & 0x11000001;
  v5 = *(unsigned int *)(a1 + 40);
  v6 = v3 | a3;
  if ( (_DWORD)v5 && (_DWORD)v5 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
    v6 |= 1u;
  if ( (v6 & 0x1000000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 32) )
    {
      v11 = RtlpHpExtrasGet(a1, a2, v6);
      v12 = v11;
      if ( v11 )
      {
        if ( (*(_BYTE *)(v11 + 2) & 0xF) != 0 )
        {
          if ( (RtlpHpAppCompatFlags & 2) != 0 )
          {
            if ( (_WORD)a2 )
              v14 = 0;
            else
              v14 = RtlSparseBitmapCtxCheckBitsInternal(v5, a2 >> 16);
            v13 = a2;
            if ( !v14 )
              v13 = a2 + 16;
          }
          else
          {
            v13 = a2;
          }
          if ( (int)RtlpCallInterceptRoutine(*(_BYTE *)(v12 + 2) & 0xF, a1, v13, 3, v12 + 16) < 0 )
            return 0;
        }
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 20) & 0x10000000) != 0 && RtlpHpSizeHeap(a1, a2, v6) == -1 )
  {
    RtlpLogHeapFailure(9, a1, a2, 0, 0LL, 0LL);
    return 0;
  }
  if ( (_WORD)a2 )
    v8 = 0;
  else
    v8 = RtlSparseBitmapCtxCheckBitsInternal(v5, a2 >> 16);
  if ( v8 )
  {
    v9 = RtlpHpLargeFree(a1, a2, v6) != 0;
    if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 && v9 )
      RtlpLogHeapFreeEvent(a1, a2, 3LL);
  }
  else
  {
    return (BOOL)RtlpHpSegFree((_RTL_SRWLOCK *)a1, a2, v6);
  }
  return v9;
}
