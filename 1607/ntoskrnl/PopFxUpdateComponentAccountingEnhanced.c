/*
 * XREFs of PopFxUpdateComponentAccountingEnhanced @ 0x140130D78
 * Callers:
 *     PopPepDeviceDState @ 0x14012C810 (PopPepDeviceDState.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140130CB8 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepStartComponentIdleStateChangeActivity @ 0x1401317F0 (PopPepStartComponentIdleStateChangeActivity.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopFxUpdateComponentAccountingEnhanced(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  __int64 v6; // rbx
  KIRQL v7; // dl
  unsigned int v8; // ecx
  unsigned __int64 v9; // rcx

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 624) + 8LL * a2) + 200LL;
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6);
  if ( *(int *)(v6 + 16) <= 0 )
  {
    v8 = *(_DWORD *)(v6 + 12);
    if ( v8 != -1 )
    {
      if ( a4 )
      {
        if ( a3 >= v8 )
        {
          v9 = *(_QWORD *)(v6 + 24);
          if ( *(_BYTE *)(v6 + 8) && MEMORY[0xFFFFF78000000008] >= v9 )
            *(_QWORD *)(v6 + 40) += MEMORY[0xFFFFF78000000008] - v9;
          *(_BYTE *)(v6 + 8) = 0;
        }
      }
      else if ( !a3 && !*(_BYTE *)(v6 + 8) )
      {
        *(_QWORD *)(v6 + 24) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v6 + 8) = 1;
      }
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v6, v7);
}
