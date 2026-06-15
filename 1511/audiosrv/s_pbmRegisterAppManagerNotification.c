/*
 * XREFs of s_pbmRegisterAppManagerNotification @ 0x180002870
 * Callers:
 *     <none>
 * Callees:
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x1800028DC (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001D7D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 */

__int64 __fastcall s_pbmRegisterAppManagerNotification(CApplicationManager *a1)
{
  int v1; // ebx
  int Process; // eax
  struct CProcess *v3; // rdi
  struct CProcess *v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v5 = 0LL;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(a1, a1, &v5);
    v3 = v5;
    v1 = Process;
    if ( Process >= 0 )
    {
      v1 = TsSessionIdAddAppManagerClient(v5);
      if ( v1 >= 0 )
        *((_DWORD *)v3 + 108) = 1;
    }
    if ( v3 )
      CUnknown::Release(v3);
  }
  return (unsigned int)v1;
}
