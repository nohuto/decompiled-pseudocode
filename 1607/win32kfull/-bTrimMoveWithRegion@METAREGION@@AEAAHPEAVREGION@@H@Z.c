/*
 * XREFs of ?bTrimMoveWithRegion@METAREGION@@AEAAHPEAVREGION@@H@Z @ 0x1C02BC838
 * Callers:
 *     ?vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z @ 0x1C0050EE0 (-vSpUpdateDirtyRgn@@YAXPEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAUHDC__@@PEAUtagRECT@@PEAKH@Z.c)
 *     ?bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z @ 0x1C02BC660 (-bIntersectMoveWithDirty@METAREGION@@AEAAHPEAU_RECTL@@@Z.c)
 * Callees:
 *     ?bEmpty@ERECTL@@QEAAHXZ @ 0x1C0035578 (-bEmpty@ERECTL@@QEAAHXZ.c)
 *     ?vClearMoveData@METAREGION@@QEAAXH@Z @ 0x1C0051714 (-vClearMoveData@METAREGION@@QEAAXH@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1C0051794 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x1C00517BC (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 */

__int64 __fastcall METAREGION::bTrimMoveWithRegion(METAREGION *this, struct REGION *a2, int a3)
{
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // ecx
  __int64 v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-30h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-20h] BYREF
  __int128 v13; // [rsp+50h] [rbp-10h] BYREF
  __int64 v14; // [rsp+90h] [rbp+30h] BYREF
  struct REGION *v15; // [rsp+98h] [rbp+38h] BYREF
  struct _POINTL v16; // [rsp+A8h] [rbp+48h] BYREF

  v14 = *((_QWORD *)this + 4);
  v15 = a2;
  v5 = 1;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v12);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v11);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)v10);
  if ( !v12[0]
    || !v11[0]
    || !v10[0]
    || !RGNOBJ::bCopy((RGNOBJ *)v10, (struct RGNOBJ *)&v14)
    || !RGNOBJ::bOffset((RGNOBJ *)v10, (struct _POINTL *)this + 3)
    || (a3
      ? (v6 = RGNOBJ::bCopy((RGNOBJ *)v12, (struct RGNOBJ *)&v14))
      : (v6 = RGNOBJ::iCombine((RGNOBJ *)v12, (struct RGNOBJ *)&v14, (struct RGNOBJ *)&v15, 4)),
        !v6
     || !RGNOBJ::iCombine((RGNOBJ *)v11, (struct RGNOBJ *)v10, (struct RGNOBJ *)&v15, 4)
     || (v16.x = -*((_DWORD *)this + 6), v16.y = -*((_DWORD *)this + 7), !RGNOBJ::bOffset((RGNOBJ *)v11, &v16))
     || (v7 = RGNOBJ::iCombine((RGNOBJ *)&v14, (struct RGNOBJ *)v12, (struct RGNOBJ *)v11, 1)) == 0
     || (v8 = v14, *((_QWORD *)this + 4) = v14, v7 == 1)
     || (v13 = *(_OWORD *)(v8 + 88), ERECTL::bEmpty((ERECTL *)&v13))) )
  {
    METAREGION::vClearMoveData(this, 1);
    v5 = 0;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v10);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v11);
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)v12);
  return v5;
}
