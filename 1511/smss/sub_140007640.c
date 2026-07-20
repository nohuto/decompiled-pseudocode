/*
 * XREFs of sub_140007640 @ 0x140007640
 * Callers:
 *     sub_140005E5C @ 0x140005E5C (sub_140005E5C.c)
 * Callees:
 *     sub_140007698 @ 0x140007698 (sub_140007698.c)
 */

NTSTATUS sub_140007640()
{
  NTSTATUS result; // eax
  struct _OBJECT_ATTRIBUTES v1; // [rsp+30h] [rbp-38h] BYREF

  v1.RootDirectory = 0LL;
  v1.ObjectName = 0LL;
  v1.Length = 48;
  v1.Attributes = 2;
  *(_OWORD *)&v1.SecurityDescriptor = 0LL;
  result = NtCreateEvent(&EventHandle, 0x100002u, &v1, NotificationEvent, 1u);
  if ( result >= 0 )
    return sub_140007698();
  return result;
}
