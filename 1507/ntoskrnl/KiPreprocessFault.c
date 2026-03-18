/*
 * XREFs of KiPreprocessFault @ 0x1400200B4
 * Callers:
 *     KiDispatchException @ 0x14001FAE0 (KiDispatchException.c)
 * Callees:
 *     KiOpDecode @ 0x140117F50 (KiOpDecode.c)
 *     KiOpPreprocessAccessViolation @ 0x14012692C (KiOpPreprocessAccessViolation.c)
 *     KiEmulateAtlThunk @ 0x14020BE38 (KiEmulateAtlThunk.c)
 */

char __fastcall KiPreprocessFault(__int64 a1, int a2, char a3)
{
  char v4; // r11
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  bool v9; // cf
  int v10; // edi
  int v11; // eax
  int v12; // edx
  __int64 v13; // rsi
  char v14; // cl
  char result; // al
  int v16; // eax
  _QWORD v17[2]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v18; // [rsp+40h] [rbp-58h]
  __int64 v19; // [rsp+48h] [rbp-50h]
  char v20; // [rsp+62h] [rbp-36h]
  __int64 v21; // [rsp+80h] [rbp-18h]
  char v22; // [rsp+88h] [rbp-10h]
  char v23; // [rsp+89h] [rbp-Fh]

  v4 = a3;
  v6 = *(_DWORD *)a1 - 268435457;
  if ( !v6 )
  {
    v10 = 0x80000000;
    *(_DWORD *)a1 = -1073741819;
    goto LABEL_8;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v10 = 0x40000000;
    *(_DWORD *)a1 = -1073741795;
    goto LABEL_8;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v10 = 0x20000000;
    *(_DWORD *)a1 = -1073741676;
    goto LABEL_8;
  }
  if ( v8 != 1 )
    return 0;
  if ( (unsigned __int8)KiOpPreprocessAccessViolation(a1) )
    return 1;
  v9 = *(_DWORD *)(a1 + 24) < 2u;
  v10 = 0x10000000;
  *(_DWORD *)a1 = -1073741819;
  if ( !v9 && (*(_BYTE *)(a1 + 32) & 8) != 0 )
  {
    if ( v4 )
    {
      v10 = 0x8000000;
      goto LABEL_8;
    }
    return 0;
  }
LABEL_8:
  v11 = KiOpDecode(a1, a2, v4, v10, v17);
  v12 = v11;
  if ( v11 < 0 )
  {
    v13 = 0LL;
  }
  else
  {
    v13 = v21;
    if ( v21 )
      v12 = (*(__int64 (__fastcall **)(_QWORD *, _QWORD))(v21 + 16))(v17, (unsigned int)v11);
  }
  v14 = v22;
  result = 0;
  if ( v12 < 0 || !v13 || (result = v22) == 0 )
  {
    if ( v10 == 0x80000000 )
    {
      if ( *(_DWORD *)a1 == -1073741819 && !v23 )
      {
        *(_DWORD *)(a1 + 24) = 2;
        *(_QWORD *)(a1 + 32) = 0LL;
        *(_QWORD *)(a1 + 40) = -1LL;
      }
    }
    else if ( v10 == 0x8000000 )
    {
      if ( v20 && (*(_BYTE *)(v19 + 32) & 8) != 0 && *(_QWORD *)(v19 + 40) == v17[0] )
      {
        v16 = KiEmulateAtlThunk((int)v18 + 248, (int)v18 + 152, (int)v18 + 120, (int)v18 + 128, v18 + 136);
        v14 = v22;
        if ( v16 )
          return 1;
      }
      return v14;
    }
  }
  return result;
}
