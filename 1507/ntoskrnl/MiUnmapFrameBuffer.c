/*
 * XREFs of MiUnmapFrameBuffer @ 0x1401351C4
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x140094110 (MiDeleteVirtualAddresses.c)
 *     MiReplaceRotateWithDemandZero @ 0x140134D50 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiUnmapFrameBuffer(__int64 *a1, int a2, unsigned int a3, _QWORD *a4)
{
  __int64 PteShadow; // r10
  unsigned __int64 v8; // r9
  unsigned __int64 DemandZeroPte; // rax
  int v10; // r8d
  __int64 v11; // r9
  __int64 v12; // r10
  unsigned __int64 *v13; // r11
  __int64 v14; // rdx
  unsigned __int16 v15; // r8
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  *a4 = -1LL;
  PteShadow = *a1;
  if ( (unsigned __int64)(a1 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(a1, *a1);
  v17 = PteShadow;
  v8 = PteShadow;
  if ( (unsigned __int64)&STACK[0x90482413050] <= 0x7F8 )
    v8 = MiReadPteShadow(&v17, PteShadow);
  MI_IS_PFN((v8 >> 12) & 0xFFFFFFFFFLL);
  DemandZeroPte = MiMakeDemandZeroPte(4LL);
  if ( a2 == 2 )
  {
    DemandZeroPte |= 0x300uLL;
  }
  else if ( a2 )
  {
    if ( a2 == 3 )
    {
      if ( v10 )
        DemandZeroPte = 0LL;
      else
        DemandZeroPte = v12 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    }
  }
  else
  {
    DemandZeroPte |= 0x100uLL;
  }
  v14 = 48 * v11 - 0x58000000000LL;
  if ( v10 )
  {
    v15 = 1;
    if ( (*(_QWORD *)(v14 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
      v15 = 2;
    if ( *(_WORD *)(v14 + 32) > v15 )
      a3 = 1;
  }
  else
  {
    *a4 = v11;
  }
  if ( a2 != 3 )
    DemandZeroPte = (DemandZeroPte & 0xFF1F ^ (DemandZeroPte & 0xFF1F | (unsigned __int16)(32
                                                                                         * ((v12 & 0x800) != 0 ? 4 : 1)))) & 0x3E0 ^ DemandZeroPte & 0xFFFFFFFFFFFFFF1FuLL;
  *v13 = DemandZeroPte;
  if ( (unsigned __int64)(v13 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow(v13, DemandZeroPte);
  return a3;
}
