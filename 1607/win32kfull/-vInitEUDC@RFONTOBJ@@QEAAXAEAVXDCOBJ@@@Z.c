/*
 * XREFs of ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002C5A0
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C002CD50 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C0124534 (GreGetGlyphOutlineInternal.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0299C1C (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C00090B0 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C00091E4 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0009500 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QEAAHAEAVIFIOBJ@@@Z @ 0x1C00099B0 (-bCheckEudcFontCaps@RFONTOBJ@@QEAAHAEAVIFIOBJ@@@Z.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00127D0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0023CFC (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0023DB0 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0027C60 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C002B454 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C002E04C (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0055BFC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C005DCD4 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C025A5E4 (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x1C0299B7C (-GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029A324 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 */

void __fastcall RFONTOBJ::vInitEUDC(RFONTOBJ *this, struct XDCOBJ *a2)
{
  __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  _BYTE *v8; // rax
  struct HLFONT__ *v9; // rdx
  HDC *v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  _BYTE *v13; // r15
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rdi
  __int64 v17; // r13
  _BOOL8 v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned int v23; // ecx
  struct PFE * near *v24; // rdi
  struct PFE *v25; // rax
  __int64 v26; // rdi
  struct PFE *EUDCDefaultFontPFE; // rax
  struct PFE *v28; // rdi
  __int64 v29; // rcx
  __int64 v30; // rax
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *Flink; // rdi
  __int64 v33; // rbx
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  int Blink; // ecx
  int v37; // esi
  const struct SEMOBJSHARED *v38; // rdx
  bool v39; // di
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rax
  int v43; // ecx
  __int64 v44; // rdx
  __int64 v45; // r8
  __int64 *v46; // rbx
  __int64 v47; // rdi
  __int64 v48; // [rsp+30h] [rbp-D0h] BYREF
  BOOL v49; // [rsp+38h] [rbp-C8h]
  _BYTE *v50; // [rsp+40h] [rbp-C0h] BYREF
  struct PFE *v51; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v52; // [rsp+50h] [rbp-B0h]
  __int64 v53; // [rsp+58h] [rbp-A8h]
  __int64 v54; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v55; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v56[2]; // [rsp+70h] [rbp-90h] BYREF
  struct LFONT *v57; // [rsp+80h] [rbp-80h] BYREF
  __int128 v58; // [rsp+88h] [rbp-78h] BYREF
  __int128 v59; // [rsp+98h] [rbp-68h]
  _BYTE v60[16]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v61[40]; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD v62[4]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v63[80]; // [rsp+120h] [rbp+20h] BYREF

  v3 = *(_QWORD *)a2;
  if ( *(_DWORD *)(v3 + 320) )
  {
    RFONTOBJ::vInitEUDCRemote(this, a2);
    return;
  }
  v5 = *(_QWORD *)this;
  v6 = *(_QWORD *)(v5 + 112);
  v54 = v6;
  v55 = v6;
  if ( !*(_QWORD *)(v5 + 736) && *(_OWORD *)&gappfeSysEUDC != 0LL
    || (bFinallyInitializeFontAssocDefault || gbSystemDBCSFontEnabled) && !*(_QWORD *)(v5 + 744)
    || (v7 = *(_QWORD *)(v6 + 128)) != 0
    && (!*(_QWORD *)(v5 + 752) || *(_DWORD *)(v5 + 840) != 1 || *(_DWORD *)(v5 + 844) != *(_DWORD *)(v7 + 104)) )
  {
    v8 = *(_BYTE **)(v3 + 48);
    v9 = *(struct HLFONT__ **)(v3 + 2160);
    v50 = v8;
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v57, v9, (struct PDEVOBJ *)&v50);
    v10 = *(HDC **)a2;
    v50 = *(_BYTE **)this;
    DCOBJ::DCOBJ((DCOBJ *)v60, *v10);
    IFIOBJR::IFIOBJR(
      (IFIOBJR *)v62,
      *(const struct _IFIMETRICS **)(v6 + 32),
      (struct RFONTOBJ *)&v50,
      (struct DCOBJ *)v60);
    RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)&v58, a2);
    v12 = *(_QWORD *)this;
    v13 = v63;
    v14 = *(_QWORD *)(v6 + 128);
    v15 = 0LL;
    v49 = 0;
    v50 = v63;
    v16 = *(_QWORD *)(v12 + 736);
    v17 = *(_QWORD *)(v12 + 744);
    v52 = v16;
    v53 = v17;
    if ( v14 )
    {
      v18 = *(_DWORD *)(v12 + 840) == 0;
      v49 = *(_DWORD *)(v12 + 840) == 0;
      if ( *(_QWORD *)(v12 + 752) && *(_DWORD *)(v12 + 844) != *(_DWORD *)(v14 + 104) )
      {
        v19 = 0LL;
        if ( *(_DWORD *)(v12 + 848) )
        {
          do
          {
            v20 = *(_QWORD *)(*(_QWORD *)this + 752LL);
            if ( *(_QWORD *)(v20 + 8 * v19) )
            {
              v51 = *(struct PFE **)(v20 + 8 * v19);
              RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v51, 0LL);
              v21 = *(_QWORD *)this;
              v51 = 0LL;
              *(_QWORD *)(*(_QWORD *)(v21 + 752) + 8 * v19) = 0LL;
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v51);
            }
            v19 = (unsigned int)(v19 + 1);
          }
          while ( (unsigned int)v19 < *(_DWORD *)(*(_QWORD *)this + 848LL) );
          v13 = v63;
        }
        v22 = *(_QWORD *)(*(_QWORD *)this + 752LL);
        if ( v22 != *(_QWORD *)this + 760LL )
          Win32FreePool(v22, v18, v11);
        v16 = v52;
        LODWORD(v18) = v49;
        *(_QWORD *)(*(_QWORD *)this + 752LL) = 0LL;
        *(_DWORD *)(*(_QWORD *)this + 848LL) = 0;
      }
      if ( !*(_QWORD *)(*(_QWORD *)this + 752LL) )
        LODWORD(v18) = 1;
      v49 = v18;
    }
    *(_DWORD *)(*(_QWORD *)this + 720LL) |= 0x200u;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 56LL) & 0x8000) != 0 )
    {
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 856LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 856LL));
      EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)this + 528LL));
      GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 528LL));
    }
    v23 = *(_DWORD *)(*(_QWORD *)this + 852LL) != 0;
    LODWORD(v51) = v23;
    if ( !v16 )
    {
      v24 = (&gappfeSysEUDC)[v23];
      if ( v24 )
      {
        v25 = v24[4];
        v48 = 0LL;
        v56[0] = v25;
        if ( RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v56) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v48, a2, (struct PFE *)v24, (struct _EUDCLOGFONT *)&v58);
          v26 = v52;
          if ( v48 )
            v26 = v48;
          v52 = v26;
        }
        else
        {
          v52 = 0LL;
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v48);
        v23 = (unsigned int)v51;
      }
    }
    if ( bFinallyInitializeFontAssocDefault )
    {
      if ( v17 )
        goto LABEL_44;
      EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v23);
      v28 = EUDCDefaultFontPFE;
      if ( EUDCDefaultFontPFE )
      {
        v29 = *((_QWORD *)EUDCDefaultFontPFE + 4);
        v48 = 0LL;
        v56[0] = v29;
        if ( RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v56) )
        {
          RFONTOBJ::vInit((RFONTOBJ *)&v48, a2, v28, (struct _EUDCLOGFONT *)&v58);
          if ( v48 )
            v17 = v48;
        }
        v53 = v17;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v48);
        goto LABEL_44;
      }
    }
    v17 = 0LL;
    v53 = 0LL;
LABEL_44:
    if ( v49 )
    {
      v30 = *(_QWORD *)(v6 + 128);
      v13 = *(_DWORD *)(v30 + 100) <= 0xAu ? v63 : (_BYTE *)PALLOCMEM2((unsigned int)(8 * *(_DWORD *)(v30 + 100)));
      v50 = v13;
      if ( v13 )
      {
        LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v55);
        Flink = LinkedFontList->Flink;
        if ( LinkedFontList->Flink != LinkedFontList )
        {
          v33 = (unsigned int)v51;
          v34 = v59;
          v35 = v58;
          do
          {
            Blink = (int)Flink[1].Blink;
            v62[0] = v35;
            v62[1] = v34;
            if ( Blink )
              HIDWORD(v62[0]) = Blink * HIDWORD(v58) / SHIDWORD(Flink[1].Blink);
            v51 = (struct PFE *)*((_QWORD *)&Flink[2].Flink + (*((_QWORD *)&Flink[2].Flink + v33) != 0LL ? v33 : 0));
            v56[0] = *((_QWORD *)v51 + 4);
            if ( RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v56) )
            {
              v48 = 0LL;
              RFONTOBJ::vInit((RFONTOBJ *)&v48, a2, v51, (struct _EUDCLOGFONT *)v62);
              if ( v48 )
              {
                *(_QWORD *)&v13[8 * v15] = v48;
                v15 = (unsigned int)(v15 + 1);
              }
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v48);
              v34 = v59;
              v35 = v58;
            }
            Flink = Flink->Flink;
          }
          while ( Flink != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v55) );
          v6 = v54;
          v17 = v53;
        }
      }
    }
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 56LL) & 0x8000) != 0 )
    {
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 528LL));
      GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 856LL));
    }
    v37 = *(_DWORD *)(*(_QWORD *)this + 720LL);
    *(_DWORD *)(*(_QWORD *)this + 720LL) = v37 & 0xFFFFFDFF;
    SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v54, ghsemRFONTList);
    v39 = RFONTOBJ::bActive(this, v38);
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v54);
    if ( v39 && (v37 & 0x200) != 0 )
    {
      *(_QWORD *)(*(_QWORD *)this + 736LL) = v52;
      *(_QWORD *)(*(_QWORD *)this + 744LL) = v17;
      if ( v49 )
      {
        if ( (_DWORD)v15 )
        {
          if ( (unsigned int)v15 <= 0xA )
            *(_QWORD *)(*(_QWORD *)this + 752LL) = *(_QWORD *)this + 760LL;
          else
            *(_QWORD *)(*(_QWORD *)this + 752LL) = v13;
          v40 = 0LL;
          v41 = (unsigned int)v15;
          do
          {
            *(_QWORD *)(v40 + *(_QWORD *)(*(_QWORD *)this + 752LL)) = *(_QWORD *)&v13[v40];
            v40 += 8LL;
            --v41;
          }
          while ( v41 );
        }
        else
        {
          *(_QWORD *)(*(_QWORD *)this + 752LL) = 0LL;
        }
        *(_DWORD *)(*(_QWORD *)this + 848LL) = v15;
        v42 = *(_QWORD *)(v6 + 128);
        if ( v42 )
          v43 = *(_DWORD *)(v42 + 104);
        else
          v43 = 0;
        *(_DWORD *)(*(_QWORD *)this + 844LL) = v43;
        *(_DWORD *)(*(_QWORD *)this + 840LL) = 1;
      }
      if ( *(_BYTE **)(*(_QWORD *)this + 752LL) != v13 && v13 && v13 != v63 )
        Win32FreePool(v13, v40, v41);
      RFONTOBJ::UpdateFontLinksLockOrder(this);
    }
    else
    {
      v48 = v52;
      RFONTOBJ::vMakeInactive((RFONTOBJ *)&v48);
      v48 = v17;
      RFONTOBJ::vMakeInactive((RFONTOBJ *)&v48);
      if ( (_DWORD)v15 )
      {
        v46 = (__int64 *)v13;
        v47 = (unsigned int)v15;
        do
        {
          v48 = *v46;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)&v48);
          v48 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v48);
          ++v46;
          --v47;
        }
        while ( v47 );
        v13 = v50;
      }
      if ( v13 != v63 )
        Win32FreePool(v13, v44, v45);
      v48 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v48);
      v48 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v48);
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v60);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v61);
    v50 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v50);
    LFONTOBJ::~LFONTOBJ(&v57);
  }
}
