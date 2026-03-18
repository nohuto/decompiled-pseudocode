/*
 * XREFs of ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00BF1E4
 * Callers:
 *     bDeletePalette @ 0x1C005C930 (bDeletePalette.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCDA8 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C0029DA0 (DEC_SHARE_REF_CNT.c)
 */

void __fastcall XEPALOBJ2::~XEPALOBJ2(unsigned int **this)
{
  unsigned int *v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT(v2);
    *this = 0LL;
  }
  PopThreadGuardedObject(this + 1);
}
