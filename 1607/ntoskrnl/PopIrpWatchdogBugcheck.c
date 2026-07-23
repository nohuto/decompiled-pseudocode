/*
 * XREFs of PopIrpWatchdogBugcheck @ 0x1401FF0D0
 * Callers:
 *     PopDequeueQuerySetIrp @ 0x14012BD3C (PopDequeueQuerySetIrp.c)
 *     PopIrpWatchdog @ 0x1401FF0AC (PopIrpWatchdog.c)
 * Callees:
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PopInternalAddToDumpFile @ 0x1401FEEA4 (PopInternalAddToDumpFile.c)
 */

void __fastcall __noreturn PopIrpWatchdogBugcheck(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  ULONG_PTR BugCheckParameter4; // rbx
  ULONG_PTR BugCheckParameter3[5]; // [rsp+30h] [rbp-28h] BYREF

  v1 = a1;
  if ( !*(_DWORD *)(a1 + 188) )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( v2 )
      v3 = *(_QWORD *)(*(_QWORD *)(v2 + 312) + 40LL);
    else
      v3 = 0LL;
    v4 = *(_QWORD *)(v3 + 248);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 72LL * (*(char *)(v4 + 66) - 1) + 272);
      if ( *(_BYTE *)(v5 + 184) == *(_BYTE *)(a1 + 184) )
        v1 = v5;
    }
  }
  BugCheckParameter4 = *(_QWORD *)(v1 + 16);
  PopInternalAddToDumpFile(0LL, 0, *(_QWORD *)(v1 + 24));
  IoAddTriageDumpDataBlock(BugCheckParameter4, *(unsigned __int16 *)(BugCheckParameter4 + 2));
  IoAddTriageDumpDataBlock(v1, 248);
  memset(BugCheckParameter3, 0, 0x20uLL);
  LODWORD(BugCheckParameter3[0]) = 98304;
  BugCheckParameter3[1] = (ULONG_PTR)&PopIrpList;
  BugCheckParameter3[2] = (ULONG_PTR)&PopIrpThreadList;
  BugCheckParameter3[3] = ExWorkerQueue;
  KeBugCheckEx(0x9Fu, 3uLL, *(_QWORD *)(v1 + 24), (ULONG_PTR)BugCheckParameter3, BugCheckParameter4);
}
