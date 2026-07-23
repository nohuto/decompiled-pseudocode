/*
 * XREFs of BcpGetCharacterMaxResourceProfile @ 0x1401419E8
 * Callers:
 *     BcpGetMaxResourceProfile @ 0x14014192C (BcpGetMaxResourceProfile.c)
 * Callees:
 *     RaspGetXExtent @ 0x1401410C8 (RaspGetXExtent.c)
 */

__int64 __fastcall BcpGetCharacterMaxResourceProfile(unsigned __int16 a1, int a2, __int128 *a3, __int64 a4)
{
  __int128 v4; // xmm0
  _DWORD *v7; // rbx
  __int64 i; // rsi
  int XExtent; // r8d
  unsigned int v10; // edx
  unsigned __int64 v11; // rax
  bool v12; // cf
  int v14; // [rsp+20h] [rbp-40h]
  _QWORD v15[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v16; // [rsp+40h] [rbp-20h]
  __int128 v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+58h] [rbp-8h]
  unsigned int v19; // [rsp+90h] [rbp+30h] BYREF

  v4 = *a3;
  v18 = *((_QWORD *)a3 + 2);
  v17 = v4;
  v7 = (_DWORD *)((char *)&unk_1402F6930 + 4 * a2);
  for ( i = 0LL; i < 5; ++i )
  {
    LODWORD(v18) = *v7;
    v15[0] = 0LL;
    v15[1] = 0LL;
    v16 = 0LL;
    XExtent = RaspGetXExtent(a1, (__int64)&v17, &v19, a4, v14, (__int64)v15);
    if ( XExtent < 0 )
      break;
    v10 = v19;
    v11 = v16;
    if ( *(_DWORD *)(a4 + 8) >= v19 )
      v10 = *(_DWORD *)(a4 + 8);
    v12 = *(_QWORD *)a4 < v16;
    *(_DWORD *)(a4 + 8) = v10;
    if ( !v12 )
      v11 = *(_QWORD *)a4;
    v7 += 18;
    *(_QWORD *)a4 = v11;
  }
  return (unsigned int)XExtent;
}
