/*
 * XREFs of MiPerformFixups @ 0x1404B1810
 * Callers:
 *     MiRevertRelocatedImagePfn @ 0x1404B1740 (MiRevertRelocatedImagePfn.c)
 *     MiRelocateImagePfn @ 0x1404BE420 (MiRelocateImagePfn.c)
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 * Callees:
 *     MiMarkPfnVerified @ 0x1400796B8 (MiMarkPfnVerified.c)
 *     MiApplyStraddleFixups @ 0x140079808 (MiApplyStraddleFixups.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiApplyCompressedFixups @ 0x1404B19F0 (MiApplyCompressedFixups.c)
 *     MiApplyRawFixups @ 0x1406A9900 (MiApplyRawFixups.c)
 */

__int64 *__fastcall MiPerformFixups(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  unsigned __int64 v7; // rbp
  ULONG_PTR v9; // rdi
  unsigned __int64 *v10; // rsi
  unsigned __int64 PteShadow; // rbx
  __int64 v12; // rcx
  __int64 *result; // rax
  __int64 v14; // r14
  int v15; // r12d
  int i; // ebx
  unsigned __int64 v17; // rsi
  int v18; // ecx
  _QWORD *v19; // rcx
  unsigned __int64 v20; // [rsp+60h] [rbp+8h] BYREF

  v7 = a3;
  v9 = BugCheckParameter3;
  if ( (BYTE2(MiFlags) & 3u) >= 2 && (MiFlags & 0x40000) == 0 )
  {
    v10 = (unsigned __int64 *)(((BugCheckParameter3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    PteShadow = *v10;
    if ( MiPteInShadowRange((__int64)v10) )
      PteShadow = MiReadPteShadow((__int64)v10, PteShadow);
    v20 = PteShadow;
    if ( MiPteInShadowRange((__int64)&v20) )
      PteShadow = MiReadPteShadow((__int64)&v20, PteShadow);
    v12 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
    if ( ((*(_QWORD *)(v12 + 40) >> 54) & 7) == 3 )
      MiMarkPfnVerified(v12, 1);
  }
  result = *(__int64 **)(BugCheckParameter2 + 96);
  v14 = *result;
  if ( v7 < *(_QWORD *)(*result + 48) )
  {
    v15 = a6;
    for ( i = (_DWORD)v7 << 12; ; i += 4096 )
    {
      result = *(__int64 **)v14;
      v17 = *(_QWORD *)(*(_QWORD *)v14 + 8 * v7);
      if ( v17 )
      {
        if ( v17 > 1 )
        {
          if ( *(_BYTE *)(v14 + 60) )
            MiApplyCompressedFixups(BugCheckParameter2, v9);
          else
            MiApplyRawFixups(BugCheckParameter2);
        }
        if ( (v17 & 1) != 0 )
          MiApplyStraddleFixups(v14, (char *)v9, i, a4, a5, v15);
        v18 = *(_DWORD *)(v14 + 56);
        result = (__int64 *)(v18 & 0xFFFFF000);
        if ( (_DWORD)result == i )
        {
          v19 = (_QWORD *)(v9 + (v18 & 0xFFF));
          if ( ((unsigned __int8)v19 & 1) != 0 )
            *(_DWORD *)((char *)v19 - 1) += a4;
          else
            *v19 += a4;
        }
      }
      v9 += 4096LL;
      if ( (v9 & 0xFFF) == 0 )
        break;
      v7 = (unsigned int)(v7 + 1);
    }
  }
  return result;
}
