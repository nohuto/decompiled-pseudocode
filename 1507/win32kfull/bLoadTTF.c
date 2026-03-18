/*
 * XREFs of bLoadTTF @ 0x1C01425E4
 * Callers:
 *     bLoadFontFile @ 0x1C014209C (bLoadFontFile.c)
 * Callees:
 *     fs_OpenFonts @ 0x1C00ABED8 (fs_OpenFonts.c)
 *     fs_Initialize @ 0x1C00ABF2C (fs_Initialize.c)
 *     bLoadGlyphSet @ 0x1C00AC344 (bLoadGlyphSet.c)
 *     fs_NewSfnt @ 0x1C00AD08C (fs_NewSfnt.c)
 *     EngGetCurrentCodePage @ 0x1C0125210 (EngGetCurrentCodePage.c)
 *     bLoadTTF_Cache @ 0x1C012C4E0 (bLoadTTF_Cache.c)
 *     vCopy_IFIV @ 0x1C0142B5C (vCopy_IFIV.c)
 *     vFill_IFIMETRICS @ 0x1C0157904 (vFill_IFIMETRICS.c)
 *     bVerifyTTF @ 0x1C0158564 (bVerifyTTF.c)
 *     vGetVerticalGSet @ 0x1C0159978 (vGetVerticalGSet.c)
 *     bCheckVerticalTable @ 0x1C015A100 (bCheckVerticalTable.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

__int64 __fastcall bLoadTTF(__int64 a1, __int64 a2, int a3, int a4, __int16 a5, PVOID *a6, __int64 a7)
{
  ULONG v10; // ebx
  char v11; // r14
  PVOID v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rax
  __int16 v15; // cx
  __int64 v16; // rcx
  __int16 v17; // dx
  int v18; // ecx
  __int16 v19; // ax
  int v20; // eax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  int v30; // eax
  int v31; // eax
  __int64 v32; // r8
  __int64 v33; // r9
  ULONG **v34; // r14
  __int64 v35; // rdx
  int v36; // eax
  int v37; // eax
  __int64 result; // rax
  PVOID v39; // r15
  PVOID v40; // rax
  void *v41; // rsi
  ULONG *v42; // rdx
  ULONG *v43; // rcx
  PVOID v44; // rcx
  USHORT AnsiCodePage[2]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v46; // [rsp+74h] [rbp-8Ch] BYREF
  int v47; // [rsp+78h] [rbp-88h] BYREF
  __int16 v48; // [rsp+7Ch] [rbp-84h] BYREF
  int v49; // [rsp+80h] [rbp-80h] BYREF
  int v50; // [rsp+84h] [rbp-7Ch] BYREF
  int v51; // [rsp+88h] [rbp-78h] BYREF
  int v52; // [rsp+8Ch] [rbp-74h]
  __int64 v53; // [rsp+90h] [rbp-70h] BYREF
  __int64 v54[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v55[36]; // [rsp+B0h] [rbp-50h] BYREF
  _QWORD v56[11]; // [rsp+140h] [rbp+40h] BYREF
  int v57; // [rsp+198h] [rbp+98h]
  int v58; // [rsp+19Ch] [rbp+9Ch]
  __int64 v59; // [rsp+1A0h] [rbp+A0h]
  __int16 v60; // [rsp+1A8h] [rbp+A8h]
  __int16 v61; // [rsp+1AAh] [rbp+AAh]
  __int128 v62; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v63; // [rsp+200h] [rbp+100h]
  __int128 v64; // [rsp+210h] [rbp+110h]
  __int128 v65; // [rsp+220h] [rbp+120h]
  __int128 v66; // [rsp+230h] [rbp+130h]
  __int128 v67; // [rsp+240h] [rbp+140h]
  __int128 v68; // [rsp+250h] [rbp+150h]
  __int128 v69; // [rsp+260h] [rbp+160h]
  __int128 v70; // [rsp+270h] [rbp+170h]
  __int128 v71; // [rsp+280h] [rbp+180h]
  char v72; // [rsp+2E0h] [rbp+1E0h] BYREF

  v52 = a4;
  *a6 = 0LL;
  v49 = 0;
  v47 = 0;
  if ( a7 )
    return bLoadTTF_Cache(a1, a6, a7);
  if ( !(unsigned int)bVerifyTTF(
                        a2,
                        (int)&v62,
                        v55,
                        (__int64)&v48,
                        (__int64)&v46,
                        (__int64)&v53,
                        (__int64)&v51,
                        (__int64)&v50,
                        (__int64)v54,
                        (__int64)&v49,
                        (__int64)&v47) )
    return 0LL;
  v10 = v55[0] + 352;
  if ( v55[0] + 352 < v55[0] )
    return 0LL;
  v11 = v47;
  if ( v47 )
  {
    EngGetCurrentCodePage((PUSHORT)&v47, AnsiCodePage);
    if ( AnsiCodePage[0] == 932 || AnsiCodePage[0] == 949 )
      LODWORD(v54[0]) |= 4u;
  }
  v12 = EngAllocMem(0, v10, 0x64667454u);
  v13 = (__int64)v12;
  if ( !v12 )
    return 0LL;
  *a6 = v12;
  memset(v12, 0, 0x160uLL);
  v14 = (unsigned int)v63;
  *(_QWORD *)(v13 + 56) = a1;
  *(_QWORD *)(v13 + 64) = a2;
  *(_DWORD *)(v13 + 72) = a3;
  v15 = __ROR2__(*(_WORD *)(v14 + a2 + 18), 8);
  *(_WORD *)(v13 + 308) = v15;
  if ( (unsigned __int16)(v15 - 16) <= 0x3FF0u )
  {
    v16 = DWORD2(v63);
    v17 = v48;
    *(_WORD *)(v13 + 312) = v46;
    *(_WORD *)(v13 + 310) = v17;
    *(_DWORD *)(v13 + 324) = -65536;
    *(_WORD *)(v13 + 328) = __ROR2__(*(_WORD *)(v16 + a2 + 12), 8);
    *(_WORD *)(v13 + 330) = __ROR2__(*(_WORD *)(v16 + a2 + 14), 8);
    v18 = v49 != 0 ? 2 : 0;
    *(_DWORD *)(v13 + 300) = v18;
    if ( (v11 & 1) != 0 )
      *(_DWORD *)(v13 + 300) = v18 | 0x40;
    *(_QWORD *)(v13 + 40) = 0LL;
    if ( v17 == 3 )
      v19 = a5;
    else
      v19 = word_1C02EC270[a5 & 0x1F];
    *(_WORD *)(v13 + 314) = v19;
    v20 = v53 - a2;
    *(_DWORD *)(v13 + 48) = 0;
    *(_DWORD *)(v13 + 304) = v20;
    v21 = v62;
    *(_QWORD *)(v13 + 80) = 0LL;
    v22 = v63;
    *(_OWORD *)(v13 + 112) = v21;
    v23 = v64;
    *(_OWORD *)(v13 + 128) = v22;
    v24 = v65;
    *(_OWORD *)(v13 + 144) = v23;
    v25 = v66;
    *(_OWORD *)(v13 + 160) = v24;
    v26 = v67;
    *(_OWORD *)(v13 + 176) = v25;
    v27 = v68;
    *(_OWORD *)(v13 + 192) = v26;
    v28 = v70;
    *(_OWORD *)(v13 + 208) = v27;
    *(_OWORD *)(v13 + 224) = v69;
    v29 = v71;
    v30 = v52;
    *(_OWORD *)(v13 + 240) = v28;
    *(_DWORD *)(v13 + 272) = v30;
    v31 = v50;
    *(_OWORD *)(v13 + 256) = v29;
    *(_DWORD *)(v13 + 320) = v31;
    *(_OWORD *)(v13 + 332) = *(_OWORD *)v54;
    if ( (unsigned int)fs_OpenFonts(v56, (__int64)&v62) )
      goto LABEL_27;
    v56[2] = 0LL;
    v56[1] = &v72;
    v56[3] = 0LL;
    if ( (unsigned int)fs_Initialize((__int64)v56, (int *)&v62) )
      goto LABEL_27;
    v56[10] = *(_QWORD *)(v13 + 64);
    v59 = v13;
    v57 = 1;
    v58 = 1;
    v60 = *(_WORD *)(v13 + 310);
    v61 = *(_WORD *)(v13 + 312);
    if ( (unsigned int)fs_NewSfnt((__int64)v56, (__int64)&v62, v32, v33) )
      goto LABEL_27;
    v34 = (ULONG **)(v13 + 88);
    v35 = v53;
    v36 = HIDWORD(v62) + 7;
    *(_QWORD *)(v13 + 24) = 0LL;
    *(_QWORD *)(v13 + 32) = 0LL;
    *(_DWORD *)(v13 + 284) = 1;
    *(_DWORD *)(v13 + 292) = v36 & 0xFFFFFFF8;
    v37 = v63 + 7;
    *(_QWORD *)(v13 + 16) = 0LL;
    *(_QWORD *)(v13 + 96) = 0LL;
    *(_DWORD *)(v13 + 296) = v37 & 0xFFFFFFF8;
    *(_DWORD *)(v13 + 316) = v51;
    if ( !(unsigned int)bLoadGlyphSet(v13, v35, (__int64)v56, (__int64)v54, (PVOID *)(v13 + 88)) )
    {
LABEL_27:
      v44 = *a6;
    }
    else
    {
      vFill_IFIMETRICS(v13, v13 + 352);
      if ( (*(_DWORD *)(v13 + 300) & 0x100) == 0 || !(unsigned int)bCheckVerticalTable(v13) )
        goto LABEL_16;
      v39 = EngAllocMem(0, (v55[0] + 7) & 0xFFFFFFF8, 0x64667454u);
      v40 = EngAllocMem(0, **v34, 0x64667454u);
      v41 = v40;
      if ( v39 )
      {
        if ( v40 )
        {
          vCopy_IFIV((void *)(v13 + 352), v39);
          v42 = *v34;
          *(_QWORD *)(v13 + 16) = v39;
          *(_DWORD *)(v13 + 284) = 2;
          memmove(v41, v42, *v42);
          v43 = *v34;
          *(_QWORD *)(v13 + 96) = v41;
          vGetVerticalGSet(v43, v13);
LABEL_16:
          *(_QWORD *)(v13 + 104) = 0LL;
          return 1LL;
        }
        EngFreeMem(v39);
      }
      if ( *v34 )
        EngFreeMem(*v34);
      if ( v41 )
        EngFreeMem(v41);
      v44 = *a6;
      if ( !*a6 )
        return 0LL;
    }
    EngFreeMem(v44);
    *a6 = 0LL;
    return 0LL;
  }
  EngFreeMem(*a6);
  result = 0LL;
  *a6 = 0LL;
  return result;
}
