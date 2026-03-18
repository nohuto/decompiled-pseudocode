/*
 * XREFs of ?bDisabled@PDEVOBJ@@QEAAHH@Z @ 0x1C0031B2C
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0032010 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0068660 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     DrvEnableMDEV @ 0x1C00693F8 (DrvEnableMDEV.c)
 *     DrvDisableMDEV @ 0x1C0069650 (DrvDisableMDEV.c)
 *     bDynamicModeChange @ 0x1C006A204 (bDynamicModeChange.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C007E4B8 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 *     ?DrvEnableDisplay@@YAHPEAUHDEV__@@@Z @ 0x1C0088628 (-DrvEnableDisplay@@YAHPEAUHDEV__@@@Z.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00C68F8 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     GreAcquireHmgrSemaphore @ 0x1C0025AB0 (GreAcquireHmgrSemaphore.c)
 *     GreReleaseHmgrSemaphore @ 0x1C0026BB0 (GreReleaseHmgrSemaphore.c)
 *     HmgSafeNextObjt @ 0x1C006B3F0 (HmgSafeNextObjt.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C007EDB8 (-SETFLAG@@YAXHAECKK@Z.c)
 */

__int64 __fastcall PDEVOBJ::bDisabled(PDEVOBJ *this, int a2)
{
  int v4; // edx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 Objt; // rax
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v14; // rax
  __int64 v15; // rax

  SETFLAG(a2, (volatile unsigned int *)(*(_QWORD *)this + 56LL), 0x400u);
  if ( a2 || (v6 = *(_QWORD *)this, v4 = 0x20000, (*(_DWORD *)(*(_QWORD *)this + 56LL) & 0x20000) != 0) )
  {
    *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  }
  else
  {
    v14 = *(_QWORD *)(v6 + 40);
    if ( v14 )
    {
      if ( (*(_DWORD *)(v14 + 56) & 0x20000) != 0 && !*(_QWORD *)(v6 + 48) )
      {
        v5 = *(_QWORD *)(v14 + 1824);
        v15 = *(_QWORD *)(*(_QWORD *)v5 + 48LL);
        if ( v6 != v15 )
          *(_QWORD *)(v6 + 48) = v15;
      }
    }
  }
  v7 = *(_QWORD *)this;
  GreAcquireHmgrSemaphore(v5, v4, v6);
  v9 = 0LL;
  while ( 1 )
  {
    LOBYTE(v8) = 1;
    Objt = HmgSafeNextObjt(v9, v8);
    if ( !Objt )
      break;
    v9 = *(_QWORD *)Objt;
    if ( !*(_DWORD *)(Objt + 32) && *(_QWORD *)(Objt + 48) == v7 )
    {
      if ( a2 )
        *(_DWORD *)(Objt + 36) |= 0x1000u;
      else
        *(_DWORD *)(Objt + 36) &= ~0x1000u;
    }
  }
  v12 = *(_DWORD *)(*(_QWORD *)this + 56LL) & 0x400;
  GreReleaseHmgrSemaphore(v11);
  return v12;
}
