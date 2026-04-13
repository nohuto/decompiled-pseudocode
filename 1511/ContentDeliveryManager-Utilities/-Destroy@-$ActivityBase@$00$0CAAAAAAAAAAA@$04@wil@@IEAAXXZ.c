/*
 * XREFs of ?Destroy@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@IEAAXXZ @ 0x180013ACC
 * Callers:
 *     ??1LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x18000C4C4 (--1LaunchUriActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ??1SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x18000CAC4 (--1SendAppServiceMessageActivity@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     _lambda_31b30073c32c2d01143855768ac2b990_::operator() @ 0x18000E860 (_lambda_31b30073c32c2d01143855768ac2b990_--operator().c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x18000FBE4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??1ActivityData@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ @ 0x18000D064 (--1ActivityData@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAA@XZ.c)
 *     ?LockExclusive@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180014DEC (-LockExclusive@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage.c)
 */

void __fastcall wil::ActivityBase<1,35184372088832,5>::Destroy(_QWORD *a1)
{
  char v2; // si
  volatile signed __int32 *v3; // rax
  void *v4; // rbx
  _DWORD *v5; // rdx
  int v6; // eax
  int v7; // r8d
  PSRWLOCK SRWLock[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 1;
  if ( !a1[39] )
    goto LABEL_12;
  wil::ActivityBase<1,35184372088832,5>::LockExclusive(a1, SRWLock);
  v3 = (volatile signed __int32 *)a1[39];
  if ( !v3 || *v3 != 1 )
  {
    v2 = 0;
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) == 1 )
      {
        v4 = (void *)a1[39];
        if ( v4 )
        {
          wil::ActivityBase<1,35184372088832,5>::ActivityData::~ActivityData((__int64)v4 + 8);
          operator delete(v4);
        }
      }
      a1[39] = 0LL;
    }
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  if ( v2 )
  {
LABEL_12:
    v5 = (_DWORD *)a1[6];
    if ( *v5 == 1 )
    {
      v6 = -2147024322;
      v7 = v5[20];
      if ( (int)v5[23] < 0 )
        v6 = v5[23];
      if ( v7 < 1 )
        __fastfail(7u);
      if ( (int)v5[21] >= 0 )
        v5[21] = v6;
      v5[20] = v7 - 1;
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}
