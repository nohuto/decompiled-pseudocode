/*
 * XREFs of s_pbmRegisterAppClosureNotification @ 0x1800915F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001D7D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18009ED90 (-RegisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 */

__int64 __fastcall s_pbmRegisterAppClosureNotification(CApplicationManager *a1)
{
  int v1; // ebx
  int Process; // eax
  CApplicationManager *v3; // rcx
  struct CProcess *v4; // rdi
  struct CProcess *v6; // [rsp+38h] [rbp+10h] BYREF

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
