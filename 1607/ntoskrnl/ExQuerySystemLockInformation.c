/*
 * XREFs of ExQuerySystemLockInformation @ 0x1403DFCAC
 * Callers:
 *     ExpGetLockInformation @ 0x1406AB63C (ExpGetLockInformation.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x1400AAC64 (MmUnlockPagableImageSection.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     ExpOwnerEntryToThread @ 0x14010CA8C (ExpOwnerEntryToThread.c)
 *     MmLockPagableSectionByHandle @ 0x1404BFFD0 (MmLockPagableSectionByHandle.c)
 */

__int64 __fastcall ExQuerySystemLockInformation(_DWORD *a1, unsigned int a2, unsigned int *a3)
{
  unsigned int v3; // ebx
  unsigned int v7; // esi
  _DWORD *v8; // rdi
  KIRQL v9; // al
  __int64 v10; // rdx
  __int64 *v11; // r10
  KIRQL v12; // r8
  int v13; // r9d
  unsigned __int64 v14; // rax

  v3 = 8;
  if ( a2 >= 8 )
  {
    *a1 = 0;
    v8 = a1 + 2;
    v7 = 0;
    MmLockPagableSectionByHandle(ExPageLockHandle);
    v9 = ExAcquireSpinLockShared(&ExpResourceSpinLock);
    v10 = ExpSystemResourcesList;
    v11 = &ExpSystemResourcesList;
    v12 = v9;
    if ( (__int64 *)ExpSystemResourcesList != &ExpSystemResourcesList )
    {
      v13 = 1;
      while ( 1 )
      {
        *a1 += v13;
        v3 += 48;
        if ( v3 < 0x30 )
          break;
        if ( a2 >= v3 )
        {
          *(_QWORD *)v8 = v10;
          v8[2] = v13;
          v14 = ExpOwnerEntryToThread((__int64 *)(v10 + 48));
          if ( v14 )
            *((_QWORD *)v8 + 2) = *(_QWORD *)(v14 + 1592);
          else
            *((_QWORD *)v8 + 2) = 0LL;
          v8[6] = *(_DWORD *)(v10 + 64);
          v8[7] = *(_DWORD *)(v10 + 68);
          v8[10] = *(_DWORD *)(v10 + 72);
          v8[11] = *(_DWORD *)(v10 + 76);
          v8 += 12;
        }
        else
        {
          v7 = -1073741820;
        }
        v10 = *(_QWORD *)v10;
        if ( (__int64 *)v10 == v11 )
          goto LABEL_15;
      }
      v7 = -1073741675;
    }
LABEL_15:
    ExReleaseSpinLockShared(&ExpResourceSpinLock, v12);
    MmUnlockPagableImageSection(ExPageLockHandle);
  }
  else
  {
    v7 = -1073741820;
  }
  if ( a3 )
    *a3 = v3;
  return v7;
}
