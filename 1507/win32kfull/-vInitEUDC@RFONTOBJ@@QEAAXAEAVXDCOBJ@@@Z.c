/*
 * XREFs of ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002DF20
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C002E94C (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C014EFE4 (GreGetGlyphOutlineInternal.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C029A874 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0029850 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0029904 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C002A864 (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C002D2B8 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0031A4C (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00385A4 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008A54C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0091630 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C010FB9C (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C010FEB8 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QEAAHAEAVIFIOBJ@@@Z @ 0x1C01100D4 (-bCheckEudcFontCaps@RFONTOBJ@@QEAAHAEAVIFIOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C029AA74 (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029AD48 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C029B22C (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vInitEUDC(RFONTOBJ *this, struct XDCOBJ *a2)
{
  struct XDCOBJ *v2; // rbx
  __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax
  _BYTE *v8; // rax
  struct HLFONT__ *v9; // rdx
  HDC *v10; // rdx
  __int64 v11; // rcx
  _BYTE *v12; // r15
  unsigned int v13; // r12d
  __int64 v14; // r13
  __int64 v15; // rax
  BOOL v16; // esi
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  BOOL v21; // esi
  struct PFE * near *v22; // rbx
  __int64 v23; // rbx
  char v24; // cl
  unsigned int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rax
  struct _LIST_ENTRY *LinkedFontList; // rax
  unsigned int v30; // r8d
  struct _LIST_ENTRY *Flink; // rbx
  __int128 v32; // xmm0
  struct XDCOBJ *v33; // rdi
  __int128 v34; // xmm1
  int Blink; // ecx
  __int64 v36; // rcx
  int v37; // esi
  const struct SEMOBJSHARED *v38; // rdx
  bool v39; // bl
  __int64 v40; // rax
  int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 *v44; // rbx
  __int64 v45; // rdi
  int v46; // [rsp+20h] [rbp-E0h]
  __int64 v47; // [rsp+30h] [rbp-D0h] BYREF
  BOOL v48; // [rsp+38h] [rbp-C8h]
  _BYTE *v49; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+48h] [rbp-B8h]
  struct XDCOBJ *v51; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h]
  __int64 v53; // [rsp+60h] [rbp-A0h] BYREF
  struct PFE *v54[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v55; // [rsp+78h] [rbp-88h] BYREF
  __int128 v56; // [rsp+80h] [rbp-80h] BYREF
  __int128 v57; // [rsp+90h] [rbp-70h]
  struct LFONT *v58; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v59[3]; // [rsp+A8h] [rbp-58h] BYREF
  _OWORD v60[4]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v61[48]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v62[80]; // [rsp+130h] [rbp+30h] BYREF

  v2 = a2;
  v51 = a2;
  v3 = *(_QWORD *)a2;
  if ( *(_DWORD *)(v3 + 320) )
  {
    RFONTOBJ::vInitEUDCRemote(this, v2);
  }
  else
  {
    v5 = *(_QWORD *)this;
    v6 = *(_QWORD *)(v5 + 112);
    v53 = v6;
    v55 = v6;
    if ( !*(_QWORD *)(v5 + 736) && *(_OWORD *)&gappfeSysEUDC != 0LL
      || (bFinallyInitializeFontAssocDefault || gbSystemDBCSFontEnabled) && !*(_QWORD *)(v5 + 744)
      || (v7 = *(_QWORD *)(v6 + 128)) != 0
      && (!*(_QWORD *)(v5 + 752) || *(_DWORD *)(v5 + 840) != 1 || *(_DWORD *)(v5 + 844) != *(_DWORD *)(v7 + 104)) )
    {
      v8 = *(_BYTE **)(v3 + 48);
      v9 = *(struct HLFONT__ **)(v3 + 2160);
      v49 = v8;
      LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v58, v9, (struct PDEVOBJ *)&v49);
      v10 = *(HDC **)v2;
      v49 = *(_BYTE **)this;
      DCOBJ::DCOBJ((DCOBJ *)v61, *v10);
      IFIOBJR::IFIOBJR(
        (IFIOBJR *)v60,
        *(const struct _IFIMETRICS **)(v6 + 32),
        (struct RFONTOBJ *)&v49,
        (struct DCOBJ *)v61);
      RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)&v56, v2);
      v11 = *(_QWORD *)this;
      v12 = v62;
      v49 = v62;
      v13 = 0;
      v48 = 0;
      v14 = *(_QWORD *)(v11 + 744);
      v50 = *(_QWORD *)(v11 + 736);
      v15 = *(_QWORD *)(v6 + 128);
      v52 = v14;
      if ( v15 )
      {
        v16 = *(_DWORD *)(v11 + 840) == 0;
        v48 = v16;
        if ( *(_QWORD *)(v11 + 752) && *(_DWORD *)(v11 + 844) != *(_DWORD *)(v15 + 104) )
        {
          v17 = 0;
          if ( *(_DWORD *)(v11 + 848) )
          {
            do
            {
              v18 = *(_QWORD *)(*(_QWORD *)this + 752LL);
              if ( *(_QWORD *)(v18 + 8LL * v17) )
              {
                v47 = *(_QWORD *)(v18 + 8LL * v17);
                RFONTOBJ::bMakeInactiveHelper((RFONTOBJ *)&v47, 0LL);
                v19 = *(_QWORD *)(*(_QWORD *)this + 752LL);
                v47 = 0LL;
                *(_QWORD *)(v19 + 8LL * v17) = 0LL;
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v47);
              }
              ++v17;
            }
            while ( v17 < *(_DWORD *)(*(_QWORD *)this + 848LL) );
            v16 = v48;
            v12 = v62;
          }
          v20 = *(_QWORD *)(*(_QWORD *)this + 752LL);
          if ( v20 != *(_QWORD *)this + 760LL )
            Win32FreePool(v20);
          v2 = v51;
          *(_QWORD *)(*(_QWORD *)this + 752LL) = 0LL;
          *(_DWORD *)(*(_QWORD *)this + 848LL) = 0;
        }
        if ( !*(_QWORD *)(*(_QWORD *)this + 752LL) )
          v16 = 1;
        v48 = v16;
      }
      *(_DWORD *)(*(_QWORD *)this + 720LL) |= 0x200u;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 48LL) + 56LL) & 0x8000) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 856LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 856LL));
        EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)this + 528LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 528LL));
      }
      v21 = *(_DWORD *)(*(_QWORD *)this + 852LL) != 0;
      if ( !v50 )
      {
        v22 = (&gappfeSysEUDC)[*(_DWORD *)(*(_QWORD *)this + 852LL) != 0];
        if ( v22 )
        {
          v54[0] = v22[4];
          v47 = 0LL;
          if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v54) )
          {
            RFONTOBJ::vInit((RFONTOBJ *)&v47, v51, (struct PFE *)v22, (struct _EUDCLOGFONT *)&v56, v46);
            v23 = v50;
            if ( v47 )
              v23 = v47;
            v50 = v23;
          }
          else
          {
            v50 = 0LL;
          }
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v47);
        }
      }
      if ( !bFinallyInitializeFontAssocDefault || v14 )
      {
        v14 = 0LL;
        v52 = 0LL;
      }
      else
      {
        v24 = *(_BYTE *)(*(_QWORD *)&v60[0] + 44LL);
        v25 = *(unsigned __int8 *)(*(_QWORD *)&v60[0] + 45LL) >> 4;
        if ( v24 == 1
          || (unsigned __int8)(v24 - 3) <= 0xFBu
          || ((unsigned __int8)fFontAssocStatus & (unsigned __int8)(v24 + 2) & 0xF) == 0 )
        {
          v14 = 0LL;
          v52 = 0LL;
        }
        else
        {
          if ( v25 >= 7 || !*((_DWORD *)&FontAssocDefaultTable + 166 * v25) )
            v25 = 6;
          if ( v21 )
          {
            v26 = 83LL * v25;
            if ( !*(_QWORD *)((char *)&unk_1C031DAA0 + v26 * 8) )
              v21 = qword_1C031DA98[v26] == 0;
          }
          v47 = 0LL;
          v27 = qword_1C031DA98[83 * v25 + v21];
          if ( v27 )
          {
            v54[0] = *(struct PFE **)(v27 + 32);
            if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v54) )
            {
              RFONTOBJ::vInit((RFONTOBJ *)&v47, v51, (struct PFE *)v27, (struct _EUDCLOGFONT *)&v56, v46);
              if ( v47 )
                v14 = v47;
              v52 = v14;
            }
            else
            {
              v14 = 0LL;
              v52 = 0LL;
            }
          }
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v47);
        }
      }
      if ( v48 )
      {
        v28 = *(_QWORD *)(v6 + 128);
        v12 = *(_DWORD *)(v28 + 100) <= 0xAu ? v62 : (_BYTE *)PALLOCMEM2((unsigned int)(8 * *(_DWORD *)(v28 + 100)));
        v49 = v12;
        if ( v12 )
        {
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v55);
          v13 = v30;
          Flink = LinkedFontList->Flink;
          if ( LinkedFontList->Flink != LinkedFontList )
          {
            v32 = v57;
            v33 = v51;
            v34 = v56;
            do
            {
              Blink = (int)Flink[1].Blink;
              v60[0] = v34;
              v60[1] = v32;
              if ( Blink )
                HIDWORD(v60[0]) = Blink * HIDWORD(v56) / SHIDWORD(Flink[1].Blink);
              v54[0] = *((struct PFE **)&Flink[2].Flink
                       + (v21 & (unsigned int)-(*((_QWORD *)&Flink[2].Flink + v21) != 0LL)));
              v59[0] = *((_QWORD *)v54[0] + 4);
              if ( (unsigned int)RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v59) )
              {
                v47 = 0LL;
                RFONTOBJ::vInit((RFONTOBJ *)&v47, v33, v54[0], (struct _EUDCLOGFONT *)v60, v46);
                if ( v47 )
                {
                  v36 = v13++;
                  *(_QWORD *)&v12[8 * v36] = v47;
                }
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v47);
                v32 = v57;
                v34 = v56;
              }
              Flink = Flink->Flink;
            }
            while ( Flink != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v55) );
            v6 = v53;
            v14 = v52;
          }
        }
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v51 + 48LL) + 56LL) & 0x8000) != 0 )
      {
        GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 528LL));
        GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 856LL));
      }
      v37 = *(_DWORD *)(*(_QWORD *)this + 720LL);
      *(_DWORD *)(*(_QWORD *)this + 720LL) = v37 & 0xFFFFFDFF;
      SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v53, ghsemRFONTList);
      v39 = RFONTOBJ::bActive(this, v38);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v53);
      if ( v39 && (v37 & 0x200) != 0 )
      {
        *(_QWORD *)(*(_QWORD *)this + 736LL) = v50;
        *(_QWORD *)(*(_QWORD *)this + 744LL) = v14;
        if ( v48 )
        {
          if ( v13 )
          {
            if ( v13 <= 0xA )
              *(_QWORD *)(*(_QWORD *)this + 752LL) = *(_QWORD *)this + 760LL;
            else
              *(_QWORD *)(*(_QWORD *)this + 752LL) = v12;
            v42 = 0LL;
            v43 = v13;
            do
            {
              *(_QWORD *)(v42 + *(_QWORD *)(*(_QWORD *)this + 752LL)) = *(_QWORD *)&v12[v42];
              v42 += 8LL;
              --v43;
            }
            while ( v43 );
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)this + 752LL) = 0LL;
          }
          *(_DWORD *)(*(_QWORD *)this + 848LL) = v13;
          v40 = *(_QWORD *)(v6 + 128);
          if ( v40 )
            v41 = *(_DWORD *)(v40 + 104);
          else
            v41 = 0;
          *(_DWORD *)(*(_QWORD *)this + 844LL) = v41;
          *(_DWORD *)(*(_QWORD *)this + 840LL) = 1;
          RFONTOBJ::UpdateFontLinksLockOrder(this);
        }
        if ( *(_BYTE **)(*(_QWORD *)this + 752LL) != v12 && v12 && v12 != v62 )
          Win32FreePool(v12);
      }
      else
      {
        v47 = v50;
        RFONTOBJ::vMakeInactive((RFONTOBJ *)&v47);
        v47 = v14;
        RFONTOBJ::vMakeInactive((RFONTOBJ *)&v47);
        if ( v13 )
        {
          v44 = (__int64 *)v12;
          v45 = v13;
          do
          {
            v47 = *v44;
            RFONTOBJ::vMakeInactive((RFONTOBJ *)&v47);
            v47 = 0LL;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v47);
            ++v44;
            --v45;
          }
          while ( v45 );
          v12 = v49;
        }
        if ( v12 != v62 )
          Win32FreePool(v12);
        v47 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v47);
        v47 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v47);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v61);
      v49 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v49);
      LFONTOBJ::~LFONTOBJ(&v58);
    }
  }
}
