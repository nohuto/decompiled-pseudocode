/*
 * XREFs of PpmCheckInitProcessors @ 0x1405AFF04
 * Callers:
 *     PpmReapplyPerfPolicy @ 0x1405B09A4 (PpmReapplyPerfPolicy.c)
 *     PopNewProcessorCallback @ 0x1406B09CC (PopNewProcessorCallback.c)
 *     PoInitSystem @ 0x1407D2D24 (PoInitSystem.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x140013958 (PopExecuteOnTargetProcessors.c)
 *     PpmReleaseLock @ 0x1400E70D0 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     PpmCheckApplyParkConstraints @ 0x14016791C (PpmCheckApplyParkConstraints.c)
 *     KeQueryActiveProcessorAffinity @ 0x140167D5C (KeQueryActiveProcessorAffinity.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PpmParkRegisterParking @ 0x1405B0118 (PpmParkRegisterParking.c)
 *     PpmCheckReInit @ 0x1405B0AB4 (PpmCheckReInit.c)
 */

void __fastcall PpmCheckInitProcessors(int a1)
{
  unsigned __int16 v1; // r8
  __int64 v2; // r10
  int *v3; // r9
  unsigned __int16 v4; // dx
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int16 v8; // r11
  char v9; // r9
  unsigned __int16 v10; // ax
  unsigned __int16 v11; // cx
  unsigned __int64 v12; // rdx
  __int64 v13; // r8
  bool v14; // zf
  __int64 v15; // rax
  unsigned __int16 v16; // r11
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v22[21]; // [rsp+30h] [rbp-D8h] BYREF
  _DWORD v23[44]; // [rsp+D8h] [rbp-30h] BYREF

  if ( a1 )
  {
    v21 = 1310721LL;
    memset(v22, 0, 0xA0uLL);
    v1 = 1;
    LOWORD(v2) = PpmCheckRegistered[0];
  }
  else
  {
    PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
    KeQueryActiveProcessorAffinity(v23);
    v8 = v23[0];
    LOWORD(v2) = PpmCheckRegistered[0];
    v9 = 0;
    WORD1(v21) = 20;
    v10 = PpmCheckRegistered[0];
    LOWORD(v21) = v23[0];
    if ( LOWORD(v23[0]) < LOWORD(PpmCheckRegistered[0]) )
      v10 = v23[0];
    v1 = v23[0];
    v11 = 0;
    if ( v10 )
    {
      v11 = v10;
      v12 = 0LL;
      v13 = v10;
      do
      {
        v14 = (*(_QWORD *)&v23[v12 / 4 + 2] & ~*(_QWORD *)&PpmCheckRegistered[v12 / 4 + 2]) == 0LL;
        v22[v12 / 8] = *(_QWORD *)&v23[v12 / 4 + 2] & ~*(_QWORD *)&PpmCheckRegistered[v12 / 4 + 2];
        if ( !v14 )
          v9 = 1;
        v12 += 8LL;
        --v13;
      }
      while ( v13 );
      v1 = v21;
    }
    if ( v11 < v8 )
    {
      v16 = v8 - v11;
      v17 = 8LL * v11;
      v18 = v16;
      v11 += v16;
      do
      {
        v19 = *(_QWORD *)&v23[v17 / 4 + 2];
        v22[v17 / 8] = v19;
        if ( v19 )
          v9 = 1;
        v17 += 8LL;
        --v18;
      }
      while ( v18 );
      v1 = v21;
    }
    HIDWORD(v21) = 0;
    if ( v11 < WORD1(v21) )
    {
      do
      {
        v15 = v11++;
        v22[v15] = 0LL;
      }
      while ( v11 < WORD1(v21) );
      v1 = v21;
    }
    if ( !v9 )
    {
      PpmReleaseLock(&PpmPerfPolicyLock);
      return;
    }
  }
  if ( (unsigned __int16)v2 < v1 )
  {
    v3 = (int *)&v21;
  }
  else
  {
    v3 = PpmCheckRegistered;
    LOWORD(v2) = v1;
  }
  HIWORD(PpmCheckRegistered[0]) = 20;
  v4 = 0;
  LOWORD(PpmCheckRegistered[0]) = *(_WORD *)v3;
  if ( (_WORD)v2 )
  {
    v4 = v2;
    v5 = 0LL;
    v2 = (unsigned __int16)v2;
    do
    {
      *(_QWORD *)&PpmCheckRegistered[v5 / 4 + 2] |= v22[v5 / 8];
      v5 += 8LL;
      --v2;
    }
    while ( v2 );
  }
  while ( v4 < *(_WORD *)v3 )
  {
    v20 = v4++;
    *(_QWORD *)&PpmCheckRegistered[2 * v20 + 2] = *(_QWORD *)&v3[2 * v20 + 2];
  }
  dword_140320994 = 0;
  while ( v4 < HIWORD(PpmCheckRegistered[0]) )
  {
    v6 = v4++;
    *(_QWORD *)&PpmCheckRegistered[2 * v6 + 2] = 0LL;
  }
  v7 = 0LL;
  if ( v1 )
  {
    while ( !v22[(unsigned __int16)v7] )
    {
      LOWORD(v7) = v7 + 1;
      if ( (unsigned __int16)v7 >= v1 )
        goto LABEL_15;
    }
    PopExecuteOnTargetProcessors((__int64)&v21, (__int64)PpmCheckReset, 0LL, 0LL);
  }
LABEL_15:
  PpmParkRegisterParking(v7);
  PpmCheckReInit();
  PpmCheckApplyParkConstraints();
}
