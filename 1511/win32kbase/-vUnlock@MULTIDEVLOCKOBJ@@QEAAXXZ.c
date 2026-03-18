/*
 * XREFs of ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0056C9C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0054368 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0055974 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C0056BCC (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 * Callees:
 *     GreReleaseSemaphoreInternal @ 0x1C0037280 (GreReleaseSemaphoreInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C006DDB0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall MULTIDEVLOCKOBJ::vUnlock(MULTIDEVLOCKOBJ *this)
{
  unsigned int v1; // esi
  unsigned int v3; // ebp

  v1 = 0;
  if ( *((_QWORD *)this + 1) && (*(_DWORD *)this & 4) != 0 )
  {
    v3 = 0;
    if ( (*((_DWORD *)this + 1) & 0xFFFFFFFE) != 0 )
    {
      do
      {
        EtwTraceGreLockReleaseSemaphore(L"*(phsemArrayD+i)");
        GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(*((_QWORD *)this + 1) + 8LL * v3++));
      }
      while ( v3 < *((_DWORD *)this + 1) >> 1 );
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite");
    GreReleaseSemaphoreInternal(ghsemSprite);
    if ( (*((_DWORD *)this + 1) & 0xFFFFFFFE) != 0 )
    {
      do
      {
        EtwTraceGreLockReleaseSemaphore(L"*(phsemArrayP+i)");
        GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(*((_QWORD *)this + 2) + 8LL * v1++));
      }
      while ( v1 < *((_DWORD *)this + 1) >> 1 );
    }
    *(_DWORD *)this &= ~4u;
  }
}
