/*
 * XREFs of SepRegQueryDwordValue @ 0x140476340
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x140475D5C (NtImpersonateAnonymousToken.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     SepRegQueryValue @ 0x1404763AC (SepRegQueryValue.c)
 *     SepRegOpenKey @ 0x140476484 (SepRegOpenKey.c)
 */

__int64 __fastcall SepRegQueryDwordValue(__int64 a1, __int64 a2, void *a3)
{
  int Value; // ebx
  HANDLE Handle; // [rsp+48h] [rbp+10h] BYREF

  Handle = 0LL;
  Value = SepRegOpenKey(L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Lsa", 0x201u, &Handle);
  if ( Value >= 0 )
  {
    Value = SepRegQueryValue(Handle, a3);
    ZwClose(Handle);
  }
  return (unsigned int)Value;
}
