/*
 * XREFs of ?Stop@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXJ@Z @ 0x180013310
 * Callers:
 *     _lambda_31b30073c32c2d01143855768ac2b990_::operator() @ 0x18000E860 (_lambda_31b30073c32c2d01143855768ac2b990_--operator().c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x18000FBE4 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     _TlgWrite @ 0x1800011EC (_TlgWrite.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180008354 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180014DEC (-LockExclusive@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

int __fastcall wil::ActivityBase<1,35184372088832,5>::Stop(__int64 a1)
{
  __int64 v2; // rdx
  int v3; // eax
  RTL_SRWLOCK *v4; // rcx
  int v5; // eax
  bool v6; // bl
  __int64 *i; // rax
  const struct _TlgProvider_t *v8; // rbx
  DWORD CurrentThreadId; // eax
  __int64 **v10; // rbx
  void *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-9h] BYREF
  int v16; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  int *v18; // [rsp+60h] [rbp+27h]
  int v19; // [rsp+68h] [rbp+2Fh]
  int v20; // [rsp+6Ch] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+70h] [rbp+37h]
  int v22; // [rsp+78h] [rbp+3Fh]
  int v23; // [rsp+7Ch] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  wil::ActivityBase<1,35184372088832,5>::LockExclusive(a1, &SRWLock);
  v2 = *(_QWORD *)(a1 + 48);
  v3 = *(_DWORD *)(v2 + 80);
  if ( v3 < 1 )
    __fastfail(7u);
  if ( *(int *)(v2 + 84) >= 0 )
    *(_DWORD *)(v2 + 84) = 0;
  v4 = SRWLock;
  v5 = v3 - 1;
  *(_DWORD *)(v2 + 80) = v5;
  v6 = v5 == 0;
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  if ( v6 )
  {
    LODWORD(i) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    i = *(__int64 **)(a1 + 48);
    v8 = (const struct _TlgProvider_t *)i[5];
    if ( *(_DWORD *)v8 > 5u )
    {
      v16 = 0;
      v20 = 0;
      v18 = &v16;
      v19 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v23 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v22 = 4;
      LODWORD(i) = TlgWrite(v8, &unk_1800353C5, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
  {
    v10 = (__int64 **)(a1 + 8);
    if ( *(_DWORD *)(a1 + 32) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v11, v12, (const char *)0x8007029CLL);
    *(_DWORD *)(a1 + 32) = 0;
    for ( i = *v10; *i; *v10 = i )
    {
      v13 = **v10;
      if ( (__int64 **)v13 == v10 )
      {
        i = *(__int64 **)(a1 + 24);
        **v10 = (__int64)i;
        break;
      }
      i = (__int64 *)(v13 + 16);
    }
    *v10 = 0LL;
  }
  return (int)i;
}
