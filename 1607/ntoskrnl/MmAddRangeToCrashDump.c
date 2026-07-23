/*
 * XREFs of MmAddRangeToCrashDump @ 0x1401E7880
 * Callers:
 *     MmGetDumpRange @ 0x1401E79D4 (MmGetDumpRange.c)
 *     ExAddPrivateDataToCrashDump @ 0x14022CA4C (ExAddPrivateDataToCrashDump.c)
 *     IopLiveDumpMarkDeviceNode @ 0x1403DB0FC (IopLiveDumpMarkDeviceNode.c)
 *     IopLiveDumpMarkImportantDumpData @ 0x1403DB154 (IopLiveDumpMarkImportantDumpData.c)
 *     IopLiveDumpMarkLoadedModuleList @ 0x1403DB23C (IopLiveDumpMarkLoadedModuleList.c)
 *     IopLiveDumpMarkProcessorData @ 0x1403DB2F4 (IopLiveDumpMarkProcessorData.c)
 *     IopLiveDumpMarkRequiredDumpData @ 0x1403DB400 (IopLiveDumpMarkRequiredDumpData.c)
 *     MmAddPrivateDataToCrashDump @ 0x1403DEC90 (MmAddPrivateDataToCrashDump.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400E9040 (ExAcquireSpinLockShared.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiAddRangeToCrashDump @ 0x1401E7468 (MiAddRangeToCrashDump.c)
 */

__int64 __fastcall MmAddRangeToCrashDump(
        __int64 (__fastcall **a1)(_QWORD, __int64, __int64),
        unsigned __int64 a2,
        __int64 a3)
{
  unsigned __int64 v4; // rbx
  int v5; // eax
  unsigned __int64 v6; // rdi
  unsigned __int64 *v7; // rcx
  __int64 v8; // rdx
  KIRQL v9; // si
  unsigned int v10; // ebx
  _BYTE v12[64]; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v13; // [rsp+70h] [rbp-48h]
  unsigned __int64 v14; // [rsp+78h] [rbp-40h]
  int v15; // [rsp+80h] [rbp-38h]

  v15 = 0;
  v4 = a2;
  if ( KeGetCurrentThread()->ApcState.Process == PsInitialSystemProcess )
  {
    v5 = v15;
    if ( (void (__noreturn *)())KeGetCurrentThread()[1].ApcState.ApcListHead[1].Flink != KeBalanceSetManager )
      v5 = 1;
    v15 = v5;
  }
  v13 = a2;
  v6 = a2 + a3 - 1;
  v14 = v6;
  v7 = (unsigned __int64 *)v12;
  v8 = 4LL;
  do
  {
    v4 = ((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v6 = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    *v7 = v4;
    v7[1] = v6;
    v7 += 2;
    --v8;
  }
  while ( v8 );
  v9 = 17;
  if ( (KiBugCheckActive & 3) == 0 && (struct _KTHREAD *)qword_140327098 != KeGetCurrentThread() )
    v9 = ExAcquireSpinLockShared(&dword_140326D78);
  v10 = MiAddRangeToCrashDump(a1, v4, v6, (__int64)v12, 3u);
  if ( v9 != 17 )
    ExReleaseSpinLockShared(&dword_140326D78, v9);
  return v10;
}
