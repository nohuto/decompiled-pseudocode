/*
 * XREFs of PopPepGetDevicePlatformStateDependents @ 0x1401ED494
 * Callers:
 *     PopDiagTraceDeviceVerboseRundown @ 0x140638E54 (PopDiagTraceDeviceVerboseRundown.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
 */

char __fastcall PopPepGetDevicePlatformStateDependents(__int64 a1, _DWORD *a2)
{
  KIRQL v4; // al
  bool v5; // bl
  int *v6; // rcx
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx

  *a2 = 0;
  v4 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 64));
  v5 = *(_DWORD *)(a1 + 160) == 2;
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 64), v4);
  if ( v5 )
  {
    v6 = (int *)(a1 + 144);
    v7 = 3LL;
    do
    {
      v8 = *v6++;
      *a2 |= v8;
      --v7;
    }
    while ( v7 );
    if ( *(_DWORD *)(a1 + 168) )
    {
      do
      {
        v9 = 0LL;
        v10 = 200LL * (unsigned int)v7;
        if ( *(_DWORD *)(v10 + a1 + 364) )
        {
          do
          {
            v11 = 3 * v9;
            v9 = (unsigned int)(v9 + 1);
            *a2 |= *(_DWORD *)(*(_QWORD *)(v10 + a1 + 368) + 8 * v11 + 16);
          }
          while ( (unsigned int)v9 < *(_DWORD *)(v10 + a1 + 364) );
        }
        LODWORD(v7) = v7 + 1;
      }
      while ( (unsigned int)v7 < *(_DWORD *)(a1 + 168) );
    }
  }
  return 0;
}
