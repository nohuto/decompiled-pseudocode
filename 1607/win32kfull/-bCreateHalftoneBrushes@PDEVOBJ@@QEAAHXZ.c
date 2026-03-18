/*
 * XREFs of ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C027D154
 * Callers:
 *     PDEVOBJ_bCreateHalftoneBrushesWrap @ 0x1C027D3D0 (PDEVOBJ_bCreateHalftoneBrushesWrap.c)
 * Callees:
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C0029594 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C002962C (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     ?SETFLAG@@YAXHAECKK@Z @ 0x1C010E6EC (-SETFLAG@@YAXHAECKK@Z.c)
 *     HT_CreateStandardMonoPattern @ 0x1C024A0C0 (HT_CreateStandardMonoPattern.c)
 */

__int64 __fastcall PDEVOBJ::bCreateHalftoneBrushes(PDEVOBJ *this)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // r14
  void *v6; // rax
  int v7; // r15d
  __int64 v8; // r8
  void *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // [rsp+68h] [rbp-9h] BYREF
  char v12; // [rsp+70h] [rbp-1h]
  int v13; // [rsp+74h] [rbp+3h]
  __int16 v14; // [rsp+78h] [rbp+7h] BYREF
  char v15; // [rsp+7Ah] [rbp+9h]
  char v16; // [rsp+7Bh] [rbp+Ah]
  __int16 v17; // [rsp+7Ch] [rbp+Bh]
  unsigned __int16 v18; // [rsp+80h] [rbp+Fh]
  unsigned __int16 v19; // [rsp+82h] [rbp+11h]
  __int64 v20; // [rsp+88h] [rbp+17h]
  _DWORD v21[4]; // [rsp+90h] [rbp+1Fh] BYREF
  _QWORD v22[3]; // [rsp+A0h] [rbp+2Fh]

  if ( !PDEVOBJ::pDevHTInfo(this) && !(unsigned int)PDEVOBJ::bEnableHalftone(this, 0LL) )
    return 0LL;
  LODWORD(v3) = 0;
  v4 = 1488LL;
  v5 = 0LL;
  do
  {
    v20 = 0LL;
    v16 = byte_1C02F27B0[v5];
    v14 = 1;
    v15 = 4;
    v17 = 3848;
    v6 = PDEVOBJ::pDevHTInfo(this);
    v7 = HT_CreateStandardMonoPattern((__int64)v6, &v14);
    if ( v7 <= 0 )
      break;
    v21[0] = 1;
    v11 = 0LL;
    v13 = 0;
    v21[1] = v18;
    v21[2] = v19;
    v21[3] = 0;
    v22[0] = 0LL;
    v22[1] = 1LL;
    v12 = 0;
    SURFMEM::bCreateDIB((SURFMEM *)&v11, (struct _DEVBITMAPINFO *)v21, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( !v11 )
      goto LABEL_10;
    v12 |= 1u;
    LOBYTE(v8) = 5;
    HmgSetOwner(*(_QWORD *)(v11 + 32), 0LL, v8);
    LODWORD(v3) = v3 + 1;
    ++v5;
    *(_QWORD *)(v4 + *(_QWORD *)this) = *(_QWORD *)(v11 + 32);
    v4 += 8LL;
    v20 = *(_QWORD *)(v11 + 72);
    v9 = PDEVOBJ::pDevHTInfo(this);
    if ( (unsigned int)HT_CreateStandardMonoPattern((__int64)v9, &v14) != v7 )
    {
LABEL_10:
      SURFMEM::~SURFMEM((SURFMEM *)&v11);
      break;
    }
    SURFMEM::~SURFMEM((SURFMEM *)&v11);
  }
  while ( v4 < 1536 );
  if ( (int)v3 < 6 )
  {
    v3 = (int)v3;
    if ( (int)v3 > 0 )
    {
      v10 = 8LL * (int)v3 + 1488;
      do
      {
        v10 -= 8LL;
        --v3;
        bDeleteSurface(*(_QWORD *)(v10 + *(_QWORD *)this));
      }
      while ( v3 > 0 );
    }
    return 0LL;
  }
  SETFLAG(1, (volatile unsigned int *)(*(_QWORD *)this + 56LL), 256);
  return 1LL;
}
