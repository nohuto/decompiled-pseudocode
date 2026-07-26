/*
 * XREFs of ndisMiniportPMParametersUpdated @ 0x1C00B12E8
 * Callers:
 *     ndisOidPostPMAddWOLPattern @ 0x1C0021FF0 (ndisOidPostPMAddWOLPattern.c)
 *     ndisMIndicatePMCapabilities @ 0x1C00491BC (ndisMIndicatePMCapabilities.c)
 *     ndisMIndicatePMOffloadReject @ 0x1C004937C (ndisMIndicatePMOffloadReject.c)
 *     ndisMIndicateWoLPatternReject @ 0x1C0049468 (ndisMIndicateWoLPatternReject.c)
 *     ndisOidPostAddPMProtocolOffload @ 0x1C0049B00 (ndisOidPostAddPMProtocolOffload.c)
 *     ndisOidPostPMRemoveWOLPattern @ 0x1C0049D40 (ndisOidPostPMRemoveWOLPattern.c)
 *     ndisOidPostRemovePMProtocolOffload @ 0x1C0049EA0 (ndisOidPostRemovePMProtocolOffload.c)
 *     ndisPreSetPMParameters @ 0x1C00B0C9C (ndisPreSetPMParameters.c)
 *     ndisSetOpenEnableWakeUp @ 0x1C00CAC18 (ndisSetOpenEnableWakeUp.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D4BB0 (ndisWmiChangeSingleInstance.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisMiniportPMParametersUpdated(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 120);
  if ( (result & 0x80u) != 0LL )
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(a1 + 3816) + 360LL) + 88LL))(
             *(_QWORD *)(a1 + 24),
             a1 + 1120);
  return result;
}
