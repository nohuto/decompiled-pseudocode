/*
 * XREFs of ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C00E7AF4
 * Callers:
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdjustDelegatePriority(PETHREAD *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  HANDLE ThreadId; // rax
  __int128 v7; // [rsp+20h] [rbp-38h]
  __int128 SystemInformation; // [rsp+30h] [rbp-28h] BYREF
  int v9; // [rsp+40h] [rbp-18h]

  if ( ((_DWORD)a1[135] & 0x6000) == 0x2000
    && (PsGetCurrentProcess(a1, a2) == gpepCSRSS || (unsigned int)IsDwmInputThread(v3, gpepCSRSS, v4, v5)) )
  {
    *(_QWORD *)&v7 = PsGetThreadProcessId(*a1);
    ThreadId = PsGetThreadId(*a1);
    v9 = 13;
    *((_QWORD *)&v7 + 1) = ThreadId;
    SystemInformation = v7;
    if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL) >= 0 )
      *((_DWORD *)a1 + 270) |= 0x4000u;
  }
}
