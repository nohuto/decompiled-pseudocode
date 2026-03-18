/*
 * XREFs of PspWow64InitThread @ 0x1404A46DC
 * Callers:
 *     PspAllocateThread @ 0x1403F0BB0 (PspAllocateThread.c)
 * Callees:
 *     RtlpGetLegacyContextLength @ 0x14002B3BC (RtlpGetLegacyContextLength.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PspWow64InitThreadGuestx86 @ 0x1404A484C (PspWow64InitThreadGuestx86.c)
 *     RtlpArchContextFlagFromMachine @ 0x1404A575C (RtlpArchContextFlagFromMachine.c)
 *     PspWow64GetProcessMachine @ 0x1404A5AB0 (PspWow64GetProcessMachine.c)
 */

__int64 __fastcall PspWow64InitThread(_KPROCESS *BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebx
  int v6; // eax
  _DWORD *v7; // r10
  __int64 v8; // r11
  _DWORD *v9; // rdi
  unsigned int v10; // r13d
  unsigned int v11; // esi
  int v12; // r14d
  int v13; // r15d
  _DWORD *v14; // rdx
  unsigned __int16 ProcessMachine; // [rsp+30h] [rbp-98h]
  unsigned int v17; // [rsp+38h] [rbp-90h] BYREF
  _DWORD *v18; // [rsp+40h] [rbp-88h]
  __int64 v19; // [rsp+48h] [rbp-80h]
  $D4FCF91253F76F57393CBFE908971F67 v20; // [rsp+50h] [rbp-78h] BYREF

  v19 = a4;
  v5 = 0;
  ProcessMachine = PspWow64GetProcessMachine();
  v6 = RtlpArchContextFlagFromMachine(ProcessMachine);
  if ( !v6 )
    return 3221225485LL;
  RtlpGetLegacyContextLength(v6, 0LL, &v17);
  v18 = *(_DWORD **)(v8 + 16);
  v9 = (_DWORD *)(~(v17 - 1) & ((unsigned __int64)v18 + v17 + 3));
  v10 = *(_DWORD *)(v8 + 40);
  v11 = xmmword_1406FC460;
  if ( *((_QWORD *)v7 + 31) != PspUserThreadStart )
    v11 = v7[62];
  v12 = v7[32];
  v13 = v7[34];
  KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)&v20);
  v14 = v18;
  *(_QWORD *)(v19 + 5256) = v18;
  *v14 = ProcessMachine << 16;
  if ( ProcessMachine == 332 )
  {
    PspWow64InitThreadGuestx86(BugCheckParameter1, v9, v11, v10, v12, v13);
  }
  else if ( ProcessMachine == 452 )
  {
    memset(v9, 0, 0x1A0uLL);
    v9[14] = v10;
    v9[16] = v11;
    v9[1] = v12;
    v9[2] = v13;
    *(_QWORD *)(v9 + 17) = 48LL;
    *v9 = 2097159;
  }
  else
  {
    v5 = -1073741811;
  }
  KiUnstackDetachProcess(&v20, 0LL);
  return v5;
}
