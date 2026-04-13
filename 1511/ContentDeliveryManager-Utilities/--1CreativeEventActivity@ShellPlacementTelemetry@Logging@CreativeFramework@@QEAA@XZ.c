/*
 * XREFs of ??1CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x18000BDB8
 * Callers:
 *     __lambda_31b30073c32c2d01143855768ac2b990_::operator()_::_1_::dtor$0 @ 0x180028B91 (__lambda_31b30073c32c2d01143855768ac2b990_--operator()_--_1_--dtor$0.c)
 * Callees:
 *     ?StopActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ @ 0x18000B9A0 (-StopActivity@CreativeEventActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@MEAAXXZ.c)
 *     ??1ActivityData@?$ActivityBase@$00$0IAAAAAAAAAAA@$04@wil@@QEAA@XZ @ 0x18000CFE0 (--1ActivityData@-$ActivityBase@$00$0IAAAAAAAAAAA@$04@wil@@QEAA@XZ.c)
 *     ?LockExclusive@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180014DEC (-LockExclusive@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage.c)
 */

void __fastcall CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::~CreativeEventActivity(
        CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity *this)
{
  bool v1; // zf
  char v3; // si
  volatile signed __int32 *v4; // rax
  char *v5; // rdi
  _DWORD *v6; // rdx
  int v7; // eax
  int v8; // r8d
  PSRWLOCK SRWLock[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_QWORD *)this + 39) == 0LL;
  *(_QWORD *)this = &CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::`vftable';
  v3 = 1;
  if ( v1 )
    goto LABEL_12;
  wil::ActivityBase<1,35184372088832,5>::LockExclusive(this, SRWLock);
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 39);
  if ( !v4 || *v4 != 1 )
  {
    v3 = 0;
    if ( v4 )
    {
      if ( _InterlockedExchangeAdd(v4, 0xFFFFFFFF) == 1 )
      {
        v5 = (char *)*((_QWORD *)this + 39);
        if ( v5 )
        {
          wil::ActivityBase<1,140737488355328,5>::ActivityData::~ActivityData(v5 + 8);
          operator delete(v5);
        }
      }
      *((_QWORD *)this + 39) = 0LL;
    }
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  if ( v3 )
  {
LABEL_12:
    v6 = (_DWORD *)*((_QWORD *)this + 6);
    if ( *v6 == 1 )
    {
      v7 = -2147024322;
      v8 = v6[20];
      if ( (int)v6[23] < 0 )
        v7 = v6[23];
      if ( v8 < 1 )
        __fastfail(7u);
      if ( (int)v6[21] >= 0 )
        v6[21] = v7;
      v6[20] = v8 - 1;
      CreativeFramework::Logging::ShellPlacementTelemetry::CreativeEventActivity::StopActivity(this);
    }
  }
  wil::ActivityBase<1,140737488355328,5>::~ActivityBase<1,140737488355328,5>(this);
}
