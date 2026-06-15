/*
 * XREFs of ?RpcGetProcess@CWindowsPolicyManager@@UEAAJPEAXPEAPEAUIAudioProcess@@@Z @ 0x1800047F0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800117F4 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 */

signed int __fastcall CWindowsPolicyManager::RpcGetProcess(
        CWindowsPolicyManager *this,
        void *a2,
        struct IAudioProcess **a3)
{
  struct IAudioProcess *v3; // rbx
  struct CProcess *v5; // rcx
  signed int result; // eax
  struct CProcess *v7; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v7 = 0LL;
  v5 = 0LL;
  result = a3 == 0LL ? 0x80004003 : 0;
  if ( a3 )
  {
    result = CApplicationManager::RpcGetProcess(0LL, a2, &v7);
    v5 = v7;
  }
  if ( result >= 0 )
  {
    if ( v5 )
      v3 = (struct CProcess *)((char *)v5 + 16);
    *a3 = v3;
  }
  return result;
}
