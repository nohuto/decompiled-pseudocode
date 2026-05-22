/*
 * XREFs of ?OnDeviceRemoval@MobileTouchProcessor@@UEAAJPEAUDeviceInfo@@@Z @ 0x180057AF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MobileTouchProcessor::OnDeviceRemoval(MobileTouchProcessor *this, struct DeviceInfo *a2)
{
  __int64 v3; // rcx

  if ( a2 == *((struct DeviceInfo **)this + 22) )
  {
    *((_QWORD *)this + 22) = 0LL;
  }
  else if ( a2 == *((struct DeviceInfo **)this + 23) )
  {
    *((_QWORD *)this + 23) = 0LL;
    v3 = *((_QWORD *)this + 21);
    if ( v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    *((_QWORD *)this + 21) = 0LL;
  }
  return 0LL;
}
