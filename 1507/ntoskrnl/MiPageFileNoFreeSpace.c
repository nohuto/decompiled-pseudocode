/*
 * XREFs of MiPageFileNoFreeSpace @ 0x140221DAC
 * Callers:
 *     MiGatherPagefilePages @ 0x14013D12C (MiGatherPagefilePages.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiCauseOverCommitPopup @ 0x140220B2C (MiCauseOverCommitPopup.c)
 *     MiFreeModifiedReservations @ 0x1402218E8 (MiFreeModifiedReservations.c)
 *     MiIssuePageExtendRequestNoWait @ 0x140221D54 (MiIssuePageExtendRequestNoWait.c)
 */

void __fastcall MiPageFileNoFreeSpace(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v5; // rdi
  int v6; // ebp
  _QWORD *v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 v10; // rdx
  unsigned int v11; // r9d
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = *(_QWORD *)(a1 + 216);
  MiFreeModifiedReservations(a1);
  v5 = 0LL;
  v6 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &LockHandle);
  if ( *(_QWORD *)(a1 + 24) )
  {
    v7 = *(_QWORD **)(v2 + 824);
    *a2 = v2 + 816;
    a2[1] = v7;
    if ( *v7 != v2 + 816 )
      __fastfail(3u);
    *v7 = a2;
    *(_QWORD *)(v2 + 824) = a2;
  }
  else
  {
    *(_BYTE *)(a1 + 166) |= 1u;
    v6 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v6 == 1 )
  {
    *a2 = 2575857425LL;
    v8 = *(_QWORD *)(v2 + 5736);
    v9 = *(_QWORD *)(v2 + 5576);
    if ( v9 > v8 )
      v9 = *(_QWORD *)(v2 + 5736);
    if ( (*(_BYTE *)(a1 + 164) & 0x10) == 0 )
    {
      if ( v9 > (((v8 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL)
        && v8 < *(_QWORD *)(v2 + 4744) )
      {
        MiCauseOverCommitPopup(v2);
        v10 = 1LL;
LABEL_22:
        if ( *(_QWORD *)(v2 + 5736) < *(_QWORD *)(v2 + 4744) )
          MiIssuePageExtendRequestNoWait(v2, v10, 1);
        return;
      }
      if ( *(_QWORD *)(v2 + 5744) >= 0x1000uLL )
      {
        v11 = *(_DWORD *)(v2 + 5336);
        v12 = 0;
        if ( v11 )
        {
          v13 = v2 + 5344;
          do
          {
            if ( (*(_BYTE *)(*(_QWORD *)v13 + 164LL) & 0x50) == 0 )
            {
              if ( v5 + *(_QWORD *)(*(_QWORD *)v13 + 24LL) < v5 )
                break;
              v5 += *(_QWORD *)(*(_QWORD *)v13 + 24LL);
            }
            ++v12;
            v13 += 8LL;
          }
          while ( v12 < v11 );
        }
        v14 = *(_QWORD *)(v2 + 5744);
        if ( v14 > v5 )
        {
          v10 = v14 - v5;
          if ( v10 )
            goto LABEL_22;
        }
      }
    }
  }
}
