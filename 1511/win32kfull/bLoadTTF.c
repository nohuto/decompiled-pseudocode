/*
 * XREFs of bLoadTTF @ 0x1C0010AF4
 * Callers:
 *     bLoadFontFile @ 0x1C001058C (bLoadFontFile.c)
 * Callees:
 *     vCopy_IFIV @ 0x1C000FC94 (vCopy_IFIV.c)
 *     bLoadTTF_Cache @ 0x1C001106C (bLoadTTF_Cache.c)
 *     bVerifyTTF @ 0x1C0011B78 (bVerifyTTF.c)
 *     EngGetCurrentCodePage @ 0x1C00128B0 (EngGetCurrentCodePage.c)
 *     vFill_IFIMETRICS @ 0x1C00130A4 (vFill_IFIMETRICS.c)
 *     fs_OpenFonts @ 0x1C00A3984 (fs_OpenFonts.c)
 *     fs_Initialize @ 0x1C00A39D8 (fs_Initialize.c)
 *     bLoadGlyphSet @ 0x1C00A3E84 (bLoadGlyphSet.c)
 *     fs_NewSfnt @ 0x1C00A50AC (fs_NewSfnt.c)
 *     vGetVerticalGSet @ 0x1C014D8B4 (vGetVerticalGSet.c)
 *     bCheckVerticalTable @ 0x1C01501E8 (bCheckVerticalTable.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall bLoadTTF(__int64 a1, __int64 a2, int a3, int a4, __int16 a5, PVOID *a6, __int64 a7, unsigned int a8)
{
  __int64 result; // rax
  ULONG v12; // ebx
  char v13; // r14
  char *v14; // rax
  char *v15; // rbx
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
  ULONG **v34; // r14
  int v35; // edx
  int v36; // eax
  int v37; // eax
  char *v38; // r15
  PVOID v39; // rax
  void *v40; // rsi
  ULONG *v41; // rdx
  ULONG *v42; // rcx
  PVOID v43; // rcx
  USHORT AnsiCodePage[2]; // [rsp+70h] [rbp-90h] BYREF
  __int16 v45; // [rsp+74h] [rbp-8Ch] BYREF
  int v46; // [rsp+78h] [rbp-88h] BYREF
  __int16 v47; // [rsp+7Ch] [rbp-84h] BYREF
  int v48; // [rsp+80h] [rbp-80h] BYREF
  int v49; // [rsp+84h] [rbp-7Ch] BYREF
  int v50; // [rsp+88h] [rbp-78h] BYREF
  int v51; // [rsp+8Ch] [rbp-74h]
  __int64 v52; // [rsp+90h] [rbp-70h] BYREF
  __int64 v53[2]; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v54[36]; // [rsp+B0h] [rbp-50h] BYREF
  char v55[8]; // [rsp+140h] [rbp+40h] BYREF
  char *v56; // [rsp+148h] [rbp+48h]
  __int64 v57; // [rsp+150h] [rbp+50h]
  __int64 v58; // [rsp+158h] [rbp+58h]
  __int64 v59; // [rsp+190h] [rbp+90h]
  int v60; // [rsp+198h] [rbp+98h]
  int v61; // [rsp+19Ch] [rbp+9Ch]
  char *v62; // [rsp+1A0h] [rbp+A0h]
  __int16 v63; // [rsp+1A8h] [rbp+A8h]
  __int16 v64; // [rsp+1AAh] [rbp+AAh]
  __int128 v65; // [rsp+1F0h] [rbp+F0h] BYREF
  __int128 v66; // [rsp+200h] [rbp+100h]
  __int128 v67; // [rsp+210h] [rbp+110h]
  __int128 v68; // [rsp+220h] [rbp+120h]
  __int128 v69; // [rsp+230h] [rbp+130h]
  __int128 v70; // [rsp+240h] [rbp+140h]
  __int128 v71; // [rsp+250h] [rbp+150h]
  __int128 v72; // [rsp+260h] [rbp+160h]
  __int128 v73; // [rsp+270h] [rbp+170h]
  __int128 v74; // [rsp+280h] [rbp+180h]
  char v75; // [rsp+2E0h] [rbp+1E0h] BYREF

  v51 = a4;
  *a6 = 0LL;
  v48 = 0;
  v46 = 0;
  if ( a7 )
    return bLoadTTF_Cache(a1, a6, a7, a8);
  if ( !(unsigned int)bVerifyTTF(
                        a2,
                        (int)&v65,
                        v54,
                        (__int64)&v47,
                        (__int64)&v45,
                        (__int64)&v52,
                        (__int64)&v50,
                        (__int64)&v49,
                        (__int64)v53,
                        (__int64)&v48,
                        (__int64)&v46) )
    return 0LL;
  v12 = v54[0] + 352;
  if ( v54[0] + 352 < v54[0] )
    return 0LL;
  v13 = v46;
  if ( v46 )
  {
    EngGetCurrentCodePage((PUSHORT)&v46, AnsiCodePage);
    if ( AnsiCodePage[0] == 932 || AnsiCodePage[0] == 949 )
      LODWORD(v53[0]) |= 4u;
  }
  v14 = (char *)EngAllocMem(0, v12, 0x64667454u);
  v15 = v14;
  if ( !v14 )
    return 0LL;
  *a6 = v14;
  memset(v14, 0, 0x160uLL);
  v16 = (unsigned int)v66;
  *((_QWORD *)v15 + 7) = a1;
  *((_QWORD *)v15 + 8) = a2;
  *((_DWORD *)v15 + 18) = a3;
  v17 = __ROR2__(*(_WORD *)(v16 + a2 + 18), 8);
  *((_WORD *)v15 + 154) = v17;
  if ( (unsigned __int16)(v17 - 16) <= 0x3FF0u )
  {
    v18 = DWORD2(v66);
    v19 = v47;
    *((_WORD *)v15 + 156) = v45;
    *((_WORD *)v15 + 155) = v19;
    *((_DWORD *)v15 + 81) = -65536;
    *((_WORD *)v15 + 164) = __ROR2__(*(_WORD *)(v18 + a2 + 12), 8);
    *((_WORD *)v15 + 165) = __ROR2__(*(_WORD *)(v18 + a2 + 14), 8);
    v20 = v48 != 0 ? 2 : 0;
    *((_DWORD *)v15 + 75) = v20;
    if ( (v13 & 1) != 0 )
      *((_DWORD *)v15 + 75) = v20 | 0x40;
    *((_QWORD *)v15 + 5) = 0LL;
    if ( v19 == 3 )
      v21 = a5;
    else
      v21 = word_1C02EB240[a5 & 0x1F];
    *((_WORD *)v15 + 157) = v21;
    v22 = v52 - a2;
    *((_DWORD *)v15 + 12) = 0;
    *((_DWORD *)v15 + 76) = v22;
    v23 = v65;
    *((_QWORD *)v15 + 10) = 0LL;
    v24 = v66;
    *((_OWORD *)v15 + 7) = v23;
    v25 = v67;
    *((_OWORD *)v15 + 8) = v24;
    v26 = v68;
    *((_OWORD *)v15 + 9) = v25;
    v27 = v69;
    *((_OWORD *)v15 + 10) = v26;
    v28 = v70;
    *((_OWORD *)v15 + 11) = v27;
    v29 = v71;
    *((_OWORD *)v15 + 12) = v28;
    v30 = v73;
    *((_OWORD *)v15 + 13) = v29;
    *((_OWORD *)v15 + 14) = v72;
    v31 = v74;
    v32 = v51;
    *((_OWORD *)v15 + 15) = v30;
    *((_DWORD *)v15 + 68) = v32;
    v33 = v49;
    *((_OWORD *)v15 + 16) = v31;
    *((_DWORD *)v15 + 80) = v33;
    *(_OWORD *)(v15 + 332) = *(_OWORD *)v53;
    if ( (unsigned int)fs_OpenFonts(v55, &v65) )
      goto LABEL_27;
    v57 = 0LL;
    v56 = &v75;
    v58 = 0LL;
    if ( (unsigned int)fs_Initialize(v55, &v65) )
      goto LABEL_27;
    v59 = *((_QWORD *)v15 + 8);
    v62 = v15;
    v60 = 1;
    v61 = 1;
    v63 = *((_WORD *)v15 + 155);
    v64 = *((_WORD *)v15 + 156);
    if ( (unsigned int)fs_NewSfnt(v55, &v65) )
      goto LABEL_27;
    v34 = (ULONG **)(v15 + 88);
    v35 = v52;
    v36 = HIDWORD(v65) + 7;
    *((_QWORD *)v15 + 3) = 0LL;
    *((_QWORD *)v15 + 4) = 0LL;
    *((_DWORD *)v15 + 71) = 1;
    *((_DWORD *)v15 + 73) = v36 & 0xFFFFFFF8;
    v37 = v66 + 7;
    *((_QWORD *)v15 + 2) = 0LL;
    *((_QWORD *)v15 + 12) = 0LL;
    *((_DWORD *)v15 + 74) = v37 & 0xFFFFFFF8;
    *((_DWORD *)v15 + 79) = v50;
    if ( !(unsigned int)bLoadGlyphSet((_DWORD)v15, v35, (unsigned int)v55, (unsigned int)v53, (__int64)(v15 + 88)) )
    {
LABEL_27:
      v43 = *a6;
    }
    else
    {
      vFill_IFIMETRICS((int)v15, (_DWORD)v15 + 352);
      if ( (*((_DWORD *)v15 + 75) & 0x100) == 0 || !(unsigned int)bCheckVerticalTable(v15) )
        goto LABEL_17;
      v38 = (char *)EngAllocMem(0, (v54[0] + 7) & 0xFFFFFFF8, 0x64667454u);
      v39 = EngAllocMem(0, **v34, 0x64667454u);
      v40 = v39;
      if ( v38 )
      {
        if ( v39 )
        {
          vCopy_IFIV(v15 + 352, v38);
          v41 = *v34;
          *((_QWORD *)v15 + 2) = v38;
          *((_DWORD *)v15 + 71) = 2;
          memmove(v40, v41, *v41);
          v42 = *v34;
          *((_QWORD *)v15 + 12) = v40;
          vGetVerticalGSet(v42, v15);
LABEL_17:
          *((_QWORD *)v15 + 13) = 0LL;
          return 1LL;
        }
        EngFreeMem(v38);
      }
      if ( *v34 )
        EngFreeMem(*v34);
      if ( v40 )
        EngFreeMem(v40);
      v43 = *a6;
      if ( !*a6 )
        return 0LL;
    }
    EngFreeMem(v43);
    *a6 = 0LL;
    return 0LL;
  }
  EngFreeMem(*a6);
  result = 0LL;
  *a6 = 0LL;
  return result;
}
