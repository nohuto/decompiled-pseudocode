/*
 * XREFs of EtwpUpdateKernelGroupMasks @ 0x1404967A0
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x1404962BC (EtwpUpdateGroupMasks.c)
 *     EtwpUpdateKernelGroupsWork @ 0x14054CF20 (EtwpUpdateKernelGroupsWork.c)
 *     EtwDereferenceSpinLockCounters @ 0x1406A56B0 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1406A5700 (EtwReferenceSpinLockCounters.c)
 * Callees:
 *     KeReleaseMutex @ 0x140055B60 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     EtwpEnableKernelTrace @ 0x1404968E8 (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x140496B74 (EtwpDisableKernelTrace.c)
 */

__int64 __fastcall EtwpUpdateKernelGroupMasks(unsigned int a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned __int64 v6; // r9
  __int64 v7; // r8
  int v8; // edx
  _DWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // eax
  int v12; // edx
  int v13; // ebx
  _DWORD *v15; // rdx
  int v16; // eax
  _OWORD v17[2]; // [rsp+30h] [rbp-29h] BYREF
  _DWORD v18[8]; // [rsp+50h] [rbp-9h] BYREF
  _DWORD v19[8]; // [rsp+70h] [rbp+17h] BYREF

  v2 = a2;
  v3 = a1;
  KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
  v4 = 8LL;
  if ( (_DWORD)v2 != 8
    && ((unsigned int)v3 >= 0x40 ? (LOBYTE(v5) = 1) : (v5 = *(_QWORD *)(EtwpHostSiloState + 8 * v3 + 912)), (v5 & 1) != 0) )
  {
    v13 = -2147483611;
  }
  else
  {
    memset(v17, 0, sizeof(v17));
    v6 = 0LL;
    v7 = 8LL;
    do
    {
      v8 = *(_DWORD *)((char *)v17 + v6);
      v9 = (_DWORD *)((char *)&EtwpGroupMasks + v6);
      v10 = 9LL;
      do
      {
        v8 |= *v9;
        v9 += 8;
        --v10;
      }
      while ( v10 );
      *(_DWORD *)((char *)v17 + v6) = v8;
      v11 = v8 & ~*(_DWORD *)((char *)&PerfGlobalGroupMask + v6);
      v12 = *(_DWORD *)((_BYTE *)&PerfGlobalGroupMask + v6) & ~v8;
      v18[v6 / 4] = v11;
      v19[v6 / 4] = v12;
      v6 += 4LL;
      --v7;
    }
    while ( v7 );
    EtwpDisableKernelTrace(v17, v19, (unsigned int)v3, v6);
    v13 = EtwpEnableKernelTrace(v17, v18, (unsigned int)v3);
    if ( v13 < 0 )
    {
      v15 = (_DWORD *)((char *)&EtwpGroupMasks + 32 * v2);
      do
      {
        v16 = ~*(_DWORD *)((char *)v15 + (char *)&v18[-8 * v2] - (char *)&EtwpGroupMasks);
        *(_DWORD *)((char *)v15 + (char *)&v17[-2 * v2] - (char *)&EtwpGroupMasks) &= v16;
        *v15++ &= v16;
        --v4;
      }
      while ( v4 );
    }
    PerfGlobalGroupMask = v17[0];
    xmmword_1403AA2D0 = v17[1];
  }
  KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  return (unsigned int)v13;
}
