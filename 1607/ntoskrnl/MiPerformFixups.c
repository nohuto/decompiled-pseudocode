/*
 * XREFs of MiPerformFixups @ 0x140509BC0
 * Callers:
 *     MiRelocateImagePfn @ 0x140446650 (MiRelocateImagePfn.c)
 *     MiRevertRelocatedImagePfn @ 0x140509AF8 (MiRevertRelocatedImagePfn.c)
 *     MiValidateSectionCreate @ 0x140509DEC (MiValidateSectionCreate.c)
 * Callees:
 *     MiApplyStraddleFixups @ 0x14010858C (MiApplyStraddleFixups.c)
 *     MiApplyCompressedFixups @ 0x140509CB0 (MiApplyCompressedFixups.c)
 *     MiApplyRawFixups @ 0x1406616D4 (MiApplyRawFixups.c)
 */

__int64 *__fastcall MiPerformFixups(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        int a6)
{
  __int64 *result; // rax
  __int64 v8; // r14
  __int64 v11; // rdi
  int i; // ebp
  unsigned __int64 v13; // rbx
  int v14; // ecx
  ULONG_PTR v15; // rcx

  result = *(__int64 **)(BugCheckParameter2 + 96);
  v8 = a3;
  v11 = *result;
  if ( (unsigned __int64)a3 < *(_QWORD *)(*result + 56) )
  {
    for ( i = a3 << 12; ; i += 4096 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)v11 + 8 * v8);
      if ( v13 )
      {
        if ( v13 > 1 )
        {
          if ( *(_BYTE *)(v11 + 68) )
            MiApplyCompressedFixups(BugCheckParameter2, BugCheckParameter3);
          else
            MiApplyRawFixups(BugCheckParameter2);
        }
        if ( (v13 & 1) != 0 )
          MiApplyStraddleFixups(v11, (char *)BugCheckParameter3, i, a4, a5, a6);
        v14 = *(_DWORD *)(v11 + 64);
        result = (__int64 *)(v14 & 0xFFFFF000);
        if ( (_DWORD)result == i )
        {
          v15 = BugCheckParameter3 + (v14 & 0xFFF);
          if ( (v15 & 1) != 0 )
            *(_DWORD *)(v15 - 1) += a4;
          else
            *(_QWORD *)v15 += a4;
        }
      }
      BugCheckParameter3 += 4096LL;
      if ( (BugCheckParameter3 & 0xFFF) == 0 )
        break;
      v8 = (unsigned int)(v8 + 1);
    }
  }
  return result;
}
