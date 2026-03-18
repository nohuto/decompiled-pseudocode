/*
 * XREFs of I_PlaySoundkPostMessage @ 0x140206CE0
 * Callers:
 *     PlaySoundPostMessage @ 0x1403E3070 (PlaySoundPostMessage.c)
 * Callees:
 *     <none>
 */

CLIENT_CALL_RETURN __fastcall I_PlaySoundkPostMessage(__int64 a1, __int64 a2, int a3, int a4, int a5, __int64 a6)
{
  int v9; // [rsp+38h] [rbp-20h]

  v9 = 0;
  return Ndr64AsyncClientCall((MIDL_STUBLESS_PROXY_INFO *)&pProxyInfo, 0, 0LL, a1, a2, a3, a4, v9, a6);
}
