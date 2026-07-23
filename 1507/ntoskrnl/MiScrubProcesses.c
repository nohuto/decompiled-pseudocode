/*
 * XREFs of MiScrubProcesses @ 0x1406AA9CC
 * Callers:
 *     MmScrubMemory @ 0x1406AACD4 (MmScrubMemory.c)
 * Callees:
 *     MiUnlockVad @ 0x1400894F0 (MiUnlockVad.c)
 *     MiVadDeleted @ 0x14008964C (MiVadDeleted.c)
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140089E40 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14008A330 (LOCK_ADDRESS_SPACE.c)
 *     MiVadMapsLargeImage @ 0x14008D1A0 (MiVadMapsLargeImage.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14010E920 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x14010FFE0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     RtlFindSetBitsEx @ 0x14014CF00 (RtlFindSetBitsEx.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiUnlockPage @ 0x14017E538 (MiUnlockPage.c)
 *     MiLockPage @ 0x140226160 (MiLockPage.c)
 *     MiMakePageBad @ 0x140232438 (MiMakePageBad.c)
 *     MiScrubAweMappedPage @ 0x1402324DC (MiScrubAweMappedPage.c)
 *     MiScrubLargeMappedPage @ 0x140232658 (MiScrubLargeMappedPage.c)
 *     MiScrubPage @ 0x140232D48 (MiScrubPage.c)
 *     PsGetNextProcess @ 0x14050D584 (PsGetNextProcess.c)
 *     MiInitializeScrubPacket @ 0x1406AA87C (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x1406AA918 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiScrubProcesses(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  __int64 result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  struct _KTHREAD *CurrentThread; // r15
  __int64 v9; // rdx
  unsigned __int64 NextProcess; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  ULONG64 v13; // rbx
  _RTL_BITMAP_EX **v14; // r14
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // r12d
  _QWORD *v20; // rdi
  _QWORD *i; // rax
  _QWORD *v22; // rax
  __int64 v23; // rbp
  _QWORD *v24; // rcx
  __int64 v25; // rcx
  int v26; // ebx
  _DWORD *v27; // r12
  _RTL_BITMAP_EX *v28; // rbp
  ULONG64 SetBits; // rax
  ULONG64 v30; // r14
  __int64 v31; // rdi
  __int64 *v32; // rcx
  int v33; // eax
  unsigned __int8 v34; // bl
  __int16 v35; // ax
  struct _KTHREAD *v37; // [rsp+28h] [rbp-C0h]
  _BYTE v38[24]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v39; // [rsp+48h] [rbp-A0h]
  __int64 v40; // [rsp+58h] [rbp-90h]
  _BYTE v41[48]; // [rsp+70h] [rbp-78h] BYREF

  v2 = a2;
  result = MiInitializeScrubPacket(-1, a1, (__int64)v38);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v37 = CurrentThread;
    NextProcess = PsGetNextProcess(0LL, v5, v6, v7);
    if ( NextProcess )
    {
      v13 = 0LL;
      do
      {
        if ( *(_DWORD *)(a1 + 4) )
          break;
        v14 = *(_RTL_BITMAP_EX ***)(NextProcess + 1032);
        if ( v14 || *(_DWORD *)(NextProcess + 1684) )
        {
          KiStackAttachProcess((_KPROCESS *)NextProcess, 0, (__int64)v41);
          LOCK_ADDRESS_SPACE((__int64)CurrentThread, NextProcess, v15, v16);
          if ( (*(_DWORD *)(NextProcess + 772) & 0x20) == 0 )
          {
            v19 = *(_DWORD *)(NextProcess + 1684);
            v20 = 0LL;
            for ( i = *(_QWORD **)(NextProcess + 1544); i; i = (_QWORD *)*i )
              v20 = i;
            if ( v19 )
            {
              while ( v20 )
              {
                v22 = (_QWORD *)v20[1];
                v23 = (__int64)v20;
                v24 = v20;
                if ( v22 )
                {
                  do
                  {
                    v20 = v22;
                    v22 = (_QWORD *)*v22;
                  }
                  while ( v22 );
                }
                else
                {
                  while ( 1 )
                  {
                    v20 = (_QWORD *)(v20[2] & 0xFFFFFFFFFFFFFFFCuLL);
                    if ( !v20 || (_QWORD *)*v20 == v24 )
                      break;
                    v24 = v20;
                  }
                }
                if ( (*(_BYTE *)(v23 + 48) & 7) == 5 || MiVadMapsLargeImage(v23) )
                {
                  MiLockVad((__int64)CurrentThread, v23, v17, v18);
                  if ( (unsigned int)MiVadDeleted(v23) == 1 )
                  {
                    MiUnlockVad((__int64)CurrentThread, v23);
                  }
                  else
                  {
                    --v19;
                    v26 = MiScrubLargeMappedPage(v25, (__int64)v38, NextProcess, a1);
                    MiUnlockVad((__int64)CurrentThread, v23);
                    if ( !v26 )
                    {
                      v13 = 0LL;
                      goto LABEL_42;
                    }
                    v13 = 0LL;
                  }
                }
                if ( !v19 )
                  break;
              }
            }
            if ( v14 )
            {
              --CurrentThread->SpecialApcDisable;
              v27 = v14 + 1;
              ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)(v14 + 1), 0LL, v17, v18);
              v28 = *v14;
              if ( *v14 )
              {
                do
                {
                  if ( *(_DWORD *)(a1 + 4) )
                    break;
                  SetBits = RtlFindSetBitsEx(v28, 1uLL, v13);
                  v30 = SetBits;
                  if ( SetBits < v13 || SetBits == -1LL )
                    break;
                  v31 = 48 * SetBits - 0x58000000000LL;
                  v32 = *(__int64 **)(v31 + 8);
                  if ( v32 )
                    v33 = MiScrubAweMappedPage(v32, SetBits, (__int64)v38, NextProcess);
                  else
                    v33 = MiScrubPage((__int64)v38, v39, v31);
                  if ( v33 < 0 )
                  {
                    v34 = MiLockPage(v31);
                    MiMakePageBad(v31, 0);
                    MiUnlockPage(v31, v34);
                  }
                  v13 = v30 + 1;
                }
                while ( v30 + 1 < v28->SizeOfBitMap );
                CurrentThread = v37;
                v13 = 0LL;
              }
              ExReleaseAutoExpandPushLockExclusive(v27, 0LL);
              v35 = CurrentThread->SpecialApcDisable + 1;
              CurrentThread->SpecialApcDisable = v35;
              if ( !v35
                && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
              {
                KiCheckForKernelApcDelivery();
              }
            }
          }
LABEL_42:
          UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, NextProcess);
          KiUnstackDetachProcess((struct _KTHREAD *)v41, 0);
        }
        NextProcess = PsGetNextProcess((_QWORD *)NextProcess, v9, v11, v12);
      }
      while ( NextProcess );
      v2 = a2;
    }
    *v2 = v40;
    MiReleaseScrubPacket((__int64)v38);
    return 0LL;
  }
  return result;
}
