/*
 * XREFs of PfCheckDeprioritizeImage @ 0x1403E6698
 * Callers:
 *     PfProcessCreateNotification @ 0x1403E6410 (PfProcessCreateNotification.c)
 *     CcUnmapVacb @ 0x14042B660 (CcUnmapVacb.c)
 * Callees:
 *     PfLockSharedAcquire @ 0x1400064A4 (PfLockSharedAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PfCheckDeprioritizeImage(unsigned int a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rdx
  unsigned __int64 i; // r10
  _QWORD *v5; // rax

  v1 = a1;
  v2 = 0;
  if ( !a1 )
    return 0LL;
  PfLockSharedAcquire((volatile signed __int64 *)&qword_140328650);
  if ( dword_140328644 )
  {
    v3 = 0LL;
    for ( i = (37
             * (BYTE6(v1)
              + 37
              * (BYTE5(v1)
               + 37
               * (BYTE4(v1)
                + 37 * (BYTE3(v1) + 37 * (BYTE2(v1) + 37 * (BYTE1(v1) + 37 * ((unsigned __int8)v1 + 11623883)))))))
             + HIBYTE(v1)) & (unsigned int)(dword_140328644 - 1); ; i = (unsigned int)(dword_140328644 - 1) & (v3 + i) )
    {
      v5 = (_QWORD *)(qword_140328638 + (i << dword_140328640));
      if ( !*v5 || *v5 == (unsigned int)v1 )
        break;
      if ( !v3 )
      {
        v3 = 2654435761LL * (unsigned int)v1;
        if ( ((-79 * (_BYTE)v1) & 1) == 0 )
          ++v3;
      }
    }
    if ( *v5 )
      v2 = 1;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140328650, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140328650);
  KeAbPostRelease((ULONG_PTR)&qword_140328650);
  KeLeaveCriticalRegion();
  return v2;
}
