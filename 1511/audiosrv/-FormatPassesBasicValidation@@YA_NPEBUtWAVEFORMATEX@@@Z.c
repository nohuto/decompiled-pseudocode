/*
 * XREFs of ?FormatPassesBasicValidation@@YA_NPEBUtWAVEFORMATEX@@@Z @ 0x1800A5D00
 * Callers:
 *     ??$ForEachCandidateFormatForMode@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@U_GUID@@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@Z @ 0x1800A4570 (--$ForEachCandidateFormatForMode@V_lambda_418c5ae5971ebab8b75617066dde6fa1_@@@CEndpointCharacter.c)
 * Callees:
 *     <none>
 */

bool __fastcall FormatPassesBasicValidation(const struct tWAVEFORMATEX *a1)
{
  bool result; // al

  result = 0;
  if ( a1->wBitsPerSample && a1->nAvgBytesPerSec && a1->nBlockAlign )
  {
    if ( a1->nChannels )
      return a1->nSamplesPerSec != 0;
  }
  return result;
}
