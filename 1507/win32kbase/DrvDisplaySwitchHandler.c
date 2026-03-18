/*
 * XREFs of DrvDisplaySwitchHandler @ 0x1C00BB850
 * Callers:
 *     <none>
 * Callees:
 *     ?DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C001AC14 (-DrvGetPruneFlag@@YAHPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z @ 0x1C005F214 (-DrvProbeAndCaptureDevmode@@YAJPEAUtagGRAPHICS_DEVICE@@PEAPEAU_devicemodeW@@PEAH2PEAU2@HHHHH3@Z.c)
 *     DrvBuildDevmodeList @ 0x1C005FCF0 (DrvBuildDevmodeList.c)
 *     DrvUpdateDisplayDriverParameters @ 0x1C0060740 (DrvUpdateDisplayDriverParameters.c)
 *     UpdateMonitorDevices @ 0x1C0066420 (UpdateMonitorDevices.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C006AC90 (DrvDxgkLogCodePointPacket.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall DrvDisplaySwitchHandler(__int64 a1, struct _UNICODE_STRING *a2, _OWORD *a3, int *a4)
{
  wchar_t *v4; // rbx
  int PruneFlag; // esi
  struct _devicemodeW *v10; // rsi
  WCHAR *v11; // rcx
  _OWORD *v12; // rdi
  unsigned int v13; // eax
  int v14; // edx
  _BYTE *v15; // rcx
  __int64 v16; // r8
  int v17; // r9d
  struct _devicemodeW *v19; // [rsp+60h] [rbp-108h] BYREF
  struct _devicemodeW Src; // [rsp+70h] [rbp-F8h] BYREF
  int v21; // [rsp+170h] [rbp+8h] BYREF

  v4 = gpGraphicsDeviceList;
  gbUpdateMonitor = 1;
  UpdateMonitorDevices();
  if ( !v4 )
    return 0LL;
  do
  {
    if ( v4 == (wchar_t *)a1 )
      break;
    v4 = (wchar_t *)*((_QWORD *)v4 + 16);
  }
  while ( v4 );
  if ( !v4 )
    return 0LL;
  DrvBuildDevmodeList((struct tagGRAPHICS_DEVICE *)v4, 1, 0);
  if ( (*(_DWORD *)(a1 + 160) & 0x800000) != 0 )
    PruneFlag = 0;
  else
    PruneFlag = DrvGetPruneFlag((struct tagGRAPHICS_DEVICE *)v4);
  *a4 = PruneFlag;
  memset(&Src, 0, sizeof(Src));
  Src.dmSize = 220;
  if ( (int)DrvProbeAndCaptureDevmode(
              (struct tagGRAPHICS_DEVICE *)v4,
              &v19,
              &v21,
              0LL,
              &Src,
              0,
              PruneFlag,
              1,
              1u,
              0,
              0LL) < 0 )
  {
    DrvDxgkLogCodePointPacket(0x3Au, 1u, 0, 0);
    return 0LL;
  }
  v10 = v19;
  v11 = &v19->dmFormName[13];
  *a3 = *(_OWORD *)v19->dmDeviceName;
  a3[1] = *(_OWORD *)&v10->dmDeviceName[8];
  a3[2] = *(_OWORD *)&v10->dmDeviceName[16];
  a3[3] = *(_OWORD *)&v10->dmDeviceName[24];
  a3[4] = *(_OWORD *)&v10->dmSpecVersion;
  a3[5] = *(union _devicemodeW::$5A39A2C3BB0B1D2D5888DFEE2BA0B23C *)((char *)&v10->76 + 4);
  a3[6] = *(_OWORD *)&v10->dmYResolution;
  v12 = a3 + 8;
  *(v12 - 1) = *(_OWORD *)&v10->dmFormName[5];
  *v12 = *(_OWORD *)v11;
  v12[1] = *((_OWORD *)v11 + 1);
  v12[2] = *((_OWORD *)v11 + 2);
  v12[3] = *((_OWORD *)v11 + 3);
  v12[4] = *((_OWORD *)v11 + 4);
  *((_QWORD *)v12 + 10) = *((_QWORD *)v11 + 10);
  *((_DWORD *)v12 + 22) = *((_DWORD *)v11 + 22);
  RtlInitUnicodeString(a2, v4 + 32);
  v13 = *((_DWORD *)v4 + 56);
  v14 = 0;
  if ( !v13 )
    goto LABEL_16;
  v15 = (_BYTE *)*((_QWORD *)v4 + 29);
  v16 = v13;
  do
  {
    if ( (*v15 & 3) == 3 )
      ++v14;
    v15 += 20;
    --v16;
  }
  while ( v16 );
  if ( v14 == 1 )
    v17 = 1;
  else
LABEL_16:
    v17 = 0;
  DrvUpdateDisplayDriverParameters((struct tagGRAPHICS_DEVICE *)v4, v10, 0, v17, 0);
  Win32FreePool();
  return 1LL;
}
