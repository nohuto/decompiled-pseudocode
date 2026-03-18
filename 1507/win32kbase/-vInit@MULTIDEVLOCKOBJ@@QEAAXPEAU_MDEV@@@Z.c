/*
 * XREFs of ?vInit@MULTIDEVLOCKOBJ@@QEAAXPEAU_MDEV@@@Z @ 0x1C0063CE8
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0062A9C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 */

void __fastcall MULTIDEVLOCKOBJ::vInit(MULTIDEVLOCKOBJ *this, struct _MDEV *a2)
{
  unsigned int v2; // edi
  unsigned int v5; // eax
  char *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r8
  __int64 v9; // rax
  char *v10; // rax
  __int64 v11; // rcx

  v2 = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  if ( a2 )
  {
    v5 = 2 * *((_DWORD *)a2 + 5);
    *((_DWORD *)this + 1) = v5;
    if ( v5 > 0xA )
    {
      v10 = (char *)PALLOCMEM2((unsigned int)(16 * *((_DWORD *)a2 + 5)), 1886221383LL, 0);
      *((_QWORD *)this + 1) = v10;
      if ( v10 )
      {
        v11 = *((unsigned int *)a2 + 5);
        *(_DWORD *)this = 3;
        *((_QWORD *)this + 2) = &v10[8 * v11];
      }
    }
    else
    {
      v6 = (char *)this + 24;
      *((_QWORD *)this + 1) = v6;
      v7 = *((unsigned int *)a2 + 5);
      *(_DWORD *)this = 1;
      *((_QWORD *)this + 2) = &v6[8 * v7];
    }
    if ( *((_QWORD *)this + 1) && *((_DWORD *)a2 + 5) )
    {
      do
      {
        v8 = v2++;
        v9 = *((_QWORD *)a2 + 4 * v8 + 4);
        *(_QWORD *)(*((_QWORD *)this + 1) + 8 * v8) = *(_QWORD *)(v9 + 64);
        *(_QWORD *)(*((_QWORD *)this + 2) + 8 * v8) = *(_QWORD *)(v9 + 72);
      }
      while ( v2 < *((_DWORD *)a2 + 5) );
    }
  }
  else
  {
    *(_DWORD *)this = 1;
  }
}
