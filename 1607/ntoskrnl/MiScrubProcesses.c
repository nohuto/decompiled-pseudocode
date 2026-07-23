/*
 * XREFs of MiScrubProcesses @ 0x140664F24
 * Callers:
 *     MmScrubMemory @ 0x140665370 (MmScrubMemory.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockVad @ 0x140014020 (MiUnlockVad.c)
 *     MiGetProcessPartition @ 0x14002B670 (MiGetProcessPartition.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14002B9E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14002BA50 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLockVad @ 0x14002BB30 (MiLockVad.c)
 *     MiVadDeleted @ 0x14002BEF0 (MiVadDeleted.c)
 *     MiReferenceVad @ 0x14002BEFC (MiReferenceVad.c)
 *     MiVadMapsLargeImage @ 0x14002BF90 (MiVadMapsLargeImage.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140096C30 (ExReleaseAutoExpandPushLockExclusive.c)
 *     ExAcquireAutoExpandPushLockExclusive @ 0x140097AA0 (ExAcquireAutoExpandPushLockExclusive.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     RtlFindSetBitsEx @ 0x140112F60 (RtlFindSetBitsEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiLockPage @ 0x140159948 (MiLockPage.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiUnlockPage @ 0x1401F29AC (MiUnlockPage.c)
 *     MiMakePageBad @ 0x1401FDFCC (MiMakePageBad.c)
 *     MiScrubAweMappedPage @ 0x1401FE050 (MiScrubAweMappedPage.c)
 *     MiScrubLargeMappedPage @ 0x1401FE160 (MiScrubLargeMappedPage.c)
 *     MiScrubPage @ 0x1401FE690 (MiScrubPage.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PsGetNextProcess @ 0x1404EBF8C (PsGetNextProcess.c)
 *     MiInitializeScrubPacket @ 0x140664DC0 (MiInitializeScrubPacket.c)
 *     MiReleaseScrubPacket @ 0x140664E68 (MiReleaseScrubPacket.c)
 */

__int64 __fastcall MiScrubProcesses(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // rbx
  int *v5; // rbp
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 NextProcess; // rdi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r12d
  _QWORD *v13; // r14
  _QWORD *v14; // r13
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  unsigned int v17; // r15d
  _QWORD *v18; // rax
  __int64 v19; // rbp
  _QWORD *v20; // rcx
  _QWORD *PoolWithTag; // rax
  __int64 v22; // rax
  int v23; // r15d
  __int64 *v24; // r14
  unsigned int i; // ebp
  char *v26; // rbx
  __int64 v27; // rcx
  ULONG64 v28; // rbx
  ULONG64 SetBits; // rax
  ULONG64 v30; // r14
  __int64 v31; // rbp
  unsigned __int64 v32; // rcx
  int v33; // eax
  unsigned __int8 v34; // bl
  _RTL_BITMAP_EX *v35; // rcx
  _QWORD *v38; // [rsp+30h] [rbp-D8h]
  _QWORD *v39; // [rsp+30h] [rbp-D8h]
  _RTL_BITMAP_EX *BitMapHeader; // [rsp+38h] [rbp-D0h]
  _BYTE v42[24]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v43; // [rsp+68h] [rbp-A0h]
  __int64 v44; // [rsp+78h] [rbp-90h]
  _BYTE v45[48]; // [rsp+90h] [rbp-78h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = (int *)a1;
  result = MiInitializeScrubPacket(a1, -1, a2, (unsigned __int64)v42);
  if ( (int)result >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    NextProcess = PsGetNextProcess(0LL);
    if ( NextProcess )
    {
      do
      {
        if ( MiGetProcessPartition(NextProcess) == v5 )
        {
          if ( *(_DWORD *)(v4 + 4) )
            break;
          BitMapHeader = *(_RTL_BITMAP_EX **)(NextProcess + 1032);
          if ( BitMapHeader || *(_DWORD *)(NextProcess + 1708) )
          {
            KiStackAttachProcess((_KPROCESS *)NextProcess, 0, (__int64)v45);
            --CurrentThread->KernelApcDisable;
            LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, NextProcess);
            if ( (*(_DWORD *)(NextProcess + 772) & 0x20) != 0 )
            {
              UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, NextProcess);
            }
            else
            {
              v12 = *(_DWORD *)(NextProcess + 1708);
              v13 = 0LL;
              v38 = 0LL;
              v14 = 0LL;
              v15 = *(_QWORD **)(NextProcess + 1568);
              v16 = 0LL;
              v17 = 13;
              while ( v15 )
              {
                v16 = v15;
                v15 = (_QWORD *)*v15;
              }
              while ( v12 && v16 )
              {
                v18 = (_QWORD *)v16[1];
                v19 = (__int64)v16;
                v20 = v16;
                if ( v18 )
                {
                  do
                  {
                    v16 = v18;
                    v18 = (_QWORD *)*v18;
                  }
                  while ( v18 );
                }
                else
                {
                  while ( 1 )
                  {
                    v16 = (_QWORD *)(v16[2] & 0xFFFFFFFFFFFFFFFCuLL);
                    if ( !v16 || (_QWORD *)*v16 == v20 )
                      break;
                    v20 = v16;
                  }
                }
                if ( (*(_BYTE *)(v19 + 48) & 7) == 5 || MiVadMapsLargeImage(v19) )
                {
                  MiLockVad((__int64)CurrentThread, v19);
                  if ( (unsigned int)MiVadDeleted(v19) == 1 )
                  {
                    MiUnlockVad((__int64)CurrentThread, v19);
                  }
                  else
                  {
                    if ( v17 >= 0xD )
                    {
                      PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x70uLL, 0x7356694Du);
                      v13 = PoolWithTag;
                      if ( !PoolWithTag )
                      {
                        MiUnlockVad((__int64)CurrentThread, v19);
                        break;
                      }
                      v17 = 0;
                      memset(PoolWithTag, 0, 0x70uLL);
                      if ( v14 )
                        *v38 = v13;
                      else
                        v14 = v13;
                      v38 = v13;
                    }
                    v22 = v17++;
                    v13[v22 + 1] = v19;
                    MiReferenceVad(v19);
                    MiUnlockVad((__int64)CurrentThread, v19);
                    --v12;
                  }
                }
              }
              UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, NextProcess);
              v23 = 1;
              if ( !v14 )
                goto LABEL_43;
              do
              {
                v24 = v14 + 1;
                v39 = (_QWORD *)*v14;
                for ( i = 0; i < 0xD; ++i )
                {
                  v26 = (char *)*v24;
                  if ( !*v24 )
                    break;
                  MiLockVad((__int64)CurrentThread, *v24);
                  if ( !(unsigned int)MiVadDeleted((__int64)v26) && v23 == 1 )
                    v23 = MiScrubLargeMappedPage(v27, (__int64)v42, NextProcess, a2);
                  MiUnlockAndDereferenceVad(v26);
                  ++v24;
                }
                ExFreePoolWithTag(v14, 0);
                v14 = v39;
              }
              while ( v39 );
              if ( v23 )
              {
LABEL_43:
                LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, NextProcess);
                if ( (*(_DWORD *)(NextProcess + 772) & 0x20) != 0 )
                {
                  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, NextProcess);
                }
                else
                {
                  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, NextProcess);
                  if ( BitMapHeader )
                  {
                    v28 = 0LL;
                    while ( !*(_DWORD *)(a2 + 4) )
                    {
                      --CurrentThread->SpecialApcDisable;
                      ExAcquireAutoExpandPushLockExclusive((ULONG_PTR)&BitMapHeader[1], 0LL);
                      SetBits = RtlFindSetBitsEx(BitMapHeader, 1uLL, v28);
                      v30 = SetBits;
                      if ( SetBits < v28 || SetBits == -1LL )
                      {
                        v35 = BitMapHeader + 1;
LABEL_64:
                        ExReleaseAutoExpandPushLockExclusive(v35, 0LL);
                        KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
                        break;
                      }
                      v31 = 48 * SetBits - 0x58000000000LL;
                      v32 = *(_QWORD *)(v31 + 8);
                      if ( v32 )
                        v33 = MiScrubAweMappedPage(v32, SetBits, (__int64)v42, NextProcess);
                      else
                        v33 = MiScrubPage((__int64)v42, v43, v31, 0LL);
                      if ( v33 < 0 )
                      {
                        v34 = MiLockPage(v31);
                        MiMakePageBad(v31, 0);
                        MiUnlockPage(v31, v34);
                      }
                      v28 = v30 + 1;
                      v35 = BitMapHeader + 1;
                      if ( v30 + 1 >= BitMapHeader->SizeOfBitMap )
                        goto LABEL_64;
                      ExReleaseAutoExpandPushLockExclusive(v35, 0LL);
                      KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
                    }
                  }
                }
              }
              v5 = (int *)a1;
              v4 = a2;
            }
            KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v9, v10, v11);
            KiUnstackDetachProcess((struct _KTHREAD *)v45, 0);
          }
        }
        NextProcess = PsGetNextProcess((_QWORD *)NextProcess);
      }
      while ( NextProcess );
      v3 = a3;
    }
    *v3 = v44;
    MiReleaseScrubPacket((__int64)v42);
    return 0LL;
  }
  return result;
}
