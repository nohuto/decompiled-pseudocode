/*
 * XREFs of ?DrvChangeDisplayFallback@@YAJPEAXEEPEAU_MDEV@@PEAPEAU1@PEAW4_DXGK_DIAG_SDC_STAGE@@PEAEPEAJ@Z @ 0x1C00837AC
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C001BEA0 (DrvSetDisplayConfig.c)
 * Callees:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 */

__int64 __fastcall DrvChangeDisplayFallback(
        void *a1,
        unsigned __int8 a2,
        char a3,
        struct _MDEV *a4,
        struct _MDEV **a5,
        enum _DXGK_DIAG_SDC_STAGE *a6,
        bool *a7,
        int *a8)
{
  int v12; // eax
  __int64 v13; // rcx
  int v14; // ebx
  unsigned int v15; // r8d
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax

  if ( gForceDisconnect )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v17);
  }
  if ( a3 )
    gForceDisconnect = 1;
  if ( gOldModeChange )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v18);
  }
  gOldModeChange = 1;
  v12 = DrvChangeDisplaySettingsInternal(0LL, 0LL, 0LL, a1, 0, 1, a4, a5, 0, 1, a2, 1, 0);
  gOldModeChange = 0;
  v14 = v12;
  switch ( v12 )
  {
    case 0:
      goto LABEL_8;
    case 2:
      if ( a2 || *a5 )
      {
        v20 = WdLogNewEntry5_WdAssertion(v13);
        WdLogEvent5_WdAssertion(v20);
      }
LABEL_8:
      v15 = 0;
      *(_DWORD *)a6 = 18;
      *a7 = v14 == 2;
      goto LABEL_9;
    case 3:
      v19 = WdLogNewEntry5_WdAssertion(v13);
      WdLogEvent5_WdAssertion(v19);
      break;
  }
  v15 = -1073741823;
  *(_DWORD *)a6 = 16;
LABEL_9:
  gForceDisconnect = 0;
  if ( a8 )
    *a8 = v14;
  return v15;
}
