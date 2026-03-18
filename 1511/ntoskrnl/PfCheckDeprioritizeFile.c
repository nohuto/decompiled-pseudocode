/*
 * XREFs of PfCheckDeprioritizeFile @ 0x1403E7394
 * Callers:
 *     MiDeprioritizeVad @ 0x1400ED6E0 (MiDeprioritizeVad.c)
 *     MiUnmapVad @ 0x14041B2F0 (MiUnmapVad.c)
 *     CcUnmapVacb @ 0x14047B6A0 (CcUnmapVacb.c)
 * Callees:
 *     PfLockSharedTryAcquire @ 0x14001B9CC (PfLockSharedTryAcquire.c)
 *     PfpRpLogDeprioEvent @ 0x14001BA34 (PfpRpLogDeprioEvent.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 */

__int64 __fastcall PfCheckDeprioritizeFile(int a1, __int64 a2, int a3)
{
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rbx
  __int64 v9; // rdx
  unsigned __int64 i; // r8
  _QWORD *v11; // rax
  __int64 v13; // r11
  __int64 v14; // r10
  __int64 v15; // [rsp+58h] [rbp+10h]

  v6 = 0;
  if ( !a2 || !(unsigned int)PfLockSharedTryAcquire((volatile signed __int64 *)&qword_140305808) )
    return v6;
  v7 = qword_1403057E8;
  if ( a2 != *(_QWORD *)(qword_1403057E8 + 8) )
  {
    v13 = -1LL << (dword_1403057DC & 0x1F);
    v14 = a2 & v13;
    if ( !((unsigned int)dword_1403057DC >> 5) )
      goto LABEL_32;
    v15 = a2 & v13;
    v7 = qword_1403057E0
       + 8LL
       * ((37
         * (BYTE6(v15)
          + 37
          * (BYTE5(v15)
           + 37
           * (BYTE4(v15)
            + 37 * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v14 + 11623883)))))))
         + HIBYTE(v15)) & (((unsigned int)dword_1403057DC >> 5) - 1));
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v14 == (v13 & *(_QWORD *)(v7 + 8)) )
        goto LABEL_22;
    }
    v7 = 0LL;
LABEL_22:
    if ( !v7 )
    {
LABEL_32:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140305808, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140305808);
      KeAbPostRelease((ULONG_PTR)&qword_140305808);
      KeLeaveCriticalRegion();
      return v6;
    }
    qword_1403057E8 = v7;
  }
  v8 = *(_QWORD *)(v7 + 16);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140305808, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140305808);
  KeAbPostRelease((ULONG_PTR)&qword_140305808);
  KeLeaveCriticalRegion();
  if ( qword_140305828 == v8 )
  {
LABEL_29:
    a3 = 0;
LABEL_16:
    PfpRpLogDeprioEvent(a2, a1, a3);
    return v6;
  }
  if ( (unsigned int)PfLockSharedTryAcquire((volatile signed __int64 *)&qword_140305830) )
  {
    if ( !dword_14030581C )
      goto LABEL_12;
    v9 = 0LL;
    for ( i = (37
             * (BYTE6(v8)
              + 37
              * (BYTE5(v8)
               + 37
               * (BYTE4(v8)
                + 37 * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
             + HIBYTE(v8)) & (unsigned int)(dword_14030581C - 1); ; i = (unsigned int)(dword_14030581C - 1) & (v9 + i) )
    {
      v11 = (_QWORD *)(qword_140305810 + (i << dword_140305818));
      if ( !*v11 || *v11 == v8 )
        break;
      if ( !v9 )
      {
        v9 = 2654435761LL * v8;
        if ( ((-79 * (_BYTE)v8) & 1) == 0 )
          ++v9;
      }
    }
    if ( *v11 )
    {
      qword_140305828 = v8;
    }
    else
    {
LABEL_12:
      v6 = 1;
      qword_140305868 = MEMORY[0xFFFFF78000000320];
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140305830, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140305830);
    KeAbPostRelease((ULONG_PTR)&qword_140305830);
    KeLeaveCriticalRegion();
    if ( v6 )
      goto LABEL_16;
    goto LABEL_29;
  }
  return v6;
}
