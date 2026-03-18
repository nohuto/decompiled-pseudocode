/*
 * XREFs of FinishStockFontInit @ 0x14010FBC0
 * Callers:
 *     ?AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400CBA10 (-AddInitialFonts@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     FinishStockFontReinit @ 0x140232B40 (FinishStockFontReinit.c)
 * Callees:
 *     ?IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400CE980 (-IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     ?IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1400CEB08 (-IsCurrentThreadAddInitialFontsThread@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     GreCreateFontIndirectW @ 0x140102238 (GreCreateFontIndirectW.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z @ 0x14010DE20 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAUHDEV__@@@Z.c)
 *     ?FinishStockFontInitInternal@@YAXW4GreRegKey@@H@Z @ 0x14010FDF8 (-FinishStockFontInitInternal@@YAXW4GreRegKey@@H@Z.c)
 *     ?vInitEmergencyStockFont@@YAXPEBG@Z @ 0x14011012C (-vInitEmergencyStockFont@@YAXPEBG@Z.c)
 *     ?bSetStockFont@@YAHPEAXHH@Z @ 0x140232C6C (-bSetStockFont@@YAHPEAXHH@Z.c)
 */

void __fastcall FinishStockFontInit(__int64 c, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  __int64 v4; // rdx
  Gre::Base *v5; // rcx
  __int64 v6; // r8
  struct Gre::Base::SESSION_GLOBALS *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  const unsigned __int16 *v11; // rcx
  __int64 v12; // rcx
  Gre::Base *v13; // rcx
  struct LFONT *v14; // rbx
  struct Gre::Base::SESSION_GLOBALS *v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __m128i v18; // xmm2
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  INT v21; // eax
  __int64 FontIndirectW; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // [rsp+28h] [rbp-19h] BYREF
  struct LFONT *v26; // [rsp+30h] [rbp-11h]
  INT a[4]; // [rsp+38h] [rbp-9h] BYREF
  __int128 v28; // [rsp+48h] [rbp+7h]
  __int128 v29; // [rsp+58h] [rbp+17h]
  __int128 v30; // [rsp+68h] [rbp+27h]
  __int128 v31; // [rsp+78h] [rbp+37h]
  __int64 v32; // [rsp+88h] [rbp+47h]
  int v33; // [rsp+90h] [rbp+4Fh]
  __int16 v34; // [rsp+94h] [rbp+53h]

  v3 = c;
  v4 = *(_QWORD *)(W32GetSessionState(c, a2, a3) + 96);
  if ( *(_BYTE *)(v4 + 24274)
    || UmfdHostLifeTimeManager::IsCurrentProcessUmfdHost((__int64)v5, v4, v6)
    || UmfdHostLifeTimeManager::IsCurrentThreadAddInitialFontsThread((__int64)v5, v23, v24) )
  {
    v7 = Gre::Base::Globals(v5);
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v25, *(struct HLFONT__ **)(*((_QWORD *)v7 + 386) + 136LL), 0LL);
    v10 = v25;
    if ( v25 )
    {
      *(_DWORD *)(v25 + 252) = -((*(_DWORD *)(v25 + 252) * v3 + 36) / 0x48);
      v16 = *(_OWORD *)(v10 + 268);
      v17 = *(_OWORD *)(v10 + 284);
      v33 = *(_DWORD *)(v10 + 340);
      v18 = *(__m128i *)(v10 + 252);
      v28 = v16;
      v19 = *(_OWORD *)(v10 + 300);
      v29 = v17;
      v20 = *(_OWORD *)(v10 + 316);
      v30 = v19;
      v32 = *(_QWORD *)(v10 + 332);
      *(__m128i *)a = v18;
      v31 = v20;
      a[0] = EngMulDiv(_mm_cvtsi128_si32(v18), 96, v3);
      v21 = EngMulDiv(a[1], 96, v3);
      v34 = 1;
      a[1] = v21;
      FontIndirectW = GreCreateFontIndirectW((__int128 *)a);
      v9 = *((_QWORD *)v7 + 387);
      *(_QWORD *)(v9 + 136) = FontIndirectW;
    }
    if ( v3 > 0x6C || (*(_DWORD *)(*(_QWORD *)(W32GetSessionState(v9, v8, v10) + 96) + 19584LL) & 2) != 0 )
      FinishStockFontInitInternal(7LL);
    FinishStockFontInitInternal(6LL);
    vInitEmergencyStockFont(v11);
    v12 = *((_QWORD *)v7 + 386);
    if ( !*(_QWORD *)(v12 + 128) )
      bSetStockFont(*(void **)(v12 + 104), 16, 0);
    v13 = *(Gre::Base **)(*((_QWORD *)v7 + 386) + 104LL);
    *((_QWORD *)v7 + 66) = v13;
    v14 = v26;
    if ( v26 )
    {
      v15 = Gre::Base::Globals(v13);
      DEC_SHARE_REF_CNT_LAZY_DEL_LOGFONT(v15, v14);
    }
  }
}
