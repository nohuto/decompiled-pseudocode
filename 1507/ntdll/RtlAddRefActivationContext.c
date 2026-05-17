/*
 * XREFs of RtlAddRefActivationContext @ 0x18003E870
 * Callers:
 *     RtlFindActivationContextSectionString @ 0x180025160 (RtlFindActivationContextSectionString.c)
 *     RtlGetActiveActivationContext @ 0x18003DCF0 (RtlGetActiveActivationContext.c)
 *     TppCleanupGroupMemberInitialize @ 0x18003DF0C (TppCleanupGroupMemberInitialize.c)
 *     RtlpQueryInformationActivationContextBasicInformation @ 0x18003E7DC (RtlpQueryInformationActivationContextBasicInformation.c)
 *     LdrpAllocateModuleEntry @ 0x1800402B4 (LdrpAllocateModuleEntry.c)
 *     RtlActivateActivationContextEx @ 0x1800535B0 (RtlActivateActivationContextEx.c)
 *     RtlpFindActivationContextSection_FillOutReturnedData @ 0x180070D78 (RtlpFindActivationContextSection_FillOutReturnedData.c)
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
