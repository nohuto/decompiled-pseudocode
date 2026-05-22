/*
 * XREFs of ??0MobileTouchProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1800577CC
 * Callers:
 *     ?Create@MobileTouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180057C30 (-Create@MobileTouchProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??0PointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x18005D78C (--0PointerProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
MobileTouchProcessor *__fastcall MobileTouchProcessor::MobileTouchProcessor(
        MobileTouchProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  __int64 v5; // rcx

  PointerProcessor::PointerProcessor(this, a2, a3);
  *(_QWORD *)this = &MobileTouchProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 1) = &MobileTouchProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 22) = (unsigned __int64)a2 & -(__int64)((*((_BYTE *)a2 + 4) & 8) != 0);
  if ( *((char *)a2 + 4) >= 0 )
  {
    *((_QWORD *)this + 23) = 0LL;
  }
  else
  {
    *((_QWORD *)this + 23) = a2;
    *((_DWORD *)a2 + 1) |= 8u;
  }
  v5 = *((_QWORD *)this + 21);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  *((_QWORD *)this + 21) = 0LL;
  memset((char *)this + 208, 0, 0x30uLL);
  *((_DWORD *)this + 64) = 0x7FFFFFFF;
  *((_BYTE *)this + 260) = 0;
  *((_DWORD *)this + 66) = 0;
  *((_WORD *)this + 134) = 0;
  return this;
}
