/*
 * XREFs of ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C00662A4
 * Callers:
 *     ?DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETPATHSMODALITY@@PEAXHHPEAU_MDEV@@PEAPEAU4@KHHHU_CDS_INTERNAL_FLAGS@@1PEAPEAU2@@Z @ 0x1C0061490 (-DrvChangeDisplaySettingsInternal@@YAJPEAUtagGRAPHICS_DEVICE@@PEAU_devicemodeW@@PEAU_D3DKMT_GETP.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C008243C (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 * Callees:
 *     GreDeviceIoControlEx @ 0x1C00665F0 (GreDeviceIoControlEx.c)
 */

void __fastcall DrvUpdatePDevForWDDMDevice(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v5; // [rsp+58h] [rbp+10h] BYREF
  int v6; // [rsp+60h] [rbp+18h] BYREF
  char v7; // [rsp+64h] [rbp+1Ch]

  v1 = *(_QWORD *)(a1 + 2600);
  if ( (*(_DWORD *)(v1 + 160) & 0x800000) != 0
    && (int)GreDeviceIoControlEx(*(PDEVICE_OBJECT *)(v1 + 136), 0x232043u, 0LL, 0, &v6, 8u, (__int64)&v5, 1u) >= 0 )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 2616) + 184LL) = v6;
    v2 = *(_QWORD *)(a1 + 2616);
    if ( v7 )
      *(_DWORD *)(v2 + 180) &= ~2u;
    else
      *(_DWORD *)(v2 + 180) |= 2u;
    v3 = *(_QWORD *)(a1 + 2616);
    if ( *(_DWORD *)(v3 + 180) )
      *(_DWORD *)(v3 + 72) |= 0x200000u;
  }
}
