/*
 * XREFs of s_pbmUnregisterAppManagerNotification @ 0x1800916E0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x18001D7D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ?Release@CUnknown@@UEAAKXZ @ 0x180032A30 (-Release@CUnknown@@UEAAKXZ.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18009CED0 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 */

__int64 __fastcall s_pbmUnregisterAppManagerNotification(CApplicationManager *a1)
{
  unsigned int v1; // edi
  int Process; // eax
  struct CProcess *v3; // rbx
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
      TsSessionIdDeleteAppManagerClient(v5);
      *((_DWORD *)v3 + 108) = 0;
    }
    if ( v3 )
      CUnknown::Release(v3);
  }
  return v1;
}
