/*
 * XREFs of sub_140011084 @ 0x140011084
 * Callers:
 *     sub_14000982C @ 0x14000982C (sub_14000982C.c)
 *     sub_140010EDC @ 0x140010EDC (sub_140010EDC.c)
 * Callees:
 *     sub_140006D10 @ 0x140006D10 (sub_140006D10.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     sub_140010340 @ 0x140010340 (sub_140010340.c)
 *     sub_140010C6C @ 0x140010C6C (sub_140010C6C.c)
 *     sub_140011164 @ 0x140011164 (sub_140011164.c)
 *     sub_1400113E0 @ 0x1400113E0 (sub_1400113E0.c)
 */

int __fastcall sub_140011084(HANDLE FileHandle, struct _UNICODE_STRING *a2, __int64 a3, char a4)
{
  int result; // eax
  int Length; // eax
  __int64 Buffer; // r8
  ULONG v10; // esi
  bool v11; // [rsp+30h] [rbp-248h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-240h] BYREF
  char FileInformation[8]; // [rsp+50h] [rbp-228h] BYREF
  __int64 v14; // [rsp+58h] [rbp-220h]
  int v15; // [rsp+60h] [rbp-218h]
  _WORD v16[246]; // [rsp+64h] [rbp-214h] BYREF

  if ( !a3 || (result = sub_1400113E0(FileHandle), result >= 0) )
  {
    if ( (a4 & 1) != 0 )
      goto LABEL_7;
    result = sub_140010C6C(FileHandle, a2, &v11);
    if ( result < 0 )
      return result;
    if ( v11 )
    {
LABEL_7:
      Length = a2->Length;
      Buffer = (__int64)a2->Buffer;
      v14 = 0LL;
      FileInformation[0] = 1;
      v10 = Length + 24;
      v15 = Length;
      result = sub_140006D10(v16, 0x1ECuLL, Buffer);
      if ( result >= 0 )
      {
        result = NtSetInformationFile(FileHandle, &IoStatusBlock, FileInformation, v10, FileRenameInformation);
        if ( result >= 0 )
          return sub_140011164(FileHandle);
      }
    }
    else
    {
      return sub_140010340(FileHandle, a2);
    }
  }
  return result;
}
