/*
 * XREFs of ?vUnlock@MULTIDEVLOCKOBJ@@QEAAXXZ @ 0x1C0063D8C
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0062A9C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ??_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z @ 0x1C0063E60 (--_GMULTIDEVLOCKOBJ@@QEAAPEAXI@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0008270 (EtwTraceGreLockReleaseSemaphore.c)
 *     GreReleaseSemaphoreInternal @ 0x1C003AA20 (GreReleaseSemaphoreInternal.c)
 */

void __fastcall MULTIDEVLOCKOBJ::vUnlock(MULTIDEVLOCKOBJ *this, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  unsigned int v5; // ebp
  __int64 v6; // r8

  v3 = 0;
  if ( *((_QWORD *)this + 1) && (*(_DWORD *)this & 4) != 0 )
  {
    v5 = 0;
    if ( (*((_DWORD *)this + 1) & 0xFFFFFFFE) != 0 )
    {
      do
      {
        EtwTraceGreLockReleaseSemaphore((__int64)L"*(phsemArrayD+i)", *(_QWORD *)(*((_QWORD *)this + 1) + 8LL * v5), a3);
        GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(*((_QWORD *)this + 1) + 8LL * v5++));
      }
      while ( v5 < *((_DWORD *)this + 1) >> 1 );
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemSprite", (__int64)ghsemSprite, a3);
    GreReleaseSemaphoreInternal(ghsemSprite);
    if ( (*((_DWORD *)this + 1) & 0xFFFFFFFE) != 0 )
    {
      do
      {
        EtwTraceGreLockReleaseSemaphore((__int64)L"*(phsemArrayP+i)", *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * v3), v6);
        GreReleaseSemaphoreInternal(*(struct _ERESOURCE **)(*((_QWORD *)this + 2) + 8LL * v3++));
      }
      while ( v3 < *((_DWORD *)this + 1) >> 1 );
    }
    *(_DWORD *)this &= ~4u;
  }
}
