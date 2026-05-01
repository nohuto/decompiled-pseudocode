/*
 * XREFs of ?Stop@?$ActivityBase@$0A@$0A@$04@wil@@QEAAXJ@Z @ 0x1800239BC
 * Callers:
 *     _lambda_243e5818cdba31bdb76d77cbcbf5d1a4_::operator() @ 0x1800230B4 (_lambda_243e5818cdba31bdb76d77cbcbf5d1a4_--operator().c)
 *     _lambda_baa2029db22e8b1694aee1901adb8c93_::operator() @ 0x180023260 (_lambda_baa2029db22e8b1694aee1901adb8c93_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x1800010DC (_TlgWrite.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?LockExclusive@?$ActivityBase@$0A@$0A@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180024018 (-LockExclusive@-$ActivityBase@$0A@$0A@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage@U-$resour.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180024D9C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180025B30 (__security_check_cookie.c)
 */

int __fastcall wil::ActivityBase<0,0,5>::Stop(__int64 a1)
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
  unsigned int v12; // r8d
  __int64 v13; // rax
  UINT32 cData; // [rsp+20h] [rbp-19h]
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-9h] BYREF
  int v17; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  int *v19; // [rsp+60h] [rbp+27h]
  int v20; // [rsp+68h] [rbp+2Fh]
  int v21; // [rsp+6Ch] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+70h] [rbp+37h]
  int v23; // [rsp+78h] [rbp+3Fh]
  int v24; // [rsp+7Ch] [rbp+43h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+5Fh]

  wil::ActivityBase<0,0,5>::LockExclusive(a1, &SRWLock);
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
      v17 = 0;
      v21 = 0;
      v19 = &v17;
      v20 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v24 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v23 = 4;
      LODWORD(i) = TlgWrite(v8, &unk_180030985, (LPCGUID)(*(_QWORD *)(a1 + 48) + 8LL), 0LL, 4u, &pData);
    }
  }
  if ( *(_DWORD *)(a1 + 32) )
  {
    v10 = (__int64 **)(a1 + 8);
    if ( *(_DWORD *)(a1 + 32) != GetCurrentThreadId() )
      wil::details::in1diag3::Log_Hr(retaddr, v11, v12, (const char *)0x8007029CLL, cData);
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
