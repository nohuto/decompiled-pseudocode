/*
 * XREFs of ??_EMPCSixDofProcessor@@UEAAPEAXI@Z @ 0x180046B20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$deque@UPoseDelta@MPCSixDofProcessor@@V?$allocator@UPoseDelta@MPCSixDofProcessor@@@std@@@std@@QEAA@XZ @ 0x180046C24 (--1-$deque@UPoseDelta@MPCSixDofProcessor@@V-$allocator@UPoseDelta@MPCSixDofProcessor@@@std@@@std.c)
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x18004EB18 (--1MPCInputProviderBase@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

MPCSixDofProcessor *__fastcall MPCSixDofProcessor::`vector deleting destructor'(MPCSixDofProcessor *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx

  v4 = *((_QWORD *)this + 36);
  if ( v4 )
  {
    *((_QWORD *)this + 36) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 35);
  if ( v5 )
  {
    *((_QWORD *)this + 35) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  std::deque<MPCSixDofProcessor::PoseDelta>::~deque<MPCSixDofProcessor::PoseDelta>((char *)this + 200);
  *((_DWORD *)this + 41) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
