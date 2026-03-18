/*
 * XREFs of ?DrvSetSharedPalette@@YAPEAUHDEV__@@PEAU_MDEV@@@Z @ 0x1C00C6F48
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0065BC0 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x1C0029BC0 (HmgDecrementShareReferenceCount.c)
 *     HmgIncrementShareReferenceCount @ 0x1C002E800 (HmgIncrementShareReferenceCount.c)
 */

__int64 __fastcall DrvSetSharedPalette(struct _MDEV *a1)
{
  __int64 v1; // rbp
  __int64 v2; // rdi
  unsigned int i; // esi
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int *v7; // rcx

  v1 = 0LL;
  v2 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 2196LL) & 0x100) != 0 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)a1 + 1832LL);
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
        v6 = *(_QWORD *)(v5 + 1832);
        if ( v6 != v2 )
        {
          v7 = *(unsigned int **)(v6 + 128);
          if ( v7 != (unsigned int *)v6 )
            HmgDecrementShareReferenceCount(v7);
          HmgIncrementShareReferenceCount((struct _BASEOBJECT *)v2);
          *(_DWORD *)(v6 + 28) = *(_DWORD *)(v2 + 28);
          *(_QWORD *)(v6 + 120) = *(_QWORD *)(v2 + 120);
          *(_QWORD *)(v6 + 128) = v2;
        }
      }
      else
      {
        v2 = *(_QWORD *)(v5 + 1832);
        v1 = v5;
      }
    }
  }
  return v1;
}
