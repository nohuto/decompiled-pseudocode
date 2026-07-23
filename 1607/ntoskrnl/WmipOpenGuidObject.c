/*
 * XREFs of WmipOpenGuidObject @ 0x140473104
 * Callers:
 *     WmipOpenBlock @ 0x1404733AC (WmipOpenBlock.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     WmipCreateGuidObject @ 0x140472E18 (WmipCreateGuidObject.c)
 *     WmipUuidFromString @ 0x140473198 (WmipUuidFromString.c)
 */

__int64 __fastcall WmipOpenGuidObject(__int64 a1, __int64 a2, ACCESS_MASK a3, _QWORD *a4)
{
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+28h] [rbp-30h] BYREF

  v7 = *(_QWORD **)(*(_QWORD *)(a1 + 16) + 8LL);
  v8 = *v7 - *(_QWORD *)L"\\WmiGuid\\";
  if ( *v7 == *(_QWORD *)L"\\WmiGuid\\" )
    v8 = v7[1] - *(_QWORD *)L"Guid\\";
  if ( v8 )
    return 3221225485LL;
  result = WmipUuidFromString((char *)v7 + 18, &v11);
  if ( (int)result >= 0 )
  {
    result = WmipCreateGuidObject(a1, a3, &v11, &v10);
    if ( (int)result >= 0 )
    {
      *a4 = v10;
      return 0LL;
    }
  }
  return result;
}
