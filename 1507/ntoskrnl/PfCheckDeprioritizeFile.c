/*
 * XREFs of PfCheckDeprioritizeFile @ 0x140443ABC
 * Callers:
 *     MiDeprioritizeVad @ 0x14012697C (MiDeprioritizeVad.c)
 *     CcUnmapVacb @ 0x1404B2D44 (CcUnmapVacb.c)
 *     MiUnmapVad @ 0x1404B7570 (MiUnmapVad.c)
 * Callees:
 *     PfLogEvent @ 0x14001AB30 (PfLogEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 *     ExfTryAcquirePushLockShared @ 0x1400F78D4 (ExfTryAcquirePushLockShared.c)
 */

__int64 __fastcall PfCheckDeprioritizeFile(int a1, __int64 a2, unsigned int a3, __int64 a4)
{
  unsigned int v7; // ebp
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR *v9; // r13
  ULONG_PTR v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r9
  struct _KTHREAD *v14; // rcx
  __int16 v15; // ax
  struct _KTHREAD *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 i; // r8
  _QWORD *v19; // rax
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  __int64 v23; // r11
  __int64 v24; // r10
  struct _KTHREAD *v25; // rcx
  __int16 v26; // ax
  __int64 v27; // [rsp+20h] [rbp-58h] BYREF
  int v28; // [rsp+28h] [rbp-50h]
  int v29; // [rsp+2Ch] [rbp-4Ch]
  __int64 v30; // [rsp+30h] [rbp-48h]
  __int64 v31; // [rsp+88h] [rbp+10h]

  v7 = 0;
  if ( !a2 )
    return v7;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = &qword_140353578;
  v10 = KeAbPreAcquire((ULONG_PTR)&qword_140353578, 0LL, 1LL, a4);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140353578, 17LL, 0LL)
    && !ExfTryAcquirePushLockShared((signed __int64 *)&qword_140353578) )
  {
    goto LABEL_42;
  }
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  v11 = qword_140353558;
  if ( a2 != *(_QWORD *)(qword_140353558 + 8) )
  {
    v23 = -1LL << (dword_14035354C & 0x1F);
    v24 = a2 & v23;
    if ( !((unsigned int)dword_14035354C >> 5) )
      goto LABEL_54;
    v31 = a2 & v23;
    v11 = qword_140353550
        + 8LL
        * ((37
          * (BYTE6(v31)
           + 37
           * (BYTE5(v31)
            + 37
            * (BYTE4(v31)
             + 37 * (BYTE3(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v24 + 11623883)))))))
          + HIBYTE(v31)) & (((unsigned int)dword_14035354C >> 5) - 1));
    while ( 1 )
    {
      v11 = *(_QWORD *)v11;
      if ( (v11 & 1) != 0 )
        break;
      if ( v24 == (v23 & *(_QWORD *)(v11 + 8)) )
        goto LABEL_30;
    }
    v11 = 0LL;
LABEL_30:
    if ( !v11 )
    {
LABEL_54:
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140353578, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&qword_140353578);
      KeAbPostRelease((ULONG_PTR)&qword_140353578);
      goto LABEL_45;
    }
    qword_140353558 = v11;
  }
  v12 = *(_QWORD *)(v11 + 16);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140353578, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140353578);
  KeAbPostRelease((ULONG_PTR)&qword_140353578);
  v14 = KeGetCurrentThread();
  v15 = v14->KernelApcDisable + 1;
  v14->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
    && !v14->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( qword_140353598 == v12 )
  {
LABEL_37:
    a3 = 0;
LABEL_24:
    v27 = a2;
    v28 = dword_140367DD0;
    v29 = a1;
    v30 = a3;
    PfLogEvent(
      30,
      dword_1403534CC
    + ((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
      + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
      &v27,
      0x18u);
    return v7;
  }
  v16 = KeGetCurrentThread();
  --v16->KernelApcDisable;
  v9 = &qword_1403535A0;
  v10 = KeAbPreAcquire((ULONG_PTR)&qword_1403535A0, 0LL, 1LL, v13);
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403535A0, 17LL, 0LL)
    || ExfTryAcquirePushLockShared((signed __int64 *)&qword_1403535A0) )
  {
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    if ( !dword_14035358C )
      goto LABEL_18;
    v17 = 0LL;
    for ( i = (37
             * (BYTE6(v12)
              + 37
              * (BYTE5(v12)
               + 37
               * (BYTE4(v12)
                + 37 * (BYTE3(v12) + 37 * (BYTE2(v12) + 37 * (BYTE1(v12) + 37 * ((unsigned __int8)v12 + 11623883)))))))
             + HIBYTE(v12)) & (unsigned int)(dword_14035358C - 1); ; i = (unsigned int)(dword_14035358C - 1) & (v17 + i) )
    {
      v19 = (_QWORD *)(qword_140353580 + (i << dword_140353588));
      if ( !*v19 || *v19 == v12 )
        break;
      if ( !v17 )
      {
        v17 = 2654435761LL * v12;
        if ( ((-79 * (_BYTE)v12) & 1) == 0 )
          ++v17;
      }
    }
    if ( *v19 )
    {
      qword_140353598 = v12;
    }
    else
    {
LABEL_18:
      v7 = 1;
      qword_1403535D8 = MEMORY[0xFFFFF78000000320];
    }
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1403535A0, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_1403535A0);
    KeAbPostRelease((ULONG_PTR)&qword_1403535A0);
    v20 = KeGetCurrentThread();
    v21 = v20->KernelApcDisable + 1;
    v20->KernelApcDisable = v21;
    if ( !v21
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
      && !v20->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    if ( v7 )
      goto LABEL_24;
    goto LABEL_37;
  }
LABEL_42:
  if ( v10 )
    KeAbPostReleaseEx((ULONG_PTR)v9, v10);
LABEL_45:
  v25 = KeGetCurrentThread();
  v26 = v25->KernelApcDisable + 1;
  v25->KernelApcDisable = v26;
  if ( !v26
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v25->ApcState.ApcListHead[0].Flink != &v25->152
    && !v25->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v7;
}
