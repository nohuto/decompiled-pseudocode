/*
 * XREFs of ?DrvEnableDirectDrawForModeChange@@YAXPEAPEAUHDEV__@@H@Z @ 0x1C0018CF0
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

void __fastcall DrvEnableDirectDrawForModeChange(HDEV *a1, int a2)
{
  __int64 v4; // rdi

  if ( *(_DWORD *)a1 )
  {
    v4 = *(unsigned int *)a1;
    do
    {
      _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
      DisplayScenarioJournalDisplayUniquenessIncremented();
      --v4;
    }
    while ( v4 );
  }
  if ( a2 )
    Win32FreePool(a1);
}
