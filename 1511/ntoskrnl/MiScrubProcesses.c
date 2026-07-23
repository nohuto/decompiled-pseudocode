/*
 * XREFs of MiScrubProcesses @ 0x14062CF2C
 * Callers:
 *     MmScrubMemory @ 0x14062D224 (MmScrubMemory.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE @ 0x14002E2D0 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x140038910 (MiUnlockVad.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 *     MiVadMapsLargeImage @ 0x1400627D0 (MiVadMapsLargeImage.c)
 *     MiGetProcessPartition @ 0x140063890 (MiGetProcessPartition.c)
 *     MiVadDeleted @ 0x140063AA0 (MiVadDeleted.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1400DCA70 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x1400DE500 (ExAcquireAutoExpandPushLockExclusive.c)
 *     RtlFindSetBitsEx @ 0x140118404 (RtlFindSetBitsEx.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MiLockPage @ 0x1401DFF7C (MiLockPage.c)
 *     MiUnlockPage @ 0x1401DFF84 (MiUnlockPage.c)
 *     MiMakePageBad @ 0x1401E5A10 (MiMakePageBad.c)
 *     MiScrubAweMappedPage @ 0x1401E5AB4 (MiScrubAweMappedPage.c)
 *     MiScrubLargeMappedPage @ 0x1401E5BA4 (MiScrubLargeMappedPage.c)
 *     MiScrubPage @ 0x1401E5FC4 (MiScrubPage.c)
 *     PsGetNextProcess @ 0x14044B810 (PsGetNextProcess.c)
 *     MiInitializeScrubPacket @ 0x14062CDC8 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x14062CE70 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiScrubProcesses(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rdi
  int *v5; // rbx
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r15
  unsigned __int64 NextProcess; // rsi
  __int64 v9; // r13
  int v10; // r14d
  _QWORD *v11; // rdi
  _QWORD *i; // rax
  _QWORD *v13; // rax
  __int64 v14; // rbp
  _QWORD *v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  ULONG64 v18; // rbx
  ULONG64 SetBits; // rax
  ULONG64 v20; // r14
  __int64 v21; // rdi
  __int64 v22; // rcx
  int v23; // eax
  unsigned __int8 v24; // bl
  __int64 v26; // [rsp+28h] [rbp-D0h]
  _BYTE v28[24]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v29; // [rsp+58h] [rbp-A0h]
  __int64 v30; // [rsp+68h] [rbp-90h]
  $D4FCF91253F76F57393CBFE908971F67 v31; // [rsp+80h] [rbp-78h] BYREF

  v3 = a3;
  v5 = (int *)a1;
  result = MiInitializeScrubPacket(a1, -1, a2, (unsigned __int64)v28);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v26 = (__int64)CurrentThread;
    NextProcess = PsGetNextProcess(0LL);
    if ( NextProcess )
    {
      do
      {
        if ( MiGetProcessPartition(NextProcess) == v5 )
        {
          if ( *(_DWORD *)(a2 + 4) )
            break;
          v9 = *(_QWORD *)(NextProcess + 1032);
          if ( v9 || *(_DWORD *)(NextProcess + 1692) )
          {
            KiStackAttachProcess((_KPROCESS *)NextProcess, 0LL, (__int64)&v31);
            LOCK_ADDRESS_SPACE((__int64)CurrentThread, NextProcess);
            if ( (*(_DWORD *)(NextProcess + 772) & 0x20) == 0 )
            {
              v10 = *(_DWORD *)(NextProcess + 1692);
              v11 = 0LL;
              for ( i = *(_QWORD **)(NextProcess + 1552); i; i = (_QWORD *)*i )
                v11 = i;
              while ( v10 )
              {
                if ( !v11 )
                  break;
                v13 = (_QWORD *)v11[1];
                v14 = (__int64)v11;
                v15 = v11;
                if ( v13 )
                {
                  do
                  {
                    v11 = v13;
                    v13 = (_QWORD *)*v13;
                  }
                  while ( v13 );
                }
                else
                {
                  while ( 1 )
                  {
                    v11 = (_QWORD *)(v11[2] & 0xFFFFFFFFFFFFFFFCuLL);
                    if ( !v11 || (_QWORD *)*v11 == v15 )
                      break;
                    v15 = v11;
                  }
                }
                if ( (*(_BYTE *)(v14 + 48) & 7) == 5 || MiVadMapsLargeImage(v14) )
                {
                  MiLockVad((__int64)CurrentThread, v14);
                  if ( MiVadDeleted(v14) )
                  {
                    MiUnlockVad((__int64)CurrentThread, v14);
                  }
                  else
                  {
                    --v10;
                    v17 = MiScrubLargeMappedPage(v16, (__int64)v28, NextProcess, a2);
                    MiUnlockVad((__int64)CurrentThread, v14);
                    if ( !v17 )
                      goto LABEL_37;
                  }
                }
              }
              if ( v9 )
              {
                --CurrentThread->SpecialApcDisable;
                ExAcquireAutoExpandPushLockExclusive(v9 + 16, 0LL);
                v18 = 0LL;
                do
                {
                  if ( *(_DWORD *)(a2 + 4) )
                    break;
                  SetBits = RtlFindSetBitsEx((PRTL_BITMAP_EX)v9, 1uLL, v18);
                  v20 = SetBits;
                  if ( SetBits < v18 || SetBits == -1LL )
                    break;
                  v21 = 48 * SetBits - 0x58000000000LL;
                  v22 = *(_QWORD *)(v21 + 8);
                  v23 = v22
                      ? MiScrubAweMappedPage(v22, SetBits, (__int64)v28, NextProcess)
                      : MiScrubPage((__int64)v28, v29, v21);
                  if ( v23 < 0 )
                  {
                    v24 = MiLockPage(v21);
                    MiMakePageBad(v21, 0);
                    MiUnlockPage(v21, v24);
                  }
                  v18 = v20 + 1;
                }
                while ( v20 + 1 < *(_QWORD *)v9 );
                ExReleaseAutoExpandPushLockExclusive((_DWORD *)(v9 + 16), 0LL);
                CurrentThread = (struct _KTHREAD *)v26;
                KiLeaveGuardedRegionUnsafe(v26);
              }
            }
LABEL_37:
            UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, NextProcess);
            KiUnstackDetachProcess(&v31, 0LL);
            v5 = (int *)a1;
          }
        }
        NextProcess = PsGetNextProcess((_QWORD *)NextProcess);
      }
      while ( NextProcess );
      v3 = a3;
    }
    *v3 = v30;
    MiReleaseScrubPacket((__int64)v28);
    return 0LL;
  }
  return result;
}
