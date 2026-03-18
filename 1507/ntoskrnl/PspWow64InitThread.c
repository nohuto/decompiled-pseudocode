/*
 * XREFs of PspWow64InitThread @ 0x140530C38
 * Callers:
 *     PspAllocateThread @ 0x140451490 (PspAllocateThread.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x1400206FC (RtlpGetLegacyContextLength.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PspWow64InitThreadGuestx86 @ 0x140530D98 (PspWow64InitThreadGuestx86.c)
 *     RtlpArchContextFlagFromMachine @ 0x140531A14 (RtlpArchContextFlagFromMachine.c)
 *     PspWowGetProcessMachine @ 0x140531A30 (PspWowGetProcessMachine.c)
 */

__int64 __fastcall PspWow64InitThread(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  int v6; // eax
  _DWORD *v7; // r10
  __int64 v8; // r11
  __int64 v9; // rdi
  int v10; // r13d
  int v11; // esi
  int v12; // r14d
  int v13; // r15d
  _DWORD *v14; // rdx
  unsigned __int16 ProcessMachine; // [rsp+30h] [rbp-98h]
  unsigned int v17; // [rsp+38h] [rbp-90h] BYREF
  _DWORD *v18; // [rsp+40h] [rbp-88h]
  __int64 v19; // [rsp+48h] [rbp-80h]
  _BYTE v20[48]; // [rsp+50h] [rbp-78h] BYREF

  v19 = a4;
  v5 = 0;
  ProcessMachine = PspWowGetProcessMachine();
  v6 = RtlpArchContextFlagFromMachine(ProcessMachine);
  if ( !v6 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v6, 0LL, &v17);
  v18 = *(_DWORD **)(v8 + 16);
  v9 = ~(v17 - 1) & ((unsigned __int64)v18 + v17 + 3);
  v10 = *(_DWORD *)(v8 + 40);
  v11 = HIDWORD(xmmword_14077F3F0);
  if ( *((_QWORD *)v7 + 31) != PspUserThreadStart )
    v11 = v7[62];
  v12 = v7[32];
  v13 = v7[34];
  KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v20);
  v14 = v18;
  *(_QWORD *)(v19 + 5256) = v18;
  *v14 = ProcessMachine << 16;
  if ( ProcessMachine == 332 )
  {
    PspWow64InitThreadGuestx86((_DWORD)BugCheckParameter1, v9, v11, v10, v12, v13);
  }
  else if ( ProcessMachine == 452 )
  {
    *(_DWORD *)(v9 + 56) = v10;
    *(_DWORD *)(v9 + 64) = v11;
    *(_DWORD *)(v9 + 4) = v12;
    *(_DWORD *)(v9 + 8) = v13;
    *(_QWORD *)(v9 + 68) = 48LL;
    *(_DWORD *)v9 = 2097159;
  }
  else
  {
    v5 = -1073741811;
  }
  KiUnstackDetachProcess((struct _KTHREAD *)v20, 0);
  return v5;
}
