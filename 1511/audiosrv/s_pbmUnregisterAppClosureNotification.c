/*
 * XREFs of s_pbmUnregisterAppClosureNotification @ 0x180091670
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001D7D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?UnregisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x18009F274 (-UnregisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 */

__int64 __fastcall s_pbmUnregisterAppClosureNotification(CApplicationManager *a1)
{
  unsigned int v1; // edi
  int Process; // eax
  CApplicationManager *v3; // rcx
  struct CProcess *v4; // rbx
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
      CApplicationManager::UnregisterAppClosureNotificationClient(v3, v6);
      *((_DWORD *)v4 + 109) = 0;
    }
    if ( v4 )
      CUnknown::Release(v4);
  }
  return v1;
}
