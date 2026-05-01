/*
 * XREFs of ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001F43C
 * Callers:
 *     ?RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18001B5D0 (-RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001F1F4 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001F6DC (-RmpCpuSetManagerApplyAllPolicyChanges@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001F878 (-RmpCpuSetManagerGetSystemReserveTarget@@YAKPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     ?RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002FC54 (-RmpCpuSetManagerInvalidateAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@@.c)
 *     ?RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x1800304DC (-RmpCpuSetManagerSweepInvalidAllocations@@YAXPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 *     ?RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180033A1C (-RmpObjectTableEnumerationBegin@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTE.c)
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180033A60 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 */

__int64 __fastcall RmpCpuSetManagerResetValidMask(struct _RM_CPU_SET_MANAGER *a1)
{
  char *v2; // rdi
  unsigned int i; // r14d
  int v4; // eax
  const struct _TlgProvider_t *v5; // rcx
  unsigned int v6; // esi
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 j; // r9
  int v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // r12d
  _QWORD *v14; // r15
  __int64 v15; // rsi
  unsigned int SystemReserveTarget; // r14d
  const struct _TlgProvider_t *v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  __int64 v21; // r14
  int v22; // eax
  __int64 v23; // rsi
  __int64 v24; // rcx
  struct _RM_CPU_SET_ALLOCATION *Next; // rax
  struct _RM_OBJECT_HEADER *v26; // rsi
  int v27; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD Size[3]; // [rsp+34h] [rbp-CCh] BYREF
  __int64 v29; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v30[5]; // [rsp+48h] [rbp-B8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+70h] [rbp-90h] BYREF
  int *v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  char *v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  _QWORD v36[20]; // [rsp+C0h] [rbp-40h] BYREF

  v2 = 0LL;
  *(_QWORD *)&Size[1] = 0LL;
  for ( i = 0; ; i = Size[0] )
  {
    v29 = 0LL;
    v4 = NtQuerySystemInformationEx(175LL, &v29, 8LL, v2, i, Size);
    v6 = v4;
    if ( v4 >= 0 )
      break;
    if ( v4 != -1073741789 )
      goto LABEL_15;
    if ( v2 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    *(_QWORD *)&Size[1] = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size[0]);
    v2 = *(char **)&Size[1];
    if ( !*(_QWORD *)&Size[1] )
    {
      v6 = -1073741801;
      goto LABEL_17;
    }
  }
  memset_0(v36, 0, sizeof(v36));
  for ( j = 0LL; (unsigned int)j < i; j = (unsigned int)(*(_DWORD *)&v2[(unsigned int)j] + j) )
  {
    v9 = (unsigned int)j;
    if ( !*(_DWORD *)&v2[(unsigned int)j + 4] )
    {
      v11 = *(_DWORD *)&v2[(unsigned int)j + 8];
      if ( v11 != *((_DWORD *)a1 + 108) )
      {
        v12 = v11 - 256;
        v7 = (unsigned __int64)v12 >> 16;
        v8 = v36[v7] | (1LL << v12);
        v36[v7] = v8;
      }
    }
  }
  LOBYTE(v8) = 0;
  v13 = 0;
  v27 = v8;
  v14 = (_QWORD *)((char *)a1 + 88);
  do
  {
    v15 = *(_QWORD *)((char *)v14 + (char *)v36 - (char *)a1 - 88);
    if ( v15 != *v14 )
    {
      v21 = v15 & ~*v14;
      if ( v21 )
      {
        v22 = RtlNumberOfSetBitsUlongPtr(v21, v7, v9, j);
        *((_QWORD *)a1 + v13 + 11) |= v21;
        *((_DWORD *)a1 + 109) += v22;
        *((_QWORD *)a1 + v13 + 31) |= v21;
        *((_DWORD *)a1 + 110) += v22;
        *((_DWORD *)a1 + 112) |= 1u;
        LOBYTE(v8) = v27;
      }
      v23 = *v14 & ~v15;
      if ( v23 )
      {
        LODWORD(v8) = (unsigned __int8)v8;
        if ( (~v14[20] & v23) != 0 )
          LODWORD(v8) = 1;
        v27 = v8;
        *((_QWORD *)a1 + v13 + 11) &= ~v23;
        *((_DWORD *)a1 + 109) -= RtlNumberOfSetBitsUlongPtr(v23, v7, v9, j);
        v24 = v23 & *((_QWORD *)a1 + v13 + 31);
        if ( v24 )
        {
          *((_QWORD *)a1 + v13 + 31) &= ~v24;
          *((_DWORD *)a1 + 110) -= RtlNumberOfSetBitsUlongPtr(v24, v7, v9, j);
        }
        *((_DWORD *)a1 + 112) |= 1u;
      }
    }
    LOBYTE(v8) = v27;
    ++v13;
    ++v14;
  }
  while ( v13 < 0x14 );
  v2 = *(char **)&Size[1];
  if ( (_BYTE)v27 )
    RmpCpuSetManagerSweepInvalidAllocations(a1);
  SystemReserveTarget = RmpCpuSetManagerGetSystemReserveTarget(a1);
  if ( SystemReserveTarget > *((_DWORD *)a1 + 110) )
  {
    RmpObjectTableEnumerationBegin(
      (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 24),
      (struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v30);
    while ( 1 )
    {
      Next = RmpObjectTableEnumerationGetNext((struct _RM_OBJECT_TABLE_ENUMERATION_CONTEXT *)v30);
      v26 = Next;
      if ( !Next )
        break;
      RmpCpuSetManagerInvalidateAllocation(a1, Next);
      RmpObjectRelease(v26);
    }
    RtlReleaseSRWLockShared(v30[0] + 16LL);
  }
  *((_DWORD *)a1 + 111) = SystemReserveTarget;
  RmpCpuSetManagerApplyAllPolicyChanges(a1);
  v6 = 0;
LABEL_15:
  if ( v2 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
LABEL_17:
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v5, 1uLL) )
  {
    LOWORD(v27) = 20;
    v32 = &v27;
    v34 = (char *)a1 + 88;
    v33 = 2LL;
    v35 = 160LL;
    TlgWrite(v17, &unk_180041D32, v18, v19, 4u, &pData);
  }
  return v6;
}
