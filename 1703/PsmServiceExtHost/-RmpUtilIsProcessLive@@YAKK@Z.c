/*
 * XREFs of ?RmpUtilIsProcessLive@@YAKK@Z @ 0x18002ACC8
 * Callers:
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002AE68 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpUtilIsProcessLive(DWORD dwProcessId)
{
  HANDLE v1; // rax
  unsigned int v2; // ebx
  void *v3; // rdi
  DWORD ExitCode; // [rsp+38h] [rbp+10h] BYREF

  v1 = OpenProcess(0x1000u, 0, dwProcessId);
  v2 = 0;
  v3 = v1;
  if ( v1 )
  {
    if ( GetExitCodeProcess(v1, &ExitCode) )
      LOBYTE(v2) = ExitCode == 259;
    CloseHandle(v3);
  }
  return v2;
}
