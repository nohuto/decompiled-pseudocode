/*
 * XREFs of PipAllocateDeviceNode @ 0x1404CB638
 * Callers:
 *     PipProcessEnumeratedChildDevice @ 0x1403F21AC (PipProcessEnumeratedChildDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405162A0 (IopInitializeDeviceInstanceKey.c)
 *     IopLegacyResourceAllocation @ 0x140554EEC (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x14055523C (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x14064AD78 (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PipAllocateDeviceNode(__int64 a1, void **a2)
{
  PVOID PoolWithTag; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2D0uLL, 0x646F6E44u);
  *a2 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  _InterlockedIncrement(&IopNumberDeviceNodes);
  memset(*a2, 0, 0x2D0uLL);
  *((_DWORD *)*a2 + 112) = -1;
  *((_DWORD *)*a2 + 113) = -1;
  *((_DWORD *)*a2 + 114) = -1;
  *((_DWORD *)*a2 + 115) = -1;
  *((_WORD *)*a2 + 232) = -1;
  *((_DWORD *)*a2 + 75) = 769;
  *((_DWORD *)*a2 + 150) = 0;
  *((_DWORD *)*a2 + 160) = 0;
  *((_QWORD *)*a2 + 81) = 0LL;
  *((_DWORD *)*a2 + 164) = 0;
  *((_DWORD *)*a2 + 165) = -1;
  *((_WORD *)*a2 + 233) = 0;
  v5 = (char *)*a2 + 488;
  v5[1] = v5;
  *v5 = v5;
  v6 = (char *)*a2 + 504;
  v6[1] = v6;
  *v6 = v6;
  if ( a1 )
  {
    *((_QWORD *)*a2 + 4) = a1;
    *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL) = *a2;
    *(_DWORD *)(a1 + 48) &= ~0x80u;
  }
  v7 = (char *)*a2 + 472;
  v7[1] = v7;
  *v7 = v7;
  v8 = (char *)*a2 + 576;
  v8[1] = v8;
  *v8 = v8;
  v9 = (char *)*a2 + 608;
  v9[1] = v9;
  *v9 = v9;
  v10 = (char *)*a2 + 624;
  v10[1] = v10;
  *v10 = v10;
  v11 = (char *)*a2 + 160;
  v11[1] = v11;
  *v11 = v11;
  v12 = (char *)*a2 + 176;
  v12[1] = v12;
  *v12 = v12;
  return 0LL;
}
