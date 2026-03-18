/*
 * XREFs of ExpWaitForResource @ 0x14007F400
 * Callers:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ExAcquireSharedStarveExclusive @ 0x1400A4BB0 (ExAcquireSharedStarveExclusive.c)
 *     ExAcquireSharedWaitForExclusive @ 0x1400CF384 (ExAcquireSharedWaitForExclusive.c)
 * Callees:
 *     ExpApplyPriorityBoost @ 0x14007EC80 (ExpApplyPriorityBoost.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     PerfLogExecutiveResourceWait @ 0x1402106F4 (PerfLogExecutiveResourceWait.c)
 */

NTSTATUS __fastcall ExpWaitForResource(__int64 a1, void *a2)
{
  unsigned int v4; // r12d
  unsigned int v5; // r14d
  unsigned int v6; // r15d
  struct _KTHREAD *CurrentThread; // rdi
  int v8; // edx
  int v9; // r8d
  NTSTATUS result; // eax
  LARGE_INTEGER Timeout; // [rsp+38h] [rbp-50h] BYREF
  struct _KTHREAD *v12; // [rsp+40h] [rbp-48h]

  __incgsdword(0x6328u);
  v4 = 0;
  v5 = 66084;
  if ( *(void **)(a1 + 40) != a2 )
    v5 = 66116;
  v6 = 0;
  ++*(_DWORD *)(a1 + 68);
  Timeout.QuadPart = -5000000LL;
  CurrentThread = KeGetCurrentThread();
  v12 = CurrentThread;
  v8 = 0;
  v9 = (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7;
  if ( (CurrentThread->Process[1].DirectoryTableBase & 0x10000000000000LL) != 0 )
  {
    v9 = 0;
  }
  else if ( ((*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) >> 9) & 7u) >= 2 )
  {
    goto LABEL_5;
  }
  if ( CurrentThread != KeGetCurrentThread() || !HIDWORD(CurrentThread[1].Timer.TimerListEntry.Flink) )
  {
LABEL_5:
    if ( v9 <= 1 )
      goto LABEL_8;
  }
  if ( (*(_BYTE *)(a1 + 26) & 4) == 0 )
    v8 = 4;
LABEL_8:
  if ( CurrentThread->Priority > (int)*(unsigned __int8 *)(a1 + 27) )
    v8 |= 0xFF00u;
  if ( !v8 )
    goto LABEL_12;
  while ( 1 )
  {
    ExpApplyPriorityBoost(a1, v8, (__int64)CurrentThread);
LABEL_12:
    result = KeWaitForSingleObject(a2, WrResource, 0, 0, &Timeout);
    if ( result != 258 )
      break;
    ++v4;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0 )
      PerfLogExecutiveResourceWait(v5, a1, v4);
    ++v6;
    Timeout.QuadPart = ExpTimeout;
    if ( ExResourceTimeoutCount )
    {
      if ( v6 > ExResourceTimeoutCount )
      {
        v6 = 0;
        DbgPrintEx(0, 0, "Possible deadlock. Use !locks %p to determine the resource owner\n", (const void *)a1);
        __debugbreak();
      }
    }
    LOWORD(v8) = -256;
  }
  return result;
}
