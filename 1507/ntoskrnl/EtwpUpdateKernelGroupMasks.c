/*
 * XREFs of EtwpUpdateKernelGroupMasks @ 0x14054A8A8
 * Callers:
 *     EtwpUpdateKernelGroupsWork @ 0x14054A34C (EtwpUpdateKernelGroupsWork.c)
 *     EtwpUpdateGroupMasks @ 0x14054A404 (EtwpUpdateGroupMasks.c)
 *     EtwDereferenceSpinLockCounters @ 0x1406E7E10 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1406E7E60 (EtwReferenceSpinLockCounters.c)
 * Callees:
 *     KeReleaseMutex @ 0x14004BE50 (KeReleaseMutex.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     EtwpEnableKernelTrace @ 0x14054A9EC (EtwpEnableKernelTrace.c)
 *     EtwpDisableKernelTrace @ 0x14054AC78 (EtwpDisableKernelTrace.c)
 */

__int64 __fastcall EtwpUpdateKernelGroupMasks(unsigned int a1, unsigned int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edx
  _DWORD *v9; // rax
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // ebx
  _DWORD *v14; // rdx
  int v15; // eax
  _OWORD v16[2]; // [rsp+30h] [rbp-39h] BYREF
  _DWORD v17[8]; // [rsp+50h] [rbp-19h] BYREF
  _DWORD v18[8]; // [rsp+70h] [rbp+7h] BYREF

  v2 = a2;
  v3 = a1;
  KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
  v4 = 8LL;
  if ( (_DWORD)v2 != 8 && ((unsigned int)v3 >= 0x40 ? (LOBYTE(v5) = 1) : (v5 = WmipLoggerContext[v3]), (v5 & 1) != 0) )
  {
    v12 = -2147483611;
  }
  else
  {
    memset(v16, 0, sizeof(v16));
    v6 = 0LL;
    v7 = 8LL;
    do
    {
      v8 = *(_DWORD *)((char *)v16 + v6);
      v9 = (_DWORD *)((char *)&EtwpGroupMasks + v6);
      v10 = 9LL;
      do
      {
        v8 |= *v9;
        v9 += 8;
        --v10;
      }
      while ( v10 );
      v11 = *(_DWORD *)((char *)&PerfGlobalGroupMask + v6);
      *(_DWORD *)((char *)v16 + v6) = v8;
      v17[v6 / 4] = v8 & ~v11;
      v18[v6 / 4] = v11 & ~v8;
      v6 += 4LL;
      --v7;
    }
    while ( v7 );
    EtwpDisableKernelTrace(v16, v18, (unsigned int)v3);
    v12 = EtwpEnableKernelTrace(v16, v17, (unsigned int)v3);
    if ( v12 < 0 )
    {
      v14 = (_DWORD *)((char *)&EtwpGroupMasks + 32 * v2);
      do
      {
        v15 = ~*(_DWORD *)((char *)v14 + (char *)&v17[-8 * v2] - (char *)&EtwpGroupMasks);
        *(_DWORD *)((char *)v14 + (char *)&v16[-2 * v2] - (char *)&EtwpGroupMasks) &= v15;
        *v14++ &= v15;
        --v4;
      }
      while ( v4 );
    }
    PerfGlobalGroupMask = v16[0];
    xmmword_1403D1290 = v16[1];
  }
  KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  return (unsigned int)v12;
}
