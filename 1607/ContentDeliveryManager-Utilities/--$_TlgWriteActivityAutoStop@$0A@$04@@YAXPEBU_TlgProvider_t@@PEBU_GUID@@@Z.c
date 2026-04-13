/*
 * XREFs of ??$_TlgWriteActivityAutoStop@$0A@$04@@YAXPEBU_TlgProvider_t@@PEBU_GUID@@@Z @ 0x180029F84
 * Callers:
 *     ??1?$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VShellPlacementLogging@Logging@CreativeFramework@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18001CCD0 (--1-$ActivityData@VShellPlacementLogging@Logging@CreativeFramework@@U_TlgReflectorTag_Param0IsPr.c)
 * Callees:
 *     _TlgWrite @ 0x1800011F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

TLG_STATUS __fastcall _TlgWriteActivityAutoStop<0,5>(const struct _TlgProvider_t *a1, const GUID *a2)
{
  TLG_STATUS result; // eax
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-38h] BYREF

  if ( *(_DWORD *)a1 > 5u )
    return TlgWrite(a1, &unk_18007C798, a2, 0LL, 2u, &pData);
  return result;
}
