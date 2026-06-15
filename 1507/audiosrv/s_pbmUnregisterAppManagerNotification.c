/*
 * XREFs of s_pbmUnregisterAppManagerNotification @ 0x180093EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180007DD0 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001B5F0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18009FD64 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 */

__int64 __fastcall s_pbmUnregisterAppManagerNotification(CApplicationManager *a1)
{
  unsigned int v1; // edi
  int Process; // eax
  CUnknown *v3; // rbx
  CUnknown *v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = 0;
  v5 = 0LL;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(a1, a1, &v5);
    v3 = v5;
    v1 = Process;
    if ( Process >= 0 )
    {
      TsSessionIdDeleteAppManagerClient(v5);
      *((_DWORD *)v3 + 108) = 0;
    }
    if ( v3 )
      CUnknown::Release(v3);
  }
  return v1;
}
