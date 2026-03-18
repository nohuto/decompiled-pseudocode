/*
 * XREFs of ?DrvSetSharedDevLock@@YAXPEAU_MDEV@@@Z @ 0x1C00B97D8
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     GreDeleteSemaphore @ 0x1C005C6D0 (GreDeleteSemaphore.c)
 */

void __fastcall DrvSetSharedDevLock(struct _MDEV *a1)
{
  unsigned int i; // edi
  __int64 v3; // rax
  _QWORD *v4; // rbx
  struct _ERESOURCE *v5; // rcx
  signed __int32 v6; // ett

  for ( i = 0; i < *((_DWORD *)a1 + 5); ++i )
  {
    v3 = *(_QWORD *)a1;
    v4 = (_QWORD *)*((_QWORD *)a1 + 4 * i + 4);
    v5 = (struct _ERESOURCE *)v4[8];
    v4[5] = *(_QWORD *)a1;
    if ( v5 != *(struct _ERESOURCE **)(v3 + 64) )
    {
      if ( (v4[7] & 0x10000) == 0 )
      {
        GreDeleteSemaphore(v5);
        _m_prefetchw(v4 + 7);
        do
          v6 = *((_DWORD *)v4 + 14);
        while ( v6 != _InterlockedCompareExchange((volatile signed __int32 *)v4 + 14, v6 | 0x10000, v6) );
      }
      v4[8] = *(_QWORD *)(v4[5] + 64LL);
    }
  }
}
