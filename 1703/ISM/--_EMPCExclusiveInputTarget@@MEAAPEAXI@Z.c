/*
 * XREFs of ??_EMPCExclusiveInputTarget@@MEAAPEAXI@Z @ 0x1800870DC
 * Callers:
 *     ??_EMPCExclusiveInputTarget@@OBI@EAAPEAXI@Z @ 0x180088380 (--_EMPCExclusiveInputTarget@@OBI@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

MPCExclusiveInputTarget *__fastcall MPCExclusiveInputTarget::`vector deleting destructor'(
        MPCExclusiveInputTarget *this,
        char a2)
{
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  *(_QWORD *)this = &MPCExclusiveInputTarget::`vftable'{for `IMPCInputTarget'};
  *((_QWORD *)this + 1) = &MPCExclusiveInputTarget::`vftable'{for `IFocusInputTarget'};
  *((_QWORD *)this + 2) = &MPCExclusiveInputTarget::`vftable'{for `IDCompInputTarget'};
  *((_QWORD *)this + 3) = &MPCExclusiveInputTarget::`vftable'{for `RefCountedObject'};
  v4 = (void *)*((_QWORD *)this + 9);
  if ( v4 )
    CloseHandle(v4);
  v5 = *((_QWORD *)this + 6);
  if ( v5 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 5);
  if ( v6 )
  {
    *((_QWORD *)this + 5) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_QWORD *)this + 3) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
