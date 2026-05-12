/*
 * XREFs of RiNormalizeDeviceQueue @ 0x1C0007570
 * Callers:
 *     RaidNormalizeDeviceQueue @ 0x1C0003A08 (RaidNormalizeDeviceQueue.c)
 *     RaidUnitCompleteRequest @ 0x1C0006180 (RaidUnitCompleteRequest.c)
 * Callees:
 *     RiGetEnqueueReason @ 0x1C0007630 (RiGetEnqueueReason.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C002BD38 (RaidGetQosEntryForDeviceEntry.c)
 */

_QWORD *__fastcall RiNormalizeDeviceQueue(__int64 a1, char a2)
{
  _QWORD *v2; // r9
  _QWORD *v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  int v7; // eax
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v10; // rdx
  _QWORD *v11; // rcx

  v2 = *(_QWORD **)(a1 + 96);
  if ( v2 == (_QWORD *)(a1 + 96) )
  {
    v3 = (_QWORD *)(a1 + 80);
    if ( (_QWORD *)*v3 == v3 )
      return 0LL;
    v2 = (_QWORD *)*v3;
  }
  if ( !v2 )
    return v2;
  *((_BYTE *)v2 + 22) ^= (*((_BYTE *)v2 + 22) ^ (16 * a2)) & 0x10;
  if ( (unsigned int)RiGetEnqueueReason(a1, v2, 0LL, v2) )
    return 0LL;
  v5 = *v2;
  v6 = (_QWORD *)v2[1];
  if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v6 != v2 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  ++*(_DWORD *)(v4 + 76);
  if ( (*((_BYTE *)v2 + 22) & 6) != 0 )
    --*(_DWORD *)(v4 + 20);
  else
    --*(_DWORD *)(v4 + 16);
  if ( (*((_BYTE *)v2 + 22) & 8) != 0 )
    --*(_DWORD *)(v4 + 24);
  *((_BYTE *)v2 + 20) = 0;
  v7 = *(_DWORD *)(v4 + 76);
  if ( v7 > *(_DWORD *)(v4 + 132) )
    *(_DWORD *)(v4 + 132) = v7;
  if ( (*((_BYTE *)v2 + 22) & 1) != 0 )
    *(_BYTE *)(v4 + 38) = 1;
  if ( (*((_BYTE *)v2 + 22) & 0x20) != 0 )
  {
    QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v2);
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
  return v2;
}
