/*
 * XREFs of ?IdentifyCpuSets@@YAJPEAUCpuSet@@PEAUCpuGroupMask@@@Z @ 0x140027BC8
 * Callers:
 *     ?AddingResource@CpuManager@@EEAAJXZ @ 0x140027620 (-AddingResource@CpuManager@@EEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     memset_0 @ 0x1400190F4 (memset_0.c)
 */

NTSTATUS __fastcall IdentifyCpuSets(struct CpuSet *a1, struct CpuGroupMask *a2)
{
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rax
  NTSTATUS result; // eax
  DWORD v14; // ebx
  HANDLE ProcessHeap; // rax
  struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *v16; // rax
  unsigned __int16 *v17; // rbx
  BOOL LogicalProcessorInformation; // r12d
  int v19; // ecx
  char v20; // r11
  unsigned int v21; // r8d
  __int128 v22; // xmm0
  __int64 v23; // r15
  __int64 v24; // r10
  __int64 v25; // rdx
  int v26; // ecx
  __int64 v27; // r14
  HANDLE v28; // rax
  DWORD ReturnedLength[4]; // [rsp+20h] [rbp-E0h] BYREF
  __int128 v30; // [rsp+30h] [rbp-D0h]
  __int128 v31; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v32; // [rsp+50h] [rbp-B0h]
  __int128 v33; // [rsp+60h] [rbp-A0h]
  __int128 v34; // [rsp+70h] [rbp-90h]
  __int128 v35; // [rsp+80h] [rbp-80h]
  __int128 v36; // [rsp+90h] [rbp-70h]
  __int128 v37; // [rsp+A0h] [rbp-60h]
  __int128 v38; // [rsp+B0h] [rbp-50h]
  __int128 v39; // [rsp+C0h] [rbp-40h]
  __int128 v40; // [rsp+D0h] [rbp-30h]
  __int64 v41; // [rsp+E0h] [rbp-20h]
  _OWORD SystemInformation[10]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v43; // [rsp+190h] [rbp+90h]

  LODWORD(v31) = 0;
  memset_0((char *)&v31 + 8, 0, 0xA0uLL);
  LOWORD(v30) = 0;
  v4 = v32;
  *(_OWORD *)a1 = v31;
  v5 = v33;
  *((_OWORD *)a1 + 1) = v4;
  v6 = v34;
  *((_OWORD *)a1 + 2) = v5;
  v7 = v35;
  *((_OWORD *)a1 + 3) = v6;
  v8 = v36;
  *((_OWORD *)a1 + 4) = v7;
  v9 = v37;
  *((_OWORD *)a1 + 5) = v8;
  v10 = v39;
  *((_OWORD *)a1 + 6) = v9;
  *((_OWORD *)a1 + 7) = v38;
  v11 = v40;
  v12 = v41;
  *((_OWORD *)a1 + 8) = v10;
  LOWORD(v31) = 0;
  *((_OWORD *)a1 + 9) = v11;
  *((_QWORD *)a1 + 20) = v12;
  *((_QWORD *)&v30 + 1) = 0LL;
  *(_OWORD *)a2 = (unsigned __int64)v30;
  memset_0((char *)&v31 + 2, 0, 0xA6uLL);
  SystemInformation[0] = v31;
  SystemInformation[1] = v32;
  SystemInformation[2] = v33;
  SystemInformation[3] = v34;
  SystemInformation[4] = v35;
  SystemInformation[5] = v36;
  SystemInformation[6] = v37;
  SystemInformation[7] = v38;
  SystemInformation[8] = v39;
  SystemInformation[9] = v40;
  v43 = v41;
  result = NtQuerySystemInformation(SystemLookasideInformation|0x80, SystemInformation, 0xA8u, 0LL);
  if ( result < 0 )
    return result;
  ReturnedLength[0] = 0;
  GetLogicalProcessorInformationEx(RelationGroup, 0LL, ReturnedLength);
  v14 = ReturnedLength[0];
  ProcessHeap = GetProcessHeap();
  v16 = (struct _SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX *)HeapAlloc(ProcessHeap, 8u, v14);
  v17 = (unsigned __int16 *)v16;
  if ( !v16 )
    return -1073741670;
  LogicalProcessorInformation = GetLogicalProcessorInformationEx(RelationGroup, v16, ReturnedLength);
  if ( !LogicalProcessorInformation )
    goto LABEL_21;
  v19 = v17[5];
  *((_QWORD *)&v30 + 1) = 0LL;
  v20 = 0;
  LOWORD(v30) = 0;
  v21 = 0;
  v22 = (unsigned __int64)v30;
  *(_DWORD *)a1 = v19;
  if ( !v19 )
    goto LABEL_20;
  v23 = *((_QWORD *)&v30 + 1);
  do
  {
    v24 = *(_QWORD *)&v17[24 * v21 + 36];
    *((_QWORD *)a1 + v21 + 1) = v24;
    if ( v20 )
      goto LABEL_17;
    v25 = 1LL;
    v26 = 0;
    if ( (v24 & 1) == 0 )
      goto LABEL_17;
    v27 = qword_140055E08;
    while ( 1 )
    {
      if ( !v23 )
      {
        v23 = v25;
        *((_QWORD *)&v30 + 1) = v25;
        LOWORD(v30) = v21;
      }
      if ( v27 )
        break;
      *((_QWORD *)a2 + 1) = v25;
      if ( (v25 & *((_QWORD *)SystemInformation + v21 + 1)) == 0 )
        goto LABEL_16;
      v27 = qword_140055E08;
LABEL_26:
      ++v26;
      v24 &= ~v25;
      v25 = 1LL << v26;
      if ( ((1LL << v26) & v24) == 0 )
        goto LABEL_17;
    }
    if ( v21 != g_UserConfiguredAudioReservedCpu || (v27 & v25) == 0 )
      goto LABEL_26;
    *((_QWORD *)a2 + 1) = v25;
LABEL_16:
    *(_WORD *)a2 = v21;
    *((_QWORD *)a1 + v21 + 1) &= ~v25;
    v20 = 1;
LABEL_17:
    ++v21;
  }
  while ( v21 < *(_DWORD *)a1 );
  if ( !v20 )
  {
    v22 = v30;
LABEL_20:
    *(_OWORD *)a2 = v22;
  }
LABEL_21:
  v28 = GetProcessHeap();
  HeapFree(v28, 0, v17);
  if ( LogicalProcessorInformation && *((_QWORD *)a2 + 1) )
    return 0;
  else
    return -1073741823;
}
