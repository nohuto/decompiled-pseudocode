/*
 * XREFs of ?vRemoveFromList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0023270
 * Callers:
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C004918C (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0030EE4 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C00443A0 (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

void __fastcall XEPALOBJ::vRemoveFromList(XEPALOBJ *this, struct XDCOBJ *a2)
{
  HDC v4; // rdx
  HDC v5; // rdx
  _QWORD v6[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v7[3]; // [rsp+30h] [rbp-18h] BYREF

  if ( *(struct _SINGLE_LIST_ENTRY **)this != WPP_MAIN_CB.Dpc.DpcListEntry.Next )
  {
    v4 = *(HDC *)(*(_QWORD *)a2 + 1376LL);
    if ( v4 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v6, v4);
      *(_QWORD *)(v6[0] + 1384LL) = *(_QWORD *)(*(_QWORD *)a2 + 1384LL);
      XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v6);
    }
    v5 = *(HDC *)(*(_QWORD *)a2 + 1384LL);
    if ( v5 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v7, v5);
      *(_QWORD *)(v7[0] + 1376LL) = *(_QWORD *)(*(_QWORD *)a2 + 1376LL);
      XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v7);
    }
    else
    {
      *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)a2 + 1376LL);
    }
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)this + 56LL));
  }
  *(_QWORD *)(*(_QWORD *)a2 + 1384LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)a2 + 1376LL) = 0LL;
}
