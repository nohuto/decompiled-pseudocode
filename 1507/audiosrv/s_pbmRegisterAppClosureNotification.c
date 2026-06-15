/*
 * XREFs of s_pbmRegisterAppClosureNotification @ 0x180093DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180007DD0 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B5F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x1800A1CBC (-RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 */

__int64 __fastcall s_pbmRegisterAppClosureNotification(CApplicationManager *a1)
{
  int v1; // ebx
  int Process; // eax
  CApplicationManager *v3; // rcx
  CUnknown *v4; // rdi
  CUnknown *v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v6 = 0LL;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(a1, a1, &v6);
    v4 = v6;
    v1 = Process;
    if ( Process >= 0 )
    {
      v1 = CApplicationManager::RegisterAppClosureNotificationClient(v3, v6);
      if ( v1 >= 0 )
        *((_DWORD *)v4 + 109) = 1;
    }
    if ( v4 )
      CUnknown::Release(v4);
  }
  return (unsigned int)v1;
}
