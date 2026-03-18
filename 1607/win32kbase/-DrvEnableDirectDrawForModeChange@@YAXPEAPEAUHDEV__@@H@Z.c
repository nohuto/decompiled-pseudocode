/*
 * XREFs of ?DrvEnableDirectDrawForModeChange@@YAXPEAPEAUHDEV__@@H@Z @ 0x1C0080208
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

void __fastcall DrvEnableDirectDrawForModeChange(HDEV *a1, int a2)
{
  __int64 v3; // rdi

  if ( *(_DWORD *)a1 )
  {
    v3 = *(unsigned int *)a1;
    do
    {
      _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
      DisplayScenarioJournalDisplayUniquenessIncremented();
      --v3;
    }
    while ( v3 );
  }
  if ( a2 )
    Win32FreePool();
}
