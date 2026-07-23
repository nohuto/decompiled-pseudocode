/*
 * XREFs of MiPageFileNoFreeSpace @ 0x1401EE9E8
 * Callers:
 *     MiGatherPagefilePages @ 0x1401199B4 (MiGatherPagefilePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiCauseOverCommitPopup @ 0x1401ECBBC (MiCauseOverCommitPopup.c)
 *     MiFreeModifiedReservations @ 0x1401EE664 (MiFreeModifiedReservations.c)
 *     MiIssuePageExtendRequest @ 0x1401EE7B4 (MiIssuePageExtendRequest.c)
 */

void __fastcall MiPageFileNoFreeSpace(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v4; // rdi
  unsigned __int64 v6; // rsi
  int v7; // r15d
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned int v11; // r9d
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 256);
  v4 = 1LL;
  MiFreeModifiedReservations(a1, 1);
  v6 = 0LL;
  v7 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 232), &LockHandle);
  if ( *(_QWORD *)(a1 + 24) )
  {
    v8 = *(_QWORD **)(v2 + 824);
    if ( *v8 != v2 + 816 )
      __fastfail(3u);
    *a2 = v2 + 816;
    a2[1] = v8;
    *v8 = a2;
    *(_QWORD *)(v2 + 824) = a2;
  }
  else
  {
    *(_BYTE *)(a1 + 206) |= 1u;
    v7 = 1;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v7 == 1 )
  {
    *a2 = 2575857425LL;
    v9 = *(_QWORD *)(v2 + 7336);
    v10 = *(_QWORD *)(v2 + 7208);
    if ( v10 > v9 )
      v10 = *(_QWORD *)(v2 + 7336);
    if ( (*(_BYTE *)(a1 + 204) & 0x10) == 0 )
    {
      if ( v10 > (((v9 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL)
        && v9 < *(_QWORD *)(v2 + 5640) )
      {
        MiCauseOverCommitPopup(v2);
LABEL_22:
        if ( *(_QWORD *)(v2 + 7336) < *(_QWORD *)(v2 + 5640) )
          MiIssuePageExtendRequest(v2, v4, 6LL, 0);
        return;
      }
      if ( *(_QWORD *)(v2 + 7344) >= 0x1000uLL )
      {
        v11 = *(_DWORD *)(v2 + 6296);
        v12 = 0;
        if ( v11 )
        {
          v13 = v2 + 6304;
          do
          {
            if ( (*(_BYTE *)(*(_QWORD *)v13 + 204LL) & 0x50) == 0 )
            {
              if ( v6 + *(_QWORD *)(*(_QWORD *)v13 + 24LL) < v6 )
                break;
              v6 += *(_QWORD *)(*(_QWORD *)v13 + 24LL);
            }
            ++v12;
            v13 += 8LL;
          }
          while ( v12 < v11 );
        }
        v14 = *(_QWORD *)(v2 + 7344);
        if ( v14 > v6 )
        {
          v4 = v14 - v6;
          if ( v4 )
            goto LABEL_22;
        }
      }
    }
  }
}
