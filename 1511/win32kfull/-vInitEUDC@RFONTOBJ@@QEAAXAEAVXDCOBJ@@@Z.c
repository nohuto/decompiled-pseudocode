/*
 * XREFs of ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002667C
 * Callers:
 *     ?wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z @ 0x1C0026C30 (-wpgdGetLinkMetricsPlus@RFONTOBJ@@QEAAPEAU_GLYPHDATA@@PEAVXDCOBJ@@PEAVESTROBJ@@PEAG2KPEAHH@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C0105EA4 (GreGetGlyphOutlineInternal.c)
 *     ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C029A344 (-GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z.c)
 * Callees:
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C0002A1C (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0002CBC (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0002FD8 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ?bCheckEudcFontCaps@RFONTOBJ@@QEAAHAEAVIFIOBJ@@@Z @ 0x1C00031F4 (-bCheckEudcFontCaps@RFONTOBJ@@QEAAHAEAVIFIOBJ@@@Z.c)
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C001E44C (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0022088 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C002213C (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0022FFC (-bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0025B2C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00E8B50 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029A7D0 (-vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
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
  _BYTE *v12; // r14
  __int64 v13; // r9
  unsigned int v14; // r15d
  struct RFONT *v15; // r12
  __int64 v16; // rax
  BOOL v17; // r13d
  BOOL v18; // r13d
  struct PFE * near *v19; // rbx
  BOOL v20; // ebx
  __int64 v21; // rax
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct XDCOBJ *v23; // rdi
  unsigned int v24; // r9d
  struct _LIST_ENTRY *i; // rbx
  int Blink; // ecx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rax
  int v31; // ecx
  unsigned int v32; // ebx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  struct RFONT *v36; // rbx
  char v37; // cl
  unsigned int v38; // edx
  __int64 v39; // rcx
  __int64 v40; // rbx
  struct RFONT **v41; // rbx
  __int64 v42; // rdi
  struct RFONT *v43; // [rsp+30h] [rbp-D0h] BYREF
  BOOL v44; // [rsp+38h] [rbp-C8h]
  _BYTE *v45; // [rsp+40h] [rbp-C0h] BYREF
  struct RFONT *v46; // [rsp+48h] [rbp-B8h]
  struct RFONT *v47; // [rsp+50h] [rbp-B0h]
  struct XDCOBJ *v48; // [rsp+58h] [rbp-A8h]
  struct PFE *v49[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v50; // [rsp+70h] [rbp-90h] BYREF
  __int64 v51; // [rsp+78h] [rbp-88h]
  struct LFONT *v52; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v53[16]; // [rsp+88h] [rbp-78h] BYREF
  _OWORD v54[2]; // [rsp+98h] [rbp-68h] BYREF
  __int64 v55[3]; // [rsp+B8h] [rbp-48h] BYREF
  _OWORD v56[4]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v57[80]; // [rsp+110h] [rbp+10h] BYREF

  v2 = a2;
  v48 = a2;
  v3 = *(_QWORD *)a2;
  if ( *(_DWORD *)(v3 + 320) )
  {
    RFONTOBJ::vInitEUDCRemote(this, v2);
  }
  else
  {
    v5 = *(_QWORD *)this;
    v6 = *(_QWORD *)(v5 + 112);
    v51 = v6;
    v50 = v6;
    if ( !*(_QWORD *)(v5 + 736) && *(_OWORD *)&gappfeSysEUDC != 0LL
      || (bFinallyInitializeFontAssocDefault || gbSystemDBCSFontEnabled) && !*(_QWORD *)(v5 + 744)
      || (v7 = *(_QWORD *)(v6 + 128)) != 0
      && (!*(_QWORD *)(v5 + 752) || *(_DWORD *)(v5 + 840) != 1 || *(_DWORD *)(v5 + 844) != *(_DWORD *)(v7 + 104)) )
    {
      v8 = *(_BYTE **)(v3 + 48);
      v9 = *(struct HLFONT__ **)(v3 + 2136);
      v45 = v8;
      LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v52, v9, (struct PDEVOBJ *)&v45);
      v10 = *(HDC **)v2;
      v45 = *(_BYTE **)this;
      DCOBJ::DCOBJ((DCOBJ *)v53, *v10);
      IFIOBJR::IFIOBJR(
        (IFIOBJR *)v56,
        *(const struct _IFIMETRICS **)(v6 + 32),
        (struct RFONTOBJ *)&v45,
        (struct DCOBJ *)v53);
      RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)v54, v2);
      v11 = *(_QWORD *)this;
      v12 = v57;
      v13 = 0LL;
      v45 = v57;
      v14 = 0;
      v44 = 0;
      v15 = *(struct RFONT **)(v11 + 744);
      v46 = *(struct RFONT **)(v11 + 736);
      v16 = *(_QWORD *)(v6 + 128);
      v47 = v15;
      if ( v16 )
      {
        v17 = *(_DWORD *)(v11 + 840) == 0;
        v44 = v17;
        if ( *(_QWORD *)(v11 + 752) && *(_DWORD *)(v11 + 844) != *(_DWORD *)(v16 + 104) )
        {
          v32 = 0;
          if ( *(_DWORD *)(v11 + 848) )
          {
            do
            {
              v33 = *(_QWORD *)(*(_QWORD *)this + 752LL);
              if ( *(_QWORD *)(v33 + 8LL * v32) )
              {
                v43 = *(struct RFONT **)(v33 + 8LL * v32);
                RFONTOBJ::bMakeInactiveHelper(&v43, 0LL);
                v34 = *(_QWORD *)(*(_QWORD *)this + 752LL);
                v43 = 0LL;
                *(_QWORD *)(v34 + 8LL * v32) = 0LL;
                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v43);
                v13 = 0LL;
              }
              ++v32;
            }
            while ( v32 < *(_DWORD *)(*(_QWORD *)this + 848LL) );
            v17 = v44;
          }
          v35 = *(_QWORD *)(*(_QWORD *)this + 752LL);
          if ( v35 != *(_QWORD *)this + 760LL )
          {
            Win32FreePool(v35);
            v13 = 0LL;
          }
          v2 = v48;
          *(_QWORD *)(*(_QWORD *)this + 752LL) = 0LL;
          *(_DWORD *)(*(_QWORD *)this + 848LL) = 0;
        }
        if ( !*(_QWORD *)(*(_QWORD *)this + 752LL) )
          v17 = 1;
        v44 = v17;
      }
      *(_DWORD *)(*(_QWORD *)this + 720LL) |= 0x200u;
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 48LL) + 56LL) & 0x8000) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 856LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 856LL));
        EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)this + 528LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 528LL));
        v13 = 0LL;
      }
      v18 = *(_DWORD *)(*(_QWORD *)this + 852LL) != 0;
      if ( !v46 )
      {
        v19 = (&gappfeSysEUDC)[*(_DWORD *)(*(_QWORD *)this + 852LL) != 0];
        if ( v19 )
        {
          v49[0] = v19[4];
          v43 = 0LL;
          if ( RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v49) )
          {
            RFONTOBJ::vInit((RFONTOBJ *)&v43, v48, (struct PFE *)v19, (struct _EUDCLOGFONT *)v54);
            v36 = v46;
            if ( v43 )
              v36 = v43;
            v46 = v36;
          }
          else
          {
            v46 = 0LL;
          }
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v43);
          v13 = 0LL;
        }
      }
      if ( bFinallyInitializeFontAssocDefault
        && !v15
        && ((v37 = *(_BYTE *)(*(_QWORD *)&v56[0] + 44LL),
             v38 = *(unsigned __int8 *)(*(_QWORD *)&v56[0] + 45LL) >> 4,
             !v37)
         || v37 == 2
         || v37 == -1)
        && ((unsigned __int8)fFontAssocStatus & (unsigned __int8)(v37 + 2) & 0xF) != 0 )
      {
        if ( v38 >= 7 || !*((_DWORD *)&FontAssocDefaultTable + 166 * v38) )
          v38 = 6;
        if ( v18 )
        {
          v39 = 83LL * v38;
          if ( !*(_QWORD *)((char *)&unk_1C031D8A0 + v39 * 8) )
            v18 = qword_1C031D898[v39] == 0;
        }
        v43 = 0LL;
        v40 = qword_1C031D898[83 * v38 + v18];
        if ( v40 )
        {
          v49[0] = *(struct PFE **)(v40 + 32);
          if ( RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v49) )
          {
            RFONTOBJ::vInit((RFONTOBJ *)&v43, v48, (struct PFE *)v40, (struct _EUDCLOGFONT *)v54);
            if ( v43 )
              v15 = v43;
            v47 = v15;
          }
          else
          {
            v15 = 0LL;
            v47 = 0LL;
          }
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v43);
        v13 = 0LL;
      }
      else
      {
        v47 = 0LL;
        v15 = 0LL;
      }
      v20 = v44;
      if ( v44 )
      {
        v21 = *(_QWORD *)(v6 + 128);
        if ( *(_DWORD *)(v21 + 100) > 0xAu )
        {
          v12 = PALLOCMEM2((unsigned int)(8 * *(_DWORD *)(v21 + 100)), 1718382187LL, 1);
          v13 = 0LL;
        }
        else
        {
          v12 = v57;
        }
        v45 = v12;
        if ( v12 )
        {
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v50);
          v23 = v48;
          v14 = v24;
          for ( i = LinkedFontList->Flink; i != PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v50); i = i->Flink )
          {
            Blink = (int)i[1].Blink;
            v56[0] = v54[0];
            v56[1] = v54[1];
            if ( Blink )
              HIDWORD(v56[0]) = Blink * HIDWORD(v54[0]) / SHIDWORD(i[1].Blink);
            v49[0] = *((struct PFE **)&i[2].Flink + (v18 & (unsigned int)-(*((_QWORD *)&i[2].Flink + v18) != 0LL)));
            v55[0] = *((_QWORD *)v49[0] + 4);
            if ( RFONTOBJ::bCheckEudcFontCaps(this, (struct IFIOBJ *)v55) )
            {
              v43 = 0LL;
              RFONTOBJ::vInit((RFONTOBJ *)&v43, v23, v49[0], (struct _EUDCLOGFONT *)v56);
              if ( v43 )
              {
                v27 = v14++;
                *(_QWORD *)&v12[8 * v27] = v43;
              }
              RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v43);
            }
          }
          v6 = v51;
          v15 = v47;
          v20 = v44;
        }
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v48 + 48LL) + 56LL) & 0x8000) != 0 )
      {
        GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 528LL));
        GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 856LL));
        v13 = 0LL;
      }
      if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 0x200) != 0 )
      {
        *(_QWORD *)(*(_QWORD *)this + 736LL) = v46;
        *(_QWORD *)(*(_QWORD *)this + 744LL) = v15;
        if ( v20 )
        {
          if ( v14 )
          {
            if ( v14 > 0xA )
              *(_QWORD *)(*(_QWORD *)this + 752LL) = v12;
            else
              *(_QWORD *)(*(_QWORD *)this + 752LL) = *(_QWORD *)this + 760LL;
            v28 = v13;
            v29 = v14;
            do
            {
              *(_QWORD *)(v28 + *(_QWORD *)(*(_QWORD *)this + 752LL)) = *(_QWORD *)&v12[v28];
              v28 += 8LL;
              --v29;
            }
            while ( v29 );
          }
          else
          {
            *(_QWORD *)(*(_QWORD *)this + 752LL) = v13;
          }
          *(_DWORD *)(*(_QWORD *)this + 848LL) = v14;
          v30 = *(_QWORD *)(v6 + 128);
          if ( v30 )
            v31 = *(_DWORD *)(v30 + 104);
          else
            v31 = v13;
          *(_DWORD *)(*(_QWORD *)this + 844LL) = v31;
          *(_DWORD *)(*(_QWORD *)this + 840LL) = 1;
          RFONTOBJ::UpdateFontLinksLockOrder(this);
        }
        if ( *(_BYTE **)(*(_QWORD *)this + 752LL) != v12 && v12 && v12 != v57 )
          Win32FreePool(v12);
        *(_DWORD *)(*(_QWORD *)this + 720LL) &= ~0x200u;
      }
      else
      {
        v43 = v46;
        RFONTOBJ::vMakeInactive(&v43);
        v43 = v15;
        RFONTOBJ::vMakeInactive(&v43);
        if ( v14 )
        {
          v41 = (struct RFONT **)v12;
          v42 = v14;
          do
          {
            v43 = *v41;
            RFONTOBJ::vMakeInactive(&v43);
            v43 = 0LL;
            RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v43);
            ++v41;
            --v42;
          }
          while ( v42 );
          v12 = v45;
        }
        if ( v12 != v57 )
          Win32FreePool(v12);
        v43 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v43);
        v43 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v43);
      }
      XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v53);
      v45 = 0LL;
      RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v45);
      LFONTOBJ::~LFONTOBJ(&v52);
    }
  }
}
