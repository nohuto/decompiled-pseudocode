/*
 * XREFs of ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C00A289C
 * Callers:
 *     GreRectangle @ 0x1C00A2BC4 (GreRectangle.c)
 * Callees:
 *     ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0016E90 (--1DEVLOCKBLTOBJ@@QEAA@XZ.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00182A4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019A20 (-vAccumulateTight@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x1C0019E40 (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C0019EC0 (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??1BLTRECORD@@QEAA@XZ @ 0x1C009EDFC (--1BLTRECORD@@QEAA@XZ.c)
 *     ?bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z @ 0x1C009F674 (-bBitBlt@BLTRECORD@@QEAAHAEAVDCOBJ@@0K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@XZ @ 0x1C025FFC0 (--0DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreRectBlt(struct DCOBJ *a1, struct ERECTL *a2)
{
  __int64 v2; // r8
  __int64 v5; // rsi
  char v6; // r15
  unsigned int v7; // ebx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  int v12; // esi
  __int128 v13; // xmm0
  _BYTE v15[40]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-98h]
  char v17; // [rsp+78h] [rbp-90h]
  int v18; // [rsp+7Ch] [rbp-8Ch]
  int v19; // [rsp+A0h] [rbp-68h]
  char v20; // [rsp+B8h] [rbp-50h]
  _BYTE v21[48]; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v22[120]; // [rsp+F0h] [rbp-18h] BYREF
  _BYTE v23[32]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v24; // [rsp+188h] [rbp+80h]
  __int64 v25; // [rsp+190h] [rbp+88h]
  __int64 v26; // [rsp+1A8h] [rbp+A0h]
  __int64 v27; // [rsp+1B8h] [rbp+B0h]
  __int64 v28; // [rsp+1C8h] [rbp+C0h]
  __int128 v29; // [rsp+200h] [rbp+F8h]
  __int64 v30; // [rsp+238h] [rbp+130h]
  int v31; // [rsp+240h] [rbp+138h]
  int v32; // [rsp+244h] [rbp+13Ch]

  v2 = *(_QWORD *)a1;
  v27 = 0LL;
  v32 = 0;
  v5 = gaMix[*(_BYTE *)(*(_QWORD *)(v2 + 80) + 72LL) & 0xF];
  v6 = gajRop3[v5];
  if ( (*(_DWORD *)(v2 + 36) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(a1, a2);
  v16 = 0LL;
  v18 = 0;
  v19 = 0;
  v17 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v21);
  DCOBJ::DCOBJ((DCOBJ *)v22);
  DEVLOCKBLTOBJ::bLock((DEVLOCKBLTOBJ *)v15, (DC **)a1);
  v7 = 1;
  if ( !(unsigned int)XDCOBJ::bFullScreen(a1) )
  {
    if ( (v20 & 1) == 0 )
    {
LABEL_12:
      v7 = 0;
      goto LABEL_21;
    }
    v8 = *(_QWORD *)a1;
    v26 = *(_QWORD *)(*(_QWORD *)a1 + 512LL);
    v24 = *(_QWORD *)(v26 + 120);
    v25 = *(_QWORD *)(v8 + 96);
    if ( (v6 & 0xE8) != 0 )
    {
      v28 = v8 + 1584;
      v9 = *(_QWORD *)(v8 + 80);
      if ( (*(_DWORD *)(v9 + 8) & 0x1000) != 0 )
        GreDCSelectBrush(v8, *(_QWORD *)(v9 + 16));
      v10 = *(_QWORD *)a1;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 80LL) + 8LL) & 1) != 0 || (*(_DWORD *)(v10 + 332) & 1) != 0 )
      {
        *(_DWORD *)(*(_QWORD *)(v10 + 80) + 8LL) &= ~1u;
        *(_DWORD *)(*(_QWORD *)a1 + 332LL) &= ~1u;
        EBRUSHOBJ::vInitBrush(v28, *(_QWORD *)a1, *(_QWORD *)(*(_QWORD *)a1 + 144LL), v25, v24);
      }
      if ( (*(_DWORD *)(v28 + 128) & 0x100) != 0 )
        goto LABEL_12;
      v11 = *(_QWORD *)a1;
      v30 = *(_QWORD *)(*(_QWORD *)a1 + 1576LL);
      if ( (*(_DWORD *)(v28 + 128) & 0x8000) != 0 && *(_BYTE *)(*(_QWORD *)(v11 + 80) + 73LL) == 1 )
      {
        v12 = v5 | 0xAA00;
LABEL_18:
        if ( (*(_DWORD *)(*(_QWORD *)a1 + 36LL) & 0xE0) != 0 )
          XDCOBJ::vAccumulateTight(a1, a2);
        v13 = *(_OWORD *)a2;
        v27 = 0LL;
        v31 = v12;
        v29 = v13;
        v7 = BLTRECORD::bBitBlt((BLTRECORD *)v23, (DC **)a1, a1, v6);
        goto LABEL_21;
      }
    }
    else
    {
      v28 = 0LL;
    }
    v12 = ((_DWORD)v5 << 8) | v5;
    goto LABEL_18;
  }
LABEL_21:
  DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ((DEVLOCKBLTOBJ *)v15);
  BLTRECORD::~BLTRECORD((BLTRECORD *)v23);
  return v7;
}
