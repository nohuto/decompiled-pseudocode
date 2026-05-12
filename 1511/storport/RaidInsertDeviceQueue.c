/*
 * XREFs of RaidInsertDeviceQueue @ 0x1C0003D40
 * Callers:
 *     RaidStartIoPacket @ 0x1C00037C0 (RaidStartIoPacket.c)
 * Callees:
 *     RiPeekDeviceQueue @ 0x1C0004108 (RiPeekDeviceQueue.c)
 *     __security_check_cookie @ 0x1C0015990 (__security_check_cookie.c)
 *     RaidGetQosEntryForDeviceEntry @ 0x1C00286B8 (RaidGetQosEntryForDeviceEntry.c)
 *     Template_pqccqqq @ 0x1C0028A6C (Template_pqccqqq.c)
 */

__int64 __fastcall RaidInsertDeviceQueue(__int64 a1, __int64 a2, char a3, __int64 a4, char a5)
{
  __int64 v5; // rbx
  char v6; // r15
  __int64 v9; // rdx
  KIRQL v10; // r9
  __int64 v11; // r8
  char v12; // cl
  unsigned __int8 v13; // si
  char v15; // r14
  __int64 v16; // rdx
  KIRQL v17; // r9
  __int64 v18; // r8
  _QWORD *v19; // rdx
  int v20; // eax
  __int64 v21; // rax
  char v22; // al
  __int64 v23; // rax
  _QWORD *v24; // rcx
  _QWORD *QosEntryForDeviceEntry; // rax
  _QWORD *v26; // rdx
  char v27; // [rsp+50h] [rbp-48h]
  int v28; // [rsp+58h] [rbp-40h] BYREF
  __int64 v29; // [rsp+5Ch] [rbp-3Ch]
  int v30; // [rsp+64h] [rbp-34h]

  v5 = a2 + 120;
  v6 = 0;
  v29 = 0LL;
  v28 = 0;
  v30 = 0;
  if ( (a3 & 2) != 0 )
    *(_BYTE *)(a2 + 142) |= 2u;
  else
    *(_BYTE *)(a2 + 142) &= ~2u;
  if ( (a3 & 4) != 0 )
    *(_BYTE *)(a2 + 142) |= 4u;
  else
    *(_BYTE *)(a2 + 142) &= ~4u;
  if ( (a3 & 1) != 0 )
    *(_BYTE *)(a2 + 142) |= 1u;
  else
    *(_BYTE *)(a2 + 142) &= ~1u;
  if ( (a3 & 8) != 0 )
    *(_BYTE *)(a2 + 142) |= 8u;
  else
    *(_BYTE *)(a2 + 142) &= ~8u;
  if ( (a3 & 0x10) != 0 )
    *(_BYTE *)(a2 + 142) |= 0x20u;
  else
    *(_BYTE *)(a2 + 142) &= ~0x20u;
  *(_BYTE *)(a2 + 142) ^= (*(_BYTE *)(a2 + 142) ^ (16 * a5)) & 0x10;
  v10 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 76));
  if ( !*(_DWORD *)(a1 + 32) )
  {
    v11 = *(unsigned int *)(a1 + 76);
    if ( (int)v11 <= *(_DWORD *)(a1 + 4)
      && (!*(_BYTE *)(a1 + 37) || (*(_BYTE *)(v5 + 22) & 4) != 0)
      && (!*(_BYTE *)(a1 + 36) || (*(_BYTE *)(v5 + 22) & 2) != 0)
      && *(int *)(a1 + 28) <= 0
      && !*(_BYTE *)(a1 + 38) )
    {
      if ( !*(_DWORD *)(a1 + 20) && !*(_DWORD *)(a1 + 16)
        || (v23 = RiPeekDeviceQueue(a1, v9, v11), v5 == v23)
        || (*(_BYTE *)(v23 + 22) & 1) == 0
        || (*(_BYTE *)(v5 + 22) & 6) != 0 )
      {
        v12 = *(_BYTE *)(v5 + 22);
        if ( ((v12 & 1) == 0 || (int)v11 < 1)
          && (!*(_BYTE *)(a1 + 39) || (v12 & 8) != 0)
          && (v12 & 0x10) == 0
          && (v12 & 1) == 0 )
        {
          ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v10);
          v13 = 0;
          *(_BYTE *)(v5 + 20) = 0;
          return v13;
        }
      }
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 76));
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 72), v10);
  if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x800000) != 0 )
  {
    IoGetActivityIdIrp(a2, &v28);
    v15 = ((*(_BYTE *)(v5 + 22) & 6) != 0) + 1;
  }
  else
  {
    v15 = v27;
  }
  v17 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  if ( *(_DWORD *)(a1 + 32) || (v18 = *(unsigned int *)(a1 + 76), (int)v18 >= *(_DWORD *)(a1 + 4)) )
  {
    v6 = 1;
  }
  else if ( !*(_BYTE *)(a1 + 37) || (*(_BYTE *)(v5 + 22) & 4) != 0 )
  {
    if ( !*(_BYTE *)(a1 + 36) || (*(_BYTE *)(v5 + 22) & 2) != 0 )
    {
      if ( *(int *)(a1 + 28) > 0 )
      {
        v6 = 4;
      }
      else if ( *(_BYTE *)(a1 + 38) )
      {
        v6 = 5;
      }
      else if ( (*(_DWORD *)(a1 + 20) || *(_DWORD *)(a1 + 16))
             && (v21 = RiPeekDeviceQueue(a1, v16, v18), v5 != v21)
             && (*(_BYTE *)(v21 + 22) & 1) != 0
             && (*(_BYTE *)(v5 + 22) & 6) == 0 )
      {
        v6 = 6;
      }
      else
      {
        v22 = *(_BYTE *)(v5 + 22);
        if ( (v22 & 1) != 0 && (int)v18 >= 1 )
        {
          v6 = 7;
        }
        else if ( !*(_BYTE *)(a1 + 39) || (v22 & 8) != 0 )
        {
          if ( (v22 & 0x10) == 0 )
          {
            v13 = 0;
            *(_DWORD *)(a1 + 76) = v18 + 1;
            if ( (*(_BYTE *)(v5 + 22) & 1) != 0 )
              *(_BYTE *)(a1 + 38) = 1;
            goto LABEL_39;
          }
          v6 = 9;
        }
        else
        {
          v6 = 8;
        }
      }
    }
    else
    {
      v6 = 3;
    }
  }
  else
  {
    v6 = 2;
  }
  if ( (*(_BYTE *)(v5 + 22) & 6) != 0 )
  {
    v24 = *(_QWORD **)(a1 + 104);
    *(_QWORD *)v5 = a1 + 96;
    *(_QWORD *)(v5 + 8) = v24;
    if ( *v24 != a1 + 96 )
      __fastfail(3u);
    *v24 = v5;
    *(_QWORD *)(a1 + 104) = v5;
    ++*(_DWORD *)(a1 + 20);
  }
  else
  {
    v19 = *(_QWORD **)(a1 + 88);
    *(_QWORD *)v5 = a1 + 80;
    *(_QWORD *)(v5 + 8) = v19;
    if ( *v19 != a1 + 80 )
      __fastfail(3u);
    *v19 = v5;
    *(_QWORD *)(a1 + 88) = v5;
    v20 = ++*(_DWORD *)(a1 + 16);
    if ( v20 > *(_DWORD *)(a1 + 128) )
      *(_DWORD *)(a1 + 128) = v20;
  }
  if ( (*(_BYTE *)(v5 + 22) & 8) != 0 )
    ++*(_DWORD *)(a1 + 24);
  if ( (*(_BYTE *)(v5 + 22) & 0x20) != 0 )
  {
    QosEntryForDeviceEntry = (_QWORD *)RaidGetQosEntryForDeviceEntry(v5);
    v26 = *(_QWORD **)(a1 + 120);
    *QosEntryForDeviceEntry = a1 + 112;
    QosEntryForDeviceEntry[1] = v26;
    if ( *v26 != a1 + 112 )
      __fastfail(3u);
    *v26 = QosEntryForDeviceEntry;
    *(_QWORD *)(a1 + 120) = QosEntryForDeviceEntry;
  }
  v13 = 1;
LABEL_39:
  *(_BYTE *)(v5 + 20) = v13;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72), v17);
  if ( v13 && _bittest((const signed __int32 *)&WPP_MAIN_CB.Dpc.DpcData, 0x17u) )
    Template_pqccqqq(
      *(_DWORD *)(a1 + 76),
      *(_DWORD *)(a1 + 16) + *(_DWORD *)(a1 + 20),
      (unsigned int)&v28,
      a1,
      v15,
      3,
      v6,
      *(_BYTE *)(a1 + 16) + *(_BYTE *)(a1 + 20),
      *(_DWORD *)(a1 + 76));
  return v13;
}
