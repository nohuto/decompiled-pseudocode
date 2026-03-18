/*
 * XREFs of BgkAcquireDisplayOwnership @ 0x1401F104C
 * Callers:
 *     <none>
 * Callees:
 *     BgLibraryEnable @ 0x14014C8C8 (BgLibraryEnable.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 (__fastcall *__fastcall BgkAcquireDisplayOwnership(__int64 a1))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  char v2; // cl
  __int64 v3; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v4[40]; // [rsp+28h] [rbp-40h] BYREF

  if ( byte_140353B10 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgLibraryEnable(0LL, 1);
  result = qword_140353AF8;
  if ( qword_140353AF8 )
  {
    v3 = 0LL;
    LOBYTE(a1) = 1;
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140353AF8(a1, v4, &v3);
    if ( (int)result >= 0 )
    {
      result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgLibraryEnable((__int64)v4, 1);
      v2 = byte_140353B10;
      if ( (int)result >= 0 )
        v2 = 1;
      qword_140353B00 = 0LL;
      byte_140353B10 = v2;
    }
  }
  return result;
}
