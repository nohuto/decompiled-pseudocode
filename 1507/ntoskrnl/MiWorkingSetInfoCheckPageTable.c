/*
 * XREFs of MiWorkingSetInfoCheckPageTable @ 0x14007B130
 * Callers:
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 * Callees:
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiWorkingSetInfoCheckPageTable(unsigned __int64 *a1, __int64 a2, char a3, unsigned __int8 a4)
{
  unsigned __int64 PteShadow; // rax
  unsigned __int64 *v5; // r11
  __int64 v8; // r10
  unsigned int v10; // r9d
  __int64 v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // [rsp+40h] [rbp+8h] BYREF

  PteShadow = *a1;
  v5 = a1;
  v8 = a2;
  if ( (unsigned __int64)(a1 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(a1, PteShadow);
  v14 = PteShadow;
  if ( (PteShadow & 1) != 0 )
    return 1LL;
  v10 = 0;
  v11 = (PteShadow >> 11) & 1;
  if ( ((PteShadow >> 11) & 1) != 0 )
    goto LABEL_9;
  if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8 )
    LOBYTE(PteShadow) = MiReadPteShadow(&v14, PteShadow);
  if ( (PteShadow & 4) != 0 )
  {
LABEL_9:
    if ( (a3 & 1) != 0 )
    {
      v12 = *(_QWORD *)(v8 + 8) | 0x200000LL;
      *(_QWORD *)(v8 + 8) = v12;
      if ( v11 )
        v13 = v12 & 0xFFFFFFFFFF3FFFFFuLL | 0x400000;
      else
        v13 = v12 & 0xFFFFFFFFFF3FFFFFuLL | 0x800000;
      *(_QWORD *)(v8 + 8) = v13;
    }
    else if ( (a3 & 2) != 0 )
    {
      MiMakeSystemAddressValid((__int64)((_QWORD)v5 << 25) >> 16, 0LL, 0, a4, v10);
      return 1;
    }
  }
  return v10;
}
