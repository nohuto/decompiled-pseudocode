/*
 * XREFs of TtmiRetrieveEventFromQueue @ 0x14067A0C0
 * Callers:
 *     TtmpDispatchGetTerminalEvent @ 0x140679B8C (TtmpDispatchGetTerminalEvent.c)
 * Callees:
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     TtmiLogError @ 0x14054710C (TtmiLogError.c)
 *     TtmpAcquireQueueLock @ 0x14067A364 (TtmpAcquireQueueLock.c)
 */

__int64 __fastcall TtmiRetrieveEventFromQueue(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  int v5; // edx
  char **v6; // rax
  char *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // rax
  char *v10; // r8
  __int128 v11; // xmm1
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9

  TtmpAcquireQueueLock();
  v4 = 0;
  if ( !*(_BYTE *)(a1 + 168) )
  {
    v4 = -1073740032;
    v5 = 476;
LABEL_3:
    TtmiLogError("TtmiRetrieveEventFromQueue", v5, -1, v4);
    goto LABEL_13;
  }
  v6 = (char **)(a1 + 152);
  if ( *v6 == (char *)v6 )
  {
    v4 = -2147483622;
    v5 = 481;
    goto LABEL_3;
  }
  v7 = *v6;
  v8 = *(_QWORD *)*v6;
  if ( *((char ***)*v6 + 1) != v6 || *(char **)(v8 + 8) != v7 )
    __fastfail(3u);
  *v6 = (char *)v8;
  *(_QWORD *)(v8 + 8) = v6;
  if ( *v6 == (char *)v6 )
    KeResetEvent((PRKEVENT)(a1 + 128));
  v9 = 4LL;
  v10 = v7 + 16;
  do
  {
    *(_OWORD *)a2 = *(_OWORD *)v10;
    *(_OWORD *)(a2 + 16) = *((_OWORD *)v10 + 1);
    *(_OWORD *)(a2 + 32) = *((_OWORD *)v10 + 2);
    *(_OWORD *)(a2 + 48) = *((_OWORD *)v10 + 3);
    *(_OWORD *)(a2 + 64) = *((_OWORD *)v10 + 4);
    *(_OWORD *)(a2 + 80) = *((_OWORD *)v10 + 5);
    *(_OWORD *)(a2 + 96) = *((_OWORD *)v10 + 6);
    a2 += 128LL;
    v11 = *((_OWORD *)v10 + 7);
    v10 += 128;
    *(_OWORD *)(a2 - 16) = v11;
    --v9;
  }
  while ( v9 );
  *(_OWORD *)a2 = *(_OWORD *)v10;
  *(_QWORD *)(a2 + 16) = *((_QWORD *)v10 + 2);
  *(_DWORD *)(a2 + 24) = *((_DWORD *)v10 + 6);
  ExFreePoolWithTag(v7, 0x716D7454u);
LABEL_13:
  ExReleaseResourceLite((PERESOURCE)(a1 + 24));
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
  return v4;
}
