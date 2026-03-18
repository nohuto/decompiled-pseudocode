/*
 * XREFs of bLoadTTF @ 0x1C00207C4
 * Callers:
 *     bLoadFontFile @ 0x1C002025C (bLoadFontFile.c)
 * Callees:
 *     EngGetCurrentCodePage @ 0x1C0018130 (EngGetCurrentCodePage.c)
 *     fs_OpenFonts @ 0x1C001C17C (fs_OpenFonts.c)
 *     fs_Initialize @ 0x1C001C1D0 (fs_Initialize.c)
 *     fs_NewSfnt @ 0x1C001D7E0 (fs_NewSfnt.c)
 *     bLoadGlyphSet @ 0x1C001F968 (bLoadGlyphSet.c)
 *     bLoadTTF_Cache @ 0x1C0020D3C (bLoadTTF_Cache.c)
 *     vCopy_IFIV @ 0x1C0118284 (vCopy_IFIV.c)
 *     vFill_IFIMETRICS @ 0x1C0155298 (vFill_IFIMETRICS.c)
 *     bVerifyTTF @ 0x1C0155F40 (bVerifyTTF.c)
 *     vGetVerticalGSet @ 0x1C0157520 (vGetVerticalGSet.c)
 *     bCheckVerticalTable @ 0x1C0157FC8 (bCheckVerticalTable.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

__int64 __fastcall bLoadTTF(__int64 a1, __int64 a2, int a3, int a4, __int16 a5, PVOID *a6, __int64 a7, unsigned int a8)
{
  __int64 result; // rax
  ULONG v12; // ebx
  char v13; // r14
  PVOID v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rax
  __int16 v17; // cx
  __int64 v18; // rcx
  __int16 v19; // dx
  int v20; // ecx
  __int16 v21; // ax
  int v22; // eax
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  int v32; // eax
  int v33; // eax
  __int64 v34; // r8
  __int64 v35; // r9
  ULONG **v36; // r14
  __int64 v37; // rdx
  int v38; // eax
  int v39; // eax
  PVOID v40; // r15
  PVOID v41; // rax
  void *v42; // rsi
  ULONG *v43; // rdx
  ULONG *v44; // rcx
  PVOID v45; // rcx
  USHORT AnsiCodePage[2]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v47; // [rsp+74h] [rbp-8Ch] BYREF
  __int16 v48; // [rsp+78h] [rbp-88h] BYREF
  USHORT OemCodePage[2]; // [rsp+7Ch] [rbp-84h] BYREF
  int v50; // [rsp+80h] [rbp-80h] BYREF
  int v51; // [rsp+84h] [rbp-7Ch]
  int v52; // [rsp+88h] [rbp-78h] BYREF
  int v53; // [rsp+8Ch] [rbp-74h] BYREF
  __int64 v54; // [rsp+90h] [rbp-70h] BYREF
  __int64 v55[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v56[36]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v57[11]; // [rsp+140h] [rbp+40h] BYREF
  int v58; // [rsp+198h] [rbp+98h]
  int v59; // [rsp+19Ch] [rbp+9Ch]
  __int64 v60; // [rsp+1A0h] [rbp+A0h]
  __int16 v61; // [rsp+1A8h] [rbp+A8h]
  __int16 v62; // [rsp+1AAh] [rbp+AAh]
  __int128 v63; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v64; // [rsp+200h] [rbp+100h]
  __int128 v65; // [rsp+210h] [rbp+110h]
  __int128 v66; // [rsp+220h] [rbp+120h]
  __int128 v67; // [rsp+230h] [rbp+130h]
  __int128 v68; // [rsp+240h] [rbp+140h]
  __int128 v69; // [rsp+250h] [rbp+150h]
  __int128 v70; // [rsp+260h] [rbp+160h]
  __int128 v71; // [rsp+270h] [rbp+170h]
  __int128 v72; // [rsp+280h] [rbp+180h]
  char v73; // [rsp+2E0h] [rbp+1E0h] BYREF

  v51 = a4;
  *a6 = 0LL;
  v50 = 0;
  *(_DWORD *)OemCodePage = 0;
  if ( a7 )
    return bLoadTTF_Cache(a1, a6, a7, a8);
  if ( !(unsigned int)bVerifyTTF(
                        a2,
                        (int)&v63,
                        v56,
                        (__int64)&v47,
                        (__int64)&v48,
                        (__int64)&v54,
                        (__int64)&v53,
                        (__int64)&v52,
                        (__int64)v55,
                        (__int64)&v50,
                        (__int64)OemCodePage) )
    return 0LL;
  v12 = v56[0] + 352;
  if ( v56[0] + 352 < v56[0] )
    return 0LL;
  v13 = OemCodePage[0];
  if ( *(_DWORD *)OemCodePage )
  {
    EngGetCurrentCodePage(OemCodePage, AnsiCodePage);
    if ( AnsiCodePage[0] == 932 || AnsiCodePage[0] == 949 )
      LODWORD(v55[0]) |= 4u;
  }
  v14 = EngAllocMem(0, v12, 0x64667454u);
  v15 = (__int64)v14;
  if ( !v14 )
    return 0LL;
  *a6 = v14;
  memset(v14, 0, 0x160uLL);
  v16 = (unsigned int)v64;
  *(_QWORD *)(v15 + 56) = a1;
  *(_QWORD *)(v15 + 64) = a2;
  *(_DWORD *)(v15 + 72) = a3;
  v17 = __ROR2__(*(_WORD *)(v16 + a2 + 18), 8);
  *(_WORD *)(v15 + 308) = v17;
  if ( (unsigned __int16)(v17 - 16) <= 0x3FF0u )
  {
    v18 = DWORD2(v64);
    v19 = v47;
    *(_WORD *)(v15 + 312) = v48;
    *(_WORD *)(v15 + 310) = v19;
    *(_DWORD *)(v15 + 324) = -65536;
    *(_WORD *)(v15 + 328) = __ROR2__(*(_WORD *)(v18 + a2 + 12), 8);
    *(_WORD *)(v15 + 330) = __ROR2__(*(_WORD *)(v18 + a2 + 14), 8);
    v20 = v50 != 0 ? 2 : 0;
    *(_DWORD *)(v15 + 300) = v20;
    if ( (v13 & 1) != 0 )
      *(_DWORD *)(v15 + 300) = v20 | 0x40;
    *(_QWORD *)(v15 + 40) = 0LL;
    if ( v19 == 3 )
      v21 = a5;
    else
      v21 = word_1C02F08F0[a5 & 0x1F];
    *(_WORD *)(v15 + 314) = v21;
    v22 = v54 - a2;
    *(_DWORD *)(v15 + 48) = 0;
    *(_DWORD *)(v15 + 304) = v22;
    v23 = v63;
    *(_QWORD *)(v15 + 80) = 0LL;
    v24 = v64;
    *(_OWORD *)(v15 + 112) = v23;
    v25 = v65;
    *(_OWORD *)(v15 + 128) = v24;
    v26 = v66;
    *(_OWORD *)(v15 + 144) = v25;
    v27 = v67;
    *(_OWORD *)(v15 + 160) = v26;
    v28 = v68;
    *(_OWORD *)(v15 + 176) = v27;
    v29 = v69;
    *(_OWORD *)(v15 + 192) = v28;
    v30 = v71;
    *(_OWORD *)(v15 + 208) = v29;
    *(_OWORD *)(v15 + 224) = v70;
    v31 = v72;
    v32 = v51;
    *(_OWORD *)(v15 + 240) = v30;
    *(_DWORD *)(v15 + 272) = v32;
    v33 = v52;
    *(_OWORD *)(v15 + 256) = v31;
    *(_DWORD *)(v15 + 320) = v33;
    *(_OWORD *)(v15 + 332) = *(_OWORD *)v55;
    if ( (unsigned int)fs_OpenFonts(v57, (__int64)&v63) )
      goto LABEL_27;
    v57[2] = 0LL;
    v57[1] = &v73;
    v57[3] = 0LL;
    if ( (unsigned int)fs_Initialize((__int64)v57, (int *)&v63) )
      goto LABEL_27;
    v57[10] = *(_QWORD *)(v15 + 64);
    v60 = v15;
    v58 = 1;
    v59 = 1;
    v61 = *(_WORD *)(v15 + 310);
    v62 = *(_WORD *)(v15 + 312);
    if ( (unsigned int)fs_NewSfnt((__int64)v57, (__int64)&v63, v34, v35) )
      goto LABEL_27;
    v36 = (ULONG **)(v15 + 88);
    v37 = v54;
    v38 = HIDWORD(v63) + 7;
    *(_QWORD *)(v15 + 24) = 0LL;
    *(_QWORD *)(v15 + 32) = 0LL;
    *(_DWORD *)(v15 + 284) = 1;
    *(_DWORD *)(v15 + 292) = v38 & 0xFFFFFFF8;
    v39 = v64 + 7;
    *(_QWORD *)(v15 + 16) = 0LL;
    *(_QWORD *)(v15 + 96) = 0LL;
    *(_DWORD *)(v15 + 296) = v39 & 0xFFFFFFF8;
    *(_DWORD *)(v15 + 316) = v53;
    if ( !(unsigned int)bLoadGlyphSet(v15, v37, (__int64)v57, (__int64)v55, (PVOID *)(v15 + 88)) )
    {
LABEL_27:
      v45 = *a6;
    }
    else
    {
      vFill_IFIMETRICS(v15, v15 + 352);
      if ( (*(_DWORD *)(v15 + 300) & 0x100) == 0 || !(unsigned int)bCheckVerticalTable(v15) )
        goto LABEL_17;
      v40 = EngAllocMem(0, (v56[0] + 7) & 0xFFFFFFF8, 0x64667454u);
      v41 = EngAllocMem(0, **v36, 0x64667454u);
      v42 = v41;
      if ( v40 )
      {
        if ( v41 )
        {
          vCopy_IFIV((void *)(v15 + 352), v40);
          v43 = *v36;
          *(_QWORD *)(v15 + 16) = v40;
          *(_DWORD *)(v15 + 284) = 2;
          memmove(v42, v43, *v43);
          v44 = *v36;
          *(_QWORD *)(v15 + 96) = v42;
          vGetVerticalGSet(v44, v15);
LABEL_17:
          *(_QWORD *)(v15 + 104) = 0LL;
          return 1LL;
        }
        EngFreeMem(v40);
      }
      if ( *v36 )
        EngFreeMem(*v36);
      if ( v42 )
        EngFreeMem(v42);
      v45 = *a6;
      if ( !*a6 )
        return 0LL;
    }
    EngFreeMem(v45);
    *a6 = 0LL;
    return 0LL;
  }
  EngFreeMem(*a6);
  result = 0LL;
  *a6 = 0LL;
  return result;
}
