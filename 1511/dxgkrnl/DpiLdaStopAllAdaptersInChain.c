/*
 * XREFs of DpiLdaStopAllAdaptersInChain @ 0x1C0174748
 * Callers:
 *     DpiFdoHandleStopDevice @ 0x1C016C440 (DpiFdoHandleStopDevice.c)
 * Callees:
 *     DpiFdoStopAdapter @ 0x1C016CD64 (DpiFdoStopAdapter.c)
 */

__int64 __fastcall DpiLdaStopAllAdaptersInChain(struct _DEVICE_OBJECT *a1)
{
  _QWORD *DeviceExtension; // rbx
  unsigned int v3; // edi
  __int64 v4; // rax
  int v5; // ecx
  struct _DEVICE_OBJECT *v6; // r14
  _DWORD *v7; // rbp
  int v8; // ecx

  ExIsResourceAcquiredSharedLite(*((PERESOURCE *)a1->DeviceExtension + 21));
  DeviceExtension = a1->DeviceExtension;
  v3 = 0;
  if ( *((_BYTE *)DeviceExtension + 508) != 1 )
  {
    v4 = DeviceExtension[189];
    if ( !v4 )
    {
      v5 = *((_DWORD *)DeviceExtension + 59);
      if ( v5 == 2 || *((_DWORD *)DeviceExtension + 60) == 2 && ((v5 - 3) & 0xFFFFFFFC) == 0 && v5 != 4 )
        DpiFdoStopAdapter(a1);
      return 0LL;
    }
    DeviceExtension = *(_QWORD **)(v4 + 64);
  }
  if ( *((_DWORD *)DeviceExtension + 380) )
  {
    do
    {
      v6 = *(struct _DEVICE_OBJECT **)(DeviceExtension[189] + 8LL * v3);
      v7 = v6->DeviceExtension;
      v8 = v7[59];
      if ( v8 == 2 || v7[60] == 2 && ((v8 - 3) & 0xFFFFFFFC) == 0 && v8 != 4 )
      {
        DpiFdoStopAdapter(v6);
        if ( v6 != a1 )
          v7[59] = 1;
      }
      ++v3;
    }
    while ( v3 < *((_DWORD *)DeviceExtension + 380) );
  }
  return 0LL;
}
