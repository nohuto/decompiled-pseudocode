/*
 * XREFs of ?_PurgeRelatedEntries@CDS_JOURNAL@CCD_BTL@@AEAAJAEBU_ENTRY@12@@Z @ 0x1C01851A0
 * Callers:
 *     ?Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00ADF9C (-Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall CCD_BTL::CDS_JOURNAL::_PurgeRelatedEntries(
        CCD_BTL::CDS_JOURNAL *this,
        const struct CCD_BTL::CDS_JOURNAL::_ENTRY *a2)
{
  char *v2; // rdi
  char *v4; // rcx
  __int64 v5; // rbx
  char **v6; // rax

  v2 = (char *)this + 24;
  v4 = (char *)*((_QWORD *)this + 3);
  if ( v4 != v2 )
  {
    do
    {
      v5 = *(_QWORD *)v4;
      if ( *((_DWORD *)v4 + 8) == *((_DWORD *)a2 + 8)
        && *((_DWORD *)v4 + 5) == *((_DWORD *)a2 + 5)
        && *((_DWORD *)v4 + 6) == *((_DWORD *)a2 + 6) )
      {
        v6 = (char **)*((_QWORD *)v4 + 1);
        if ( *(char **)(v5 + 8) != v4 || *v6 != v4 )
          __fastfail(3u);
        *v6 = (char *)v5;
        *(_QWORD *)(v5 + 8) = v6;
        operator delete(v4);
      }
      v4 = (char *)v5;
    }
    while ( (char *)v5 != v2 );
  }
  return 0LL;
}
