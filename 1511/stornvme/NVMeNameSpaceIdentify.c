/*
 * XREFs of NVMeNameSpaceIdentify @ 0x1C000B234
 * Callers:
 *     NVMeControllerInitPart1 @ 0x1C000436C (NVMeControllerInitPart1.c)
 * Callees:
 *     ProcessCommand @ 0x1C000C5A0 (ProcessCommand.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C000CE5C (WaitForCommandCompleteWithCustomTimeout.c)
 *     memset @ 0x1C000EF40 (memset.c)
 */

_DWORD *__fastcall NVMeNameSpaceIdentify(__int64 a1)
{
  _DWORD *result; // rax
  _QWORD *v2; // r14
  unsigned int v4; // ecx
  char *v5; // r9
  unsigned int v6; // r15d
  __int64 v7; // rsi
  void *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r8
  __int64 v13; // rcx
  int v14; // [rsp+70h] [rbp+40h]
  char *v15; // [rsp+78h] [rbp+48h]

  result = *(_DWORD **)(a1 + 1072);
  v2 = *(_QWORD **)(a1 + 1160);
  v4 = result[129];
  if ( v4 )
  {
    if ( v4 > 0xFF )
      v4 = 255;
    *(_DWORD *)(a1 + 140) = v4;
    if ( *(_BYTE *)(a1 + 16) )
    {
      v15 = *(char **)(a1 + 1088);
      *(_QWORD *)(a1 + 1088) = v15 + 96;
      result = memset(v15, 0, 0x60uLL);
      v5 = v15;
      v6 = 0;
      if ( *(_DWORD *)(a1 + 140) )
      {
        while ( *(_BYTE *)(a1 + 16) )
        {
          if ( v6 == *(_DWORD *)(a1 + 144) )
          {
            v7 = a1 + 8 * (v6 + 147LL);
            *(_QWORD *)v7 = v5;
            goto LABEL_12;
          }
LABEL_24:
          if ( ++v6 >= *(_DWORD *)(a1 + 140) )
            return result;
        }
        v7 = a1 + 1176 + 8LL * v6;
        *(_QWORD *)v7 = &v5[96 * v6];
LABEL_12:
        v8 = *(void **)(a1 + 648);
        *(_BYTE *)(a1 + 563) = 0;
        memset(v8, 0, 0x10A8uLL);
        v9 = 0LL;
        *(_QWORD *)(a1 + 616) = *(_QWORD *)(a1 + 648);
        *(_DWORD *)(a1 + 552) = 1;
        do
        {
          *(_BYTE *)(v9 + *(_QWORD *)(a1 + 648) + 4166) = 1;
          ++v9;
        }
        while ( v9 < 2 );
        *(_WORD *)(*(_QWORD *)(a1 + 648) + 4160LL) = 0;
        v10 = *(_QWORD *)(a1 + 648) + 4096LL;
        *(_QWORD *)(v10 + 24) = *(_QWORD *)(a1 + 1168);
        *(_BYTE *)v10 = 6;
        v11 = (*(_DWORD *)(v10 + 40) ^ (v6 == -1)) & 3;
        *(_DWORD *)(v10 + 4) = v6 + 1;
        *(_DWORD *)(v10 + 40) ^= v11;
        ProcessCommand(a1, a1 + 560);
        LOBYTE(v12) = 1;
        WaitForCommandCompleteWithCustomTimeout(a1, a1 + 560, v12, 10000LL);
        if ( *(_WORD *)(a1 + 4) == 0x8086 && *(_WORD *)(a1 + 6) == 8209 )
        {
          HIBYTE(v14) = *((_BYTE *)v2 + 384);
          BYTE2(v14) = *((_BYTE *)v2 + 385);
          BYTE1(v14) = *((_BYTE *)v2 + 386);
          LOBYTE(v14) = *((_BYTE *)v2 + 387);
          if ( v14 != -559038737 && !v6 )
          {
            memset(v2, 0, 0x1000uLL);
            *v2 = 67108336LL;
            v2[1] = 67108336LL;
            v2[2] = 67108336LL;
            *((_BYTE *)v2 + 130) = 9;
          }
        }
        if ( *(_BYTE *)(a1 + 563) == 1 )
        {
          *(_BYTE *)(*(_QWORD *)v7 + 64LL) = *((_BYTE *)v2 + 26) & 0xF;
          *(_DWORD *)(*(_QWORD *)v7 + 48LL) = *((_DWORD *)v2 + (*((_BYTE *)v2 + 26) & 0xF) + 32);
          *(_DWORD *)(*(_QWORD *)v7 + 52LL) = 1 << *(_BYTE *)(*(_QWORD *)v7 + 50LL);
          *(_QWORD *)(*(_QWORD *)v7 + 56LL) = *v2;
          *(_BYTE *)(*(_QWORD *)v7 + 65LL) = v2[3] & 1;
          *(_BYTE *)(*(_QWORD *)v7 + 66LL) = *((_BYTE *)v2 + 29) & 7;
          *(_QWORD *)(*(_QWORD *)v7 + 84LL) = v2[15];
          *(_OWORD *)(*(_QWORD *)v7 + 68LL) = *(_OWORD *)(v2 + 13);
        }
        v13 = 0LL;
        **(_WORD **)v7 = 1;
        *(_DWORD *)(*(_QWORD *)v7 + 4LL) = 4;
        *(_WORD *)(*(_QWORD *)v7 + 2LL) = 0;
        do
        {
          *(_BYTE *)(v13 + *(_QWORD *)v7 + 8) = 0;
          ++v13;
        }
        while ( v13 < 2 );
        result = *(_DWORD **)v7;
        *(_BYTE *)(*(_QWORD *)v7 + 10LL) = v6;
        v5 = v15;
        goto LABEL_24;
      }
    }
    else
    {
      return (_DWORD *)StorPortExtendedFunction(0LL, a1, 96 * v4, 1701672526LL);
    }
  }
  return result;
}
