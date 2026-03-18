/*
 * XREFs of ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029AD48
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002DF20 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0029850 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C0029904 (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C002D2B8 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0031A4C (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00385A4 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     ?vUnlock@SPRITERANGELOCK@@QEAAXXZ @ 0x1C008A54C (-vUnlock@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0091630 (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00D6F48 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C010FB9C (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C010FEB8 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1C0110104 (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0121138 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C029AA74 (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C029AC34 (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C029B22C (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
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
  struct _FD_XFORM **v14; // r12
  unsigned int v15; // r15d
  unsigned int v16; // ecx
  unsigned int i; // r13d
  struct PFE *v18; // rax
  struct PFE *v19; // rbx
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *j; // rcx
  int Blink; // eax
  __int64 v23; // rcx
  int v24; // edi
  const struct SEMOBJSHARED *v25; // rdx
  bool v26; // bl
  __int64 v27; // rcx
  HDC v28; // rcx
  struct _FD_XFORM **v29; // rbx
  __int64 v30; // rdi
  struct _FD_XFORM *v31; // [rsp+30h] [rbp-D0h] BYREF
  HDC v32; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v33; // [rsp+40h] [rbp-C0h] BYREF
  struct LFONT *v34; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v35; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v36; // [rsp+58h] [rbp-A8h] BYREF
  int v37; // [rsp+68h] [rbp-98h]
  _OWORD v38[2]; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v39[4]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v40[48]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v41[80]; // [rsp+100h] [rbp+0h] BYREF

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
    v33 = *((_QWORD *)*this + 14);
    v11 = v33;
    v32 = v10;
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v34, v12, (struct PDEVOBJ *)&v32);
    v13 = *a2;
    v32 = *this;
    DCOBJ::DCOBJ((DCOBJ *)v40, *v13);
    IFIOBJR::IFIOBJR(
      (IFIOBJR *)v39,
      *(const struct _IFIMETRICS **)(v11 + 32),
      (struct RFONTOBJ *)&v32,
      (struct DCOBJ *)v40);
    RFONTOBJ::ComputeEUDCLogfont((RFONTOBJ *)this, (struct _EUDCLOGFONT *)v38, (struct XDCOBJ *)a2);
    v14 = (struct _FD_XFORM **)v41;
    v15 = 0;
    v16 = *((_DWORD *)*a2 + 80);
    if ( v16 <= 0xA || (v14 = (struct _FD_XFORM **)PALLOCMEM2(8 * v16, 1718382187LL, 1)) != 0LL )
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
        v36 = 0LL;
        v31 = 0LL;
        v35 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v18 = ppfeFromUFI((struct _UNIVERSAL_FONT_ID *)((*a2)[39] + 2 * i));
        v19 = v18;
        if ( v18 )
        {
          v36 = *(_QWORD *)v18;
          v37 = 0;
          ++*(_DWORD *)(v36 + 68);
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v35);
        if ( v19 )
        {
          v39[0] = v38[0];
          v39[1] = v38[1];
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v33);
          if ( LinkedFontList )
          {
            for ( j = LinkedFontList->Flink; j != LinkedFontList; j = j->Flink )
            {
              if ( (struct PFE *)j[2].Flink == v19 || (struct PFE *)j[2].Blink == v19 )
              {
                Blink = (int)j[1].Blink;
                if ( Blink )
                  HIDWORD(v39[0]) = HIDWORD(v38[0]) * Blink / SHIDWORD(j[1].Blink);
                break;
              }
            }
          }
          RFONTOBJ::vInit(&v31, (struct XDCOBJ *)a2, v19, (struct _EUDCLOGFONT *)v39);
          if ( v31 )
          {
            v23 = v15++;
            v14[v23] = v31;
          }
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v31);
        PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)&v36);
      }
      if ( ((_DWORD)(*a2)[6][14] & 0x8000) != 0 )
      {
        GreAcquireSemaphore(*((_QWORD *)*this + 66));
        GreAcquireSemaphore(*((_QWORD *)*this + 107));
      }
      v24 = *((_DWORD *)*this + 180);
      *((_DWORD *)*this + 180) = v24 & 0xFFFFFDFF;
      SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v33, ghsemRFONTList);
      v26 = RFONTOBJ::bActive((RFONTOBJ *)this, v25);
      SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v33);
      if ( v26 && (v24 & 0x200) != 0 )
      {
        if ( v15 )
        {
          v27 = v15;
          do
          {
            *(_QWORD *)(v3 * 8 + *((_QWORD *)*this + 94)) = v14[v3];
            ++v3;
            --v27;
          }
          while ( v27 );
          *((_DWORD *)*this + 212) = v15;
          RFONTOBJ::UpdateFontLinksLockOrder((RFONTOBJ *)this);
        }
        else
        {
          v28 = (HDC)*((_QWORD *)*this + 94);
          if ( v28 != *this + 190 )
            Win32FreePool(v28);
          *((_QWORD *)*this + 94) = 0LL;
          *((_DWORD *)*this + 212) = 0;
        }
      }
      else if ( v15 )
      {
        v29 = v14;
        v30 = v15;
        do
        {
          v31 = *v29;
          RFONTOBJ::vMakeInactive((RFONTOBJ *)&v31);
          RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v31);
          ++v29;
          --v30;
        }
        while ( v30 );
      }
      if ( v14 != (struct _FD_XFORM **)v41 )
        Win32FreePool(v14);
    }
    else if ( v7 )
    {
      Win32FreePool(*((_QWORD *)*this + 94));
      *((_QWORD *)*this + 94) = 0LL;
    }
    DCOBJ::~DCOBJ((DCOBJ *)v40);
    RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v32);
    LFONTOBJ::~LFONTOBJ(&v34);
  }
}
