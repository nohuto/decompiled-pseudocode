/*
 * XREFs of ??1XEPALOBJ2@@QEAA@XZ @ 0x1C00B12F0
 * Callers:
 *     bDeletePalette @ 0x1C005A8C0 (bDeletePalette.c)
 *     ??$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF530 (--$vGarbageCollectObject@VXEPALOBJ2@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C003BD20 (DEC_SHARE_REF_CNT.c)
 */

void __fastcall XEPALOBJ2::~XEPALOBJ2(XEPALOBJ2 *this)
{
  _DWORD *v2; // rcx

  v2 = *(_DWORD **)this;
  if ( v2 )
  {
    DEC_SHARE_REF_CNT(v2);
    *(_QWORD *)this = 0LL;
  }
  PopThreadGuardedObject((_QWORD *)this + 1);
}
