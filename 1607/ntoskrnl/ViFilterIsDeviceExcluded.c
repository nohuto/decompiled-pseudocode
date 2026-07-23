/*
 * XREFs of ViFilterIsDeviceExcluded @ 0x14071B0D0
 * Callers:
 *     VfFilterAttach @ 0x14071AB04 (VfFilterAttach.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1401317AC (HviIsAnyHypervisorPresent.c)
 *     RtlEqualUnicodeString @ 0x14040E5E0 (RtlEqualUnicodeString.c)
 */

_BOOL8 __fastcall ViFilterIsDeviceExcluded(__int64 a1)
{
  _BOOL8 result; // rax
  __int64 v3; // rcx
  const UNICODE_STRING *v4; // rbx

  result = 1;
  if ( *(PDRIVER_OBJECT *)(a1 + 8) != VfFilterDriverObject )
  {
    if ( !HviIsAnyHypervisorPresent() )
      return 0;
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 40LL);
    if ( !v3 )
      return 0;
    v4 = (const UNICODE_STRING *)(v3 + 88);
    if ( !RtlEqualUnicodeString(&VfVidName, (PCUNICODE_STRING)(v3 + 88), 1u)
      && !RtlEqualUnicodeString(&VfSynth3DvscName, v4, 1u)
      && !RtlEqualUnicodeString(&VfSynth3DvspName, v4, 1u) )
    {
      return 0;
    }
  }
  return result;
}
