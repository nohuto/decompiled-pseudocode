/*
 * XREFs of CmpRecoverEnlistment @ 0x1406050FC
 * Callers:
 *     CmKtmNotification @ 0x1404BD168 (CmKtmNotification.c)
 * Callees:
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenEnlistment @ 0x14015C390 (ZwOpenEnlistment.c)
 *     ZwRecoverEnlistment @ 0x14015CCB0 (ZwRecoverEnlistment.c)
 *     RtlStringFromGUIDEx @ 0x1403F6D4C (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     CmpTransSearchAddTransFromRm @ 0x1404C2298 (CmpTransSearchAddTransFromRm.c)
 */

NTSTATUS __fastcall CmpRecoverEnlistment(_QWORD *a1, __int64 a2, GUID *a3)
{
  NTSTATUS result; // eax
  int v6; // edi
  void *v7; // r8
  UNICODE_STRING GuidString; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE EnlistmentHandle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID EnlistmentKey; // [rsp+B8h] [rbp+38h] BYREF

  *(_QWORD *)&GuidString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&GuidString.Buffer + 2) = 0;
  HIWORD(GuidString.Buffer) = 0;
  GuidString.Length = 0;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  result = RtlStringFromGUIDEx(a3, &GuidString, 1u);
  if ( result >= 0 )
  {
    v6 = CmpTransSearchAddTransFromRm(a1, 0LL, (__int64)&a3[1], 1, &EnlistmentKey);
    if ( v6 >= 0 )
    {
      v7 = (void *)a1[6];
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      v6 = ZwOpenEnlistment(&EnlistmentHandle, 0xF001Fu, v7, a3, &ObjectAttributes);
      if ( v6 >= 0 )
      {
        v6 = ZwRecoverEnlistment(EnlistmentHandle, EnlistmentKey);
        ZwClose(EnlistmentHandle);
      }
    }
    RtlFreeAnsiString(&UnicodeString);
    RtlFreeAnsiString(&GuidString);
    return v6;
  }
  return result;
}
