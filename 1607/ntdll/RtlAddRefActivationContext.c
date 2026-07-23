/*
 * XREFs of RtlAddRefActivationContext @ 0x18003E190
 * Callers:
 *     RtlGetActiveActivationContext @ 0x18000F460 (RtlGetActiveActivationContext.c)
 *     LdrpAllocateModuleEntry @ 0x18000F700 (LdrpAllocateModuleEntry.c)
 *     RtlFindActivationContextSectionString @ 0x18001AD70 (RtlFindActivationContextSectionString.c)
 *     TppCleanupGroupMemberInitialize @ 0x18003D82C (TppCleanupGroupMemberInitialize.c)
 *     RtlpQueryInformationActivationContextBasicInformation @ 0x18003E100 (RtlpQueryInformationActivationContextBasicInformation.c)
 *     RtlActivateActivationContextEx @ 0x180068C30 (RtlActivateActivationContextEx.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x180082B18 (RtlpFindActivationContextSection_FillOutReturnedData.c)
 * Callees:
 *     <none>
 */

void __cdecl RtlAddRefActivationContext(PACTIVATION_CONTEXT ActivationContext)
{
  LONG i; // eax

  if ( ActivationContext
    && (((unsigned __int64)&ActivationContext[-1].InlineStorageMapEntries[31] + 7) | 7) != 0xFFFFFFFFFFFFFFFFuLL
    && ActivationContext->RefCount != 0x7FFFFFFF )
  {
    for ( i = ActivationContext->RefCount;
          i != 0x7FFFFFFF && i != _InterlockedCompareExchange(&ActivationContext->RefCount, i + 1, i);
          i = ActivationContext->RefCount )
    {
      ;
    }
  }
}
