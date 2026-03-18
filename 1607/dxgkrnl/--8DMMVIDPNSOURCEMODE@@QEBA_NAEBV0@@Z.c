/*
 * XREFs of ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBV0@@Z @ 0x1C0004308
 * Callers:
 *     ?FindByValue@?$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z @ 0x1C001D594 (-FindByValue@-$Set@VDMMVIDPNSOURCEMODE@@@@QEBAPEAVDMMVIDPNSOURCEMODE@@QEBV2@@Z.c)
 *     ??8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C0032CF0 (--8DMMVIDPNSOURCEMODE@@QEBA_NAEBU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z.c)
 *     ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C007D710 (-AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D.c)
 *     ?IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z @ 0x1C0081148 (-IsVidPnPathModeMatch@DMMVIDPNPRESENTPATH@@QEBA_NAEBV1@E@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DMMVIDPNSOURCEMODE::operator==(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rax

  v2 = *(_DWORD *)(a1 + 72);
  if ( v2 != *(_DWORD *)(a2 + 72) )
    return 0;
  if ( v2 == 1 )
    return operator==(a1 + 76, a2 + 76, a1);
  if ( v2 != 2 )
  {
    if ( v2 > 2 && v2 <= 4 )
      return operator==(a1 + 76, a2 + 76, a1);
    if ( (unsigned int)(v2 - 1) <= 3 )
    {
      v4 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v4);
    }
    return 0;
  }
  return *(_DWORD *)(a1 + 76) == *(_DWORD *)(a2 + 76);
}
