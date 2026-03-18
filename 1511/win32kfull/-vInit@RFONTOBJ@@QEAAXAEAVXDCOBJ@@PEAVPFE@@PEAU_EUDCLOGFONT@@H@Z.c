/*
 * XREFs of ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0002CBC
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002667C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C029A544 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029A7D0 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z @ 0x1C0002AFC (-bFindRFONT@RFONTOBJ@@QEAAHPEAU_FD_XFORM@@KKAEAVPDEVOBJ@@PEAVEXFORMOBJ@@PEAVPFE@@HHHK@Z.c)
 *     ?bSimItalic@IFIOBJ@@QEAAHXZ @ 0x1C001D81C (-bSimItalic@IFIOBJ@@QEAAHXZ.c)
 *     ?bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOBJ@@H@Z @ 0x1C001E818 (-bSetFontXform@PFEOBJ@@QEAAHAEAVXDCOBJ@@PEAUtagLOGFONTW@@PEAU_FD_XFORM@@KKQEAU_POINTL@@AEAVIFIOB.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1C002206C (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0022088 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C002213C (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C0025C48 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

void __fastcall RFONTOBJ::vInit(RFONTOBJ *this, struct XDCOBJ *a2, struct PFE *a3, struct _EUDCLOGFONT *a4)
{
  __int64 v5; // rdx
  __int64 v9; // rdi
  int v10; // eax
  struct HLFONT__ *v11; // rdx
  _DWORD *v12; // rbx
  int v13; // r9d
  __int64 v14; // r13
  int v15; // r8d
  unsigned int v16; // esi
  int v17; // ecx
  bool v18; // sf
  int v19; // ecx
  int v20; // eax
  size_t v21; // rdi
  unsigned int v22; // eax
  PFEOBJ *v23; // rcx
  FLOATL v24; // xmm2_4
  struct PFE *v25; // rdi
  __int64 v26; // rcx
  int v27; // ebx
  unsigned int v28; // r10d
  unsigned int v29; // [rsp+28h] [rbp-D8h]
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v31; // [rsp+68h] [rbp-98h] BYREF
  int v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v34[2]; // [rsp+80h] [rbp-80h] BYREF
  struct PFE *v35; // [rsp+90h] [rbp-70h]
  __int64 v36; // [rsp+98h] [rbp-68h] BYREF
  int v37; // [rsp+A4h] [rbp-5Ch]
  __int64 v38; // [rsp+A8h] [rbp-58h] BYREF
  int v39; // [rsp+B8h] [rbp-48h]
  _FD_XFORM v40; // [rsp+C0h] [rbp-40h] BYREF
  struct tagENUMLOGFONTEXDVW v41; // [rsp+D0h] [rbp-30h] BYREF

  v35 = a3;
  v5 = *(_QWORD *)a2;
  v9 = *(_QWORD *)(v5 + 48);
  v10 = *(_BYTE *)(v5 + 176) & 1;
  v11 = *(struct HLFONT__ **)(v5 + 2136);
  v32 = v10;
  v30 = v9;
  LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v33, v11, (struct PDEVOBJ *)&v30);
  v12 = (_DWORD *)v33;
  v13 = 0;
  if ( !v33 )
  {
    *(_QWORD *)this = 0LL;
    goto LABEL_24;
  }
  v14 = *((_QWORD *)a3 + 4);
  v15 = *((_DWORD *)a4 + 1);
  v16 = 0;
  v34[0] = v14;
  if ( ((v15 & 0x4000) != 0 || (*(_DWORD *)a4 & 1) != 0)
    && (*(_BYTE *)(v14 + 52) & 1) == 0
    && *(_BYTE *)(v33 + 296)
    && (unsigned int)IFIOBJ::bSimItalic((IFIOBJ *)v34) )
  {
    v16 = v28;
  }
  if ( ((*(_DWORD *)(v9 + 56) & 1) != 0 || *((_DWORD *)a4 + 6) != v13)
    && ((*(_BYTE *)a4 & 0x20) != 0 || (v15 & 0x2000) != 0) )
  {
    v17 = 400;
    if ( v12[73] )
      v17 = v12[73];
    v18 = *(unsigned __int16 *)(v14 + 46) - v17 < 0;
    v19 = v13;
    if ( v18 )
      v19 = 0x2000;
    v16 |= v19;
  }
  v20 = *(_DWORD *)(v14 + 48);
  if ( (v20 & 1) != 0 && v12[69] <= v13 )
    v16 |= 0x8000u;
  if ( (v15 & 0x10000) != 0 && (v20 & 0x40) != 0 )
    v16 |= v15 & 0x10010000;
  v21 = 420LL;
  memset(&v41, 0, sizeof(v41));
  v22 = v12[68];
  if ( v22 < 0x1A4 )
    v21 = v22;
  memmove(&v41, v12 + 69, v21);
  v41.elfEnumLogfontEx.elfLogFont.lfHeight = *((_DWORD *)a4 + 3);
  v41.elfEnumLogfontEx.elfLogFont.lfWidth = *((_DWORD *)a4 + 2);
  v41.elfEnumLogfontEx.elfLogFont.lfOrientation = *((_DWORD *)a4 + 5);
  v41.elfEnumLogfontEx.elfLogFont.lfEscapement = *((_DWORD *)a4 + 4);
  if ( (*(_DWORD *)(v14 + 48) & 0x3000010) == 0
    || (v31.x = 1,
        v31.y = 1,
        !PFEOBJ::bSetFontXform(v23, a2, &v41.elfEnumLogfontEx.elfLogFont, &v40, 0, v29, &v31, (struct IFIOBJ *)v34, 1)) )
  {
    *(_QWORD *)this = 0LL;
    goto LABEL_24;
  }
  v24 = v40.eXY * *((float *)a4 + 7);
  v40.eXX = v40.eXX * *((float *)a4 + 7);
  v34[0] = ghsemPublicPFT;
  v40.eXY = v24;
  ((void (*)(void))GreAcquireSemaphore)();
  v25 = v35;
  v39 = 0;
  v38 = *(_QWORD *)v35;
  ++*(_DWORD *)(v38 + 68);
  SEMOBJ::vUnlock((SEMOBJ *)v34);
  v26 = *(_QWORD *)a2;
  v27 = v32;
  v37 = 0;
  v36 = v26 + 336;
  if ( !(unsigned int)RFONTOBJ::bFindRFONT(
                        this,
                        &v40,
                        v16,
                        0,
                        (struct PDEVOBJ *)&v30,
                        (struct EXFORMOBJ *)&v36,
                        v25,
                        v32,
                        *(_DWORD *)(*(_QWORD *)(v26 + 80) + 68LL),
                        0,
                        2u) )
  {
    if ( !(unsigned int)RFONTOBJ::bRealizeFont(
                          this,
                          a2,
                          (struct PDEVOBJ *)&v30,
                          &v41,
                          v25,
                          &v40,
                          &v31,
                          v16,
                          0,
                          v27,
                          0,
                          2u) )
    {
      *(_QWORD *)this = 0LL;
      goto LABEL_23;
    }
    v39 = 1;
  }
  GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 528LL));
  *(_DWORD *)(*(_QWORD *)a2 + 264LL) &= ~1u;
LABEL_23:
  PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)&v38);
LABEL_24:
  LFONTOBJ::~LFONTOBJ((LFONTOBJ *)&v33);
}
