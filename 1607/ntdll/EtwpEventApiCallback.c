/*
 * XREFs of EtwpEventApiCallback @ 0x18002ACC0
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x18002A94C (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall EtwpEventApiCallback(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v3; // r11
  __int64 *v4; // r15
  __int64 v5; // r8
  __int64 v6; // rsi
  char v7; // r10
  unsigned __int8 v8; // bl
  __int64 v9; // rcx
  void (__fastcall *v10)(__int64, _QWORD, __int64, __int64, __int64, __int64 *, _QWORD); // rax
  __int64 v11; // rcx
  unsigned __int8 v13; // al
  int v14; // r10d
  __int64 v15; // rcx
  __int64 v16; // rbp
  int v17; // eax
  unsigned __int8 *v18; // r10
  unsigned int v19; // edi
  __int64 v20; // [rsp+40h] [rbp-48h] BYREF
  int v21; // [rsp+48h] [rbp-40h]
  int v22; // [rsp+4Ch] [rbp-3Ch]
  __int64 v23; // [rsp+50h] [rbp-38h]

  v2 = *(_DWORD *)(a1 + 72);
  v3 = 0LL;
  v4 = 0LL;
  v20 = 0LL;
  v23 = 0LL;
  v5 = a1;
  if ( v2 == 2 )
  {
    v8 = *(_BYTE *)(a1 + 76);
    v3 = *(_QWORD *)(a1 + 88);
    v6 = *(_QWORD *)(a1 + 96);
  }
  else
  {
    v6 = -1LL;
    if ( *(_BYTE *)(a2 + 124) )
    {
      v7 = 1;
      v8 = BYTE5(v23);
      v6 = *(_QWORD *)(a2 + 104);
      if ( BYTE5(v23) <= *(_BYTE *)(a2 + 125) )
        v8 = *(_BYTE *)(a2 + 125);
      v3 = *(_QWORD *)(a2 + 112);
    }
    else
    {
      v8 = BYTE5(v23);
      v7 = BYTE4(v23);
    }
    if ( *(_BYTE *)(a2 + 244) )
    {
      v7 = 1;
      v13 = v8;
      if ( v8 <= *(_BYTE *)(a2 + 245) )
        v13 = *(_BYTE *)(a2 + 245);
      v3 |= *(_QWORD *)(a2 + 232);
      v6 &= *(_QWORD *)(a2 + 224);
      v8 = v13;
    }
    if ( v7 )
    {
      v2 = 1;
    }
    else
    {
      v2 = 0;
      v6 = 0LL;
      *(_DWORD *)(a1 + 116) = 0;
    }
  }
  v9 = 0LL;
  if ( *(_DWORD *)(v5 + 116) )
  {
    while ( 1 )
    {
      v14 = *(_DWORD *)(v5 + 16LL * (unsigned int)v9 + 132);
      if ( (v14 & 0x80000000) == 0 || v14 == 0x80000000 )
        break;
      v9 = (unsigned int)(v9 + 1);
      if ( (unsigned int)v9 >= *(_DWORD *)(v5 + 116) )
        goto LABEL_10;
    }
    v15 = 2 * v9;
    v4 = &v20;
    v16 = v5 + *(_QWORD *)(v5 + 8 * v15 + 120);
    v21 = *(_DWORD *)(v5 + 8 * v15 + 128);
    v17 = *(_DWORD *)(v5 + 8 * v15 + 132);
    v20 = v16;
    v22 = v17;
    if ( v17 == 0x80000000 && *(__int16 *)(v5 + 78) < 0 )
    {
      *(_QWORD *)(v16 + 8) = 0LL;
      v18 = (unsigned __int8 *)(a2 + 150);
      *(_DWORD *)(v16 + 20) = 0;
      v19 = 0;
      *(_DWORD *)(v16 + 16) = v21;
      while ( !*(v18 - 2) || *v18 != (*(_WORD *)(v5 + 78) & 0x7FFF) )
      {
        ++v19;
        v18 += 24;
        if ( v19 >= 4 )
          goto LABEL_10;
      }
      *(_QWORD *)(v16 + 8) = 1LL << ((unsigned __int8)v19 + 32);
    }
  }
LABEL_10:
  v10 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64 *, _QWORD))(a2 + 48);
  if ( v10 )
  {
    v11 = v5 + 56;
    LOBYTE(v5) = v8;
    v10(v11, v2, v5, v3, v6, v4, *(_QWORD *)(a2 + 56));
  }
  return 0LL;
}
