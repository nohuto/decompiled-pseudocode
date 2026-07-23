/*
 * XREFs of PfCheckDeprioritizeFile @ 0x1403E6D5C
 * Callers:
 *     MiDeprioritizeVad @ 0x1400AB4C8 (MiDeprioritizeVad.c)
 *     CcUnmapVacb @ 0x14042A530 (CcUnmapVacb.c)
 *     MiUnmapVad @ 0x14042DDC0 (MiUnmapVad.c)
 * Callees:
 *     PfLockSharedTryAcquire @ 0x14000652C (PfLockSharedTryAcquire.c)
 *     PfpRpLogDeprioEvent @ 0x140006594 (PfpRpLogDeprioEvent.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
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
  if ( !a2 || !(unsigned int)PfLockSharedTryAcquire((volatile signed __int64 *)&qword_140328648) )
    return v6;
  v7 = qword_140328628;
  if ( a2 != *(_QWORD *)(qword_140328628 + 8) )
  {
    v8 = -1LL << (dword_14032861C & 0x1F);
    v9 = a2 & v8;
    if ( !((unsigned int)dword_14032861C >> 5) )
      goto LABEL_32;
    v15 = a2 & v8;
    v7 = qword_140328620
       + 8LL
       * ((37
         * (BYTE6(v15)
          + 37
          * (BYTE5(v15)
           + 37
           * (BYTE4(v15)
            + 37 * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v9 + 11623883)))))))
         + HIBYTE(v15)) & (((unsigned int)dword_14032861C >> 5) - 1));
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
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140328648, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140328648);
      KeAbPostRelease((ULONG_PTR)&qword_140328648);
      KeLeaveCriticalRegion();
      return v6;
    }
    qword_140328628 = v7;
  }
  v10 = *(_QWORD *)(v7 + 16);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140328648, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140328648);
  KeAbPostRelease((ULONG_PTR)&qword_140328648);
  KeLeaveCriticalRegion();
  if ( qword_140328668 == v10 )
  {
LABEL_29:
    a3 = 0;
LABEL_22:
    PfpRpLogDeprioEvent(a2, a1, a3);
    return v6;
  }
  if ( (unsigned int)PfLockSharedTryAcquire((volatile signed __int64 *)&qword_140328670) )
  {
    if ( !dword_14032865C )
      goto LABEL_18;
    v11 = 0LL;
    for ( i = (37
             * (BYTE6(v10)
              + 37
              * (BYTE5(v10)
               + 37
               * (BYTE4(v10)
                + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * (BYTE1(v10) + 37 * ((unsigned __int8)v10 + 11623883)))))))
             + HIBYTE(v10)) & (unsigned int)(dword_14032865C - 1); ; i = (unsigned int)(dword_14032865C - 1) & (v11 + i) )
    {
      v13 = (_QWORD *)(qword_140328650 + (i << dword_140328658));
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
      qword_140328668 = v10;
    }
    else
    {
LABEL_18:
      v6 = 1;
      qword_1403286A8 = MEMORY[0xFFFFF78000000320];
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140328670, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140328670);
    KeAbPostRelease((ULONG_PTR)&qword_140328670);
    KeLeaveCriticalRegion();
    if ( v6 )
      goto LABEL_22;
    goto LABEL_29;
  }
  return v6;
}
