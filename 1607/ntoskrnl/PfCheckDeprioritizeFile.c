/*
 * XREFs of PfCheckDeprioritizeFile @ 0x1403E5730
 * Callers:
 *     MiDeprioritizeVad @ 0x1400ACF60 (MiDeprioritizeVad.c)
 *     CcUnmapVacb @ 0x14042B660 (CcUnmapVacb.c)
 *     MiUnmapVad @ 0x14042EEF0 (MiUnmapVad.c)
 * Callees:
 *     PfLockSharedTryAcquire @ 0x1400063BC (PfLockSharedTryAcquire.c)
 *     PfpRpLogDeprioEvent @ 0x140006424 (PfpRpLogDeprioEvent.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 */

__int64 __fastcall PfCheckDeprioritizeFile(int a1, __int64 a2, int a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // r11
  __int64 v9; // r10
  __int64 v10; // rbx
  __int64 v11; // rdx
  unsigned __int64 i; // r8
  _QWORD *v13; // rax
  __int64 v15; // [rsp+58h] [rbp+10h]

  v6 = 0;
  if ( !a2 || !(unsigned int)PfLockSharedTryAcquire((volatile signed __int64 *)&qword_140328608) )
    return v6;
  v7 = qword_1403285E8;
  if ( a2 != *(_QWORD *)(qword_1403285E8 + 8) )
  {
    v8 = -1LL << (dword_1403285DC & 0x1F);
    v9 = a2 & v8;
    if ( !((unsigned int)dword_1403285DC >> 5) )
      goto LABEL_32;
    v15 = a2 & v8;
    v7 = qword_1403285E0
       + 8LL
       * ((37
         * (BYTE6(v15)
          + 37
          * (BYTE5(v15)
           + 37
           * (BYTE4(v15)
            + 37 * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v9 + 11623883)))))))
         + HIBYTE(v15)) & (((unsigned int)dword_1403285DC >> 5) - 1));
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v9 == (v8 & *(_QWORD *)(v7 + 8)) )
        goto LABEL_8;
    }
    v7 = 0LL;
LABEL_8:
    if ( !v7 )
    {
LABEL_32:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140328608, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140328608);
      KeAbPostRelease((ULONG_PTR)&qword_140328608);
      KeLeaveCriticalRegion();
      return v6;
    }
    qword_1403285E8 = v7;
  }
  v10 = *(_QWORD *)(v7 + 16);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140328608, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140328608);
  KeAbPostRelease((ULONG_PTR)&qword_140328608);
  KeLeaveCriticalRegion();
  if ( qword_140328628 == v10 )
  {
LABEL_29:
    a3 = 0;
LABEL_22:
    PfpRpLogDeprioEvent(a2, a1, a3);
    return v6;
  }
  if ( (unsigned int)PfLockSharedTryAcquire((volatile signed __int64 *)&qword_140328630) )
  {
    if ( !dword_14032861C )
      goto LABEL_18;
    v11 = 0LL;
    for ( i = (37
             * (BYTE6(v10)
              + 37
              * (BYTE5(v10)
               + 37
               * (BYTE4(v10)
                + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
             + HIBYTE(v10)) & (unsigned int)(dword_14032861C - 1); ; i = (unsigned int)(dword_14032861C - 1) & (v11 + i) )
    {
      v13 = (_QWORD *)(qword_140328610 + (i << dword_140328618));
      if ( !*v13 || *v13 == v10 )
        break;
      if ( !v11 )
      {
        v11 = 2654435761LL * v10;
        if ( ((-79 * (_BYTE)v10) & 1) == 0 )
          ++v11;
      }
    }
    if ( *v13 )
    {
      qword_140328628 = v10;
    }
    else
    {
LABEL_18:
      v6 = 1;
      qword_140328668 = MEMORY[0xFFFFF78000000320];
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140328630, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140328630);
    KeAbPostRelease((ULONG_PTR)&qword_140328630);
    KeLeaveCriticalRegion();
    if ( v6 )
      goto LABEL_22;
    goto LABEL_29;
  }
  return v6;
}
