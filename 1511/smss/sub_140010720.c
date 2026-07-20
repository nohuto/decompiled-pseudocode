/*
 * XREFs of sub_140010720 @ 0x140010720
 * Callers:
 *     sub_14000982C @ 0x14000982C (sub_14000982C.c)
 * Callees:
 *     sub_140004C0C @ 0x140004C0C (sub_140004C0C.c)
 *     sub_1400077E8 @ 0x1400077E8 (sub_1400077E8.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     sub_140010B58 @ 0x140010B58 (sub_140010B58.c)
 */

__int64 __fastcall sub_140010720(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // rcx
  struct _UNICODE_STRING v5; // [rsp+20h] [rbp-248h] BYREF
  __int64 v6; // [rsp+30h] [rbp-238h] BYREF
  wchar_t DstBuf[264]; // [rsp+40h] [rbp-228h] BYREF

  *(_DWORD *)&v5.Length = 1310738;
  LODWORD(v6) = 1179664;
  result = sub_140004C0C(
             DstBuf,
             0x208uLL,
             L"%s\\MEMORY.DMP",
             stru_140020170.Buffer,
             *(_QWORD *)&v5.Length,
             L"Overwrite",
             v6,
             L"DumpFile");
  if ( (int)result >= 0 )
  {
    result = sub_140010B58(v3, &v6, DstBuf, a1);
    if ( (int)result >= 0 )
    {
      result = sub_1400077E8(v4, &v5, 1, (_DWORD *)(a1 + 16));
      if ( (int)result >= 0 )
      {
        *(_DWORD *)(a1 + 20) = 0;
        return 0LL;
      }
    }
  }
  return result;
}
