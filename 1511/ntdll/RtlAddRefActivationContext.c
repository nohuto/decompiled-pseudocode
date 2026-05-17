/*
 * XREFs of RtlAddRefActivationContext @ 0x18000DE20
 * Callers:
 *     TppCleanupGroupMemberInitialize @ 0x18000D4C8 (TppCleanupGroupMemberInitialize.c)
 *     RtlpQueryInformationActivationContextBasicInformation @ 0x18000DD8C (RtlpQueryInformationActivationContextBasicInformation.c)
 *     LdrpAllocateModuleEntry @ 0x18000FB30 (LdrpAllocateModuleEntry.c)
 *     RtlFindActivationContextSectionString @ 0x180015E40 (RtlFindActivationContextSectionString.c)
 *     RtlActivateActivationContextEx @ 0x180042000 (RtlActivateActivationContextEx.c)
 *     RtlGetActiveActivationContext @ 0x1800784E0 (RtlGetActiveActivationContext.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x18007EF34 (RtlpFindActivationContextSection_FillOutReturnedData.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlAddRefActivationContext(volatile signed __int32 *a1)
{
  signed __int32 i; // eax

  if ( a1 && (((unsigned __int64)a1 - 1) | 7) != 0xFFFFFFFFFFFFFFFFuLL && *a1 != 0x7FFFFFFF )
  {
    for ( i = *a1; i != 0x7FFFFFFF && i != _InterlockedCompareExchange(a1, i + 1, i); i = *a1 )
      ;
  }
}
