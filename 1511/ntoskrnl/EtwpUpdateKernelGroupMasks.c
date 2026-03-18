/*
 * XREFs of EtwpUpdateKernelGroupMasks @ 0x1404B8124
 * Callers:
 *     EtwpUpdateKernelGroupsWork @ 0x1404B8108 (EtwpUpdateKernelGroupsWork.c)
 *     EtwpUpdateGroupMasks @ 0x140500298 (EtwpUpdateGroupMasks.c)
 *     EtwDereferenceSpinLockCounters @ 0x140664D38 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x140664D88 (EtwReferenceSpinLockCounters.c)
 * Callees:
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x140087240 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     EtwpEnableKernelTrace @ 0x1404B8278 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x1404B8504 (EtwpDisableKernelTrace.c)
 */

__int64 __fastcall EtwpUpdateKernelGroupMasks(unsigned int a1, unsigned int a2)
{
  __int64 v2; // r14
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 SiloDriverState; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned __int64 v8; // r9
  __int64 v9; // r8
  int v10; // edx
  _DWORD *v11; // rax
  __int64 v12; // rcx
  int v13; // eax
  int v14; // edx
  int v15; // ebx
  _DWORD *v17; // rdx
  int v18; // eax
  _OWORD v19[2]; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v20[8]; // [rsp+50h] [rbp-19h] BYREF
  _DWORD v21[8]; // [rsp+70h] [rbp+7h] BYREF

  v2 = a2;
  v3 = a1;
  KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
  v4 = 8LL;
  if ( (_DWORD)v2 != 8 )
  {
    SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
    v6 = SiloDriverState;
    if ( (unsigned int)v3 >= 0x40 )
      LOBYTE(v7) = 1;
    else
      v7 = *(_QWORD *)(SiloDriverState + 8 * v3 + 912);
    if ( (v7 & 1) != 0 )
    {
      KeReleaseMutex(&EtwpGroupMaskMutex, 0);
      PsDereferenceMonitorContextServerSilo(v6);
      return 2147483685LL;
    }
    PsDereferenceMonitorContextServerSilo(v6);
  }
  memset(v19, 0, sizeof(v19));
  v8 = 0LL;
  v9 = 8LL;
  do
  {
    v10 = *(_DWORD *)((char *)v19 + v8);
    v11 = (_DWORD *)((char *)&EtwpGroupMasks + v8);
    v12 = 9LL;
    do
    {
      v10 |= *v11;
      v11 += 8;
      --v12;
    }
    while ( v12 );
    *(_DWORD *)((char *)v19 + v8) = v10;
    v13 = v10 & ~*(_DWORD *)((char *)&PerfGlobalGroupMask + v8);
    v14 = *(_DWORD *)((_BYTE *)&PerfGlobalGroupMask + v8) & ~v10;
    v20[v8 / 4] = v13;
    v21[v8 / 4] = v14;
    v8 += 4LL;
    --v9;
  }
  while ( v9 );
  EtwpDisableKernelTrace(v19, v21, (unsigned int)v3, v8);
  v15 = EtwpEnableKernelTrace(v19, v20, (unsigned int)v3);
  if ( v15 < 0 )
  {
    v17 = (_DWORD *)((char *)&EtwpGroupMasks + 32 * v2);
    do
    {
      v18 = ~*(_DWORD *)((char *)v17 + (char *)&v20[-8 * v2] - (char *)&EtwpGroupMasks);
      *(_DWORD *)((char *)v17 + (char *)&v19[-2 * v2] - (char *)&EtwpGroupMasks) &= v18;
      *v17++ &= v18;
      --v4;
    }
    while ( v4 );
  }
  PerfGlobalGroupMask = v19[0];
  xmmword_140382290 = v19[1];
  KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  return (unsigned int)v15;
}
