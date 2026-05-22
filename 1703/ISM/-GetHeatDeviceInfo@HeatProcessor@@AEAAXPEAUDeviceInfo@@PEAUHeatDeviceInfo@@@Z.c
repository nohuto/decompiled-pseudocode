/*
 * XREFs of ?GetHeatDeviceInfo@HeatProcessor@@AEAAXPEAUDeviceInfo@@PEAUHeatDeviceInfo@@@Z @ 0x18003BA8C
 * Callers:
 *     ?Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18003B5A0 (-Initialize@HeatProcessor@@IEAAJPEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     ?OnDeviceRemoval@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x18003B930 (-OnDeviceRemoval@HeatProcessor@@UEAAJPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HeatProcessor::GetHeatDeviceInfo(HeatProcessor *this, struct DeviceInfo *a2, struct HeatDeviceInfo *a3)
{
  _QWORD *v3; // rbx
  int v4; // eax
  __int64 v6; // rax

  *((_DWORD *)a3 + 1) = 1;
  v3 = (_QWORD *)((char *)a3 + 8);
  v4 = *(_DWORD *)a2;
  *((_QWORD *)a3 + 1) = 0LL;
  *(_DWORD *)a3 = v4;
  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 5) + 24LL))(*((_QWORD *)this + 5), (char *)a3 + 8);
  if ( !*v3 )
  {
    v6 = *((_QWORD *)a2 + 2);
    if ( v6 )
      *v3 = v6;
  }
}
