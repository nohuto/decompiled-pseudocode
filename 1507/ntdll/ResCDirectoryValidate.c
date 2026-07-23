/*
 * XREFs of ResCDirectoryValidate @ 0x1800F828C
 * Callers:
 *     ResCKeDirectoryOpenMapping @ 0x18000EE38 (ResCKeDirectoryOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     ??$Validate@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@@@YAHPEAU_RESCDIRECTORY@@@Z @ 0x1800F7EC0 (--$Validate@PEAU_RESCDIRECTORY@@PEAU_RESCDENTRY@@@@YAHPEAU_RESCDIRECTORY@@@Z.c)
 *     ResCDirectoryValidateEntries @ 0x1800FC040 (ResCDirectoryValidateEntries.c)
 *     ResCDirectoryValidateHeader @ 0x1800FC1F4 (ResCDirectoryValidateHeader.c)
 */

__int64 __fastcall ResCDirectoryValidate(__int64 a1, __int64 a2, __int64 a3)
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
  if ( !(unsigned int)ResCDirectoryValidateHeader(v6) )
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
