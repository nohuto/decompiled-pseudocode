/*
 * XREFs of RtlAddRefActivationContext @ 0x18003E1A0
 * Callers:
 *     RtlGetActiveActivationContext @ 0x18000F470 (RtlGetActiveActivationContext.c)
 *     LdrpAllocateModuleEntry @ 0x18000F710 (LdrpAllocateModuleEntry.c)
 *     RtlFindActivationContextSectionString @ 0x18001AD80 (RtlFindActivationContextSectionString.c)
 *     TppCleanupGroupMemberInitialize @ 0x18003D83C (TppCleanupGroupMemberInitialize.c)
 *     RtlpQueryInformationActivationContextBasicInformation @ 0x18003E110 (RtlpQueryInformationActivationContextBasicInformation.c)
 *     RtlActivateActivationContextEx @ 0x180068C40 (RtlActivateActivationContextEx.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x180082B28 (RtlpFindActivationContextSection_FillOutReturnedData.c)
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
