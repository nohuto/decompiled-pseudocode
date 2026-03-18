/*
 * XREFs of EtwTraceCopyPointerInputFrameStop @ 0x1C00A7450
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1C00A87F8 (TemplateEventDescriptor.c)
 */

__int64 __fastcall EtwTraceCopyPointerInputFrameStop(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (int)Microsoft_Windows_Win32kEnableBits < 0 )
    return TemplateEventDescriptor(a1, &CopyPointerInputFrameStop, &W32kControlGuid);
  return result;
}
