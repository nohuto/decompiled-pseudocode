/*
 * XREFs of EtwTraceCopyPointerInputFrameStart @ 0x1C00AB990
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00ACD18 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceCopyPointerInputFrameStart(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (int)Microsoft_Windows_Win32kEnableBits < 0 )
    return TemplateEventDescriptor(a1, &CopyPointerInputFrameStart, &W32kControlGuid);
  return result;
}
