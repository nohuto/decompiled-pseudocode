/*
 * XREFs of DpiGetMonitorDescriptor @ 0x1C00EFB88
 * Callers:
 *     ?_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ @ 0x1C00F03AC (-_RetrieveMonitorDescriptorsFromDriver@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     DxgkAcquireAdapterDdiSync @ 0x1C00DF65C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00DF68C (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiQueryDeviceDescriptor @ 0x1C00EFC40 (DpiDxgkDdiQueryDeviceDescriptor.c)
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
  DxgkAcquireAdapterDdiSync(*(_QWORD *)(v6 + 3688), 1);
  LODWORD(v5) = DpiDxgkDdiQueryDeviceDescriptor(v5, *(_QWORD *)(v4 + 48), *(unsigned int *)(v4 + 504), v8);
  DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v6 + 3688));
  KeReleaseMutex(*(PRKMUTEX *)(*(_QWORD *)(v4 + 936) + 104LL), 0);
  return (unsigned int)v5;
}
