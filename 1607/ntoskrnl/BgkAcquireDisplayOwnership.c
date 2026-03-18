/*
 * XREFs of BgkAcquireDisplayOwnership @ 0x1401C3C14
 * Callers:
 *     <none>
 * Callees:
 *     BgLibraryEnable @ 0x1401269B0 (BgLibraryEnable.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 */

__int64 (__fastcall *__fastcall BgkAcquireDisplayOwnership(__int64 a1))(_QWORD, _QWORD, _QWORD)
{
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD); // rax
  char v2; // cl
  __int64 v3; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v4[40]; // [rsp+28h] [rbp-40h] BYREF

  if ( byte_140328CD3 && !byte_140328CD1 )
    return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgLibraryEnable(0LL, 1);
  result = qword_140328DD8;
  if ( qword_140328DD8 )
  {
    v3 = 0LL;
    LOBYTE(a1) = 1;
    result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))qword_140328DD8(a1, v4, &v3);
    if ( (int)result >= 0 )
    {
      result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))BgLibraryEnable((__int64)v4, 1);
      v2 = byte_140328CD3;
      if ( (int)result >= 0 )
        v2 = 1;
      qword_140328CC8 = 0LL;
      byte_140328CD3 = v2;
    }
  }
  return result;
}
