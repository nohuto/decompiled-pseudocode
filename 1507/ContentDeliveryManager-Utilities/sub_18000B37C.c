/*
 * XREFs of sub_18000B37C @ 0x18000B37C
 * Callers:
 *     sub_180011A94 @ 0x180011A94 (sub_180011A94.c)
 *     sub_180011ED8 @ 0x180011ED8 (sub_180011ED8.c)
 *     sub_1800139BC @ 0x1800139BC (sub_1800139BC.c)
 *     sub_180014648 @ 0x180014648 (sub_180014648.c)
 *     sub_1800146D4 @ 0x1800146D4 (sub_1800146D4.c)
 * Callees:
 *     sub_18000B280 @ 0x18000B280 (sub_18000B280.c)
 *     sub_18000B29C @ 0x18000B29C (sub_18000B29C.c)
 *     _CxxThrowException @ 0x180026510 (_CxxThrowException.c)
 */

__int64 __fastcall sub_18000B37C(__int64 a1, char a2, char a3)
{
  unsigned int v3; // eax
  int v4; // edx
  __int64 result; // rax
  __int128 *v6; // rax
  __int128 *v7; // rax
  __int128 *v8; // rax
  _BYTE v9[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE pExceptionObject[56]; // [rsp+30h] [rbp-38h] BYREF

  v3 = *(_DWORD *)(a1 + 20);
  v4 = a2 & 0x17;
  *(_DWORD *)(a1 + 16) = v4;
  result = v4 & v3;
  if ( (_DWORD)result )
  {
    if ( !a3 )
    {
      if ( (result & 4) == 0 )
      {
        if ( (result & 2) == 0 )
        {
          v8 = (__int128 *)sub_18000B280((__int64)v9);
          sub_18000B29C((__int64)pExceptionObject, "ios_base::eofbit set", v8);
          throw (std::ios_base::failure *)pExceptionObject;
        }
        v7 = (__int128 *)sub_18000B280((__int64)v9);
        sub_18000B29C((__int64)pExceptionObject, "ios_base::failbit set", v7);
        throw (std::ios_base::failure *)pExceptionObject;
      }
      v6 = (__int128 *)sub_18000B280((__int64)v9);
      sub_18000B29C((__int64)pExceptionObject, "ios_base::badbit set", v6);
      throw (std::ios_base::failure *)pExceptionObject;
    }
    throw;
  }
  return result;
}
