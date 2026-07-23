/*
 * XREFs of PsSetCpuQuotaInformation @ 0x14020EBA4
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeSetSchedulingGroupWeights @ 0x1400A4D04 (KeSetSchedulingGroupWeights.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     MmGetSessionSchedulingGroup @ 0x140581F48 (MmGetSessionSchedulingGroup.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PsSetCpuQuotaInformation(unsigned __int64 a1, unsigned int a2, KPROCESSOR_MODE a3)
{
  __int64 v4; // rbx
  __int64 v7; // rbx
  _QWORD *PoolWithQuotaTag; // rax
  _QWORD *v9; // r14
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 i; // r8
  int v13; // eax
  NTSTATUS v14; // edi
  __int64 j; // rsi
  __int64 SessionSchedulingGroup; // rax
  PVOID Object; // [rsp+38h] [rbp-30h] BYREF

  v4 = a2;
  if ( !PsCpuFairShareEnabled )
    return 3221225473LL;
  if ( a2 < 0x10 || (a2 & 0xF) != 0 )
    return 3221225476LL;
  if ( a3 )
  {
    if ( !SeSinglePrivilegeCheck(SeIncreaseQuotaPrivilege, a3) )
      return 3221225569LL;
    if ( a3 )
    {
      if ( (a1 & 7) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a1 + v4 > 0x7FFFFFFF0000LL || a1 + v4 < a1 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  v7 = (unsigned int)v4 >> 4;
  if ( (unsigned __int64)(24 * v7) > 0xFFFFFFFF )
    return 3221225621LL;
  PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, (unsigned int)(24 * v7), 0x63537350u);
  v9 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return 3221225626LL;
  v10 = (__int64)&PoolWithQuotaTag[v7];
  v11 = v10 + 8 * v7;
  for ( i = 0LL; (unsigned int)i < (unsigned int)v7; i = (unsigned int)(i + 1) )
  {
    v9[i] = *(_QWORD *)(a1 + 16LL * (unsigned int)i);
    *(_DWORD *)(v11 + 8 * i + 4) = 0;
    *(_DWORD *)(v11 + 8 * i + 4) = 0;
    v13 = *(_DWORD *)(a1 + 16LL * (unsigned int)i + 8);
    *(_DWORD *)(v11 + 8 * i) = v13;
    if ( (unsigned __int16)(v13 - 1) > 8u )
    {
      v14 = -1073740712;
      goto LABEL_33;
    }
  }
  v14 = 0;
  for ( j = 0LL; (unsigned int)j < (unsigned int)v7; j = (unsigned int)(j + 1) )
  {
    v14 = ObReferenceObjectByHandle((HANDLE)v9[j], 2u, MmSessionObjectType, a3, &Object, 0LL);
    v9[j] = Object;
    if ( v14 < 0 )
      goto LABEL_31;
    SessionSchedulingGroup = MmGetSessionSchedulingGroup();
    *(_QWORD *)(v10 + 8 * j) = SessionSchedulingGroup;
    if ( !SessionSchedulingGroup )
    {
      v14 = -1073740715;
      goto LABEL_31;
    }
  }
  KeSetSchedulingGroupWeights(v7, v10, v10 + 8 * v7);
LABEL_31:
  while ( (_DWORD)j )
  {
    j = (unsigned int)(j - 1);
    ObfDereferenceObjectWithTag((PVOID)v9[j], 0x746C6644u);
  }
LABEL_33:
  ExFreePoolWithTag(v9, 0x63537350u);
  return (unsigned int)v14;
}
