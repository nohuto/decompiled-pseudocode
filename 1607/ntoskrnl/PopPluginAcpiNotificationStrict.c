/*
 * XREFs of PopPluginAcpiNotificationStrict @ 0x14020E984
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x14020E114 (PopFxAcpiDispatchNotification.c)
 *     PopFxAcpiPrepareDevice @ 0x14020E434 (PopFxAcpiPrepareDevice.c)
 *     PopFxAcpiRegisterDevice @ 0x14020E570 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x14020E664 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginAcpiNotificationStrict(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter4)
{
  unsigned int v3; // edi
  __int64 result; // rax

  v3 = BugCheckParameter2;
  result = (*(__int64 (__fastcall **)(_QWORD, ULONG_PTR))(BugCheckParameter3 + 112))(
             (unsigned int)BugCheckParameter2,
             BugCheckParameter4);
  if ( !(_BYTE)result )
    PopFxBugCheck(0x668uLL, v3, BugCheckParameter3, BugCheckParameter4);
  return result;
}
