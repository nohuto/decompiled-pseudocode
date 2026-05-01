/*
 * XREFs of RmpActivityHostGetStateDigest @ 0x18000CD68
 * Callers:
 *     RmpActivityHostQueryCategory @ 0x180005F24 (RmpActivityHostQueryCategory.c)
 *     RmpPolicyActivityHostIsValidEmptyTarget @ 0x180005F6C (RmpPolicyActivityHostIsValidEmptyTarget.c)
 *     RmpActivityHostIsRunnable @ 0x18003BD38 (RmpActivityHostIsRunnable.c)
 *     ?RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z @ 0x18003C5A0 (-RmpMemoryMonitorActiveLowPriFilterCallback@@YAEPEAU_RM_ACTIVITY_HOST@@PEAX@Z.c)
 *     ?RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18003D298 (-RmpMemoryMonitorIsLargeAppTerminationTarget@@YAEPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ACTIVITY_HOST_ME.c)
 * Callees:
 *     RmpResourceSetIsCommitSaveEligible @ 0x180008178 (RmpResourceSetIsCommitSaveEligible.c)
 *     RmpActivityHostEnumerateResourceSetBegin @ 0x18000AD70 (RmpActivityHostEnumerateResourceSetBegin.c)
 *     ?IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ @ 0x18000AE28 (-IsFrozen@_ResourceSetInfo@ExecutionModel@@QEBA_NXZ.c)
 *     RmpActivityHostEnumerateResourceSetGetNext @ 0x18000D7F0 (RmpActivityHostEnumerateResourceSetGetNext.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall RmpActivityHostGetStateDigest(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 i; // rax
  __int64 Next; // rax
  ExecutionModel::_ResourceSetInfo *v5; // r9
  int *v6; // r9
  __int64 v7; // r10
  ExecutionModel::_ResourceSetInfo *v9; // r9
  __int64 v10; // r10
  int v11; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v12[4]; // [rsp+38h] [rbp-50h] BYREF

  v1 = 0;
  if ( *(_DWORD *)(a1 + 40) )
  {
    v1 = 2 * (*(_BYTE *)(a1 + 772) & 0x40);
  }
  else if ( (*(int (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, int *))(*((_QWORD *)RmSvcGlobals + 10)
                                                                                   + 192LL))(
              a1 + 512,
              *(unsigned int *)(a1 + 580),
              a1 + 48,
              *(unsigned int *)(a1 + 584),
              *(_QWORD *)(a1 + 24),
              &v11) >= 0
         && v11 == 7 )
  {
    v1 = 128;
  }
  RmpActivityHostEnumerateResourceSetBegin(a1, 0, v12);
  for ( i = RmpActivityHostEnumerateResourceSetGetNext(v12); i; i = RmpActivityHostEnumerateResourceSetGetNext(v12) )
  {
    if ( *(_DWORD *)(i + 1352) == 2 || (*(_BYTE *)(i + 1912) & 0x10) != 0 )
    {
      if ( !RmpResourceSetIsCommitSaveEligible((ExecutionModel::_ResourceSetInfo *)(i + 1408)) )
        v1 |= 0x40u;
      if ( (*((_BYTE *)v9 + 26) & 4) != 0 || *(_DWORD *)v9 <= 0x27u && _bittest64(&v10, *(int *)v9) )
      {
        v1 |= 5u;
      }
      else if ( !ExecutionModel::_ResourceSetInfo::IsFrozen(v9) )
      {
        v1 |= 3u;
      }
    }
  }
  RmpActivityHostEnumerateResourceSetBegin(a1, 1, v12);
  while ( 1 )
  {
    Next = RmpActivityHostEnumerateResourceSetGetNext(v12);
    if ( !Next )
      break;
    if ( !RmpResourceSetIsCommitSaveEligible((ExecutionModel::_ResourceSetInfo *)(Next + 1408)) )
      v1 |= 0x40u;
    if ( ExecutionModel::_ResourceSetInfo::IsFrozen(v5) )
    {
      v1 |= 0x20u;
    }
    else if ( (*((_BYTE *)v6 + 26) & 4) != 0 || (unsigned int)*v6 <= 0x27 && _bittest64(&v7, *v6) )
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
