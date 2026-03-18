/*
 * XREFs of ?Purge@CDS_JOURNAL@CCD_BTL@@QEAAJXZ @ 0x1C00625E8
 * Callers:
 *     ?Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z @ 0x1C00623BC (-Augment@CDS_JOURNAL@CCD_BTL@@QEAAJPEAU_D3DKMT_AUGMENT_CDSJ@@@Z.c)
 *     ?Persist@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C006419C (-Persist@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ??1CCD_BTL@@AEAA@XZ @ 0x1C017EC1C (--1CCD_BTL@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall CCD_BTL::CDS_JOURNAL::Purge(CCD_BTL::CDS_JOURNAL *this)
{
  char *v1; // rbx
  char **v2; // rax
  char **v3; // rcx

  v1 = (char *)this + 24;
  v2 = (char **)*((_QWORD *)this + 4);
  v3 = (char **)v2[1];
  if ( *v2 != v1 || *v3 != (char *)v2 )
    __fastfail(3u);
  while ( 1 )
  {
    *((_QWORD *)v1 + 1) = v3;
    *v3 = v1;
    if ( v2 == (char **)v1 )
      break;
    operator delete(v2);
    v2 = (char **)*((_QWORD *)v1 + 1);
    v3 = (char **)v2[1];
    if ( *v2 != v1 || *v3 != (char *)v2 )
      __fastfail(3u);
  }
  return 0LL;
}
