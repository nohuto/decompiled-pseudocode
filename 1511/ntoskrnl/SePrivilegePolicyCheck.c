/*
 * XREFs of SePrivilegePolicyCheck @ 0x14008DF10
 * Callers:
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x14009DDF0 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SePrivilegePolicyCheck(_DWORD *a1, _DWORD *a2, __int64 *a3, int a4, __int64 a5, char a6)
{
  unsigned int v6; // ebp
  char v7; // r13
  __int64 v8; // r14
  int v11; // edi
  char v12; // si
  char v13; // r14
  int v15; // r8d
  char v16; // r8
  int v17; // r8d
  _DWORD *PoolWithTag; // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // [rsp+30h] [rbp-68h] BYREF
  int v23; // [rsp+38h] [rbp-60h]

  v6 = 0;
  v7 = 0;
  LODWORD(v8) = a4;
  v11 = 0;
  if ( a3 )
  {
    v8 = *a3;
    if ( !*a3 )
      v8 = a3[2];
  }
  if ( (*a1 & 0x1000000) != 0 )
  {
    v22 = (__int64)SeSecurityPrivilege;
    v23 = 0;
    if ( !(unsigned __int8)SepPrivilegeCheck(v8, (unsigned int)&v22, 1, 1, a6) )
      return 3221225569LL;
    *a1 &= ~0x1000000u;
    v11 = v17;
    *a2 |= 0x1000000u;
    v7 = v17;
  }
  if ( (*a1 & 0x80000) == 0 )
    goto LABEL_4;
  v22 = SeTakeOwnershipPrivilege;
  v23 = 0;
  if ( (unsigned __int8)SepPrivilegeCheck(v8, (unsigned int)&v22, 1, 1, a6) )
  {
    *a1 &= ~0x80000u;
    ++v11;
    *a2 |= 0x80000u;
    v13 = v15;
    v12 = 0;
    goto LABEL_6;
  }
  v22 = (__int64)SeRelabelPrivilege;
  v23 = 0;
  if ( (unsigned __int8)SepPrivilegeCheck(v8, (unsigned int)&v22, v15, v15, a6) )
  {
    *a1 &= ~0x80000u;
    ++v11;
    *a2 |= 0x80000u;
    v12 = v16;
  }
  else
  {
LABEL_4:
    v12 = 0;
  }
  v13 = 0;
LABEL_6:
  if ( !v11 )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)(12 * (v11 - 1) + 20), 0x72506553u);
  *(_QWORD *)a5 = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = v11;
    *(_DWORD *)(*(_QWORD *)a5 + 4LL) = 0;
    if ( v13 )
    {
      v6 = 1;
      *(_QWORD *)(*(_QWORD *)a5 + 8LL) = SeTakeOwnershipPrivilege;
      *(_DWORD *)(*(_QWORD *)a5 + 16LL) = 0x80000000;
    }
    if ( v7 )
    {
      v19 = v6++;
      v20 = 12 * v19;
      *(LUID *)(v20 + *(_QWORD *)a5 + 8) = SeSecurityPrivilege;
      *(_DWORD *)(v20 + *(_QWORD *)a5 + 16) = 0x80000000;
    }
    if ( v12 )
    {
      v21 = 12LL * v6;
      *(LUID *)(v21 + *(_QWORD *)a5 + 8) = SeRelabelPrivilege;
      *(_DWORD *)(v21 + *(_QWORD *)a5 + 16) = 0x80000000;
    }
    return 0LL;
  }
  return 3221225626LL;
}
