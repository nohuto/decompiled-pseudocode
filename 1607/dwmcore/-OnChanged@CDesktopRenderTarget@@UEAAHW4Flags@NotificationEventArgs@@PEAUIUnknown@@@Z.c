/*
 * XREFs of ?OnChanged@CDesktopRenderTarget@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800BF8D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDesktopRenderTarget::OnChanged(__int64 a1)
{
  __int64 result; // rax

  *(_BYTE *)(a1 + 352) = 1;
  result = 1LL;
  *(_BYTE *)(*(_QWORD *)(a1 + 16) + 1242LL) = 1;
  return result;
}
