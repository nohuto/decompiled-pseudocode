/*
 * XREFs of sub_140010A04 @ 0x140010A04
 * Callers:
 *     sub_14001059C @ 0x14001059C (sub_14001059C.c)
 *     sub_1400107DC @ 0x1400107DC (sub_1400107DC.c)
 * Callees:
 *     <none>
 */

char __fastcall sub_140010A04(struct _UNICODE_STRING *a1)
{
  struct _IO_STATUS_BLOCK v2; // [rsp+30h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES v3; // [rsp+40h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp+8h] BYREF

  v3.RootDirectory = 0LL;
  v3.ObjectName = a1;
  v3.Length = 48;
  v3.Attributes = 64;
  *(_OWORD *)&v3.SecurityDescriptor = 0LL;
  if ( NtOpenFile(&Handle, 0x100080u, &v3, &v2, 3u, 0x20u) < 0 )
    return 0;
  NtClose(Handle);
  return 1;
}
