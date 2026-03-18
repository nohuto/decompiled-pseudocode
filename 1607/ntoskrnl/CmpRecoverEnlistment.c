/*
 * XREFs of CmpRecoverEnlistment @ 0x140605048
 * Callers:
 *     CmKtmNotification @ 0x1404D9B64 (CmKtmNotification.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwOpenEnlistment @ 0x14015BE20 (ZwOpenEnlistment.c)
 *     ZwRecoverEnlistment @ 0x14015C740 (ZwRecoverEnlistment.c)
 *     RtlStringFromGUIDEx @ 0x1403F7E8C (RtlStringFromGUIDEx.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 *     CmpTransSearchAddTransFromRm @ 0x1404DEC94 (CmpTransSearchAddTransFromRm.c)
 */

__int64 __fastcall CmpRecoverEnlistment(_QWORD *a1, __int64 a2, GUID *a3)
{
  __int64 result; // rax
  int v6; // edi
  void *v7; // r8
  UNICODE_STRING v8; // [rsp+30h] [rbp-50h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  HANDLE EnlistmentHandle; // [rsp+B0h] [rbp+30h] BYREF
  PVOID EnlistmentKey; // [rsp+B8h] [rbp+38h] BYREF

  *(_QWORD *)&v8.MaximumLength = 0LL;
  *(_DWORD *)((char *)&v8.Buffer + 2) = 0;
  HIWORD(v8.Buffer) = 0;
  v8.Length = 0;
  UnicodeString.Length = 0;
  *(_QWORD *)&UnicodeString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&UnicodeString.Buffer + 2) = 0;
  HIWORD(UnicodeString.Buffer) = 0;
  result = RtlStringFromGUIDEx(&a3->Data1, (__int64)&v8, 1);
  if ( (int)result >= 0 )
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
    RtlFreeAnsiString(&v8);
    return (unsigned int)v6;
  }
  return result;
}
