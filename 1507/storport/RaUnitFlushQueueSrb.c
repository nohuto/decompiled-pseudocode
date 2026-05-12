/*
 * XREFs of RaUnitFlushQueueSrb @ 0x1C0030DE0
 * Callers:
 *     RaUnitScsiIrp @ 0x1C00018B0 (RaUnitScsiIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0002E70 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C0003980 (RaUnitReleaseRemoveLock.c)
 *     RaidRemoveIoQueue @ 0x1C0026BC0 (RaidRemoveIoQueue.c)
 */

__int64 __fastcall RaUnitFlushQueueSrb(__int64 a1, IRP *a2)
{
  __int64 v3; // rbx
  __int64 ***v5; // rcx
  __int64 ***v6; // rax
  __int64 *v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // rax
  __int64 *v11; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v12; // [rsp+28h] [rbp-8h]

  v12 = &v11;
  v3 = a1 + 384;
  v11 = (__int64 *)&v11;
  while ( 1 )
  {
    v7 = RaidRemoveIoQueue(v3);
    if ( !v7 )
      break;
    v5 = (__int64 ***)v12;
    v6 = (__int64 ***)(v7 + 21);
    *v6 = &v11;
    v6[1] = (__int64 **)v5;
    if ( *v5 != &v11 )
      __fastfail(3u);
    *v5 = (__int64 **)v6;
    v12 = (__int64 **)v6;
  }
  *(_BYTE *)(a1 + 436) = 0;
  while ( 1 )
  {
    v8 = v11;
    if ( v11 == (__int64 *)&v11 )
      break;
    v9 = (__int64 *)*v11;
    if ( (__int64 **)v11[1] != &v11 || (__int64 *)v9[1] != v11 )
      __fastfail(3u);
    v11 = (__int64 *)*v11;
    v9[1] = (__int64)&v11;
    *(_BYTE *)(*(_QWORD *)(v8[2] + 8) + 3LL) = 22;
    *(v8 - 14) = 0LL;
    RaUnitReleaseRemoveLock(a1);
    RaidCompleteRequestEx((PIRP)(v8 - 21), 0, 0xC0000001);
  }
  *(_BYTE *)(a2->Tail.Overlay.CurrentStackLocation->Parameters.WMI.ProviderId + 3) = 1;
  a2->IoStatus.Information = 0LL;
  return RaidCompleteRequestEx(a2, 0, 0);
}
