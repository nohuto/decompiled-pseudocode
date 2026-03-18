/*
 * XREFs of ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029A324
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002C5A0 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C00090B0 (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C00091E4 (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0009500 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000AA50 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00127D0 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0023CFC (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0023DB0 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0027C60 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C002B454 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004A0A0 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C0055BFC (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C005DCD4 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FDC0C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1C0129850 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C025A5E4 (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C029A210 (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 */

void __fastcall RFONTOBJ::vInitEUDCRemote(HDC *this, HDC **a2)
{
  __int64 v3; // rsi
  HDC v4; // rcx
  _QWORD *v6; // rax
  char v7; // r13
  unsigned int v8; // edx
  void *v9; // rax
  HDC v10; // rax
  __int64 v11; // rbx
  struct HLFONT__ *v12; // rdx
  HDC *v13; // rdx
  __int64 *v14; // r12
  unsigned int v15; // r15d
  unsigned int v16; // ecx
  __int64 v17; // rdx
  unsigned int i; // r13d
  struct PFE *v19; // rax
  struct PFE *v20; // rbx
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *j; // rcx
  int Blink; // eax
  __int64 v24; // rcx
  int v25; // edi
  const struct SEMOBJSHARED *v26; // rdx
  bool v27; // bl
  __int64 v28; // rdx
  __int64 v29; // rdx
  HDC v30; // rcx
  __int64 *v31; // rbx
  __int64 v32; // rdi
  __int64 v33; // [rsp+30h] [rbp-D0h] BYREF
  HDC v34; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v35; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+48h] [rbp-B8h] BYREF
  struct LFONT *v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  int v39; // [rsp+68h] [rbp-98h]
  _OWORD v40[2]; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v41[4]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v42[48]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v43[80]; // [rsp+100h] [rbp+0h] BYREF

  v3 = 0LL;
  v4 = *this;
  v6 = (_QWORD *)*((_QWORD *)v4 + 94);
  if ( !v6 || !*v6 )
  {
    v7 = 0;
    if ( !v6 )
    {
      v8 = *((_DWORD *)*a2 + 80);
      if ( v8 <= 0xA )
      {
        *((_QWORD *)v4 + 94) = v4 + 190;
      }
      else
      {
        v9 = PALLOCMEM2(8 * v8, 1718382187LL, 1);
        *((_QWORD *)*this + 94) = v9;
        if ( !v9 )
          return;
        v7 = 1;
      }
    }
    *((_DWORD *)*this + 212) = 0;
    v10 = (*a2)[6];
    v12 = (struct HLFONT__ *)(*a2)[270];
    v35 = *((_QWORD *)*this + 14);
    v11 = v35;
    v34 = v10;
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v37, v12, (struct PDEVOBJ *)&v34);
    v13 = *a2;
    v34 = *this;
    DCOBJ::DCOBJ((DCOBJ *)v42, *v13);
    IFIOBJR::IFIOBJR(
      (IFIOBJR *)v41,
      *(const struct _IFIMETRICS **)(v11 + 32),
      (struct RFONTOBJ *)&v34,
      (struct DCOBJ *)v42);
    RFONTOBJ::ComputeEUDCLogfont((RFONTOBJ *)this, (struct _EUDCLOGFONT *)v40, (struct XDCOBJ *)a2);
    v14 = (__int64 *)v43;
    v15 = 0;
    v16 = *((_DWORD *)*a2 + 80);
    if ( v16 <= 0xA || (v14 = (__int64 *)PALLOCMEM2(8 * v16, 1718382187LL, 1)) != 0LL )
    {
      *((_DWORD *)*this + 180) |= 0x200u;
      if ( ((_DWORD)(*a2)[6][14] & 0x8000) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *((_QWORD *)*this + 107));
        GreReleaseSemaphoreInternal(*((_QWORD *)*this + 107));
        EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *((_QWORD *)*this + 66));
        GreReleaseSemaphoreInternal(*((_QWORD *)*this + 66));
      }
      for ( i = 0; i < *((_DWORD *)*a2 + 80); ++i )
      {
        v38 = 0LL;
        v33 = 0LL;
        v36 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v19 = ppfeFromUFI((struct _UNIVERSAL_FONT_ID *)((*a2)[39] + 2 * i));
        v20 = v19;
        if ( v19 )
        {
          v38 = *(_QWORD *)v19;
          v39 = 0;
          ++*(_DWORD *)(v38 + 68);
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v36);
        if ( v20 )
        {
          v41[0] = v40[0];
          v41[1] = v40[1];
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v35);
          if ( LinkedFontList )
          {
            for ( j = LinkedFontList->Flink; j != LinkedFontList; j = j->Flink )
            {
              if ( (struct PFE *)j[2].Flink == v20 || (struct PFE *)j[2].Blink == v20 )
              {
                Blink = (int)j[1].Blink;
                if ( Blink )
                  HIDWORD(v41[0]) = HIDWORD(v40[0]) * Blink / SHIDWORD(j[1].Blink);
                break;
              }
            }
          }
          RFONTOBJ::vInit((RFONTOBJ *)&v33, (struct XDCOBJ *)a2, v20, (struct _EUDCLOGFONT *)v41);
          if ( v33 )
          {
            v24 = v15++;
            v14[v24] = v33;
          }
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v33);
        PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)&v38);
      }
      if ( ((_DWORD)(*a2)[6][14] & 0x8000) != 0 )
      {
        GreAcquireSemaphore(*((_QWORD *)*this + 66));
        GreAcquireSemaphore(*((_QWORD *)*this + 107));
      }
      v25 = *((_DWORD *)*this + 180);
      *((_DWORD *)*this + 180) = v25 & 0xFFFFFDFF;
      SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v35, ghsemRFONTList);
      v27 = RFONTOBJ::bActive((RFONTOBJ *)this, v26);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v35);
      if ( v27 && (v25 & 0x200) != 0 )
      {
        if ( v15 )
        {
          v29 = v15;
          do
          {
            *(_QWORD *)(v3 * 8 + *((_QWORD *)*this + 94)) = v14[v3];
            ++v3;
            --v29;
          }
          while ( v29 );
          *((_DWORD *)*this + 212) = v15;
        }
        else
        {
          v30 = (HDC)*((_QWORD *)*this + 94);
          if ( v30 != *this + 190 )
            Win32FreePool(v30, v28);
          *((_QWORD *)*this + 94) = 0LL;
          *((_DWORD *)*this + 212) = 0;
        }
        RFONTOBJ::UpdateFontLinksLockOrder((RFONTOBJ *)this);
      }
      else if ( v15 )
      {
        v31 = v14;
        v32 = v15;
        do
        {
          v33 = *v31;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)&v33);
          RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v33);
          ++v31;
          --v32;
        }
        while ( v32 );
      }
      if ( v14 != (__int64 *)v43 )
        Win32FreePool(v14, v28);
    }
    else if ( v7 )
    {
      Win32FreePool(*((_QWORD *)*this + 94), v17);
      *((_QWORD *)*this + 94) = 0LL;
    }
    DCOBJ::~DCOBJ((DCOBJ *)v42);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v34);
    LFONTOBJ::~LFONTOBJ(&v37);
  }
}
