/*
 * XREFs of DpiGetMonitorDescriptor @ 0x1C00E252C
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C00DFDFC (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     DxgkReleaseAdapterDdiSync @ 0x1C00E25D8 (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C00E2600 (DpiDxgkDdiQueryDeviceDescriptor.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00E2694 (DxgkAcquireAdapterDdiSync.c)
 */

__int64 __fastcall DpiGetMonitorDescriptor(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
  __int64 v5; // rbx
  __int64 v6; // rdi
  _DWORD v8[2]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 64);
  v5 = *(_QWORD *)(v4 + 40);
  v6 = *(_QWORD *)(*(_QWORD *)(v4 + 32) + 64LL);
  v8[0] = a2;
  v8[1] = 128;
  v9 = a4;
  KeWaitForSingleObject(*(PVOID *)(*(_QWORD *)(v4 + 936) + 104LL), Executive, 0, 0, 0LL);
  DxgkAcquireAdapterDdiSync(*(_QWORD *)(v6 + 2544), 1LL);
  LODWORD(v5) = DpiDxgkDdiQueryDeviceDescriptor(v5, *(_QWORD *)(v4 + 48), *(unsigned int *)(v4 + 504), v8);
  DxgkReleaseAdapterDdiSync(*(_QWORD *)(v6 + 2544));
  KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 104LL), 0);
  return (unsigned int)v5;
}
