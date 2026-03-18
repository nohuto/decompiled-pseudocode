/*
 * XREFs of PpmParkApplyForcedMask @ 0x14063DEB8
 * Callers:
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x140097098 (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
 *     PpmCheckApplyParkConstraints @ 0x140138DF0 (PpmCheckApplyParkConstraints.c)
 *     PpmParkApplyPolicy @ 0x1401394A8 (PpmParkApplyPolicy.c)
 *     PpmParkParkingAvailable @ 0x140537528 (PpmParkParkingAvailable.c)
 */

__int64 __fastcall PpmParkApplyForcedMask(__int64 *a1)
{
  unsigned __int16 v1; // si
  __int64 v3; // rbp
  __int64 v4; // r8
  unsigned int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  PVOID v8; // r10
  __int64 v9; // rcx
  __int64 v10; // rax

  v1 = *((_WORD *)a1 + 4);
  v3 = *a1;
  PpmAcquireLock((struct _KTHREAD **)&PpmPerfPolicyLock);
  if ( v1 > 0x14u )
    goto LABEL_12;
  v5 = 0;
  if ( *((_WORD *)a1 + 5) )
    goto LABEL_12;
  if ( *((_WORD *)a1 + 6) )
    goto LABEL_12;
  if ( *((_WORD *)a1 + 7) )
    goto LABEL_12;
  v6 = (unsigned int)PpmParkNumNodes;
  LOBYTE(v4) = 0;
  v7 = 0LL;
  if ( !PpmParkNumNodes )
    goto LABEL_12;
  v8 = PpmParkNodes;
  do
  {
    v9 = (__int64)v8 + 120 * (unsigned __int16)v7;
    if ( *(_WORD *)(v9 + 4) == v1 )
    {
      LOBYTE(v4) = 1;
      v10 = v3 & *(_QWORD *)(v9 + 8);
      *(_BYTE *)(v9 + 114) |= 1u;
      *(_QWORD *)(v9 + 32) = v10;
    }
    LOWORD(v7) = v7 + 1;
  }
  while ( (unsigned __int16)v7 < (unsigned int)v6 );
  if ( !(_BYTE)v4 )
  {
LABEL_12:
    v5 = -1073741811;
    PpmReleaseLock(&PpmPerfPolicyLock);
  }
  else
  {
    PpmParkApplyPolicy(v9, v7, v4, (_BYTE *)v6);
    PpmParkParkingAvailable();
    PpmCheckApplyParkConstraints();
  }
  return v5;
}
