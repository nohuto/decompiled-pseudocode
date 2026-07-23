/*
 * XREFs of ResCDirectoryValidate @ 0x1800F7DA8
 * Callers:
 *     ResCKeDirectoryOpenMapping @ 0x180048988 (ResCKeDirectoryOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     ResCDirectoryValidateHeader @ 0x18004B444 (ResCDirectoryValidateHeader.c)
 *     ??$Validate@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@@@YAHPEAU_RESCDIRECTORY@@@Z @ 0x1800F7B18 (--$Validate@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@@@YAHPEAU_RESCDIRECTORY@@@Z.c)
 *     ResCDirectoryValidateEntries @ 0x1800FB458 (ResCDirectoryValidateEntries.c)
 */

__int64 __fastcall ResCDirectoryValidate(__int64 a1, unsigned int a2, __int64 a3)
{
  int v4; // edi
  _DWORD *v6; // rsi
  unsigned int v7; // ebp
  __int64 v8; // r8
  __int64 v9; // rdx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF
  int v11; // [rsp+40h] [rbp+18h] BYREF
  int v12; // [rsp+44h] [rbp+1Ch]

  v12 = HIDWORD(a3);
  v11 = 0;
  v4 = 3;
  if ( !a1 )
  {
    RtlSetLastWin32Error(87);
    return 0LL;
  }
  v6 = *(_DWORD **)(a1 + 24);
  if ( !(unsigned int)ResCDirectoryValidateHeader((__int64)v6, a2) )
    return 0LL;
  while ( 1 )
  {
    _InterlockedOr(v10, 0);
    v7 = v6[4];
    if ( Validate<_RESCDIRECTORY *,_RESCDENTRY *>(a1) )
    {
      v9 = *(unsigned int *)(*(_QWORD *)(a1 + 24) + 88LL);
      if ( (int)v9 < 0 )
        break;
      ResCDirectoryValidateEntries(a1, v9, v8, &v11);
      if ( !v11 )
        break;
    }
    _InterlockedOr(v10, 0);
    if ( v7 > v6[6] || v7 > v6[5] )
    {
      if ( --v4 )
        continue;
    }
    return 0LL;
  }
  return 1LL;
}
