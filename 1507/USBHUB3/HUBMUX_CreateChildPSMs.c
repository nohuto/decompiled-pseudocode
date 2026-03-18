/*
 * XREFs of HUBMUX_CreateChildPSMs @ 0x1C000BF08
 * Callers:
 *     HUBHSM_CreatingChildPSMs @ 0x1C0006CE0 (HUBHSM_CreatingChildPSMs.c)
 * Callees:
 *     HUBMUX_CreatePSM @ 0x1C000BA18 (HUBMUX_CreatePSM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0034640 (memset.c)
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
  __int64 v23; // rax
  _QWORD v25[5]; // [rsp+48h] [rbp-19h] BYREF
  _QWORD v26[7]; // [rsp+70h] [rbp+Fh] BYREF
  char v27; // [rsp+C8h] [rbp+67h] BYREF

  *(_DWORD *)(a1 + 154) = 0xFFFF;
  v2 = 0;
  if ( *(_WORD *)(a1 + 152) )
  {
    while ( 1 )
    {
      memset(v25, 0, sizeof(v25));
      _InterlockedOr((volatile signed __int32 *)v25 + 1, 1u);
      if ( *(_BYTE *)(a1 + 200) )
      {
        v4 = v2 + 1;
        LOWORD(v25[0]) = v2 + 1;
        if ( ((unsigned __int8)(1 << ((v2 + 1) & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int16)(v2 + 1) >> 3)
                                                                + a1
                                                                + 1107)) != 0 )
        {
          _InterlockedAnd((volatile signed __int32 *)v25 + 1, 0xFFFFFFFE);
          v4 = v25[0];
        }
        BYTE2(v25[0]) = *(_BYTE *)(a1 + 2410);
      }
      else
      {
        v3 = *(unsigned __int16 **)(*(_QWORD *)(a1 + 136) + 8LL * v2);
        v4 = *v3;
        LOWORD(v25[0]) = *v3;
        if ( *((_DWORD *)v3 + 1) == 102 )
        {
          _InterlockedAnd((volatile signed __int32 *)v25 + 1, 0xFFFFFFFE);
          v4 = v25[0];
        }
        if ( *((_DWORD *)v3 + 2) == 116 )
        {
          _InterlockedOr((volatile signed __int32 *)v25 + 1, 0x10u);
          v4 = v25[0];
        }
        HIDWORD(v25[0]) ^= (BYTE4(v25[0]) ^ (unsigned __int8)(*((_BYTE *)v3 + 16) << 6)) & 0x40;
        HIDWORD(v25[0]) ^= (BYTE4(v25[0]) ^ (unsigned __int8)(*((_BYTE *)v3 + 16) << 6)) & 0x80;
        BYTE2(v25[0]) = *((_BYTE *)v3 + 3);
        if ( (unsigned __int8)(BYTE2(v25[0]) - 1) > 4u )
          BYTE2(v25[0]) = 5;
      }
      if ( v4 > *(_WORD *)(a1 + 156) )
        *(_WORD *)(a1 + 156) = v4;
      if ( v4 < *(_WORD *)(a1 + 154) )
        *(_WORD *)(a1 + 154) = v4;
      LODWORD(v25[1]) = 512;
      PSM = HUBMUX_CreatePSM(a1, (unsigned __int16 *)v25);
      if ( !PSM )
        break;
      v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
             WdfDriverGlobals,
             PSM,
             off_1C0057018);
      *(_QWORD *)(v6 + 1248) = &PSM20StateTable;
      *(_DWORD *)(v6 + 1124) = 3000;
      *(_DWORD *)(v6 + 1256) = 3000;
      v7 = (_QWORD *)(v6 + 248);
      v8 = *(_QWORD **)(a1 + 2288);
      *v7 = a1 + 2280;
      v7[1] = v8;
      if ( *v8 != a1 + 2280 )
        __fastfail(3u);
      *v8 = v7;
      ++v2;
      *(_QWORD *)(a1 + 2288) = v7;
      ++*(_DWORD *)(a1 + 2276);
      if ( v2 >= *(_WORD *)(a1 + 152) )
        goto LABEL_19;
    }
  }
  else
  {
LABEL_19:
    v9 = 0;
    *(_DWORD *)(a1 + 160) = 0xFFFF;
    if ( *(_WORD *)(a1 + 158) )
    {
      while ( 1 )
      {
        memset(v25, 0, sizeof(v25));
        _InterlockedOr((volatile signed __int32 *)v25 + 1, 1u);
        if ( *(_BYTE *)(a1 + 200) )
        {
          v11 = v9 + 1;
          LOWORD(v25[0]) = v9 + 1;
          if ( ((unsigned __int8)(1 << ((v9 + 1) & 7)) & *(_BYTE *)(((unsigned __int64)(unsigned __int16)(v9 + 1) >> 3)
                                                                  + a1
                                                                  + 1110)) != 0 )
          {
            _InterlockedAnd((volatile signed __int32 *)v25 + 1, 0xFFFFFFFE);
            v11 = v25[0];
          }
          if ( *(_BYTE *)(a1 + 221) )
          {
            _InterlockedOr((volatile signed __int32 *)v25 + 1, 0x100u);
            v11 = v25[0];
            HIDWORD(v25[2]) = *(_DWORD *)(a1 + 164);
          }
          v25[3] = *(_QWORD *)(a1 + 2424);
          LODWORD(v25[4]) = *(_DWORD *)(a1 + 2432);
          BYTE2(v25[0]) = *(_BYTE *)(a1 + 2410);
        }
        else
        {
          v10 = *(_QWORD *)(*(_QWORD *)(a1 + 144) + 8LL * v9);
          LOWORD(v25[0]) = *(_WORD *)v10;
          if ( *(_DWORD *)(v10 + 4) == 102 )
            _InterlockedAnd((volatile signed __int32 *)v25 + 1, 0xFFFFFFFE);
          if ( *(_DWORD *)(v10 + 8) == 116 )
            _InterlockedOr((volatile signed __int32 *)v25 + 1, 8u);
          _InterlockedOr((volatile signed __int32 *)v25 + 1, 0x100u);
          if ( *(_BYTE *)(v10 + 2) )
            HIDWORD(v25[2]) = *(_DWORD *)(a1 + 164);
          v11 = v25[0];
          v25[3] = *(_QWORD *)(v10 + 16);
          LODWORD(v25[4]) = *(unsigned __int16 *)(v10 + 14);
          BYTE2(v25[0]) = *(_BYTE *)(v10 + 3);
          if ( (unsigned __int8)(BYTE2(v25[0]) - 1) > 4u )
            BYTE2(v25[0]) = 5;
        }
        if ( v11 > *(_WORD *)(a1 + 162) )
          *(_WORD *)(a1 + 162) = v11;
        if ( v11 < *(_WORD *)(a1 + 160) )
          *(_WORD *)(a1 + 160) = v11;
        LODWORD(v25[1]) = 768;
        v12 = HUBMUX_CreatePSM(a1, (unsigned __int16 *)v25);
        if ( !v12 )
          break;
        v13 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
                WdfDriverGlobals,
                v12,
                off_1C0057018);
        *(_QWORD *)(v13 + 1248) = &PSM30StateTable;
        *(_DWORD *)(v13 + 1124) = 5000;
        *(_DWORD *)(v13 + 1256) = 5000;
        v14 = (_QWORD *)(v13 + 248);
        v15 = *(_QWORD **)(a1 + 2288);
        *v14 = a1 + 2280;
        v14[1] = v15;
        if ( *v15 != a1 + 2280 )
          __fastfail(3u);
        *v15 = v14;
        ++v9;
        *(_QWORD *)(a1 + 2288) = v14;
        ++*(_DWORD *)(a1 + 2276);
        if ( v9 >= *(_WORD *)(a1 + 158) )
          goto LABEL_42;
      }
    }
    else
    {
LABEL_42:
      v16 = 2;
      v17 = *(_WORD *)(a1 + 162);
      if ( *(_WORD *)(a1 + 156) > v17 )
        v17 = *(_WORD *)(a1 + 156);
      *(_WORD *)(a1 + 44) = v17;
      if ( ((unsigned __int64)v17 >> 3) + 1 >= 2 )
        v16 = (v17 >> 3) + 1;
      v18 = v16;
      if ( v16 <= *(_WORD *)(a1 + 80) )
        v18 = *(_WORD *)(a1 + 80);
      *(_WORD *)(a1 + 1048) = v18;
      memset(v26, 0, sizeof(v26));
      v26[4] = *(_QWORD *)(a1 + 16);
      LODWORD(v26[0]) = 56;
      v26[3] = 0x100000001LL;
      if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD, __int64, unsigned __int64, char *, __int64))(WdfFunctions_01015 + 1536))(
             WdfDriverGlobals,
             v26,
             (unsigned int)ExDefaultNonPagedPoolType,
             1748191317LL,
             (v18 + 3LL) & 0xFFFFFFFFFFFFFFFCuLL,
             &v27,
             a1 + 1040) >= 0 )
      {
        v19 = 2053;
        _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x40u);
        return v19;
      }
    }
  }
  v19 = 2045;
  v20 = (__int64 **)(a1 + 2280);
  while ( *v20 != (__int64 *)v20 )
  {
    v21 = *v20;
    v22 = **v20;
    if ( (__int64 **)(*v20)[1] != v20 || *(__int64 **)(v22 + 8) != v21 )
      __fastfail(3u);
    *v20 = (__int64 *)v22;
    *(_QWORD *)(v22 + 8) = v20;
    --*(_DWORD *)(a1 + 2276);
    v23 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *))(WdfFunctions_01015 + 1632))(
            WdfDriverGlobals,
            v21 - 31);
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, v23);
  }
  return v19;
}
