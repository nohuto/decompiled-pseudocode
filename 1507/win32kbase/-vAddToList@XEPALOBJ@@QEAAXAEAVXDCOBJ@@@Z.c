/*
 * XREFs of ?vAddToList@XEPALOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003AB68
 * Callers:
 *     ?SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z @ 0x1C005A9B8 (-SelectPaletteWorker@@YAPEAUHPALETTE__@@PEAVXDCOBJ@@PEAU1@H@Z.c)
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C003B168 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0MDCOBJA@@QEAA@PEAUHDC__@@@Z @ 0x1C006985C (--0MDCOBJA@@QEAA@PEAUHDC__@@@Z.c)
 */

void __fastcall XEPALOBJ::vAddToList(XEPALOBJ *this, struct XDCOBJ *a2)
{
  HDC v3; // rdx
  _QWORD v4[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( *(struct PALETTE **)this == ppalDefault )
  {
    *(_QWORD *)(*(_QWORD *)a2 + 1376LL) = 0LL;
    *(_QWORD *)(*(_QWORD *)a2 + 1384LL) = 0LL;
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)this + 56LL));
    *(_QWORD *)(*(_QWORD *)a2 + 1376LL) = *(_QWORD *)(*(_QWORD *)this + 40LL);
    *(_QWORD *)(*(_QWORD *)this + 40LL) = **(_QWORD **)a2;
    *(_QWORD *)(*(_QWORD *)a2 + 1384LL) = 0LL;
    v3 = *(HDC *)(*(_QWORD *)a2 + 1376LL);
    if ( v3 )
    {
      MDCOBJA::MDCOBJA((MDCOBJA *)v4, v3);
      *(_QWORD *)(v4[0] + 1384LL) = **(_QWORD **)a2;
      XDCOBJ::vAltUnlockNoNullSet((XDCOBJ *)v4);
    }
  }
}
