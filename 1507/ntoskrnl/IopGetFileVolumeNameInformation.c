/*
 * XREFs of IopGetFileVolumeNameInformation @ 0x140129B48
 * Callers:
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ObQueryNameString @ 0x14054C280 (ObQueryNameString.c)
 */

NTSTATUS __fastcall IopGetFileVolumeNameInformation(void *a1, __int64 a2, _DWORD *a3, int a4)
{
  unsigned int v6; // ebx
  NTSTATUS result; // eax
  int v8; // edi
  unsigned int Length; // ebx
  ULONG ReturnLength[4]; // [rsp+20h] [rbp-248h] BYREF
  _OBJECT_NAME_INFORMATION ObjectNameInfo; // [rsp+30h] [rbp-238h] BYREF

  v6 = a4 - 4;
  result = ObQueryNameString(a1, &ObjectNameInfo, 0x200u, ReturnLength);
  v8 = 0;
  if ( result < 0 )
  {
    *(_DWORD *)a2 = result;
    *(_QWORD *)(a2 + 8) = 0LL;
  }
  else
  {
    if ( v6 < ObjectNameInfo.Name.Length )
    {
      v8 = -2147483643;
      Length = v6 & 0xFFFFFFFE;
    }
    else
    {
      Length = ObjectNameInfo.Name.Length;
    }
    *a3 = ObjectNameInfo.Name.Length;
    memmove(a3 + 1, ObjectNameInfo.Name.Buffer, Length);
    *(_DWORD *)a2 = v8;
    *(_QWORD *)(a2 + 8) = Length + 4;
    return v8;
  }
  return result;
}
