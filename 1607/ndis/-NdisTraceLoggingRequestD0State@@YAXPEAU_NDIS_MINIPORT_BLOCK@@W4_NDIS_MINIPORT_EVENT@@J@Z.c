/*
 * XREFs of ?NdisTraceLoggingRequestD0State@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@J@Z @ 0x1C0012308
 * Callers:
 *     ndisRequestDevicePowerD0 @ 0x1C00121F4 (ndisRequestDevicePowerD0.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C00184AC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0023144 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 */

void __fastcall NdisTraceLoggingRequestD0State(const struct _TlgProvider_t *a1, enum _NDIS_MINIPORT_EVENT a2)
{
  __int64 v2; // rcx
  const GUID *v3; // r8
  const GUID *v4; // r9
  unsigned int v5; // r10d
  __int64 v6; // r11
  __int64 v7; // rcx
  unsigned int v8; // r10d
  const void *v9; // rdx
  const unsigned __int16 *v10; // rax
  struct _TlgProvider_t *p_hProvider; // rcx
  struct _TlgProvider_t *v12; // rax
  const unsigned __int16 *v13; // rax
  struct _TlgProvider_t hProvider; // [rsp+30h] [rbp-29h] BYREF
  const unsigned __int16 **p_ProviderMetadataPtr; // [rsp+70h] [rbp+17h]
  __int64 v16; // [rsp+78h] [rbp+1Fh]
  struct _TlgProvider_t *v17; // [rsp+80h] [rbp+27h]
  __int64 v18; // [rsp+88h] [rbp+2Fh]
  struct _TlgProvider_t *v19; // [rsp+90h] [rbp+37h]
  __int64 v20; // [rsp+98h] [rbp+3Fh]

  if ( a2 != NdisMEventD0_SSResume )
  {
    if ( (unsigned int)dword_1C0088010 <= 5 || !TlgKeywordOn(a1, 0x400000000000uLL) )
      return;
    hProvider.LevelPlus1 = v5;
    hProvider.CallbackContext = (void *)(v2 + 4064);
    v9 = &unk_1C00793AA;
    v13 = (const unsigned __int16 *)*(unsigned __int16 *)(v2 + 4086);
    p_hProvider = &hProvider;
    hProvider.ProviderMetadataPtr = v13;
    p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
    *(&hProvider.LevelPlus1 + 1) = (unsigned __int16)v4;
    v12 = (struct _TlgProvider_t *)(&hProvider.LevelPlus1 + 1);
LABEL_9:
    v20 = 4LL;
    v19 = p_hProvider;
    v18 = 4LL;
    v17 = v12;
    v16 = v6;
    hProvider.AnnotationFunc = (void (__fastcall *)())16;
    TlgWrite(p_hProvider, v9, v3, v4, 6u, (EVENT_DATA_DESCRIPTOR *)&hProvider.KeywordAny);
    return;
  }
  if ( (unsigned int)dword_1C0088010 > 5 && TlgKeywordOn(a1, 0x200000000000uLL) )
  {
    hProvider.LevelPlus1 = v6;
    hProvider.CallbackContext = (void *)(v7 + 4064);
    v9 = &unk_1C0079E9C;
    v10 = (const unsigned __int16 *)*(unsigned __int16 *)(v7 + 4086);
    p_hProvider = (struct _TlgProvider_t *)(&hProvider.LevelPlus1 + 1);
    hProvider.ProviderMetadataPtr = v10;
    p_ProviderMetadataPtr = &hProvider.ProviderMetadataPtr;
    v12 = &hProvider;
    *(&hProvider.LevelPlus1 + 1) = v8;
    goto LABEL_9;
  }
}
