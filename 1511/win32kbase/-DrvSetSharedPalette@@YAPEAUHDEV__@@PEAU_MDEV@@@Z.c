/*
 * XREFs of ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C00BB268
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0054368 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     ?apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z @ 0x1C00BC434 (-apalColorSet@XEPALOBJ@@QEAAXPEAVPALETTE@@@Z.c)
 */

__int64 __fastcall DrvSetSharedPalette(struct _MDEV *a1)
{
  __int64 v1; // rdi
  struct PALETTE *v2; // rbx
  unsigned int i; // esi
  __int64 v5; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0LL;
  v2 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 2196LL) & 0x100) != 0 )
  {
    v2 = *(struct PALETTE **)(*(_QWORD *)a1 + 1832LL);
    v1 = *(_QWORD *)a1;
  }
  for ( i = 0; i < *((_DWORD *)a1 + 5); ++i )
  {
    v5 = *((_QWORD *)a1 + 4 * i + 4);
    if ( (*(_DWORD *)(v5 + 2196) & 0x100) != 0 )
    {
      *(_QWORD *)(v5 + 1792) = MulSetPalette;
      if ( v2 )
      {
        if ( *(struct PALETTE **)(v5 + 1832) != v2 )
        {
          v7 = *(_QWORD *)(v5 + 1832);
          XEPALOBJ::apalColorSet((XEPALOBJ *)&v7, v2);
        }
      }
      else
      {
        v2 = *(struct PALETTE **)(v5 + 1832);
        v1 = v5;
      }
    }
  }
  return v1;
}
