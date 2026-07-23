/*
 * XREFs of MiUnmapFrameBuffer @ 0x14010E304
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x140045780 (MiDeleteVirtualAddresses.c)
 *     MiReplaceRotateWithDemandZero @ 0x14010E038 (MiReplaceRotateWithDemandZero.c)
 * Callees:
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiUnmapFrameBuffer(__int64 a1, int a2, unsigned int a3, _QWORD *a4)
{
  unsigned __int64 v6; // rdi
  BOOL IsPfnInline; // eax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 DemandZeroPte; // rax
  int v11; // r8d
  unsigned __int64 *v12; // r9
  __int64 v13; // r10
  unsigned __int64 *v14; // r11
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int16 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v21; // [rsp+30h] [rbp+8h] BYREF

  *a4 = -1LL;
  v21 = MI_READ_PTE_LOCK_FREE(a1);
  v6 = MI_GET_PAGE_FRAME_FROM_PTE(&v21);
  IsPfnInline = MiIsPfnInline(v6);
  DemandZeroPte = MiMakeDemandZeroPte(4LL, v8, IsPfnInline, v9);
  v15 = DemandZeroPte;
  if ( a2 == 2 )
  {
    v15 = DemandZeroPte | 0x300;
  }
  else if ( a2 )
  {
    if ( a2 == 3 )
    {
      if ( v11 )
        v15 = 0LL;
      else
        v15 = v13 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
    }
  }
  else
  {
    v15 = DemandZeroPte | 0x100;
  }
  v16 = 48 * v6 - 0x58000000000LL;
  if ( v11 )
  {
    v17 = 1;
    if ( (*(_QWORD *)(v16 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
      v17 = 2;
    if ( *(_WORD *)(v16 + 32) > v17 )
      a3 = 1;
  }
  else
  {
    *v12 = v6;
  }
  if ( a2 != 3 )
    v15 = (v15 & 0xFF1F ^ (v15 & 0xFF1F | (unsigned __int16)(32 * ((v13 & 0x800) != 0 ? 4 : 1)))) & 0x3E0 ^ v15 & 0xFFFFFFFFFFFFFF1FuLL;
  *v14 = v15;
  if ( (unsigned int)MiPteInShadowRange(v14, v15) )
    MiWritePteShadow(v19, v18);
  return a3;
}
