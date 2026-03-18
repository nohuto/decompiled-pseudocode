/*
 * XREFs of MiPageFileNoFreeSpace @ 0x1401DCEA8
 * Callers:
 *     MiGatherPagefilePages @ 0x14010AF5C (MiGatherPagefilePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiCauseOverCommitPopup @ 0x1401DBE7C (MiCauseOverCommitPopup.c)
 *     MiFreeModifiedReservations @ 0x1401DCB64 (MiFreeModifiedReservations.c)
 *     MiIssuePageExtendRequestNoWait @ 0x1401DCE50 (MiIssuePageExtendRequestNoWait.c)
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
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 256);
  MiFreeModifiedReservations(a1, 1);
  v5 = 0LL;
  v6 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  if ( *(_QWORD *)(a1 + 24) )
  {
    v7 = *(_QWORD **)(v2 + 832);
    *a2 = v2 + 824;
    a2[1] = v7;
    if ( *v7 != v2 + 824 )
      __fastfail(3u);
    *v7 = a2;
    *(_QWORD *)(v2 + 832) = a2;
  }
  else
  {
    *(_BYTE *)(a1 + 206) |= 1u;
    v6 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v6 == 1 )
  {
    *a2 = 2575857425LL;
    v8 = *(_QWORD *)(v2 + 6120);
    v9 = *(_QWORD *)(v2 + 5960);
    if ( v9 > v8 )
      v9 = *(_QWORD *)(v2 + 6120);
    if ( (*(_BYTE *)(a1 + 204) & 0x10) == 0 )
    {
      if ( v9 > (((v8 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL)
        && v8 < *(_QWORD *)(v2 + 5000) )
      {
        MiCauseOverCommitPopup(v2);
        v10 = 1LL;
LABEL_22:
        if ( *(_QWORD *)(v2 + 6120) < *(_QWORD *)(v2 + 5000) )
          MiIssuePageExtendRequestNoWait(v2, v10, 1);
        return;
      }
      if ( *(_QWORD *)(v2 + 6128) >= 0x1000uLL )
      {
        v11 = *(_DWORD *)(v2 + 5720);
        v12 = 0;
        if ( v11 )
        {
          v13 = v2 + 5728;
          do
          {
            if ( (*(_BYTE *)(*(_QWORD *)v13 + 204LL) & 0x50) == 0 )
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
        v14 = *(_QWORD *)(v2 + 6128);
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
