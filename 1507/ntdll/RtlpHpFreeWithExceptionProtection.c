/*
 * XREFs of RtlpHpFreeWithExceptionProtection @ 0x18002B170
 * Callers:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 * Callees:
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlpHpSizeHeap @ 0x18002A810 (RtlpHpSizeHeap.c)
 *     RtlpLowFragHeapFree @ 0x18002ACB0 (RtlpLowFragHeapFree.c)
 *     RtlpHpSegFree @ 0x18002B710 (RtlpHpSegFree.c)
 *     RtlpFreeHeap @ 0x18002C140 (RtlpFreeHeap.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpProbeUserBufferSafe @ 0x180057FF0 (RtlpProbeUserBufferSafe.c)
 *     RtlpHpExtrasGet @ 0x1800582D4 (RtlpHpExtrasGet.c)
 *     RtlpHpLargeFree @ 0x1800585DC (RtlpHpLargeFree.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlpCallInterceptRoutine @ 0x1800D8A44 (RtlpCallInterceptRoutine.c)
 *     RtlpHeapExceptionFilter @ 0x1800DD534 (RtlpHeapExceptionFilter.c)
 *     RtlpHpVirtFreeHeap @ 0x1800EAC08 (RtlpHpVirtFreeHeap.c)
 *     RtlpLogHeapFreeEvent @ 0x1800EF964 (RtlpLogHeapFreeEvent.c)
 *     RtlpValidateLFHBlock @ 0x1800F0B70 (RtlpValidateLFHBlock.c)
 */

__int64 __fastcall RtlpHpFreeWithExceptionProtection(_DWORD *BaseAddress, unsigned __int64 a2, __int64 a3)
{
  int v3; // ebx
  unsigned __int64 v4; // r15
  unsigned int v6; // esi
  unsigned __int64 v7; // rdi
  unsigned int v8; // edi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // r8d
  int v13; // eax
  struct _TEB *v14; // rbx
  char v15; // r12
  __int64 v16; // rax
  unsigned int v17; // edx
  int v18; // ecx
  unsigned __int16 v19; // ax
  int v20; // ecx
  unsigned __int16 v21; // ax
  __int64 v22; // rcx
  __int64 v23; // r13
  int v25; // [rsp+50h] [rbp-58h]
  int v26; // [rsp+60h] [rbp-48h]
  int v27; // [rsp+70h] [rbp-38h]

  v3 = a3;
  v4 = a2;
  if ( (RtlpHpHeapFeatures & 2) == 0 )
  {
    v6 = 0;
    v7 = 0LL;
    if ( BaseAddress[4] == -571548178 )
    {
      if ( (RtlpHpAppCompatFlags & 2) != 0
        && a2
        && ((_WORD)a2 || !(unsigned int)RtlSparseBitmapCtxCheckBitsInternal(BaseAddress, a2 >> 16)) )
      {
        v4 -= 16LL;
      }
      if ( (v3 & 1) != 0 )
        LODWORD(v7) = 1;
      if ( (v3 & 8) != 0 )
        LODWORD(v7) = v7 | 2;
      if ( (v3 & 4) != 0 )
        LODWORD(v7) = v7 | 0x80000000;
      if ( (v3 & 0x100) != 0 )
        LODWORD(v7) = v7 | 0x100;
      if ( (v3 & 0xE00) != 0 )
        LODWORD(v7) = v3 & 0xE00 | v7;
      if ( (v3 & 0x10) != 0 )
        LODWORD(v7) = v7 | 0x2000000;
      if ( (v3 & 2) != 0 )
        LODWORD(v7) = v7 | 0x1000000;
      v8 = BaseAddress[5] & 0x11000001 | v7 & 0x11000001;
      v9 = (unsigned int)BaseAddress[10];
      if ( (_DWORD)v9 && (_DWORD)v9 == LODWORD(NtCurrentTeb()->ClientId.UniqueThread) )
        v8 |= 1u;
      if ( (v8 & 0x1000000) == 0 )
      {
        if ( BaseAddress[8] )
        {
          v10 = RtlpHpExtrasGet(BaseAddress, v4, v8);
          v11 = v10;
          if ( v10 )
          {
            if ( (*(_BYTE *)(v10 + 2) & 0xF) != 0 )
            {
              if ( (RtlpHpAppCompatFlags & 2) != 0 )
              {
                if ( (_WORD)v4 || (v13 = RtlSparseBitmapCtxCheckBitsInternal(v9, v4 >> 16), v12 = v4, !v13) )
                  v12 = v4 + 16;
              }
              else
              {
                v12 = v4;
              }
              if ( (int)RtlpCallInterceptRoutine(*(_BYTE *)(v11 + 2) & 0xF, (_DWORD)BaseAddress, v12, 3, v11 + 16) < 0 )
                goto LABEL_24;
            }
          }
        }
      }
      if ( (BaseAddress[5] & 0x10000000) != 0 && RtlpHpSizeHeap((__int64)BaseAddress, v4, v8) == -1 )
      {
        RtlpLogHeapFailure(9, (_DWORD)BaseAddress, v4, 0, 0LL, 0LL);
        goto LABEL_24;
      }
      if ( (_WORD)v4 || !(unsigned int)RtlSparseBitmapCtxCheckBitsInternal(v9, v4 >> 16) )
      {
        v6 = RtlpHpSegFree(BaseAddress, v4, v8);
        goto LABEL_24;
      }
      if ( RtlpHpLargeFree(BaseAddress, v4, v8) )
        v6 = 1;
      if ( !MEMORY[0x7FFE0380] || (NtCurrentPeb()->TracingFlags & 1) == 0 )
      {
LABEL_24:
        if ( v6 )
          return v6;
        goto LABEL_52;
      }
      if ( v6 )
      {
        RtlpLogHeapFreeEvent(BaseAddress, v4, 3LL);
        goto LABEL_24;
      }
LABEL_52:
      NtCurrentTeb()->LastStatusValue = -1073741811;
      v14 = NtCurrentTeb();
      v14->LastErrorValue = RtlNtStatusToDosError(-1073741811);
      return v6;
    }
    if ( (BaseAddress[29] & 0x1000000) != 0 )
      return (unsigned __int8)RtlpFreeHeap(BaseAddress);
    if ( (BaseAddress[30] & 1) != 0 )
    {
      v7 = RtlpProbeUserBufferSafe(BaseAddress, a2);
    }
    else if ( (a2 & 0xF) != 0 )
    {
      RtlpLogHeapFailure(9, (_DWORD)BaseAddress, a2, 0, 0LL, 0LL);
    }
    else
    {
      v7 = a2 - 16;
      _m_prefetchw((const void *)(a2 - 16));
      if ( *(_BYTE *)(a2 - 16 + 15) == 5 )
        v7 -= 16LL * *(unsigned __int8 *)(v7 + 14);
      if ( (*(_BYTE *)(v7 + 15) & 0x3F) == 0 )
      {
        RtlpLogHeapFailure(8, (_DWORD)BaseAddress, v7, 0, 0LL, 0LL);
        v7 = 0LL;
      }
    }
    if ( !v7 )
      goto LABEL_52;
    if ( *(_BYTE *)(v4 - 16 + 15) != 5 )
    {
LABEL_97:
      if ( *(char *)(v7 + 15) < 0 )
      {
        RtlpLowFragHeapFree((int)BaseAddress, v7, a3);
        return 1;
      }
      return (unsigned __int8)RtlpFreeHeap(BaseAddress);
    }
    if ( *(char *)(v7 + 15) >= 0 )
    {
      if ( BaseAddress[31] )
      {
        v25 = *(_DWORD *)(v7 + 8) ^ BaseAddress[34];
        if ( HIBYTE(v25) != (BYTE2(v25) ^ (unsigned __int8)(BYTE1(v25) ^ v25)) )
          goto LABEL_91;
      }
      v15 = 1;
    }
    else
    {
      v15 = RtlpValidateLFHBlock(BaseAddress, v7);
      if ( !v15 )
      {
LABEL_90:
        if ( !v15 )
        {
LABEL_91:
          RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v7, v4, 0LL, 0LL);
          goto LABEL_52;
        }
        if ( (v3 & 0x3C000102) == 0 )
        {
          v23 = *(_BYTE *)(v4 - 16 + 15) == 5 ? v4 - 16LL * *(unsigned __int8 *)(v4 - 16 + 14) : 0LL;
          if ( (int)RtlpCallInterceptRoutine(*(_DWORD *)(v4 - 8), (_DWORD)BaseAddress, v4, 3, v23) < 0 )
            goto LABEL_52;
        }
        goto LABEL_97;
      }
    }
    if ( *(char *)(v7 + 15) >= 0 )
    {
      if ( BaseAddress[31] )
      {
        v18 = *(_DWORD *)(v7 + 8);
        LOWORD(v26) = v18;
        if ( (v18 & BaseAddress[31]) != 0 )
          v26 = v18 ^ BaseAddress[34];
        v19 = v26;
      }
      else
      {
        v19 = *(_WORD *)(v7 + 8);
      }
      v17 = v19;
    }
    else
    {
      if ( (unsigned __int16)RtlpLFHKey ^ (unsigned __int16)(*(_WORD *)(v7 + 8) ^ (unsigned __int16)BaseAddress ^ (v7 >> 4)) )
        v16 = 0LL;
      else
        v16 = *(_QWORD *)(v7
                        - (((unsigned int)RtlpLFHKey ^ *(_DWORD *)(v7 + 8) ^ (unsigned int)BaseAddress ^ (unsigned int)(v7 >> 4)) >> 12));
      v17 = *(unsigned __int16 *)(v16 + 36);
    }
    if ( *(_BYTE *)(v7 + 15) == 4 )
    {
      if ( BaseAddress[31] )
      {
        v20 = *(_DWORD *)(v7 + 8);
        LOWORD(v27) = v20;
        if ( (v20 & BaseAddress[31]) != 0 )
          v27 = v20 ^ BaseAddress[34];
        v21 = v27;
      }
      else
      {
        v21 = *(_WORD *)(v7 + 8);
      }
      v22 = v17 + *(_QWORD *)(v7 - 16) - v21;
    }
    else
    {
      v22 = 16LL * v17;
    }
    if ( v22 + v7 < v4 )
      goto LABEL_91;
    goto LABEL_90;
  }
  return (unsigned int)RtlpHpVirtFreeHeap(BaseAddress, a2, a3);
}
