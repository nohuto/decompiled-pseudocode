/*
 * XREFs of ?ResetOutput@CInteractionContextWrapper@@UEAAXXZ @ 0x180143150
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     ?ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z @ 0x1800A80A4 (-ResetCachedInteractionOutput@CInteractionContextWrapper@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CInteractionContextWrapper::ResetOutput(CInteractionContextWrapper *this)
{
  int v1; // edx
  const GUID *v2; // r8
  const GUID *v3; // r9
  const GUID *v4; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  const GUID **v6; // [rsp+58h] [rbp-20h]
  int v7; // [rsp+60h] [rbp-18h]
  int v8; // [rsp+64h] [rbp-14h]

  CInteractionContextWrapper::ResetCachedInteractionOutput(this, 0LL);
  if ( (unsigned int)pRelatedActivityId > 4 && (qword_18019E950 & 2) != 0 && (qword_18019E958 & 2) == qword_18019E958 )
  {
    v8 &= v1;
    v6 = &v4;
    v4 = v3;
    v7 = 8;
    TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017EC37, v2, v3, 3u, &pData);
  }
}
