/*
 * XREFs of ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C006C2B4
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C0032010 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     bDynamicModeChange @ 0x1C006A204 (bDynamicModeChange.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C00BEB00 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vResetSurfacePalette(_QWORD *a1)
{
  __int64 v2; // rax
  struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C v3; // rcx
  __int64 v4; // r9
  __int64 i; // r8
  void (__fastcall *v6)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // r11
  int v7; // [rsp+40h] [rbp+8h]
  int v8; // [rsp+40h] [rbp+8h]
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  if ( (*((_DWORD *)a1 + 549) & 0x100) != 0 )
  {
    v2 = a1[229];
    v9 = v2;
    if ( *(_DWORD *)(v2 + 60) == 20 && (*(_DWORD *)(v2 + 24) & 0x11000) == 0 )
    {
      v3 = WPP_MAIN_CB.DeviceQueue.1;
      v4 = 32LL;
      while ( 1 )
      {
        v7 = *(_DWORD *)(v4 + *(_QWORD *)(*(_QWORD *)&v3 + 120LL));
        HIBYTE(v7) = 48;
        *(_DWORD *)(v4 + *(_QWORD *)(v2 + 120)) = v7;
        v4 += 4LL;
        if ( v4 >= 40 )
          break;
        v2 = v9;
      }
      for ( i = 984LL; i < 992; i += 4LL )
      {
        v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)&v3 + 120LL) + i - 944);
        HIBYTE(v8) = 48;
        *(_DWORD *)(i + *(_QWORD *)(v9 + 120)) = v8;
      }
      v2 = v9;
    }
    if ( (a1[7] & 0x400) == 0 )
    {
      v6 = (void (__fastcall *)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))a1[361];
      if ( v6 )
        v6(a1[228], &v9, 0LL, 0LL, *(_DWORD *)(v2 + 28));
    }
  }
}
