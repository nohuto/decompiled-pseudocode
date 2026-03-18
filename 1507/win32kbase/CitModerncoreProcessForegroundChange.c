/*
 * XREFs of CitModerncoreProcessForegroundChange @ 0x1C00E4A60
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@@Z @ 0x1C0057180 (-CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0PEAUtagMONITOR@@@Z.c)
 */

void __fastcall CitModerncoreProcessForegroundChange(int a1, int a2, struct tagMONITOR *a3)
{
  void *v3; // rbx
  struct tagPROCESSINFO *ProcessWin32Process; // rdi
  NTSTATUS v6; // eax
  struct _KPROCESS *v7; // rcx
  NTSTATUS v8; // eax
  struct tagPROCESSINFO *v9; // r8
  struct _KPROCESS *v10; // rcx
  PEPROCESS Process; // [rsp+20h] [rbp-10h] BYREF
  PEPROCESS v12; // [rsp+68h] [rbp+38h] BYREF

  v3 = (void *)a2;
  Process = 0LL;
  ProcessWin32Process = 0LL;
  v12 = 0LL;
  v6 = PsLookupProcessByProcessId((HANDLE)a1, &Process);
  v7 = Process;
  if ( v6 < 0 )
    v7 = 0LL;
  Process = v7;
  v8 = PsLookupProcessByProcessId(v3, &v12);
  v10 = v12;
  if ( v8 < 0 )
    v10 = 0LL;
  v12 = v10;
  if ( Process )
  {
    PsGetProcessWin32Process(Process);
    v10 = v12;
  }
  if ( v10 )
    ProcessWin32Process = (struct tagPROCESSINFO *)PsGetProcessWin32Process(v10);
  CitpProcessForegroundChange(ProcessWin32Process, 0LL, v9, a3);
  if ( v12 )
    ObfDereferenceObject(v12);
  if ( Process )
    ObfDereferenceObject(Process);
}
