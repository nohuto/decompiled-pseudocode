/*
 * XREFs of PopPluginAcpiNotificationStrict @ 0x14020EB58
 * Callers:
 *     PopFxAcpiDispatchNotification @ 0x14020E2E8 (PopFxAcpiDispatchNotification.c)
 *     PopFxAcpiPrepareDevice @ 0x14020E608 (PopFxAcpiPrepareDevice.c)
 *     PopFxAcpiRegisterDevice @ 0x14020E744 (PopFxAcpiRegisterDevice.c)
 *     PopFxAcpiUnregisterDevice @ 0x14020E838 (PopFxAcpiUnregisterDevice.c)
 * Callees:
 *     PopFxBugCheck @ 0x1402022F4 (PopFxBugCheck.c)
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
