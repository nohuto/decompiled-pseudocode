/*
 * XREFs of PopPluginAcpiNotificationStrict @ 0x1401F5098
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x1401F4824 (PopFxAcpiDispatchNotification.c)
 *     PopFxAcpiPrepareDevice @ 0x1401F4B44 (PopFxAcpiPrepareDevice.c)
 *     PopFxAcpiRegisterDevice @ 0x1401F4C80 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x1401F4D74 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     PopFxBugCheck @ 0x1401E991C (PopFxBugCheck.c)
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
