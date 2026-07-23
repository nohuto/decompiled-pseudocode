/*
 * XREFs of CmpRecoverEnlistment @ 0x1405E5AF8
 * Callers:
 *     CmKtmNotification @ 0x1404BA500 (CmKtmNotification.c)
 * Callees:
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenEnlistment @ 0x140152780 (ZwOpenEnlistment.c)
 *     ZwRecoverEnlistment @ 0x140153060 (ZwRecoverEnlistment.c)
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x140447328 (RtlStringFromGUIDEx.c)
 */

NTSTATUS __fastcall CmpRecoverEnlistment(_QWORD *a1, __int64 a2, __int64 a3)
{
  NTSTATUS result; // eax
  int v6; // ebx
  void *v7; // r8
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  HANDLE EnlistmentHandle; // [rsp+C0h] [rbp+77h] BYREF
  PVOID EnlistmentKey; // [rsp+C8h] [rbp+7Fh] BYREF

  *(_QWORD *)&GuidString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&GuidString.Buffer + 2) = 0;
  HIWORD(GuidString.Buffer) = 0;
  GuidString.Length = 0;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  result = RtlStringFromGUIDEx((PGUID)a3, &GuidString, 1u);
  if ( result >= 0 )
  {
    v6 = CmpSearchAddTrans(0LL, a1, 0LL, 0LL, (__int128 *)(a3 + 16), 1, (char **)&EnlistmentKey);
    if ( v6 >= 0 )
    {
      v7 = (void *)a1[6];
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.ObjectName = 0LL;
      v6 = ZwOpenEnlistment(&EnlistmentHandle, 0xF001Fu, v7, (LPGUID)a3, &ObjectAttributes);
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
