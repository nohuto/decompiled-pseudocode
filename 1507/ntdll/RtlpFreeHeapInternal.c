/*
 * XREFs of RtlpFreeHeapInternal @ 0x1800DD1F4
 * Callers:
 *     RtlpHpVirtFreeHeap @ 0x1800EAC08 (RtlpHpVirtFreeHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlpHpConvertFlagsToSegmentFlags @ 0x18002AB24 (RtlpHpConvertFlagsToSegmentFlags.c)
 *     RtlpLowFragHeapFree @ 0x18002ACB0 (RtlpLowFragHeapFree.c)
 *     RtlpFreeHeap @ 0x18002C140 (RtlpFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180038098 (RtlpHpFreeHeap.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpProbeUserBufferSafe @ 0x180057FF0 (RtlpProbeUserBufferSafe.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlpCallInterceptRoutine @ 0x1800D8A44 (RtlpCallInterceptRoutine.c)
 *     RtlpValidateLFHBlock @ 0x1800F0B70 (RtlpValidateLFHBlock.c)
 */

_BOOL8 __fastcall RtlpFreeHeapInternal(_BYTE *BaseAddress, unsigned __int64 a2, ULONG a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v6; // rbx
  int v8; // eax
  BOOL v9; // ebp
  struct _TEB *v10; // rbx
  struct _TEB *v11; // rbx
  char v12; // r14
  __int64 v13; // rax
  unsigned int v14; // edx
  int v15; // eax
  unsigned __int16 v16; // ax
  int v17; // eax
  unsigned __int16 v18; // ax
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v22; // [rsp+38h] [rbp-20h]
  int v23; // [rsp+38h] [rbp-20h]
  int v24; // [rsp+38h] [rbp-20h]

  v4 = a2;
  v6 = 0LL;
  if ( *((_DWORD *)BaseAddress + 4) != -571548178 )
  {
    if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) == 0 )
    {
      v9 = 1;
      if ( (BaseAddress[120] & 1) != 0 )
      {
        v6 = (unsigned __int64)RtlpProbeUserBufferSafe((int)BaseAddress, a2);
      }
      else if ( (a2 & 0xF) != 0 )
      {
        RtlpLogHeapFailure(9, (__int64)BaseAddress, a2, 0LL, 0LL, 0LL);
      }
      else
      {
        v6 = a2 - 16;
        _m_prefetchw((const void *)(a2 - 16));
        if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
          v6 -= 16LL * *(unsigned __int8 *)(v6 + 14);
        if ( (*(_BYTE *)(v6 + 15) & 0x3F) == 0 )
        {
          RtlpLogHeapFailure(8, (__int64)BaseAddress, v6, 0LL, 0LL, 0LL);
          v6 = 0LL;
        }
      }
      if ( !v6 )
        goto LABEL_21;
      if ( *(_BYTE *)(v4 - 1) == 5 )
      {
        if ( *(char *)(v6 + 15) >= 0 )
        {
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            v22 = *((_DWORD *)BaseAddress + 34) ^ *(_DWORD *)(v6 + 8);
            if ( HIBYTE(v22) != (BYTE2(v22) ^ (unsigned __int8)(BYTE1(v22) ^ v22)) )
            {
LABEL_51:
              RtlpLogHeapFailure(3, (__int64)BaseAddress, v6, v4, 0LL, 0LL);
LABEL_21:
              NtCurrentTeb()->LastStatusValue = -1073741811;
              v11 = NtCurrentTeb();
              v11->LastErrorValue = RtlNtStatusToDosError(-1073741811);
              return 0;
            }
          }
          v12 = 1;
        }
        else
        {
          v12 = RtlpValidateLFHBlock(BaseAddress, v6);
        }
        if ( !v12 )
          goto LABEL_51;
        if ( *(char *)(v6 + 15) >= 0 )
        {
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            v15 = *(_DWORD *)(v6 + 8);
            LOWORD(v23) = v15;
            if ( (v15 & *((_DWORD *)BaseAddress + 31)) != 0 )
              v23 = *((_DWORD *)BaseAddress + 34) ^ v15;
            v16 = v23;
          }
          else
          {
            v16 = *(_WORD *)(v6 + 8);
          }
          v14 = v16;
        }
        else
        {
          v13 = *(_WORD *)(v6 + 8) ^ (unsigned __int16)(RtlpLFHKey ^ (unsigned __int16)BaseAddress ^ (v6 >> 4))
              ? 0LL
              : *(_QWORD *)(v6
                          - ((unsigned __int64)(*(_DWORD *)(v6 + 8) ^ (unsigned int)RtlpLFHKey ^ (unsigned int)BaseAddress ^ (unsigned int)(v6 >> 4)) >> 12));
          v14 = *(unsigned __int16 *)(v13 + 36);
        }
        if ( *(_BYTE *)(v6 + 15) == 4 )
        {
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            v17 = *(_DWORD *)(v6 + 8);
            LOWORD(v24) = v17;
            if ( (v17 & *((_DWORD *)BaseAddress + 31)) != 0 )
              v24 = *((_DWORD *)BaseAddress + 34) ^ v17;
            v18 = v24;
          }
          else
          {
            v18 = *(_WORD *)(v6 + 8);
          }
          v19 = v14 + *(_QWORD *)(v6 - 16) - v18;
        }
        else
        {
          v19 = 16LL * v14;
        }
        if ( v19 + v6 < v4 )
          v12 = 0;
        if ( !v12 )
          goto LABEL_51;
        if ( (a3 & 0x3C000102) == 0 )
        {
          v20 = *(_BYTE *)(v4 - 16 + 15) == 5 ? v4 - 16LL * *(unsigned __int8 *)(v4 - 16 + 14) : 0LL;
          if ( (int)RtlpCallInterceptRoutine(*(_DWORD *)(v4 - 8), (__int64)BaseAddress, v4, 3u, v20) < 0 )
            goto LABEL_21;
        }
      }
      if ( *(char *)(v6 + 15) < 0 )
      {
        RtlpLowFragHeapFree((int)BaseAddress, v6, a3);
        return v9;
      }
    }
    return (BOOL)(unsigned __int8)RtlpFreeHeap(BaseAddress, a3 | 2, (_QWORD *)v6, v4);
  }
  if ( (RtlpHpAppCompatFlags & 2) != 0
    && a2
    && !((_WORD)a2 ? 0 : RtlSparseBitmapCtxCheckBitsInternal((__int64)BaseAddress, a2 >> 16)) )
  {
    v4 -= 16LL;
  }
  v8 = RtlpHpConvertFlagsToSegmentFlags(a3);
  v9 = RtlpHpFreeHeap((__int64)BaseAddress, v4, v8 & 0x11000001);
  if ( !v9 )
  {
    NtCurrentTeb()->LastStatusValue = -1073741811;
    v10 = NtCurrentTeb();
    v10->LastErrorValue = RtlNtStatusToDosError(-1073741811);
  }
  return v9;
}
