/*
 * XREFs of PiControlQueryConflictList @ 0x140694AD8
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404379BC (PiControlMakeUserModeCallersCopy.c)
 *     PpDevNodeUnlockTree @ 0x1404E1F18 (PpDevNodeUnlockTree.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1404E1F9C (PnpDeviceObjectFromDeviceInstance.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 *     IopQueryConflictList @ 0x1406979A0 (IopQueryConflictList.c)
 */

__int64 __fastcall PiControlQueryConflictList(__int64 a1, unsigned __int16 *a2, __int64 a3, char a4)
{
  void **v4; // r15
  _DWORD *v7; // rdx
  unsigned int v8; // r8d
  void *v9; // rsi
  void *v10; // rbp
  int UserModeCallersCopy; // edi
  SIZE_T v12; // rdi
  PVOID PoolWithQuotaTag; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _QWORD *v17; // rax
  int v18; // r8d
  __int64 v19; // rax
  int v20; // eax
  __int16 v22; // [rsp+30h] [rbp-28h] BYREF
  __int16 v23; // [rsp+32h] [rbp-26h]
  PVOID v24; // [rsp+38h] [rbp-20h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  v4 = (void **)(a2 + 16);
  if ( !*((_QWORD *)a2 + 4) || *((_DWORD *)a2 + 10) < 0x20u )
    return 3221225507LL;
  v7 = (_DWORD *)*((_QWORD *)a2 + 2);
  if ( !v7 )
    return 3221225485LL;
  v8 = *((_DWORD *)a2 + 6);
  if ( v8 < 0x28 )
    return 3221225485LL;
  if ( *v7 != 1 )
    return 3221225485LL;
  if ( v7[4] != 1 )
    return 3221225485LL;
  v23 = *a2;
  v22 = v23;
  if ( (unsigned __int16)(v23 - 1) > 0x18Fu || (v23 & 1) != 0 )
    return 3221225485LL;
  P = 0LL;
  v9 = 0LL;
  v24 = 0LL;
  v10 = 0LL;
  UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&P, v7, v8, 1u, a4, 1);
  if ( UserModeCallersCopy >= 0 )
  {
    if ( !*((_DWORD *)a2 + 10) )
      goto LABEL_16;
    if ( !a4 )
    {
      v9 = *v4;
      goto LABEL_16;
    }
    v12 = *((unsigned int *)a2 + 10);
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v12, 0x20207050u);
    v9 = PoolWithQuotaTag;
    if ( PoolWithQuotaTag )
    {
      memset(PoolWithQuotaTag, 0, v12);
LABEL_16:
      UserModeCallersCopy = PiControlMakeUserModeCallersCopy(&v24, *((void **)a2 + 1), *a2, 2u, a4, 1);
      if ( UserModeCallersCopy >= 0 )
      {
        UserModeCallersCopy = -1073741810;
        PpDevNodeLockTree(1);
        v17 = PnpDeviceObjectFromDeviceInstance((__int64)&v22, v14, v15, v16);
        v10 = v17;
        if ( v17 )
        {
          v19 = *(_QWORD *)(v17[39] + 40LL);
          if ( v19 )
          {
            if ( v19 != IopRootDeviceNode && (unsigned int)(*(_DWORD *)(v19 + 300) - 787) > 1 )
            {
              UserModeCallersCopy = IopQueryConflictList((_DWORD)v10, (_DWORD)P, v18, (_DWORD)v9, *((_DWORD *)a2 + 10));
              v20 = PiControlMakeUserModeCallersCopy(v4, v9, *((_DWORD *)a2 + 10), 1u, a4, 0);
              if ( v20 < 0 )
                UserModeCallersCopy = v20;
            }
          }
        }
        PpDevNodeUnlockTree(1);
      }
      goto LABEL_24;
    }
    UserModeCallersCopy = -1073741670;
  }
LABEL_24:
  if ( a4 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v9 )
      ExFreePoolWithTag(v9, 0);
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
  }
  if ( v10 )
    ObfDereferenceObject(v10);
  *((_DWORD *)a2 + 12) = UserModeCallersCopy;
  return (unsigned int)UserModeCallersCopy;
}
