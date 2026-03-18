/*
 * XREFs of CmpRecoverEnlistment @ 0x14065CBDC
 * Callers:
 *     CmKtmNotification @ 0x1404EF414 (CmKtmNotification.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenEnlistment @ 0x1401810F0 (ZwOpenEnlistment.c)
 *     ZwRecoverEnlistment @ 0x1401819D0 (ZwRecoverEnlistment.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 *     RtlStringFromGUIDEx @ 0x1404FFEB8 (RtlStringFromGUIDEx.c)
 */

__int64 __fastcall CmpRecoverEnlistment(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v6; // ebx
  void *v7; // r8
  UNICODE_STRING v8; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  HANDLE EnlistmentHandle; // [rsp+C0h] [rbp+77h] BYREF
  PVOID EnlistmentKey; // [rsp+C8h] [rbp+7Fh] BYREF

  *(_QWORD *)&v8.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v8.Buffer + 2) = 0;
  HIWORD(v8.Buffer) = 0;
  v8.Length = 0;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  result = RtlStringFromGUIDEx((unsigned int *)a3, (__int64)&v8, 1);
  if ( (int)result >= 0 )
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
    RtlFreeAnsiString(&v8);
    return (unsigned int)v6;
  }
  return result;
}
