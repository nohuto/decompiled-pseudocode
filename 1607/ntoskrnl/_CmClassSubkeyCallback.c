/*
 * XREFs of _CmClassSubkeyCallback @ 0x140563500
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCchCopyExW @ 0x1400C1338 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     _CmValidateInstallerClassName @ 0x1404D9DEC (_CmValidateInstallerClassName.c)
 */

__int64 __fastcall CmClassSubkeyCallback(__int64 a1, __int64 a2, const wchar_t *a3, unsigned int *a4)
{
  unsigned __int8 (__fastcall *v7)(__int64, const wchar_t *, _QWORD, _QWORD); // rax
  unsigned int v8; // edi
  unsigned int v9; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  if ( ((unsigned __int8)*a4 == 2 || *a4 == 4)
    && (int)CmValidateInstallerClassName(a1, a3) >= 0
    && RtlInitUnicodeStringEx(&DestinationString, a3) >= 0 )
  {
    v7 = (unsigned __int8 (__fastcall *)(__int64, const wchar_t *, _QWORD, _QWORD))*((_QWORD *)a4 + 1);
    v8 = DestinationString.MaximumLength >> 1;
    if ( !v7 || v7(a1, a3, *a4, *((_QWORD *)a4 + 2)) )
    {
      a4[9] += v8;
      v9 = a4[8];
      if ( v9 > v8 )
      {
        RtlStringCchCopyExW(*((NTSTRSAFE_PWSTR *)a4 + 3), v9, a3, 0LL, 0LL, 0x900u);
        *((_QWORD *)a4 + 3) += 2LL * v8;
        a4[8] -= v8;
      }
    }
  }
  return 0LL;
}
