/*
 * XREFs of ?Stop@?$ActivityBase@$0A@$0A@$04@wil@@QEAAXJ@Z @ 0x180023908
 * Callers:
 *     _lambda_4b113ca380de658e4b053f81fda3c9b1_::operator() @ 0x180022F84 (_lambda_4b113ca380de658e4b053f81fda3c9b1_--operator().c)
 *     _lambda_9e7d2ca8e92d49cfddf0abd925277e19_::operator() @ 0x180023130 (_lambda_9e7d2ca8e92d49cfddf0abd925277e19_--operator().c)
 * Callees:
 *     _TlgWrite @ 0x1800010DC (_TlgWrite.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@$0A@$0A@$04@wil@@QEAAXXZ @ 0x180023894 (-IgnoreCurrentThread@-$ActivityBase@$0A@$0A@$04@wil@@QEAAXXZ.c)
 *     ?LockExclusive@?$ActivityBase@$0A@$0A@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180023F18 (-LockExclusive@-$ActivityBase@$0A@$0A@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage@U-$resour.c)
 *     __security_check_cookie @ 0x180025A00 (__security_check_cookie.c)
 */

void __fastcall wil::ActivityBase<0,0,5>::Stop(_QWORD *a1)
{
  __int64 v2; // rdx
  int v3; // eax
  RTL_SRWLOCK *v4; // rcx
  int v5; // eax
  bool v6; // bl
  const struct _TlgProvider_t *v7; // rbx
  DWORD CurrentThreadId; // eax
  PSRWLOCK SRWLock; // [rsp+30h] [rbp-9h] BYREF
  int v10; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  int *v12; // [rsp+60h] [rbp+27h]
  int v13; // [rsp+68h] [rbp+2Fh]
  int v14; // [rsp+6Ch] [rbp+33h]
  PSRWLOCK *p_SRWLock; // [rsp+70h] [rbp+37h]
  int v16; // [rsp+78h] [rbp+3Fh]
  int v17; // [rsp+7Ch] [rbp+43h]

  wil::ActivityBase<0,0,5>::LockExclusive(a1, &SRWLock);
  v2 = a1[6];
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
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  }
  else
  {
    v7 = *(const struct _TlgProvider_t **)(a1[6] + 40LL);
    if ( *(_DWORD *)v7 > 5u )
    {
      v10 = 0;
      v14 = 0;
      v12 = &v10;
      v13 = 4;
      CurrentThreadId = GetCurrentThreadId();
      v17 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v16 = 4;
      TlgWrite(v7, &unk_180030AF5, (LPCGUID)(a1[6] + 8LL), 0LL, 4u, &pData);
    }
  }
  wil::ActivityBase<0,0,5>::IgnoreCurrentThread((__int64)a1);
}
