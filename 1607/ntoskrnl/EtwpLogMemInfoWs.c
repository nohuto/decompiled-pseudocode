/*
 * XREFs of EtwpLogMemInfoWs @ 0x1406A2134
 * Callers:
 *     EtwpPerfMemInfoWork @ 0x1406A2980 (EtwpPerfMemInfoWork.c)
 *     EtwpLogMemInfoRundown @ 0x1406A70B8 (EtwpLogMemInfoRundown.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x14015A8B0 (ZwQuerySystemInformation.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsGetNextProcess @ 0x1404EBF8C (PsGetNextProcess.c)
 *     SmProcessQueryStoreStats @ 0x14054C948 (SmProcessQueryStoreStats.c)
 *     EtwpLogMemInfoWsHelper @ 0x1406A2448 (EtwpLogMemInfoWsHelper.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1406A26C4 (EtwpLogSessionWorkingSetInfo.c)
 */

void __fastcall EtwpLogMemInfoWs(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // r15d
  int v4; // r13d
  unsigned int v5; // r14d
  _DWORD *PoolWithTag; // rax
  _DWORD *v7; // rdi
  __int64 v8; // rbx
  unsigned int v9; // esi
  _DWORD *v10; // rbp
  unsigned __int64 v11; // rax
  bool v12; // zf
  _DWORD *NextProcess; // rsi
  unsigned __int64 v14; // r12
  __int64 v15; // rbp
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  unsigned int *v19; // rax
  unsigned int *v20; // rbp
  unsigned __int64 v21; // rcx
  bool v22; // cf
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v25; // [rsp+28h] [rbp-A0h] BYREF
  _DWORD *v26; // [rsp+30h] [rbp-98h]
  _QWORD SystemInformation[8]; // [rsp+40h] [rbp-88h] BYREF
  _DWORD v28[4]; // [rsp+80h] [rbp-48h] BYREF

  v24 = a1;
  v28[0] = 81;
  v28[1] = 119;
  v28[2] = 120;
  EtwpLogSessionWorkingSetInfo();
  v3 = 4356;
  v4 = -1;
  v5 = 64;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1104uLL, 0x74777445u);
  v7 = PoolWithTag;
  if ( !PoolWithTag )
    return;
  *PoolWithTag = 0;
  v8 = (__int64)(PoolWithTag + 1);
  v9 = 0;
  v26 = PoolWithTag + 1089;
  v10 = v28;
  do
  {
    LODWORD(v25) = *v10;
    if ( ZwQuerySystemInformation((SYSTEM_INFORMATION_CLASS)v25, SystemInformation, 0x40u, 0LL) )
      goto LABEL_31;
    *(_DWORD *)v8 = v4;
    v11 = SystemInformation[0] >> 12;
    v12 = (_DWORD)v25 == 119;
    *(_QWORD *)(v8 + 4) = SystemInformation[0] >> 12;
    *(_QWORD *)(v8 + 28) = v11;
    *(_QWORD *)(v8 + 12) = v11;
    *(_QWORD *)(v8 + 60) = 0LL;
    *(_QWORD *)(v8 + 20) = v11;
    *(_QWORD *)(v8 + 44) = 0LL;
    *(_QWORD *)(v8 + 36) = 0LL;
    *(_QWORD *)(v8 + 52) = 0LL;
    if ( v12 && a2 > v11 )
    {
      *(_QWORD *)(v8 + 12) = a2;
      *(_QWORD *)(v8 + 20) = a2;
    }
    ++*v7;
    v8 += 68LL;
    --v4;
    ++v9;
    ++v10;
  }
  while ( v9 < 3 );
  NextProcess = PsIdleProcess;
  v14 = v24;
  if ( !PsIdleProcess )
  {
LABEL_30:
    EtwpLogMemInfoWsHelper(v14, v7);
    goto LABEL_31;
  }
  v15 = (__int64)v26;
  while ( 1 )
  {
    v16 = NextProcess[193];
    if ( (v16 & 0x4000000) != 0
      && ((v16 & 4) == 0 || !NextProcess[1] || NextProcess[294] || *((_DWORD **)NextProcess + 6) != NextProcess + 12) )
    {
      break;
    }
LABEL_27:
    if ( NextProcess == PsIdleProcess )
      NextProcess = 0LL;
    NextProcess = (_DWORD *)PsGetNextProcess(NextProcess);
    if ( !NextProcess )
      goto LABEL_30;
  }
  if ( v8 != v15 )
  {
LABEL_20:
    *(_DWORD *)v8 = NextProcess[186];
    *(_QWORD *)(v8 + 4) = *((_QWORD *)NextProcess + 174);
    *(_QWORD *)(v8 + 28) = *((_QWORD *)NextProcess + 175);
    *(_QWORD *)(v8 + 12) = *((_QWORD *)NextProcess + 158);
    *(_QWORD *)(v8 + 60) = *((_QWORD *)NextProcess + 238);
    *(_QWORD *)(v8 + 20) = *((_QWORD *)NextProcess + 103) >> 12;
    v21 = *(_QWORD *)(v8 + 20);
    v22 = *(_QWORD *)(v8 + 12) < v21;
    *(_QWORD *)(v8 + 36) = 0LL;
    if ( v22 )
      v21 = *(_QWORD *)(v8 + 12);
    *(_QWORD *)(v8 + 12) = v21;
    v23 = *(_QWORD *)(v8 + 4);
    v22 = *(_QWORD *)(v8 + 28) < v23;
    *(_QWORD *)(v8 + 44) = 0LL;
    if ( v22 )
      v23 = *(_QWORD *)(v8 + 28);
    *(_QWORD *)(v8 + 28) = v23;
    *(_QWORD *)(v8 + 52) = *((_QWORD *)NextProcess + 185);
    if ( (int)SmProcessQueryStoreStats((__int64)NextProcess, &v24, &v25) >= 0 )
    {
      *(_QWORD *)(v8 + 36) = v24 >> 12;
      *(_QWORD *)(v8 + 44) = v25 >> 12;
    }
    v8 += 68LL;
    ++*v7;
    goto LABEL_27;
  }
  if ( v5 >= 0x100 )
  {
    EtwpLogMemInfoWsHelper(v14, v7);
    *v7 = 0;
    v8 = (__int64)(v7 + 1);
    goto LABEL_20;
  }
  v17 = 68 * v5;
  v18 = v3;
  v5 *= 2;
  v3 += v17;
  v19 = (unsigned int *)ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x74777445u);
  v20 = v19;
  if ( v19 )
  {
    memmove(v19, v7, v18);
    ExFreePoolWithTag(v7, 0);
    v7 = v20;
    v8 = (__int64)&v20[17 * *v20 + 1];
    v15 = (__int64)&v20[17 * v5 + 1];
    goto LABEL_20;
  }
  ObfDereferenceObjectWithTag(NextProcess, 0x6E457350u);
LABEL_31:
  ExFreePoolWithTag(v7, 0);
}
