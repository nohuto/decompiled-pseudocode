/*
 * XREFs of WerpCreateRegistryKey @ 0x1C003C0A8
 * Callers:
 *     WerKernelCreateReport @ 0x1C003B624 (WerKernelCreateReport.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WerpCreateRegistryKey(
        void *a1,
        const WCHAR *a2,
        ACCESS_MASK a3,
        char a4,
        PHANDLE KeyHandle,
        bool *a6)
{
  void **v9; // rbx
  NTSTATUS v10; // eax
  unsigned int v11; // ebx
  struct _UNICODE_STRING v13; // [rsp+40h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-38h] BYREF
  ULONG Disposition; // [rsp+98h] [rbp+10h] BYREF

  Disposition = 0;
  if ( a2 && (v9 = KeyHandle) != 0LL )
  {
    RtlInitUnicodeString(&v13, a2);
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &v13;
    ObjectAttributes.RootDirectory = a1;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v10 = ZwCreateKey(v9, a3, &ObjectAttributes, 0, 0LL, a4 != 0, &Disposition);
    v11 = v10;
    if ( v10 >= 0 )
    {
      if ( a6 )
        *a6 = Disposition == 1;
      return 0;
    }
    else
    {
      DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR ZwCreateKey failed with scode 0x%x\n", 107, v10);
    }
    return v11;
  }
  else
  {
    DbgPrintEx(0x96u, 0, "WERLIVEKERNELREPORTING:%u: ERROR Invalid params\n", 84);
    return 3221225485LL;
  }
}
