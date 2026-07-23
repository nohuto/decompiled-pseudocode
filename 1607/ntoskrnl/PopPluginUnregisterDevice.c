/*
 * XREFs of PopPluginUnregisterDevice @ 0x1402048EC
 * Callers:
 *     PopFxUnregisterDevice @ 0x14066D670 (PopFxUnregisterDevice.c)
 * Callees:
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 */

__int64 __fastcall PopPluginUnregisterDevice(ULONG_PTR BugCheckParameter3, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(BugCheckParameter3 + 96))(4LL, &v4);
  if ( !(_BYTE)result )
    PopFxBugCheck(0x605uLL, 4uLL, BugCheckParameter3, 0LL);
  return result;
}
