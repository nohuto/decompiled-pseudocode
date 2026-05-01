/*
 * XREFs of ExecutionModel::ProcessDead @ 0x18002CD7C
 * Callers:
 *     ?ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18002BBC4 (-ApplyResourceSet_Legacy@ResourceManager@ExecutionModel@@QEAAJPEAVResourceSet@2@KPEAPEAU_RM_ACTI.c)
 * Callees:
 *     ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x1800039BC (-_Delete@-$auto_xxx@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ.c)
 */

__int64 __fastcall ExecutionModel::ProcessDead(DWORD dwProcessId)
{
  HANDLE v1; // rax
  unsigned int v2; // ebx
  DWORD ExitCode; // [rsp+38h] [rbp+10h] BYREF
  void *v5; // [rsp+40h] [rbp+18h] BYREF

  v1 = OpenProcess(0x400u, 0, dwProcessId);
  v2 = 0;
  v5 = v1;
  if ( !v1 || !GetExitCodeProcess(v1, &ExitCode) || ExitCode != 259 )
    v2 = 1;
  tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&v5);
  return v2;
}
