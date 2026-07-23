/*
 * XREFs of RtlReplaceSystemDirectoryInPath @ 0x18006E010
 * Callers:
 *     LdrpGetModuleName @ 0x18006D704 (LdrpGetModuleName.c)
 * Callees:
 *     RtlpWow64SelectSystem32PathInternal @ 0x18006E0C4 (RtlpWow64SelectSystem32PathInternal.c)
 *     RtlFindUnicodeSubstring @ 0x18006E120 (RtlFindUnicodeSubstring.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

ULONG __cdecl RtlReplaceSystemDirectoryInPath(
        PUNICODE_STRING Destination,
        USHORT Machine,
        USHORT TargetMachine,
        BOOLEAN IncludePathSeperator)
{
  USHORT v5; // di
  ULONG result; // eax
  __int64 v9; // rdx
  ULONG v10; // ebx
  unsigned __int16 v11; // di
  PWCHAR UnicodeSubstring; // rax
  _UNICODE_STRING SearchString; // [rsp+20h] [rbp-28h] BYREF
  unsigned __int16 v14; // [rsp+30h] [rbp-18h] BYREF
  void *Src; // [rsp+38h] [rbp-10h]

  v5 = Machine;
  LOBYTE(Machine) = IncludePathSeperator;
  result = RtlpWow64SelectSystem32PathInternal(TargetMachine, Machine, &v14);
  v10 = 0;
  if ( (result & 0x80000000) == 0 )
  {
    LOBYTE(v9) = IncludePathSeperator;
    result = RtlpWow64SelectSystem32PathInternal(v5, v9, &SearchString);
    if ( (result & 0x80000000) == 0 )
    {
      if ( v5 == TargetMachine )
      {
        return 0;
      }
      else
      {
        v11 = v14;
        if ( SearchString.Length != v14 )
          return -1073741811;
        UnicodeSubstring = RtlFindUnicodeSubstring(Destination, &SearchString, 1u);
        if ( UnicodeSubstring )
          memmove(UnicodeSubstring, Src, v11);
        return v10;
      }
    }
  }
  return result;
}
