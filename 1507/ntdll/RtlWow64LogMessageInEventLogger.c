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

__int64 __fastcall RtlWow64LogMessageInEventLogger(__int16 a1, __int64 a2, unsigned int a3)
{
  __int64 result; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int16 v9; // [rsp+28h] [rbp-60h]
  __int64 (__fastcall *v10)(_QWORD, const wchar_t *); // [rsp+50h] [rbp-38h] BYREF
  void (__fastcall *v11)(__int64, __int64, _QWORD, _QWORD, _QWORD, __int16, _DWORD, __int64, _QWORD); // [rsp+58h] [rbp-30h] BYREF
  void (__fastcall *v12)(__int64); // [rsp+60h] [rbp-28h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+20h] BYREF

  result = LdrLoadDll(0LL, 0LL, (__int64)&unk_18010DBD8, &v13);
  if ( (int)result >= 0 )
  {
    if ( (int)LdrGetProcedureAddress(v13, (int)&unk_18010DBC8, 0, (int)&v10) >= 0
      && (int)LdrGetProcedureAddress(v13, (int)&unk_18010DBA8, 0, (int)&v12) >= 0
      && (int)LdrGetProcedureAddress(v13, (int)&unk_18010DBB8, 0, (int)&v11) >= 0 )
    {
      v7 = v10(0LL, L"Wow64 Emulation Layer");
      v8 = v7;
      if ( v7 )
      {
        v9 = a1;
        v11(v7, 4LL, 0LL, a3, 0LL, v9, 0, a2, 0LL);
        v12(v8);
      }
    }
    return LdrUnloadDll(v13);
  }
  return result;
}
