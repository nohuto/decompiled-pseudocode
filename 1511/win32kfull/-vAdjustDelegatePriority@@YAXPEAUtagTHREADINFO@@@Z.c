/*
 * XREFs of ?vAdjustDelegatePriority@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C000D760
 * Callers:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 * Callees:
 *     <none>
 */

void __fastcall vAdjustDelegatePriority(PETHREAD *a1)
{
  HANDLE ThreadId; // rax
  __int128 v3; // [rsp+20h] [rbp-38h]
  __int128 SystemInformation; // [rsp+30h] [rbp-28h] BYREF
  int v5; // [rsp+40h] [rbp-18h]

  if ( ((_DWORD)a1[134] & 0x6000) == 0x2000 && (PsGetCurrentProcess() == gpepCSRSS || (unsigned int)IsDwmInputThread()) )
  {
    *(_QWORD *)&v3 = PsGetThreadProcessId(*a1);
    ThreadId = PsGetThreadId(*a1);
    v5 = 13;
    *((_QWORD *)&v3 + 1) = ThreadId;
    SystemInformation = v3;
    if ( ZwSetSystemInformation(SystemThreadPriorityClientIdInformation, &SystemInformation, 0x18uLL) >= 0 )
      *((_DWORD *)a1 + 268) |= 0x4000u;
  }
}
