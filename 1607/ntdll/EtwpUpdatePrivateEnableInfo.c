/*
 * XREFs of EtwpUpdatePrivateEnableInfo @ 0x18008688C
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x18002A94C (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwpUpdatePrivateEnableInfo(__int64 a1)
{
  __int64 v1; // r8
  unsigned __int8 *v2; // rdx
  unsigned __int8 v3; // di
  __int64 v4; // r11
  char v5; // r9
  int v6; // esi
  __int64 v7; // rbx
  __int64 result; // rax
  unsigned __int8 v9; // al
  __int128 v10; // [rsp+0h] [rbp-20h]
  __int64 v11; // [rsp+10h] [rbp-10h]

  v1 = 0LL;
  v2 = (unsigned __int8 *)(a1 + 149);
  HIDWORD(v11) = 0;
  v3 = 0;
  v4 = -1LL;
  v5 = 0;
  v6 = 0;
  v7 = 4LL;
  v10 = 0uLL;
  do
  {
    if ( *(v2 - 1) )
    {
      v5 = 1;
      v9 = v3;
      BYTE4(v11) = 1;
      if ( v3 <= *v2 )
        v9 = *v2;
      v1 |= *(_QWORD *)(v2 - 13);
      v4 &= *(_QWORD *)(v2 - 21);
      v3 = v9;
      v6 |= *(_DWORD *)(v2 - 5);
      *((_QWORD *)&v10 + 1) = v1;
    }
    v2 += 24;
    --v7;
  }
  while ( v7 );
  BYTE5(v11) = v3;
  LODWORD(v11) = v6;
  result = v4 & -(__int64)(v5 != 0);
  *(_QWORD *)&v10 = result;
  *(_OWORD *)(a1 + 224) = v10;
  *(_QWORD *)(a1 + 240) = v11;
  return result;
}
