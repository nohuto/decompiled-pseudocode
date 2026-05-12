/*
 * XREFs of RiNormalizeDeviceQueue @ 0x1C0002E4C
 * Callers:
 *     RaidNormalizeDeviceQueue @ 0x1C0002DFC (RaidNormalizeDeviceQueue.c)
 * Callees:
 *     RiPeekDeviceQueue @ 0x1C0004108 (RiPeekDeviceQueue.c)
 *     RiGetEnqueueReason @ 0x1C0009C30 (RiGetEnqueueReason.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00286B8 (RaidGetQosEntryForDeviceEntry.c)
 */

__int64 __fastcall RiNormalizeDeviceQueue(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  char v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  int v10; // eax
  _QWORD *QosEntryForDeviceEntry; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx

  LOBYTE(a3) = a2;
  v3 = RiPeekDeviceQueue(a1, a2, a3);
  v6 = v3;
  if ( v3 )
  {
    *(_BYTE *)(v3 + 22) ^= (*(_BYTE *)(v3 + 22) ^ (16 * v5)) & 0x10;
    if ( (unsigned int)RiGetEnqueueReason(v4, v3, 0LL, v3) )
    {
      return 0LL;
    }
    else
    {
      v8 = *(_QWORD *)v6;
      v9 = *(_QWORD **)(v6 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v6 + 8LL) != v6 || *v9 != v6 )
        __fastfail(3u);
      *v9 = v8;
      *(_QWORD *)(v8 + 8) = v9;
      ++*(_DWORD *)(v7 + 76);
      if ( (*(_BYTE *)(v6 + 22) & 6) != 0 )
        --*(_DWORD *)(v7 + 20);
      else
        --*(_DWORD *)(v7 + 16);
      if ( (*(_BYTE *)(v6 + 22) & 8) != 0 )
        --*(_DWORD *)(v7 + 24);
      *(_BYTE *)(v6 + 20) = 0;
      v10 = *(_DWORD *)(v7 + 76);
      if ( v10 > *(_DWORD *)(v7 + 132) )
        *(_DWORD *)(v7 + 132) = v10;
      if ( (*(_BYTE *)(v6 + 22) & 1) != 0 )
        *(_BYTE *)(v7 + 38) = 1;
      if ( (*(_BYTE *)(v6 + 22) & 0x20) != 0 )
      {
        QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v6);
        v12 = *QosEntryForDeviceEntry;
        v13 = (_QWORD *)QosEntryForDeviceEntry[1];
        if ( *(_QWORD **)(*QosEntryForDeviceEntry + 8LL) != QosEntryForDeviceEntry
          || (_QWORD *)*v13 != QosEntryForDeviceEntry )
        {
          __fastfail(3u);
        }
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
      }
    }
  }
  return v6;
}
