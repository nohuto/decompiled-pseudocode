/*
 * XREFs of s_pbmUnregisterAppClosureNotification @ 0x180093E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180007DD0 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B5F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?UnregisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z @ 0x1800A20C4 (-UnregisterAppClosureNotificationClient@CApplicationManager@@QEAAJPEAVCProcess@@@Z.c)
 */

__int64 __fastcall s_pbmUnregisterAppClosureNotification(CApplicationManager *a1)
{
  unsigned int v1; // edi
  int Process; // eax
  CApplicationManager *v3; // rcx
  CUnknown *v4; // rbx
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
      CApplicationManager::UnregisterAppClosureNotificationClient(v3, v6);
      *((_DWORD *)v4 + 109) = 0;
    }
    if ( v4 )
      CUnknown::Release(v4);
  }
  return v1;
}
