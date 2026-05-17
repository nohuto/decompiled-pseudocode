/*
 * XREFs of EtwpEventApiCallback @ 0x18006C9F8
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x180038EA8 (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpEventApiCallback(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  unsigned int v3; // r12d
  __int64 v4; // rsi
  __int64 *v6; // r13
  __int64 v7; // r15
  char v8; // r8
  unsigned __int8 v9; // bp
  __int64 v10; // rcx
  void (__fastcall *v11)(__int64, _QWORD, unsigned __int8 *, __int64, __int64, __int64 *, _QWORD); // r14
  unsigned __int8 v13; // al
  __int64 v14; // rcx
  __int64 v15; // r10
  int v16; // eax
  unsigned int v17; // r9d
  __int64 v18; // [rsp+40h] [rbp-58h] BYREF
  int v19; // [rsp+48h] [rbp-50h]
  int v20; // [rsp+4Ch] [rbp-4Ch]
  __int64 v21; // [rsp+50h] [rbp-48h]

  v3 = *(_DWORD *)(a1 + 72);
  v4 = 0LL;
  v18 = 0LL;
  v21 = 0LL;
  v6 = 0LL;
  if ( v3 == 2 )
  {
    v9 = *(_BYTE *)(a1 + 76);
    v4 = *(_QWORD *)(a1 + 88);
    v7 = *(_QWORD *)(a1 + 96);
  }
  else
  {
    v7 = -1LL;
    if ( *(_BYTE *)(a2 + 124) )
    {
      v8 = 1;
      v9 = BYTE5(v21);
      v7 = *(_QWORD *)(a2 + 104);
      if ( BYTE5(v21) <= *(_BYTE *)(a2 + 125) )
        v9 = *(_BYTE *)(a2 + 125);
      v4 = *(_QWORD *)(a2 + 112);
    }
    else
    {
      v9 = BYTE5(v21);
      v8 = BYTE4(v21);
    }
    if ( *(_BYTE *)(a2 + 244) )
    {
      v8 = 1;
      v13 = v9;
      if ( v9 <= *(_BYTE *)(a2 + 245) )
        v13 = *(_BYTE *)(a2 + 245);
      v4 |= *(_QWORD *)(a2 + 232);
      v7 &= *(_QWORD *)(a2 + 224);
      v9 = v13;
    }
    if ( v8 )
    {
      v3 = 1;
    }
    else
    {
      v3 = 0;
      *(_DWORD *)(a1 + 116) = 0;
      v7 = 0LL;
    }
  }
  v10 = 0LL;
  if ( *(_DWORD *)(a1 + 116) )
  {
    while ( 1 )
    {
      a3 = (unsigned __int8 *)*(unsigned int *)(a1 + 16LL * (unsigned int)v10 + 132);
      if ( ((unsigned int)a3 & 0x80000000) == 0 || (_DWORD)a3 == 0x80000000 )
        break;
      v10 = (unsigned int)(v10 + 1);
      if ( (unsigned int)v10 >= *(_DWORD *)(a1 + 116) )
        goto LABEL_10;
    }
    v14 = 2 * v10;
    v6 = &v18;
    v15 = a1 + *(_QWORD *)(a1 + 8 * v14 + 120);
    v19 = *(_DWORD *)(a1 + 8 * v14 + 128);
    v16 = *(_DWORD *)(a1 + 8 * v14 + 132);
    v18 = v15;
    v20 = v16;
    if ( v16 == 0x80000000 && *(__int16 *)(a1 + 78) < 0 )
    {
      *(_QWORD *)(v15 + 8) = 0LL;
      a3 = (unsigned __int8 *)(a2 + 150);
      *(_DWORD *)(v15 + 20) = 0;
      v17 = 0;
      *(_DWORD *)(v15 + 16) = v19;
      while ( !*(a3 - 2) || *a3 != (*(_WORD *)(a1 + 78) & 0x7FFF) )
      {
        ++v17;
        a3 += 24;
        if ( v17 >= 4 )
          goto LABEL_10;
      }
      *(_QWORD *)(v15 + 8) = 1LL << ((unsigned __int8)v17 + 32);
    }
  }
LABEL_10:
  v11 = *(void (__fastcall **)(__int64, _QWORD, unsigned __int8 *, __int64, __int64, __int64 *, _QWORD))(a2 + 48);
  if ( v11 )
  {
    LOBYTE(a3) = v9;
    v11(a1 + 56, v3, a3, v4, v7, v6, *(_QWORD *)(a2 + 56));
  }
  return 0LL;
}
