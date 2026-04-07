/*
 * XREFs of ?Destroy@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@IEAAXXZ @ 0x18006E0D8
 * Callers:
 *     ??1IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x18006DBB4 (--1IconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 *     ??1ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ @ 0x180070354 (--1ImmersiveIconicBitmapReceived@WindowFrameLoggingTelemetry@@QEAA@XZ.c)
 * Callees:
 *     ?LockExclusive@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18006E8C4 (-LockExclusive@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage.c)
 *     ?ReportStopActivity@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAAXJ@Z @ 0x18006F44C (-ReportStopActivity@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAAXJ@Z.c)
 *     ?SetStopResult@ActivityData@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA_NJPEAJ@Z @ 0x18006FAC8 (-SetStopResult@ActivityData@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA_NJPEAJ@Z.c)
 *     ?reset@?$shared_object@VActivityData@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@@details@wil@@QEAAXXZ @ 0x180070090 (-reset@-$shared_object@VActivityData@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@@details@wil@@QEA.c)
 */

void __fastcall wil::ActivityBase<1,35184372088832,5>::Destroy(__int64 a1)
{
  _QWORD *v1; // rdi
  char v3; // si
  _DWORD *v4; // rcx
  __int64 v5; // rdx
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  v1 = (_QWORD *)(a1 + 312);
  v3 = 1;
  if ( !*(_QWORD *)(a1 + 312) )
    goto LABEL_8;
  wil::ActivityBase<1,35184372088832,5>::LockExclusive(a1, &SRWLock);
  if ( !*v1 || *(_DWORD *)*v1 != 1 )
  {
    v3 = 0;
    wil::details::shared_object<wil::ActivityBase<1,35184372088832,5>::ActivityData>::reset(v1);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v3 )
  {
LABEL_8:
    v4 = *(_DWORD **)(a1 + 48);
    if ( *v4 == 1 )
    {
      v5 = 2147942974LL;
      if ( (int)v4[23] < 0 )
        v5 = (unsigned int)v4[23];
      wil::ActivityBase<1,35184372088832,5>::ActivityData::SetStopResult(v4, v5, &SRWLock);
      wil::ActivityBase<1,35184372088832,5>::ReportStopActivity(a1);
    }
  }
}
