/*
 * XREFs of ?Destroy@?$ActivityBase@$0A@$0A@$04@wil@@IEAAXXZ @ 0x180023E60
 * Callers:
 *     _lambda_243e5818cdba31bdb76d77cbcbf5d1a4_::operator() @ 0x1800230B4 (_lambda_243e5818cdba31bdb76d77cbcbf5d1a4_--operator().c)
 *     _lambda_baa2029db22e8b1694aee1901adb8c93_::operator() @ 0x180023260 (_lambda_baa2029db22e8b1694aee1901adb8c93_--operator().c)
 * Callees:
 *     ??1StoredFailureInfo@wil@@QEAA@XZ @ 0x18000894C (--1StoredFailureInfo@wil@@QEAA@XZ.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?LockExclusive@?$ActivityBase@$0A@$0A@$04@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180024018 (-LockExclusive@-$ActivityBase@$0A@$0A@$04@wil@@AEAA-AV-$unique_any_t@V-$unique_storage@U-$resour.c)
 *     ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180024578 (--$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180025E28 (--3@YAXPEAX@Z.c)
 *     free @ 0x180026994 (free.c)
 */

void __fastcall wil::ActivityBase<0,0,5>::Destroy(_QWORD *a1)
{
  char v2; // si
  volatile signed __int32 *v3; // rax
  __int64 v4; // rbx
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  int v7; // eax
  int v8; // r8d
  PSRWLOCK SRWLock[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = 1;
  if ( !a1[39] )
    goto LABEL_16;
  wil::ActivityBase<0,0,5>::LockExclusive(a1, SRWLock);
  v3 = (volatile signed __int32 *)a1[39];
  if ( !v3 || *v3 != 1 )
  {
    v2 = 0;
    if ( v3 )
    {
      if ( _InterlockedExchangeAdd(v3, 0xFFFFFFFF) == 1 )
      {
        v4 = a1[39];
        if ( v4 )
        {
          wil::StoredFailureInfo::~StoredFailureInfo((wil::StoredFailureInfo *)(v4 + 96));
          if ( *(_BYTE *)(v4 + 80) )
          {
            free(*(void **)(v4 + 72));
            *(_BYTE *)(v4 + 80) = 0;
          }
          *(_QWORD *)(v4 + 72) = 0LL;
          if ( *(_DWORD *)(v4 + 8) == 1 )
          {
            v5 = *(_QWORD *)(v4 + 48);
            *(_DWORD *)(v4 + 8) = 2;
            _TlgWriteActivityAutoStop<0,5>(v5, v4 + 16);
          }
          *(_DWORD *)(v4 + 8) = 3;
          operator delete((void *)v4);
        }
      }
      a1[39] = 0LL;
    }
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  if ( v2 )
  {
LABEL_16:
    v6 = (_DWORD *)a1[6];
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
      (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
    }
  }
}
