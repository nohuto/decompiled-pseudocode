/*
 * XREFs of SePrivilegePolicyCheck @ 0x14008D030
 * Callers:
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x14000F130 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SePrivilegePolicyCheck(_DWORD *a1, _DWORD *a2, __int64 *a3, __int64 a4, __int64 a5, char a6)
{
  char v6; // r13
  POOL_TYPE v7; // r15d
  POOL_TYPE v8; // ebx
  POOL_TYPE v12; // r8d
  char v13; // r14
  char v14; // r12
  POOL_TYPE v16; // esi
  _DWORD *PoolWithTag; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // [rsp+38h] [rbp-60h] BYREF
  int v22; // [rsp+40h] [rbp-58h]

  v6 = 0;
  v7 = NonPagedPool;
  v8 = NonPagedPool;
  if ( a3 )
  {
    a4 = *a3;
    if ( !*a3 )
      a4 = a3[2];
  }
  v12 = PagedPool;
  if ( (*a1 & 0x1000000) != 0 )
  {
    v22 = 0;
    v21 = (__int64)SeSecurityPrivilege;
    if ( !SepPrivilegeCheck(a4, (__int64)&v21, 1u, 1, a6) )
      return 3221225569LL;
    *a1 &= ~0x1000000u;
    v8 = v12;
    *a2 |= 0x1000000u;
    v6 = v12;
  }
  if ( (*a1 & 0x80000) == 0 )
    goto LABEL_4;
  v22 = 0;
  v21 = SeTakeOwnershipPrivilege;
  if ( SepPrivilegeCheck(a4, (__int64)&v21, v12, v12, a6) )
  {
    *a1 &= ~0x80000u;
    v8 += v12;
    *a2 |= 0x80000u;
    v14 = v12;
    v13 = 0;
    goto LABEL_5;
  }
  v22 = 0;
  v21 = (__int64)SeRelabelPrivilege;
  if ( SepPrivilegeCheck(a4, (__int64)&v21, v12, v12, a6) )
  {
    *a1 &= ~0x80000u;
    v8 += v12;
    *a2 |= 0x80000u;
    v13 = v12;
    v14 = 0;
  }
  else
  {
LABEL_4:
    v13 = 0;
    v14 = 0;
  }
LABEL_5:
  if ( v8 == NonPagedPool )
    return 0LL;
  v16 = v12;
  PoolWithTag = ExAllocatePoolWithTag(v12, (unsigned int)(12 * (v8 - 1) + 20), 0x72506553u);
  *(_QWORD *)a5 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = v8;
    *(_DWORD *)(*(_QWORD *)a5 + 4LL) = 0;
    if ( v14 )
    {
      v7 = v16;
      *(_QWORD *)(*(_QWORD *)a5 + 8LL) = SeTakeOwnershipPrivilege;
      *(_DWORD *)(*(_QWORD *)a5 + 16LL) = 0x80000000;
    }
    if ( v6 )
    {
      v18 = (unsigned int)v7;
      v7 += v16;
      v19 = 3 * v18;
      *(LUID *)(*(_QWORD *)a5 + 4 * v19 + 8) = SeSecurityPrivilege;
      *(_DWORD *)(*(_QWORD *)a5 + 4 * v19 + 16) = 0x80000000;
    }
    if ( v13 )
    {
      v20 = 3LL * (unsigned int)v7;
      *(LUID *)(*(_QWORD *)a5 + 4 * v20 + 8) = SeRelabelPrivilege;
      *(_DWORD *)(*(_QWORD *)a5 + 4 * v20 + 16) = 0x80000000;
    }
    return 0LL;
  }
  return 3221225626LL;
}
