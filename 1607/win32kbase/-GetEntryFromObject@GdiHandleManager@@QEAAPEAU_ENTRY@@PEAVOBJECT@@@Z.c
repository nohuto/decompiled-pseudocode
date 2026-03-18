/*
 * XREFs of ?GetEntryFromObject@GdiHandleManager@@QEAAPEAU_ENTRY@@PEAVOBJECT@@@Z @ 0x1C002ABE0
 * Callers:
 *     HmgPentryFromPobj @ 0x1C0029BB0 (HmgPentryFromPobj.c)
 *     ?_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z @ 0x1C002AE4C (-_IncrementOrDecrementUniqueness@GdiHandleManager@@AEAAXPEAVOBJECT@@_N@Z.c)
 *     ?vReleaseVis@DC@@QEAAXXZ @ 0x1C002BAFC (-vReleaseVis@DC@@QEAAXXZ.c)
 *     ?iCombine@DC@@QEAAJPEAU_RECTL@@J@Z @ 0x1C002BB60 (-iCombine@DC@@QEAAJPEAU_RECTL@@J@Z.c)
 *     ?GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z @ 0x1C0035860 (-GreSelectVisRgnInternal@@YAHAEAVDCOBJA@@PEAUHRGN__@@W4_VIS_REGION_SELECT@@@Z.c)
 *     ?bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ @ 0x1C0036950 (-bDeleteRGNOBJAPI@RGNOBJAPI@@QEAAHXZ.c)
 *     ?vCleanupRegions@@YAXK@Z @ 0x1C0059F94 (-vCleanupRegions@@YAXK@Z.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005A11C (-vCleanupDCs@@YAXK@Z.c)
 *     NtGdiCreateRectRgn @ 0x1C005BC90 (NtGdiCreateRectRgn.c)
 *     ?GreSelectBrushInternal@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00BCFF0 (-GreSelectBrushInternal@@YAPEAUHBRUSH__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ?GreSelectPenInternal@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z @ 0x1C00BD050 (-GreSelectPenInternal@@YAPEAUHPEN__@@AEAVXDCOBJ@@PEAU1@H@Z.c)
 *     ??0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z @ 0x1C00BEE70 (--0RGNOBJAPI@@QEAA@PEAUHRGN__@@HH@Z.c)
 *     ?DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z @ 0x1C00C02E0 (-DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT@@YAXPEAVLFONT@@@Z.c)
 *     HmgIsObjectOwnedByW32Pid @ 0x1C00C09F4 (HmgIsObjectOwnedByW32Pid.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C1AE0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C4EA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
 *     GreIntersectVisRect @ 0x1C00CBA80 (GreIntersectVisRect.c)
 *     GreRestoreDCInternal @ 0x1C00CD060 (GreRestoreDCInternal.c)
 * Callees:
 *     ?GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z @ 0x1C002AFD0 (-GetEntry@GdiHandleEntryDirectory@@QEAAPEAU_ENTRY@@I_N@Z.c)
 */

struct _ENTRY *__fastcall GdiHandleManager::GetEntryFromObject(GdiHandleEntryDirectory **this, struct OBJECT *a2)
{
  unsigned int v3; // ebx
  GdiHandleEntryDirectory *v5; // r13
  unsigned int v6; // ecx
  struct OBJECT *v7; // r14
  signed int v8; // edx
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // rbp
  unsigned int v12; // edx
  signed int v13; // ecx
  __int64 v14; // r8

  v3 = (unsigned __int16)*(_DWORD *)a2 | (*(_DWORD *)a2 >> 8) & 0xFF0000;
  if ( v3 >= 0x10000 )
  {
    if ( *(_DWORD *)this > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(this[2], (unsigned __int16)*(_DWORD *)a2, 1) + 13) == HIWORD(v3) )
        v3 = (unsigned __int16)v3;
    }
    else
    {
      v3 = (unsigned __int16)*(_DWORD *)a2;
    }
  }
  v5 = this[2];
  v6 = *((_DWORD *)v5 + 514);
  if ( v3 >= v6 + ((*((unsigned __int16 *)v5 + 1) - 1) << 16) )
    goto LABEL_28;
  v7 = 0LL;
  if ( v3 < v6 )
  {
    v8 = 0;
    goto LABEL_7;
  }
  v8 = ((v3 - v6) >> 16) + 1;
  if ( (v3 - v6) >> 16 == -2 )
  {
LABEL_28:
    v7 = 0LL;
    v11 = 0LL;
    goto LABEL_12;
  }
LABEL_7:
  v9 = *((_QWORD *)v5 + v8 + 1);
  if ( v8 )
    v10 = v3 - ((v8 - 1) << 16) - v6;
  else
    v10 = v3;
  v11 = 0LL;
  if ( (unsigned int)v10 < *(_DWORD *)(v9 + 20)
    && *(_QWORD *)(*(_QWORD *)(**(_QWORD **)(v9 + 24) + 8 * (v10 >> 8)) + 16LL * (unsigned __int8)v10 + 8) )
  {
    v11 = *(_QWORD *)v9 + 24LL * (unsigned int)v10;
  }
LABEL_12:
  if ( v3 >= 0x10000 )
  {
    if ( *(_DWORD *)this > 0x10000u )
    {
      if ( *((unsigned __int8 *)GdiHandleEntryDirectory::GetEntry(v5, (unsigned __int16)v3, 1) + 13) == HIWORD(v3) )
        v3 = (unsigned __int16)v3;
    }
    else
    {
      v3 = (unsigned __int16)v3;
    }
  }
  v12 = *((_DWORD *)v5 + 514);
  if ( v3 < v12 + ((*((unsigned __int16 *)v5 + 1) - 1) << 16) )
  {
    if ( v3 >= v12 )
    {
      v13 = ((v3 - v12) >> 16) + 1;
      if ( (v3 - v12) >> 16 == -2 )
        goto LABEL_20;
    }
    else
    {
      v13 = 0;
    }
    v14 = *((_QWORD *)v5 + v13 + 1);
    if ( v13 )
      v3 = v3 - ((v13 - 1) << 16) - v12;
    if ( v3 < *(_DWORD *)(v14 + 20) )
      v7 = *(struct OBJECT **)(*(_QWORD *)(**(_QWORD **)(v14 + 24) + 8 * ((unsigned __int64)v3 >> 8))
                             + 16LL * (unsigned __int8)v3
                             + 8);
  }
LABEL_20:
  if ( v7 == a2 )
    return (struct _ENTRY *)v11;
  else
    return 0LL;
}
