/*
 * XREFs of SepRegQueryDwordValue @ 0x140410FD0
 * Callers:
 *     NtImpersonateAnonymousToken @ 0x140410C10 (NtImpersonateAnonymousToken.c)
 * Callees:
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     SepRegQueryValue @ 0x14041103C (SepRegQueryValue.c)
 *     SepRegOpenKey @ 0x140411114 (SepRegOpenKey.c)
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
