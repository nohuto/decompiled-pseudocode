/*
 * XREFs of PspWow64InitThread @ 0x1404FDE08
 * Callers:
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 * Callees:
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     RtlpGetLegacyContextLength @ 0x1400F271C (RtlpGetLegacyContextLength.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlpArchContextFlagFromMachine @ 0x1404FBC80 (RtlpArchContextFlagFromMachine.c)
 *     PsWow64GetProcessMachine @ 0x1404FDDF0 (PsWow64GetProcessMachine.c)
 *     PspWow64InitThreadGuestx86 @ 0x1404FDF80 (PspWow64InitThreadGuestx86.c)
 *     PspWow64GetSharedInformation @ 0x1404FE07C (PspWow64GetSharedInformation.c)
 */

__int64 __fastcall PspWow64InitThread(_KPROCESS *BugCheckParameter1, __int64 a2, _DWORD *a3, __int64 a4)
{
  unsigned int v7; // ebx
  unsigned __int16 ProcessMachine; // r12
  int v9; // eax
  _DWORD *v10; // rdi
  unsigned int SharedInformation; // esi
  int v12; // r15d
  int v13; // r14d
  _DWORD *v14; // rdx
  _DWORD v16[2]; // [rsp+30h] [rbp-88h] BYREF
  _DWORD *v17; // [rsp+38h] [rbp-80h]
  __int64 v18; // [rsp+40h] [rbp-78h]
  _BYTE v19[48]; // [rsp+48h] [rbp-70h] BYREF

  v18 = a4;
  v7 = 0;
  ProcessMachine = PsWow64GetProcessMachine((__int64)BugCheckParameter1);
  v9 = RtlpArchContextFlagFromMachine(ProcessMachine);
  if ( !v9 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v9, 0LL, v16);
  v17 = *(_DWORD **)(a2 + 16);
  v10 = (_DWORD *)((unsigned int)~(v16[0] - 1) & ((unsigned __int64)v17 + v16[0] + 3));
  v16[0] = *(_DWORD *)(a2 + 40);
  if ( *((_QWORD *)a3 + 31) == PspUserThreadStart )
    SharedInformation = PspWow64GetSharedInformation(ProcessMachine, 4LL);
  else
    SharedInformation = a3[62];
  v12 = a3[32];
  v13 = a3[34];
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v19);
  v14 = v17;
  *(_QWORD *)(v18 + 5256) = v17;
  *v14 = ProcessMachine << 16;
  if ( ProcessMachine == 332 )
  {
    PspWow64InitThreadGuestx86(BugCheckParameter1, v10, SharedInformation, v16[0], v12, v13);
  }
  else if ( ProcessMachine == 452 )
  {
    memset(v10, 0, 0x1A0uLL);
    v10[14] = v16[0];
    v10[16] = SharedInformation;
    v10[1] = v12;
    v10[2] = v13;
    *(_QWORD *)(v10 + 17) = 48LL;
    *v10 = 2097159;
  }
  else
  {
    v7 = -1073741811;
    v16[1] = -1073741811;
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v19, 0);
  return v7;
}
