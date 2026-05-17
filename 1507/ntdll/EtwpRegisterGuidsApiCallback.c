/*
 * XREFs of EtwpRegisterGuidsApiCallback @ 0x1800725C0
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180038EA8 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall EtwpRegisterGuidsApiCallback(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // edx
  unsigned int v7; // edi
  __int64 v8; // rax
  __int128 v9; // xmm0
  unsigned int (__fastcall *v10)(_QWORD, __int64, int *, _QWORD *); // rbp
  __int64 v11; // r14
  int v13; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v14[6]; // [rsp+28h] [rbp-50h] BYREF

  v4 = 0;
  memset(v14, 0, sizeof(v14));
  v5 = *(_DWORD *)(a1 + 112);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return 0LL;
      v7 = 10;
    }
    else
    {
      v7 = 4;
    }
  }
  else
  {
    v7 = 5;
    *(_BYTE *)(a1 + 106) = 0;
    *(_DWORD *)(a1 + 108) = 0;
  }
  v8 = *(_QWORD *)(a2 + 56);
  v9 = *(_OWORD *)(a1 + 40);
  v10 = *(unsigned int (__fastcall **)(_QWORD, __int64, int *, _QWORD *))v8;
  v11 = *(_QWORD *)(v8 + 8);
  v14[1] = *(_QWORD *)(a1 + 104);
  LODWORD(v14[0]) = 48;
  HIDWORD(v14[0]) = v7;
  v13 = 48;
  *(_OWORD *)&v14[3] = v9;
  if ( v10 )
    return v10(v7, v11, &v13, v14);
  return v4;
}
