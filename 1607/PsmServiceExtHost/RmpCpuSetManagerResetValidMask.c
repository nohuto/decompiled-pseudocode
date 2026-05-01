/*
 * XREFs of RmpCpuSetManagerResetValidMask @ 0x18001DA50
 * Callers:
 *     ?RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800031C0 (-RmpCpuSetManagerAudioCpuWnfCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     RmpCpuSetManagerAllocateState @ 0x18001D268 (RmpCpuSetManagerAllocateState.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     ?RmpCpuSetManagerRebalance@@YAXPEAU_RM_CPU_SET_MANAGER@@K@Z @ 0x18001D560 (-RmpCpuSetManagerRebalance@@YAXPEAU_RM_CPU_SET_MANAGER@@K@Z.c)
 *     ?RmpCpuSetManagerAddCpuSetToAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@KK@Z @ 0x18001DCE0 (-RmpCpuSetManagerAddCpuSetToAllocation@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_ALLOCATION@@.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmpCpuSetManagerResetValidMask(struct _RM_CPU_SET_MANAGER *a1)
{
  char *v1; // rdi
  unsigned int i; // r14d
  int v4; // eax
  __int64 v5; // rcx
  unsigned int v6; // ebx
  __int64 j; // r9
  unsigned int v8; // ecx
  char v9; // al
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 *v12; // r12
  __int64 v13; // r15
  __int64 v14; // r13
  __int64 v15; // rbx
  __int64 v16; // r14
  char v17; // al
  const struct _TlgProvider_t *v18; // rcx
  const GUID *v19; // r8
  const GUID *v20; // r9
  unsigned __int64 v22; // r14
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  char v25; // r11
  unsigned __int64 v26; // rbx
  __int16 Size; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int Size_4; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v29; // [rsp+40h] [rbp-C8h] BYREF
  PVOID P; // [rsp+48h] [rbp-C0h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-B0h] BYREF
  __int16 *p_Size; // [rsp+78h] [rbp-90h]
  int v33; // [rsp+80h] [rbp-88h]
  int v34; // [rsp+84h] [rbp-84h]
  char *v35; // [rsp+88h] [rbp-80h]
  int v36; // [rsp+90h] [rbp-78h]
  int v37; // [rsp+94h] [rbp-74h]
  _QWORD v38[20]; // [rsp+98h] [rbp-70h] BYREF

  v1 = 0LL;
  P = 0LL;
  for ( i = 0; ; i = Size_4 )
  {
    v29 = 0LL;
    v4 = NtQuerySystemInformationEx(175LL, &v29, 8LL, v1, i, &Size_4);
    v6 = v4;
    if ( v4 >= 0 )
      break;
    if ( v4 != -1073741789 )
      goto LABEL_15;
    if ( v1 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
    P = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, Size_4);
    v1 = (char *)P;
    if ( !P )
    {
      v6 = -1073741801;
      goto LABEL_17;
    }
  }
  memset_0(v38, 0, sizeof(v38));
  for ( j = 0LL; (unsigned int)j < i; j = (unsigned int)(*(_DWORD *)&v1[j] + j) )
  {
    if ( !*(_DWORD *)&v1[j + 4] )
    {
      v5 = *(unsigned int *)&v1[j + 8];
      if ( (_DWORD)v5 != *((_DWORD *)a1 + 236) )
      {
        v8 = v5 - 256;
        v9 = v8;
        v10 = HIWORD(v8);
        v11 = (unsigned int)v10;
        v5 = v38[v10] | (1LL << v9);
        v38[v11] = v5;
      }
    }
  }
  v12 = v38;
  LOBYTE(Size) = 0;
  v13 = 0LL;
  v14 = a1 - (struct _RM_CPU_SET_MANAGER *)v38;
  v29 = a1 - (struct _RM_CPU_SET_MANAGER *)v38;
  do
  {
    v15 = *v12;
    v16 = *(__int64 *)((char *)v12 + v14 + 72);
    if ( *v12 == v16 )
      goto LABEL_10;
    v17 = 1;
    LOBYTE(Size) = 1;
    v22 = v15 & ~v16;
    if ( v22 )
    {
      do
      {
        v23 = *((_QWORD *)a1 + v13 + 9);
        _BitScanForward64(&v24, v22);
        _bittestandset64(&v23, (unsigned int)v24);
        *((_QWORD *)a1 + v13 + 9) = v23;
        RmpCpuSetManagerAddCpuSetToAllocation(a1, (struct _RM_CPU_SET_MANAGER *)((char *)a1 + 648), v13, v24);
        ++*((_DWORD *)a1 + 237);
        v22 &= ~(1LL << v25);
      }
      while ( v22 );
      v14 = v29;
      v17 = Size;
    }
    v26 = *(__int64 *)((char *)v12 + v14 + 72) & ~v15;
    if ( v26 )
    {
      do
      {
        _BitScanForward64((unsigned __int64 *)&v5, v26);
        *((_QWORD *)a1 + v13 + 9) &= ~(1LL << v5);
        v26 &= ~(1LL << v5);
        --*((_DWORD *)a1 + 237);
      }
      while ( v26 );
LABEL_10:
      v17 = Size;
    }
    v13 = (unsigned int)(v13 + 1);
    ++v12;
  }
  while ( (unsigned int)v13 < 0x14 );
  v1 = (char *)P;
  if ( v17 )
    RmpCpuSetManagerRebalance(a1, 1);
  v6 = 0;
LABEL_15:
  if ( v1 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
LABEL_17:
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v5, 1uLL) )
  {
    v34 = 0;
    v37 = 0;
    p_Size = &Size;
    v35 = (char *)a1 + 72;
    Size = 20;
    v33 = 2;
    v36 = 160;
    TlgWrite(v18, &unk_18004149A, v19, v20, 4u, &pData);
  }
  return v6;
}
