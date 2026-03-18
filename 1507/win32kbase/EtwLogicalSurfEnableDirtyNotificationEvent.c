/*
 * XREFs of EtwLogicalSurfEnableDirtyNotificationEvent @ 0x1C0016850
 * Callers:
 *     <none>
 * Callees:
 *     Template_xx @ 0x1C00BF010 (Template_xx.c)
 */

__int64 __fastcall EtwLogicalSurfEnableDirtyNotificationEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
  if ( (Microsoft_Windows_Win32kEnableBits & 1) != 0 )
    return Template_xx(a1, &LogicalSurfEnableDirtyNotificationEvent, a3, a1, a2);
  return result;
}
