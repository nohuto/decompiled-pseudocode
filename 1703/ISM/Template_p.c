/*
 * XREFs of Template_p @ 0x18006EE84
 * Callers:
 *     ?PutTouchEvent@LegacyInjectionRawInputProvider@@UEAAJUTouchInfoInjection@@@Z @ 0x18006FA70 (-PutTouchEvent@LegacyInjectionRawInputProvider@@UEAAJUTouchInfoInjection@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

ULONG Template_p()
{
  const wchar_t *v1; // [rsp+20h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v2; // [rsp+28h] [rbp-30h] BYREF

  v1 = L"Invalid contactcount injected!";
  v2.Ptr = (ULONGLONG)&v1;
  v2.Reserved = 0;
  v2.Size = 8;
  return EventWrite(Microsoft_OneCore_MinInputHandle, &MinInput_Error, 1u, &v2);
}
