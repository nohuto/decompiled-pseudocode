/*
 * XREFs of RmpActivityHostGetStateDigest @ 0x18000AB60
 * Callers:
 *     RmpActivityHostQueryCategory @ 0x180005ECC (RmpActivityHostQueryCategory.c)
 *     RmpPolicyComputeDesiredState @ 0x180009058 (RmpPolicyComputeDesiredState.c)
 *     RmpActivityHostIsKillable @ 0x180040FC4 (RmpActivityHostIsKillable.c)
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x18004162C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x1800417C0 (-RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 * Callees:
 *     RmpResourceSetIsCommitSaveEligible @ 0x180006670 (RmpResourceSetIsCommitSaveEligible.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000919C (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000B200 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall RmpActivityHostGetStateDigest(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rcx
  __int64 Next; // rax
  __int64 i; // rsi
  bool v6; // zf
  __int64 v7; // rax
  __int64 j; // rax
  char *v9; // rdx
  int *v10; // rdx
  unsigned __int64 v12; // rax
  ExecutionModel::_ResourceSetInfo *v13; // r9
  unsigned __int64 v14; // rax
  int v15; // [rsp+30h] [rbp-58h] BYREF
  __int64 v16; // [rsp+38h] [rbp-50h] BYREF
  __int64 v17; // [rsp+40h] [rbp-48h]
  __int64 v18; // [rsp+48h] [rbp-40h]
  int v19; // [rsp+50h] [rbp-38h]

  v1 = 0;
  if ( *(_DWORD *)(a1 + 40) )
  {
    v1 = 2 * (*(_BYTE *)(a1 + 780) & 0x40);
  }
  else if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, int *))(*((_QWORD *)RmSvcGlobals + 10)
                                                                                   + 192LL))(
              a1 + 512,
              *(unsigned int *)(a1 + 580),
              a1 + 48,
              *(unsigned int *)(a1 + 584),
              *(_QWORD *)(a1 + 24),
              &v15) >= 0
         && v15 == 7 )
  {
    v1 = 128;
  }
  memset_0(&v16, 0, 0x20uLL);
  v16 = a1;
  v3 = *(_QWORD *)(a1 + 608);
  v19 = 0;
  if ( v3 == a1 + 608 )
    v17 = 0LL;
  else
    v17 = v3 - 1384;
  Next = RmpActivityHostEnumerateResourceSetGetNext(&v16);
  for ( i = 0x8800001000LL; Next; Next = RmpActivityHostEnumerateResourceSetGetNext(&v16) )
  {
    if ( *(_DWORD *)(Next + 1352) == 2 || (*(_BYTE *)(Next + 1920) & 0x10) != 0 )
    {
      if ( !RmpResourceSetIsCommitSaveEligible((ExecutionModel::_ResourceSetInfo *)(Next + 1408)) )
        v1 |= 0x40u;
      if ( (*((_BYTE *)v13 + 26) & 4) != 0 || (v14 = *(int *)v13, (unsigned int)v14 <= 0x27) && _bittest64(&i, v14) )
      {
        v1 |= 5u;
      }
      else if ( !ExecutionModel::_ResourceSetInfo::IsFrozen(v13) )
      {
        v1 |= 3u;
      }
    }
  }
  memset_0(&v16, 0, 0x20uLL);
  v6 = *(_DWORD *)(a1 + 40) == 1;
  v7 = *(_QWORD *)(a1 + 600);
  v16 = a1;
  v19 = 1;
  if ( v6 )
    v17 = v7;
  else
    v18 = *(_QWORD *)(v7 + 24);
  for ( j = RmpActivityHostEnumerateResourceSetGetNext(&v16); j; j = RmpActivityHostEnumerateResourceSetGetNext(&v16) )
  {
    if ( !ExecutionModel::_ResourceSetInfo::IsFrozen((ExecutionModel::_ResourceSetInfo *)(j + 1408)) || v9[26] < 0 )
      v1 |= 0x40u;
    if ( ExecutionModel::_ResourceSetInfo::IsFrozen((ExecutionModel::_ResourceSetInfo *)v9) )
    {
      v1 |= 0x20u;
    }
    else if ( (*((_BYTE *)v10 + 26) & 4) != 0 || (v12 = *v10, (unsigned int)v12 <= 0x27) && _bittest64(&i, v12) )
    {
      v1 |= 0x18u;
    }
    else
    {
      v1 |= 8u;
    }
  }
  return v1;
}
