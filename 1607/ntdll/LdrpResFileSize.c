/*
 * XREFs of LdrpResFileSize @ 0x1800DD040
 * Callers:
 *     LdrpResMapFile @ 0x1800DD12C (LdrpResMapFile.c)
 *     LdrpResSearchResourceHandle @ 0x1800DD4C0 (LdrpResSearchResourceHandle.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtQueryInformationFile @ 0x1800A6640 (NtQueryInformationFile.c)
 *     LdrpTraceLoadMUIDll @ 0x1800DC874 (LdrpTraceLoadMUIDll.c)
 */

__int64 __fastcall LdrpResFileSize(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax
  unsigned int v5; // ebx
  int v6; // [rsp+30h] [rbp-58h] BYREF
  const wchar_t *v7; // [rsp+38h] [rbp-50h]
  int v8; // [rsp+40h] [rbp-48h] BYREF
  const wchar_t *v9; // [rsp+48h] [rbp-40h]
  __int64 v10; // [rsp+68h] [rbp-20h]

  v6 = 3145774;
  v7 = L"LdrResGetRCConfig Enter";
  v8 = 3014700;
  v9 = L"LdrResGetRCConfig Exit";
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v6);
  if ( a2 && (unsigned __int64)(a1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    result = NtQueryInformationFile();
    v5 = result;
    if ( (int)result < 0 )
      return result;
    *a2 = v10;
  }
  else
  {
    v5 = -1073741811;
  }
  if ( (MEMORY[0x7FFE0385] & 1) != 0 )
    LdrpTraceLoadMUIDll((unsigned __int16 *)&v8);
  return v5;
}
