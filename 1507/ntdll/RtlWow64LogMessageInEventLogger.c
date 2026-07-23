/*
 * XREFs of RtlWow64LogMessageInEventLogger @ 0x1800C29C0
 * Callers:
 *     <none>
 * Callees:
 *     LdrGetProcedureAddress @ 0x180003560 (LdrGetProcedureAddress.c)
 *     LdrLoadDll @ 0x18001B1F0 (LdrLoadDll.c)
 *     LdrUnloadDll @ 0x180038420 (LdrUnloadDll.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 */

int __fastcall RtlWow64LogMessageInEventLogger(__int16 a1, __int64 a2, unsigned int a3)
{
  int result; // eax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int16 v9; // [rsp+28h] [rbp-60h]
  PVOID ProcedureAddress; // [rsp+50h] [rbp-38h] BYREF
  PVOID v11; // [rsp+58h] [rbp-30h] BYREF
  PVOID v12; // [rsp+60h] [rbp-28h] BYREF
  PVOID DllHandle; // [rsp+A8h] [rbp+20h] BYREF

  result = LdrLoadDll(0LL, 0LL, (PUNICODE_STRING)&stru_18010DBD8, &DllHandle);
  if ( result >= 0 )
  {
    if ( LdrGetProcedureAddress(DllHandle, (PANSI_STRING)&stru_18010DBC8, 0, &ProcedureAddress) >= 0
      && LdrGetProcedureAddress(DllHandle, (PANSI_STRING)&stru_18010DBA8, 0, &v12) >= 0
      && LdrGetProcedureAddress(DllHandle, (PANSI_STRING)&stru_18010DBB8, 0, &v11) >= 0 )
    {
      v7 = ((__int64 (__fastcall *)(_QWORD, const wchar_t *))ProcedureAddress)(0LL, L"Wow64 Emulation Layer");
      v8 = v7;
      if ( v7 )
      {
        v9 = a1;
        ((void (__fastcall *)(__int64, __int64, _QWORD, _QWORD, _QWORD, __int16, _DWORD, __int64, _QWORD))v11)(
          v7,
          4LL,
          0LL,
          a3,
          0LL,
          v9,
          0,
          a2,
          0LL);
        ((void (__fastcall *)(__int64))v12)(v8);
      }
    }
    return LdrUnloadDll(DllHandle);
  }
  return result;
}
