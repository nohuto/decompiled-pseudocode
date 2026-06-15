/*
 * XREFs of ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x1800045D0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180012764 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 */

int __fastcall CWindowsPolicyManager::RpcGetProcess(CWindowsPolicyManager *this, void *a2, struct IAudioProcess **a3)
{
  struct IAudioProcess *v3; // rbx
  int result; // eax
  struct CProcess *v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v6 = 0LL;
  result = 0;
  if ( !a3 )
    result = -2147467261;
  if ( result >= 0 )
  {
    result = CApplicationManager::RpcGetProcess((CApplicationManager *)0x80004003LL, a2, &v6);
    if ( result >= 0 )
    {
      if ( v6 )
        v3 = (struct CProcess *)((char *)v6 + 16);
      *a3 = v3;
    }
  }
  return result;
}
