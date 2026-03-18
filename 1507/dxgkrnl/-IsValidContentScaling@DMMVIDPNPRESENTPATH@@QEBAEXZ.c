/*
 * XREFs of ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0006000
 * Callers:
 *     ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x1C0005F48 (-PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z.c)
 *     ?PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z @ 0x1C0088704 (-PinMode@DMMVIDPNTARGETMODESET@@QEAAJI@Z.c)
 *     ?PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z @ 0x1C00961C8 (-PinMode@DMMVIDPNSOURCEMODESET@@QEAAJI@Z.c)
 * Callees:
 *     ?DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C000604C (-DoSourceTargetResolutionsMatch@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1C0006128 (-IsSourceAndTargetPinned@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

unsigned __int8 __fastcall DMMVIDPNPRESENTPATH::IsValidContentScaling(DMMVIDPNPRESENTPATH *this)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax

  if ( *((_DWORD *)this + 28) == 254 || !DMMVIDPNPRESENTPATH::IsSourceAndTargetPinned(this) )
    return 1;
  if ( !DMMVIDPNPRESENTPATH::DoSourceTargetResolutionsMatch(this) )
  {
    if ( *((_DWORD *)this + 28) == 1 )
    {
      v5 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v5 + 24) = *((int *)this + 28);
      WdLogEvent5_WdWarning(v5);
    }
    return 1;
  }
  if ( ((*((_DWORD *)this + 28) - 1) & 0xFFFFFFFB) == 0 )
    return 1;
  v4 = WdLogNewEntry5_WdError(v3);
  *(_QWORD *)(v4 + 24) = *((int *)this + 28);
  WdLogEvent5_WdError(v4);
  return 0;
}
