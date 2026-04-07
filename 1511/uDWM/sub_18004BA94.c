/*
 * XREFs of sub_18004BA94 @ 0x18004BA94
 * Callers:
 *     sub_18003E5B4 @ 0x18003E5B4 (sub_18003E5B4.c)
 * Callees:
 *     <none>
 */

__int64 sub_18004BA94()
{
  int v0; // ecx
  NTSTATUS v1; // eax
  __int64 result; // rax
  ULONG ReturnLength; // [rsp+30h] [rbp+8h] BYREF
  int SystemInformation; // [rsp+38h] [rbp+10h] BYREF
  char v5; // [rsp+3Ch] [rbp+14h]

  v0 = dword_1800BE748;
  if ( !dword_1800BE748 )
  {
    SystemInformation = 8;
    v1 = NtQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, &ReturnLength);
    v0 = 2;
    if ( v1 >= 0 && (v5 & 2) != 0 )
    {
      result = 1LL;
      dword_1800BE748 = 1;
      return result;
    }
    dword_1800BE748 = 2;
  }
  result = 1LL;
  if ( v0 != 1 )
    return 0LL;
  return result;
}
