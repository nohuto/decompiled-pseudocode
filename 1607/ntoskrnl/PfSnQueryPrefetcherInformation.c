/*
 * XREFs of PfSnQueryPrefetcherInformation @ 0x1404BBF24
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     PfLockSharedAcquire @ 0x140006614 (PfLockSharedAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     SeSinglePrivilegeCheck @ 0x140412E30 (SeSinglePrivilegeCheck.c)
 *     PfSnGetCompletedTrace @ 0x1404BC148 (PfSnGetCompletedTrace.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfSnQueryPrefetcherInformation(__int64 a1, __int128 *a2, int a3, KPROCESSOR_MODE a4, _DWORD *a5)
{
  unsigned int v8; // ebx
  _OWORD *v10; // rdx
  __int64 *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  _OWORD *v15; // rcx
  _OWORD *v16; // rax
  __int128 v17; // [rsp+20h] [rbp-1D8h]
  SIZE_T Length[2]; // [rsp+30h] [rbp-1C8h]
  _BYTE v19[416]; // [rsp+50h] [rbp-1A8h] BYREF

  v8 = 0;
  if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
    return (unsigned int)-1073741790;
  if ( a3 != 32 )
  {
    v8 = -1073741820;
    *a5 = 32;
    return v8;
  }
  v17 = *a2;
  *(_OWORD *)Length = a2[1];
  if ( *(_QWORD *)a2 != 0x6B75684300000001LL )
    return (unsigned int)-1073741811;
  if ( DWORD2(v17) == 1 )
    return (unsigned int)PfSnGetCompletedTrace((void *)Length[0], LODWORD(Length[1]));
  if ( DWORD2(v17) != 2 )
    return (unsigned int)-1073741821;
  if ( LODWORD(Length[1]) != 408 )
    return (unsigned int)-1073741811;
  PfLockSharedAcquire((volatile signed __int64 *)qword_140328578);
  v10 = v19;
  v11 = &qword_1403283E0;
  v12 = 3LL;
  v13 = 3LL;
  do
  {
    *v10 = *(_OWORD *)v11;
    v10[1] = *((_OWORD *)v11 + 1);
    v10[2] = *((_OWORD *)v11 + 2);
    v10[3] = *((_OWORD *)v11 + 3);
    v10[4] = *((_OWORD *)v11 + 4);
    v10[5] = *((_OWORD *)v11 + 5);
    v10[6] = *((_OWORD *)v11 + 6);
    v10 += 8;
    *(v10 - 1) = *((_OWORD *)v11 + 7);
    v11 += 16;
    --v13;
  }
  while ( v13 );
  *v10 = *(_OWORD *)v11;
  *((_QWORD *)v10 + 2) = v11[2];
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)qword_140328578, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)qword_140328578);
  KeAbPostRelease((ULONG_PTR)qword_140328578);
  KeLeaveCriticalRegion();
  if ( a4 )
  {
    v14 = Length[0];
    if ( (Length[0] & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( Length[0] >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_BYTE *)v14 = *(_BYTE *)v14;
    *(_BYTE *)(v14 + 407) = *(_BYTE *)(v14 + 407);
  }
  v15 = (_OWORD *)Length[0];
  v16 = v19;
  do
  {
    *v15 = *v16;
    v15[1] = v16[1];
    v15[2] = v16[2];
    v15[3] = v16[3];
    v15[4] = v16[4];
    v15[5] = v16[5];
    v15[6] = v16[6];
    v15 += 8;
    *(v15 - 1) = v16[7];
    v16 += 8;
    --v12;
  }
  while ( v12 );
  *v15 = *v16;
  *((_QWORD *)v15 + 2) = *((_QWORD *)v16 + 2);
  *a5 = 408;
  return v8;
}
