/*
 * XREFs of ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C000F1C8
 * Callers:
 *     GreRectangle @ 0x1C000E9CC (GreRectangle.c)
 * Callees:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00460FC (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0046AA0 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0048FD0 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0049304 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0049384 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C004A0C0 (--0DCOBJ@@QEAA@XZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C004CA3C (--1BLTRECORD@@QEAA@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C004CCC0 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall GreRectBlt(struct DCOBJ *a1, struct ERECTL *a2)
{
  __int64 v2; // r8
  __int64 v5; // rsi
  unsigned int v6; // r15d
  int v7; // r8d
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  int v13; // esi
  __int128 v14; // xmm0
  _BYTE v16[40]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v17; // [rsp+70h] [rbp-98h]
  char v18; // [rsp+78h] [rbp-90h]
  int v19; // [rsp+7Ch] [rbp-8Ch]
  int v20; // [rsp+A0h] [rbp-68h]
  char v21; // [rsp+B8h] [rbp-50h]
  _BYTE v22[48]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v23[120]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v24[32]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v25; // [rsp+188h] [rbp+80h]
  __int64 v26; // [rsp+190h] [rbp+88h]
  __int64 v27; // [rsp+1A8h] [rbp+A0h]
  __int64 v28; // [rsp+1B8h] [rbp+B0h]
  __int64 v29; // [rsp+1C8h] [rbp+C0h]
  __int128 v30; // [rsp+200h] [rbp+F8h]
  __int64 v31; // [rsp+238h] [rbp+130h]
  int v32; // [rsp+240h] [rbp+138h]
  int v33; // [rsp+244h] [rbp+13Ch]

  v2 = *(_QWORD *)a1;
  v28 = 0LL;
  v33 = 0;
  v5 = gaMix[*(_BYTE *)(*(_QWORD *)(v2 + 80) + 72LL) & 0xF];
  v6 = gajRop3[v5];
  if ( (*(_DWORD *)(v2 + 36) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(a1, a2);
  v17 = 0LL;
  v19 = 0;
  v20 = 0;
  v18 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v22);
  DCOBJ::DCOBJ((DCOBJ *)v23);
  DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v16, a1, v7);
  v8 = 1;
  if ( !(unsigned int)XDCOBJ::bFullScreen(a1) )
  {
    if ( (v21 & 1) == 0 )
    {
LABEL_12:
      v8 = 0;
      goto LABEL_21;
    }
    v9 = *(_QWORD *)a1;
    v27 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
    v25 = *(_QWORD *)(v27 + 120);
    v26 = *(_QWORD *)(v9 + 96);
    if ( (v6 & 0xE8) != 0 )
    {
      v29 = v9 + 1584;
      v10 = *(_QWORD *)(v9 + 80);
      if ( (*(_DWORD *)(v10 + 8) & 0x1000) != 0 )
        GreDCSelectBrush(v9, *(_QWORD *)(v10 + 16));
      v11 = *(_QWORD *)a1;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) & 1) != 0 || (*(_DWORD *)(v11 + 332) & 1) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v11 + 80) + 8LL) &= ~1u;
        *(_DWORD *)(*(_QWORD *)a1 + 332LL) &= ~1u;
        EBRUSHOBJ::vInitBrush(v29, *(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)a1 + 144LL), v26, v25, v27, 1);
      }
      if ( (*(_DWORD *)(v29 + 128) & 0x100) != 0 )
        goto LABEL_12;
      v12 = *(_QWORD *)a1;
      v31 = *(_QWORD *)(*(_QWORD *)a1 + 1576LL);
      if ( (*(_DWORD *)(v29 + 128) & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(v12 + 80) + 73LL) == 1 )
      {
        v13 = v5 | 0xAA00;
LABEL_18:
        if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 )
          XDCOBJ::vAccumulateTight(a1, a2);
        v14 = *(_OWORD *)a2;
        v28 = 0LL;
        v32 = v13;
        v30 = v14;
        v8 = BLTRECORD::bBitBlt((BLTRECORD *)v24, a1, a1, v6);
        goto LABEL_21;
      }
    }
    else
    {
      v29 = 0LL;
    }
    v13 = ((_DWORD)v5 << 8) | v5;
    goto LABEL_18;
  }
LABEL_21:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v16);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v24);
  return v8;
}
