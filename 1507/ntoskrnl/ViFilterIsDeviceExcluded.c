/*
 * XREFs of ViFilterIsDeviceExcluded @ 0x140752AE4
 * Callers:
 *     VfFilterAttach @ 0x1407524D4 (VfFilterAttach.c)
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x140159E3C (HviIsAnyHypervisorPresent.c)
 *     RtlEqualUnicodeString @ 0x140491A30 (RtlEqualUnicodeString.c)
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
