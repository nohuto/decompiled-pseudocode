/*
 * XREFs of PopFxUpdateDeviceAccountingEnhanced @ 0x1402040CC
 * Callers:
 *     PopPepDeviceDState @ 0x14012C810 (PopPepDeviceDState.c)
 * Callees:
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopFxUpdateDeviceAccountingEnhanced(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rbx
  KIRQL v6; // dl
  unsigned int v7; // ecx
  unsigned __int64 v8; // rcx

  v3 = a1 + 568;
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 568));
  if ( *(int *)(v3 + 16) <= 0 )
  {
    v7 = *(_DWORD *)(v3 + 12);
    if ( v7 != 5 )
    {
      if ( a3 )
      {
        if ( a2 >= v7 )
        {
          v8 = *(_QWORD *)(v3 + 24);
          if ( *(_BYTE *)(v3 + 8) && MEMORY[0xFFFFF78000000008] >= v8 )
            *(_QWORD *)(v3 + 40) += MEMORY[0xFFFFF78000000008] - v8;
          *(_BYTE *)(v3 + 8) = 0;
        }
      }
      else if ( a2 == 1 && !*(_BYTE *)(v3 + 8) )
      {
        *(_QWORD *)(v3 + 24) = MEMORY[0xFFFFF78000000008];
        *(_BYTE *)(v3 + 8) = 1;
      }
    }
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v3, v6);
}
