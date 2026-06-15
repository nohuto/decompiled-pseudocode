/*
 * XREFs of ??0?$CComQIPtr@UIAudioCrossProcessServerEndpoint@@$1?_GUID_1d1bf0fb_6622_4a68_a04a_312d410a34bc@@3U__s_GUID@@B@ATL@@QEAA@PEAUIUnknown@@@Z @ 0x140011D70
 * Callers:
 *     ?OnDisconnectedFromPump@CPipeInstance@@QEAAXXZ @ 0x140007AD0 (-OnDisconnectedFromPump@CPipeInstance@@QEAAXXZ.c)
 *     ?OnConnectedToPump@CPipeInstance@@QEAAX_J0@Z @ 0x140007BD0 (-OnConnectedToPump@CPipeInstance@@QEAAX_J0@Z.c)
 * Callees:
 *     ?QueryInterface@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140011680 (-QueryInterface@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

char **__fastcall ATL::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_1d1bf0fb_6622_4a68_a04a_312d410a34bc>::CComQIPtr<IAudioCrossProcessServerEndpoint,&__s_GUID const _GUID_1d1bf0fb_6622_4a68_a04a_312d410a34bc>(
        char **a1,
        char *a2)
{
  __int64 (__fastcall *v3)(char *, const struct _GUID *, char **); // rax

  *a1 = 0LL;
  if ( a2 )
  {
    v3 = **(__int64 (__fastcall ***)(char *, const struct _GUID *, char **))a2;
    if ( v3 == ATL::CComObject<CCrossProcessServerInputEndpoint>::QueryInterface )
      ATL::CComObject<CCrossProcessServerInputEndpoint>::QueryInterface(
        a2,
        &GUID_1d1bf0fb_6622_4a68_a04a_312d410a34bc,
        a1);
    else
      v3(a2, &GUID_1d1bf0fb_6622_4a68_a04a_312d410a34bc, a1);
  }
  return a1;
}
