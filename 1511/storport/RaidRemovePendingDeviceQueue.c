/*
 * XREFs of RaidRemovePendingDeviceQueue @ 0x1C0028980
 * Callers:
 *     RaidRemoveIoQueue @ 0x1C0028E64 (RaidRemoveIoQueue.c)
 * Callees:
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00286B8 (RaidGetQosEntryForDeviceEntry.c)
 */

__int64 *__fastcall RaidRemovePendingDeviceQueue(__int64 a1)
{
  KIRQL v2; // al
  __int64 **v3; // rcx
  KIRQL v4; // r8
  __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 **v7; // rax
  __int64 v8; // rcx
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx
  bool v12; // zf

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v3 = (__int64 **)(a1 + 96);
  v4 = v2;
  if ( *v3 == (__int64 *)v3 )
  {
    v7 = (__int64 **)(a1 + 80);
    if ( *v7 == (__int64 *)v7 )
    {
      v5 = 0LL;
    }
    else
    {
      v5 = *v7;
      v8 = **v7;
      if ( (__int64 **)(*v7)[1] != v7 || *(__int64 **)(v8 + 8) != v5 )
        __fastfail(3u);
      *v7 = (__int64 *)v8;
      *(_QWORD *)(v8 + 8) = v7;
    }
  }
  else
  {
    v5 = *v3;
    v6 = **v3;
    if ( (__int64 **)(*v3)[1] != v3 || *(__int64 **)(v6 + 8) != v5 )
      __fastfail(3u);
    *v3 = (__int64 *)v6;
    *(_QWORD *)(v6 + 8) = v3;
  }
  if ( v5 && (*((_BYTE *)v5 + 22) & 0x20) != 0 )
  {
    QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry((__int64)v5);
    v10 = *QosEntryForDeviceEntry;
    v11 = (_QWORD *)QosEntryForDeviceEntry[1];
    if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) != QosEntryForDeviceEntry
      || (_QWORD *)*v11 != QosEntryForDeviceEntry )
    {
      __fastfail(3u);
    }
    *v11 = v10;
    *(_QWORD *)(v10 + 8) = v11;
  }
  if ( v5 )
  {
    v12 = (*((_BYTE *)v5 + 22) & 6) == 0;
    *((_BYTE *)v5 + 20) = 0;
    if ( v12 )
      --*(_DWORD *)(a1 + 16);
    else
      --*(_DWORD *)(a1 + 20);
    if ( (*((_BYTE *)v5 + 22) & 8) != 0 )
      --*(_DWORD *)(a1 + 24);
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v4);
  return v5;
}
