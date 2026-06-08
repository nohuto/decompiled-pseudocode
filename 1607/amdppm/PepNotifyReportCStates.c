/*
 * XREFs of PepNotifyReportCStates @ 0x1C0015BA0
 * Callers:
 *     AcpiCStateNotifyWorker @ 0x1C00117B0 (AcpiCStateNotifyWorker.c)
 *     InitPepIdleStates @ 0x1C001504C (InitPepIdleStates.c)
 * Callees:
 *     memset @ 0x1C0006B40 (memset.c)
 *     PepTranslateCstState @ 0x1C0015CE0 (PepTranslateCstState.c)
 */

__int64 __fastcall PepNotifyReportCStates(__int64 a1)
{
  unsigned int *v1; // rax
  unsigned int v3; // edx
  bool v4; // si
  SIZE_T v5; // r14
  char *PoolWithTag; // rax
  char *v7; // rbx
  unsigned int v8; // ebx
  unsigned int *v9; // rdx
  unsigned int i; // r10d
  int v11; // r10d
  PVOID v12; // rsi
  __int64 v14; // [rsp+20h] [rbp-30h] BYREF
  PVOID P; // [rsp+28h] [rbp-28h]
  _QWORD v16[2]; // [rsp+30h] [rbp-20h] BYREF
  int v17; // [rsp+40h] [rbp-10h]

  v1 = *(unsigned int **)(a1 + 480);
  v3 = *v1;
  v4 = *((_BYTE *)v1 + 16) != 1;
  if ( *((_BYTE *)v1 + 16) != 1 )
    ++v3;
  P = 0LL;
  v14 = v3;
  v5 = 24LL * v3;
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x72637250u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v5);
    P = v7;
    if ( v4 )
    {
      v17 = 0;
      v16[1] = 0x100000000LL;
      v16[0] = 127LL;
      PepTranslateCstState(v16, v7);
      v7 += 24;
    }
    v9 = *(unsigned int **)(a1 + 480);
    for ( i = 0; i < *v9; i = v11 + 1 )
    {
      PepTranslateCstState(&v9[4 * i + 1 + i], v7);
      v9 = *(unsigned int **)(a1 + 480);
      v7 += 24;
    }
    v12 = P;
    v8 = PoFxProcessorNotification(*(_QWORD *)(a1 + 1064), 15LL, &v14);
    if ( v12 )
      ExFreePoolWithTag(v12, 0x72637250u);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v8;
}
