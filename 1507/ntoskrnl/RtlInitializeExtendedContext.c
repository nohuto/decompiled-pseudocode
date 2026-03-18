/*
 * XREFs of RtlInitializeExtendedContext @ 0x14002073C
 * Callers:
 *     KiDispatchException @ 0x14001FAE0 (KiDispatchException.c)
 *     KiContinuePreviousModeUser @ 0x140020448 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x140124BE0 (KiRaiseException.c)
 *     PspSetContextThreadInternal @ 0x14044FFEC (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140450184 (PspGetContextThreadInternal.c)
 *     PspWowGetContextThread @ 0x140530EB8 (PspWowGetContextThread.c)
 *     PspWowSetContextThread @ 0x14056AA80 (PspWowSetContextThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1406C6604 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x140020858 (RtlpValidateContextFlags.c)
 *     memset @ 0x140195A80 (memset.c)
 */

__int64 __fastcall RtlInitializeExtendedContext(__int64 a1, unsigned int a2, _QWORD *a3)
{
  _DWORD *v4; // rbx
  __int64 result; // rax
  int v6; // r10d
  __int64 v7; // r11
  _DWORD *v8; // rcx
  int v9; // ecx
  unsigned int v10; // edi
  int v11; // eax
  char v12; // [rsp+48h] [rbp+20h] BYREF

  v4 = 0LL;
  result = RtlpValidateContextFlags(a2, &v12);
  if ( (int)result < 0 )
    return result;
  if ( (v6 & 0x10000) != 0 )
  {
    v8 = (_DWORD *)((v7 + 3) & 0xFFFFFFFFFFFFFFFCuLL);
    v4 = v8 + 179;
LABEL_16:
    *v8 = v6;
    goto LABEL_5;
  }
  if ( (v6 & 0x100000) == 0 )
  {
    if ( (v6 & 0x200000) != 0 )
    {
      v8 = (_DWORD *)((v7 + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      v4 = v8 + 104;
    }
    else
    {
      if ( (v6 & 0x400000) == 0 )
        goto LABEL_6;
      v8 = (_DWORD *)((v7 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
      v4 = v8 + 228;
    }
    goto LABEL_16;
  }
  v8 = (_DWORD *)((v7 + 15) & 0xFFFFFFFFFFFFFFF0uLL);
  v8[12] = v6;
  v4 = v8 + 308;
LABEL_5:
  v4[3] = (_DWORD)v4 - (_DWORD)v8;
LABEL_6:
  v9 = v4[3];
  v4[2] = -v9;
  *v4 = -v9;
  v4[1] = v9 + 24;
  if ( (v6 & 0x10020) != 65568 && (v6 & 0x10000) != 0 )
    v4[3] = 204;
  if ( (v12 & 2) != 0 )
  {
    memset((void *)(((unsigned __int64)v4 + 87) & 0xFFFFFFFFFFFFFFC0uLL), 0, 0x40uLL);
    if ( (MEMORY[0xFFFFF780000003EC] & 2) != 0 )
      *(_QWORD *)((((unsigned __int64)v4 + 87) & 0xFFFFFFFFFFFFFFC0uLL) + 8) = MEMORY[0xFFFFF780000003D8] | 0x8000000000000000uLL;
    v10 = (((_DWORD)v4 + 87) & 0xFFFFFFC0) - (_DWORD)v4;
    v4[4] = v10;
    v11 = MEMORY[0xFFFFF780000003E8] - 512;
    v4[5] = MEMORY[0xFFFFF780000003E8] - 512;
    v4[1] = v10 + v11 - *v4;
  }
  else
  {
    v4[5] = 0;
    v4[4] = 25;
  }
  *a3 = v4;
  return 0LL;
}
