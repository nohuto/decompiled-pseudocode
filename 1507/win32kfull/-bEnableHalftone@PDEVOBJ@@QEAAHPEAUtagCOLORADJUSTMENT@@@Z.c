/*
 * XREFs of ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1C00307F0
 * Callers:
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C00A1510 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngHTBlt @ 0x1C00A30B4 (EngHTBlt.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C00CF43C (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C0114618 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     GreCreateHalftonePalette @ 0x1C02B1EB0 (GreCreateHalftonePalette.c)
 * Callees:
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1C0013B9C (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00A61B0 (HT_CreateDeviceHalftoneInfo.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1C00FED38 (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall PDEVOBJ::bEnableHalftone(PDEVOBJ *this, struct tagCOLORADJUSTMENT *a2)
{
  __int64 v2; // rax
  __int64 v5; // r8
  __int16 v6; // r9
  int v7; // ecx
  __int128 v8; // xmm0
  __int64 v9; // xmm1_8
  __int64 ThreadWin32Thread; // rdi
  __int64 v11; // r8
  __int64 v12; // rdi
  unsigned int v13; // edi
  __int64 v15; // rdx
  signed __int32 v16; // ett
  __int64 v17; // rbx
  signed __int32 v18; // ett
  _QWORD *v19; // [rsp+28h] [rbp-D8h] BYREF
  int v20; // [rsp+30h] [rbp-D0h]
  int Src; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v22; // [rsp+44h] [rbp-BCh]
  __int16 v23; // [rsp+46h] [rbp-BAh]
  __int64 v24; // [rsp+48h] [rbp-B8h]
  __int128 v25; // [rsp+50h] [rbp-B0h]
  _WORD *v26; // [rsp+60h] [rbp-A0h]
  _WORD *v27; // [rsp+68h] [rbp-98h]
  __int16 v28; // [rsp+70h] [rbp-90h]
  __int16 v29; // [rsp+72h] [rbp-8Eh]
  __int16 v30; // [rsp+74h] [rbp-8Ch]
  __int16 v31; // [rsp+76h] [rbp-8Ah]
  __int128 v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+88h] [rbp-78h]
  __int16 v34; // [rsp+90h] [rbp-70h]
  __int16 v35; // [rsp+92h] [rbp-6Eh]
  __int16 v36; // [rsp+94h] [rbp-6Ch]
  char v37; // [rsp+96h] [rbp-6Ah]
  char v38; // [rsp+97h] [rbp-69h]
  int v39; // [rsp+A0h] [rbp-60h] BYREF
  __int16 v40; // [rsp+A4h] [rbp-5Ch]
  __int16 v41; // [rsp+A6h] [rbp-5Ah]
  __int64 v42; // [rsp+A8h] [rbp-58h]
  __int64 v43; // [rsp+B0h] [rbp-50h]
  __int64 v44; // [rsp+B8h] [rbp-48h]
  _WORD v45[8]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD v46[24]; // [rsp+D0h] [rbp-30h] BYREF

  v2 = *(_QWORD *)this;
  v20 = 0;
  v19 = 0LL;
  if ( !(unsigned int)PALMEMOBJ::bCreateHTPalette(
                        (PALMEMOBJ *)&v19,
                        *(_DWORD *)(v2 + 2400),
                        (struct _GDIINFO *)(v2 + 2160)) )
  {
LABEL_22:
    v13 = 0;
    goto LABEL_23;
  }
  v5 = *(_QWORD *)this;
  Src = 1213491459;
  v38 = 0;
  v22 = *(_WORD *)(v5 + 2404);
  v37 = *(_BYTE *)(v5 + 2407);
  if ( *(_DWORD *)(v5 + 2396) > 0x12u )
  {
    v6 = 17;
    v23 = 17;
  }
  else
  {
    v6 = *(unsigned __int8 *)(v5 + 2396);
    v23 = v6;
  }
  v7 = *(_DWORD *)(v5 + 2352) + *(_DWORD *)(v5 + 2360) + *(_DWORD *)(v5 + 2356);
  v25 = 0LL;
  v24 = 0LL;
  v34 = *(_WORD *)(v5 + 2352);
  v35 = *(_WORD *)(v5 + 2356);
  v36 = *(_WORD *)(v5 + 2360);
  v28 = v7 / 3;
  if ( v6 == 18 )
  {
    if ( (unsigned int)(*(_DWORD *)(v5 + 2432) - 4) <= 0xFC
      && (unsigned int)(*(_DWORD *)(v5 + 2436) - 4) <= 0xFC
      && *(_QWORD *)(v5 + 2440)
      && *(_QWORD *)(v5 + 2448)
      && *(_QWORD *)(v5 + 2456) )
    {
      v39 = 32;
      v40 = *(_WORD *)(v5 + 2432);
      v41 = *(_WORD *)(v5 + 2436);
      v42 = *(_QWORD *)(v5 + 2440);
      v43 = *(_QWORD *)(v5 + 2448);
      v44 = *(_QWORD *)(v5 + 2456);
      *(_QWORD *)&v25 = &v39;
    }
    else
    {
      v23 = 17;
    }
  }
  v46[0] = *(_WORD *)(v5 + 2268);
  v46[1] = *(_WORD *)(v5 + 2272);
  v46[2] = *(_WORD *)(v5 + 2276);
  v46[3] = *(_WORD *)(v5 + 2280);
  v46[4] = *(_WORD *)(v5 + 2284);
  v46[5] = *(_WORD *)(v5 + 2288);
  v46[6] = *(_WORD *)(v5 + 2292);
  v46[7] = *(_WORD *)(v5 + 2296);
  v46[8] = *(_WORD *)(v5 + 2300);
  v46[9] = *(_WORD *)(v5 + 2304);
  v46[10] = *(_WORD *)(v5 + 2308);
  v46[11] = *(_WORD *)(v5 + 2312);
  v46[12] = *(_WORD *)(v5 + 2316);
  v46[13] = *(_WORD *)(v5 + 2320);
  v46[14] = *(_WORD *)(v5 + 2324);
  v46[15] = *(_WORD *)(v5 + 2328);
  v46[16] = *(_WORD *)(v5 + 2332);
  v46[17] = *(_WORD *)(v5 + 2336);
  v46[18] = *(_WORD *)(v5 + 2340);
  v46[19] = *(_WORD *)(v5 + 2344);
  v46[20] = *(_WORD *)(v5 + 2348);
  v26 = v46;
  v45[0] = *(_WORD *)(v5 + 2364);
  v45[1] = *(_WORD *)(v5 + 2368);
  v45[2] = *(_WORD *)(v5 + 2372);
  v45[3] = *(_WORD *)(v5 + 2376);
  v45[4] = *(_WORD *)(v5 + 2380);
  v45[5] = *(_WORD *)(v5 + 2384);
  v27 = v45;
  v29 = *(_WORD *)(v5 + 2200);
  v30 = *(_WORD *)(v5 + 2204);
  v31 = *(_WORD *)(v5 + 2388);
  if ( a2 )
  {
    v8 = *(_OWORD *)&a2->caSize;
    v9 = *(_QWORD *)&a2->caContrast;
  }
  else
  {
    v8 = DefaultCA;
    v9 = 0LL;
  }
  v33 = v9;
  v32 = v8;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( (int)HT_CreateDeviceHalftoneInfo(&Src) <= 0 )
  {
    EngSetLastError(8u);
    v12 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( v12 && PDEVOBJ::bAllowShareAccess(this) && (*(_DWORD *)(v12 + 104) || *(_DWORD *)(v12 + 108)) )
      *(_QWORD *)(v12 + 288) = 0LL;
    else
      *(_QWORD *)(*(_QWORD *)this + 1544LL) = 0LL;
    goto LABEL_22;
  }
  if ( ThreadWin32Thread
    && PDEVOBJ::bAllowShareAccess(this)
    && (*(_DWORD *)(ThreadWin32Thread + 104) || *(_DWORD *)(ThreadWin32Thread + 108)) )
  {
    *(_QWORD *)(ThreadWin32Thread + 288) = 0LL;
    *(_DWORD *)(ThreadWin32Thread + 296) = gcModeChanges;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)this + 1544LL) = 0LL;
  }
  v15 = *(_QWORD *)this;
  _m_prefetchw((const void *)(*(_QWORD *)this + 56LL));
  do
    v16 = *(_DWORD *)(v15 + 56);
  while ( v16 != _InterlockedCompareExchange((volatile signed __int32 *)(v15 + 56), v16 & 0xFFFFFDFF, v16) );
  v17 = *(_QWORD *)this;
  v13 = 1;
  if ( (*(_DWORD *)(v17 + 56) & 1) == 0
    && (unsigned int)XEPALOBJ::bEqualEntries((__int64 *)&v19, *(_QWORD *)(v17 + 1832)) )
  {
    _m_prefetchw((const void *)(v17 + 56));
    do
      v18 = *(_DWORD *)(v17 + 56);
    while ( v18 != _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 56), v18 | 0x200, v18) );
  }
  LOBYTE(v11) = 8;
  MEMORY[0] = *v19;
  HmgSetOwner(*v19, 0LL, v11);
  v20 = 1;
LABEL_23:
  PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v19);
  return v13;
}
