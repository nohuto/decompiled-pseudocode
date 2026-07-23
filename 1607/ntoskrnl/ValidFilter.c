/*
 * XREFs of ValidFilter @ 0x140511A74
 * Callers:
 *     PiDqQueryValidateQueryData @ 0x14048CD48 (PiDqQueryValidateQueryData.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     FilterEval @ 0x1404E5754 (FilterEval.c)
 *     _PnpValidatePropertyData @ 0x140511B44 (_PnpValidatePropertyData.c)
 */

__int64 __fastcall ValidFilter(unsigned int a1, _DWORD *a2)
{
  int v4; // edi
  _DWORD *i; // rbx
  int v7; // [rsp+30h] [rbp-58h] BYREF
  int v8; // [rsp+38h] [rbp-50h] BYREF
  _BYTE *v9; // [rsp+40h] [rbp-48h]
  _BYTE v10[48]; // [rsp+48h] [rbp-40h] BYREF

  memset(v10, 0, sizeof(v10));
  v7 = 0;
  v9 = v10;
  v8 = 1;
  if ( (unsigned int)FilterEval(
                       (__int64 (__fastcall *)(__int64, unsigned int *, unsigned int *, unsigned int *, __int64 *))GetPropertyFromPropArray,
                       (__int64)&v8,
                       a1,
                       a2,
                       &v7) != -1073741811 )
  {
    v4 = 0;
    if ( !a1 )
      return 1LL;
    for ( i = a2 + 10;
          !*((_QWORD *)i - 1) && (unsigned int)PnpValidatePropertyData(*((PSECURITY_DESCRIPTOR *)i + 1), i[1]) != 1;
          i += 14 )
    {
      if ( ++v4 >= a1 )
        return 1LL;
    }
  }
  return 0LL;
}
