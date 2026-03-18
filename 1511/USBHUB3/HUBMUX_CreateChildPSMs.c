/*
 * XREFs of HUBMUX_CreateChildPSMs @ 0x1C000C488
 * Callers:
 *     HUBHSM_CreatingChildPSMs @ 0x1C0007240 (HUBHSM_CreatingChildPSMs.c)
 * Callees:
 *     HUBMUX_CreatePSM @ 0x1C000BF98 (HUBMUX_CreatePSM.c)
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0035340 (memset.c)
 */

__int64 __fastcall HUBMUX_CreateChildPSMs(__int64 a1)
{
  unsigned __int16 v2; // di
  unsigned __int16 *v3; // rdx
  unsigned __int16 v4; // r8
  __int64 PSM; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rdx
  unsigned __int16 v9; // di
  __int64 v10; // rdx
  unsigned __int16 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rdx
  unsigned __int16 v16; // dx
  unsigned __int16 v17; // cx
  unsigned __int16 v18; // di
  unsigned int v19; // edi
  __int64 **v20; // rsi
  __int64 *v21; // rdx
  __int64 v22; // rax
  PWDF_DRIVER_GLOBALS v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  _QWORD v27[5]; // [rsp+48h] [rbp-19h] BYREF
  _QWORD v28[7]; // [rsp+70h] [rbp+Fh] BYREF
  char v29; // [rsp+C8h] [rbp+67h] BYREF

  *(_DWORD *)(a1 + 138) = 0xFFFF;
  v2 = 0;
  if ( *(_WORD *)(a1 + 136) )
  {
    while ( 1 )
    {
      memset(v27, 0, sizeof(v27));
      _InterlockedOr((volatile signed __int32 *)v27 + 1, 1u);
      if ( *(_BYTE *)(a1 + 216) )
      {
        v4 = v2 + 1;
        LOWORD(v27[0]) = v2 + 1;
        if ( ((unsigned __int8)(1 << ((v2 + 1) & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int16)(v2 + 1) >> 3)
                                                                + a1
                                                                + 1131)) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)v27 + 1, 0xFFFFFFFE);
          v4 = v27[0];
        }
        BYTE2(v27[0]) = *(_BYTE *)(a1 + 2434);
      }
      else
      {
        v3 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 120) + 8LL * v2);
        v4 = *v3;
        LOWORD(v27[0]) = *v3;
        if ( *((_DWORD *)v3 + 1) == 102 )
        {
          _InterlockedAnd((volatile signed __int32 *)v27 + 1, 0xFFFFFFFE);
          v4 = v27[0];
        }
        if ( *((_DWORD *)v3 + 2) == 116 )
        {
          _InterlockedOr((volatile signed __int32 *)v27 + 1, 0x10u);
          v4 = v27[0];
        }
        HIDWORD(v27[0]) ^= (BYTE4(v27[0]) ^ (unsigned __int8)(*((_BYTE *)v3 + 16) << 6)) & 0x40;
        HIDWORD(v27[0]) ^= (BYTE4(v27[0]) ^ (unsigned __int8)(*((_BYTE *)v3 + 16) << 6)) & 0x80;
        BYTE2(v27[0]) = *((_BYTE *)v3 + 3);
        if ( (unsigned __int8)(BYTE2(v27[0]) - 1) > 4u )
          BYTE2(v27[0]) = 5;
      }
      if ( v4 > *(_WORD *)(a1 + 140) )
        *(_WORD *)(a1 + 140) = v4;
      if ( v4 < *(_WORD *)(a1 + 138) )
        *(_WORD *)(a1 + 138) = v4;
      LODWORD(v27[1]) = 512;
      PSM = HUBMUX_CreatePSM(a1, (unsigned __int16 *)v27);
      if ( !PSM )
        break;
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             PSM,
             off_1C0057070);
      *(_QWORD *)(v6 + 1248) = &PSM20StateTable;
      *(_DWORD *)(v6 + 1124) = 3000;
      *(_DWORD *)(v6 + 1256) = 3000;
      v7 = (_QWORD *)(v6 + 248);
      v8 = *(_QWORD **)(a1 + 2312);
      *v7 = a1 + 2304;
      v7[1] = v8;
      if ( *v8 != a1 + 2304 )
        __fastfail(3u);
      *v8 = v7;
      ++v2;
      *(_QWORD *)(a1 + 2312) = v7;
      ++*(_DWORD *)(a1 + 2300);
      if ( v2 >= *(_WORD *)(a1 + 136) )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    v9 = 0;
    *(_DWORD *)(a1 + 144) = 0xFFFF;
    if ( *(_WORD *)(a1 + 142) )
    {
      while ( 1 )
      {
        memset(v27, 0, sizeof(v27));
        _InterlockedOr((volatile signed __int32 *)v27 + 1, 1u);
        if ( *(_BYTE *)(a1 + 216) )
        {
          v11 = v9 + 1;
          LOWORD(v27[0]) = v9 + 1;
          if ( ((unsigned __int8)(1 << ((v9 + 1) & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int16)(v9 + 1) >> 3)
                                                                  + a1
                                                                  + 1134)) != 0 )
          {
            _InterlockedAnd((volatile signed __int32 *)v27 + 1, 0xFFFFFFFE);
            v11 = v27[0];
          }
          if ( *(_BYTE *)(a1 + 237) )
          {
            _InterlockedOr((volatile signed __int32 *)v27 + 1, 0x100u);
            v11 = v27[0];
            HIDWORD(v27[2]) = *(_DWORD *)(a1 + 148);
          }
          v27[3] = *(_QWORD *)(a1 + 2448);
          LODWORD(v27[4]) = *(_DWORD *)(a1 + 2456);
          BYTE2(v27[0]) = *(_BYTE *)(a1 + 2434);
        }
        else
        {
          v10 = *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL * v9);
          LOWORD(v27[0]) = *(_WORD *)v10;
          if ( *(_DWORD *)(v10 + 4) == 102 )
            _InterlockedAnd((volatile signed __int32 *)v27 + 1, 0xFFFFFFFE);
          if ( *(_DWORD *)(v10 + 8) == 116 )
            _InterlockedOr((volatile signed __int32 *)v27 + 1, 8u);
          _InterlockedOr((volatile signed __int32 *)v27 + 1, 0x100u);
          if ( *(_BYTE *)(v10 + 2) )
            HIDWORD(v27[2]) = *(_DWORD *)(a1 + 148);
          v11 = v27[0];
          v27[3] = *(_QWORD *)(v10 + 16);
          LODWORD(v27[4]) = *(unsigned __int16 *)(v10 + 14);
          BYTE2(v27[0]) = *(_BYTE *)(v10 + 3);
          if ( (unsigned __int8)(BYTE2(v27[0]) - 1) > 4u )
            BYTE2(v27[0]) = 5;
        }
        if ( v11 > *(_WORD *)(a1 + 146) )
          *(_WORD *)(a1 + 146) = v11;
        if ( v11 < *(_WORD *)(a1 + 144) )
          *(_WORD *)(a1 + 144) = v11;
        LODWORD(v27[1]) = 768;
        v12 = HUBMUX_CreatePSM(a1, (unsigned __int16 *)v27);
        if ( !v12 )
          break;
        v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                v12,
                off_1C0057070);
        *(_QWORD *)(v13 + 1248) = &PSM30StateTable;
        *(_DWORD *)(v13 + 1124) = 5000;
        *(_DWORD *)(v13 + 1256) = 5000;
        v14 = (_QWORD *)(v13 + 248);
        v15 = *(_QWORD **)(a1 + 2312);
        *v14 = a1 + 2304;
        v14[1] = v15;
        if ( *v15 != a1 + 2304 )
          __fastfail(3u);
        *v15 = v14;
        ++v9;
        *(_QWORD *)(a1 + 2312) = v14;
        ++*(_DWORD *)(a1 + 2300);
        if ( v9 >= *(_WORD *)(a1 + 142) )
          goto LABEL_42;
      }
    }
    else
    {
LABEL_42:
      v16 = 2;
      v17 = *(_WORD *)(a1 + 146);
      if ( *(_WORD *)(a1 + 140) > v17 )
        v17 = *(_WORD *)(a1 + 140);
      *(_WORD *)(a1 + 44) = v17;
      if ( ((unsigned __int64)v17 >> 3) + 1 >= 2 )
        v16 = (v17 >> 3) + 1;
      v18 = v16;
      if ( v16 <= *(_WORD *)(a1 + 80) )
        v18 = *(_WORD *)(a1 + 80);
      *(_WORD *)(a1 + 1072) = v18;
      memset(v28, 0, sizeof(v28));
      v28[4] = *(_QWORD *)(a1 + 16);
      LODWORD(v28[0]) = 56;
      v28[3] = 0x100000001LL;
      if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, unsigned __int64, char *, __int64))(WdfFunctions_01015 + 1536))(
             WdfDriverGlobals,
             v28,
             (unsigned int)ExDefaultNonPagedPoolType,
             1748191317LL,
             (v18 + 3LL) & 0xFFFFFFFFFFFFFFFCuLL,
             &v29,
             a1 + 1064) >= 0 )
      {
        v19 = 2053;
        _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40u);
        return v19;
      }
    }
  }
  v19 = 2045;
  v20 = (__int64 **)(a1 + 2304);
  while ( *v20 != (__int64 *)v20 )
  {
    v21 = *v20;
    v22 = **v20;
    if ( (__int64 **)(*v20)[1] != v20 || *(__int64 **)(v22 + 8) != v21 )
      __fastfail(3u);
    v23 = WdfDriverGlobals;
    *v20 = (__int64 *)v22;
    *(_QWORD *)(v22 + 8) = v20;
    v24 = WdfFunctions_01015;
    --*(_DWORD *)(a1 + 2300);
    v25 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(v24 + 1632))(v23, v21 - 31);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v25);
  }
  return v19;
}
