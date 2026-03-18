/*
 * XREFs of ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0059BA0
 * Callers:
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdjustDelegatePriority(PETHREAD *a1)
{
  __int64 v2; // rcx
  HANDLE ThreadId; // rax
  __int128 v4; // [rsp+20h] [rbp-38h]
  __int128 SystemInformation; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+40h] [rbp-18h]

  if ( ((_DWORD)a1[137] & 0x6000) == 0x2000
    && (PsGetCurrentProcess() == gpepCSRSS || (unsigned int)IsDwmInputThread(v2, gpepCSRSS)) )
  {
    *(_QWORD *)&v4 = PsGetThreadProcessId(*a1);
    ThreadId = PsGetThreadId(*a1);
    v6 = 13;
    *((_QWORD *)&v4 + 1) = ThreadId;
    SystemInformation = v4;
    if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL) >= 0 )
      *((_DWORD *)a1 + 274) |= 0x4000u;
  }
}
