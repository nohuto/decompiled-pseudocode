/*
 * XREFs of PopPepGetDevicePlatformStateDependents @ 0x140110E9C
 * Callers:
 *     PopDiagTraceDeviceVerboseRundown @ 0x14052C35C (PopDiagTraceDeviceVerboseRundown.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 */

char __fastcall PopPepGetDevicePlatformStateDependents(__int64 a1, _DWORD *a2)
{
  KIRQL v4; // al
  bool v5; // bl
  int *v7; // rcx
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx

  *a2 = 0;
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  v5 = *(_DWORD *)(a1 + 160) == 2;
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 64), v4);
  if ( v5 )
  {
    v7 = (int *)(a1 + 144);
    v8 = 3LL;
    do
    {
      v9 = *v7++;
      *a2 |= v9;
      --v8;
    }
    while ( v8 );
    if ( *(_DWORD *)(a1 + 168) )
    {
      do
      {
        v10 = 0LL;
        v11 = 200LL * (unsigned int)v8;
        if ( *(_DWORD *)(v11 + a1 + 364) )
        {
          do
          {
            v12 = 3 * v10;
            v10 = (unsigned int)(v10 + 1);
            *a2 |= *(_DWORD *)(*(_QWORD *)(v11 + a1 + 368) + 8 * v12 + 16);
          }
          while ( (unsigned int)v10 < *(_DWORD *)(v11 + a1 + 364) );
        }
        LODWORD(v8) = v8 + 1;
      }
      while ( (unsigned int)v8 < *(_DWORD *)(a1 + 168) );
    }
  }
  return 0;
}
