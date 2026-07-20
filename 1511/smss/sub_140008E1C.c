/*
 * XREFs of sub_140008E1C @ 0x140008E1C
 * Callers:
 *     sub_140008F04 @ 0x140008F04 (sub_140008F04.c)
 *     sub_140008F84 @ 0x140008F84 (sub_140008F84.c)
 * Callees:
 *     sub_140008E98 @ 0x140008E98 (sub_140008E98.c)
 */

__int64 __fastcall sub_140008E1C(UNICODE_STRING *String2, union _LARGE_INTEGER a2, union _LARGE_INTEGER a3, ULONG a4)
{
  NTSTATUS v5; // ebx
  __int64 v6; // rcx
  union _LARGE_INTEGER v8; // [rsp+30h] [rbp+8h] BYREF
  union _LARGE_INTEGER v9; // [rsp+38h] [rbp+10h] BYREF

  v9 = a2;
  v8 = a3;
  v5 = NtCreatePagingFile(String2, &v9, &v8, a4);
  v6 = 2LL * (_InterlockedIncrement(&dword_140020420) % 32);
  *((_DWORD *)&unk_140020220 + 2 * v6) = 1860;
  *((_DWORD *)&unk_140020220 + 2 * v6 + 1) = v5;
  *((_QWORD *)&unk_140020220 + v6 + 1) = String2;
  if ( v5 >= 0 )
    sub_140008E98(String2);
  return (unsigned int)v5;
}
