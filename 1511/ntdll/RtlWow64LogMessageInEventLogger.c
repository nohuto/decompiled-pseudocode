/*
 * XREFs of RtlWow64LogMessageInEventLogger @ 0x1800CC3C0
 * Callers:
 *     <none>
 * Callees:
 *     LdrUnloadDll @ 0x180008CA0 (LdrUnloadDll.c)
 *     LdrLoadDll @ 0x180010B30 (LdrLoadDll.c)
 *     LdrGetProcedureAddress @ 0x18004EE30 (LdrGetProcedureAddress.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall RtlWow64LogMessageInEventLogger(__int16 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int16 v9; // [rsp+28h] [rbp-60h]
  __int64 (__fastcall *v10)(_QWORD, const wchar_t *); // [rsp+50h] [rbp-38h] BYREF
  void (__fastcall *v11)(__int64, __int64, _QWORD, _QWORD, _QWORD, __int16, _DWORD, __int64, _QWORD); // [rsp+58h] [rbp-30h] BYREF
  void (__fastcall *v12[2])(_QWORD); // [rsp+60h] [rbp-28h] BYREF
  unsigned __int64 v13; // [rsp+A8h] [rbp+20h] BYREF

  result = LdrLoadDll(0LL, 0LL, (__int64)&unk_180113D78, &v13);
  if ( (int)result >= 0 )
  {
    if ( (int)LdrGetProcedureAddress(v13, &qword_180113D68, 0LL, (__int64)&v10) >= 0
      && (int)LdrGetProcedureAddress(v13, &qword_180113D48, 0LL, (__int64)v12) >= 0
      && (int)LdrGetProcedureAddress(v13, &qword_180113D58, 0LL, (__int64)&v11) >= 0 )
    {
      v7 = v10(0LL, L"Wow64 Emulation Layer");
      v8 = v7;
      if ( v7 )
      {
        v9 = a1;
        v11(v7, 4LL, 0LL, a3, 0LL, v9, 0, a2, 0LL);
        v12[0](v8);
      }
    }
    return LdrUnloadDll(v13);
  }
  return result;
}
