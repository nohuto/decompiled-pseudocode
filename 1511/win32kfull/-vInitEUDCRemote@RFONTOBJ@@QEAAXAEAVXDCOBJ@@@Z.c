/*
 * XREFs of ?vInitEUDCRemote@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C029A7D0
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002667C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ @ 0x1C0002A1C (-UpdateFontLinksLockOrder@RFONTOBJ@@AEAAXXZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z @ 0x1C0002CBC (-vInit@RFONTOBJ@@QEAAXAEAVXDCOBJ@@PEAVPFE@@PEAU_EUDCLOGFONT@@H@Z.c)
 *     ?ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z @ 0x1C0002FD8 (-ComputeEUDCLogfont@RFONTOBJ@@QEAAXPEAU_EUDCLOGFONT@@AEAVXDCOBJ@@@Z.c)
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C001E44C (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ??1PFFREFOBJ@@QEAA@XZ @ 0x1C002206C (--1PFFREFOBJ@@QEAA@XZ.c)
 *     ??0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z @ 0x1C0022088 (--0LFONTOBJ@@QEAA@PEAUHLFONT__@@PEAVPDEVOBJ@@@Z.c)
 *     ??1LFONTOBJ@@QEAA@XZ @ 0x1C002213C (--1LFONTOBJ@@QEAA@XZ.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0025B2C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00E14B8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z @ 0x1C00E8B50 (--0IFIOBJR@@QEAA@PEBU_IFIMETRICS@@AEAVRFONTOBJ@@AEAVDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z @ 0x1C029A6BC (-ppfeFromUFI@@YAPEAVPFE@@PEAU_UNIVERSAL_FONT_ID@@@Z.c)
 */

void __fastcall RFONTOBJ::vInitEUDCRemote(RFONTOBJ *this, HDC **a2)
{
  __int64 v4; // rcx
  _QWORD *v5; // rax
  char v6; // r15
  unsigned int v7; // edx
  void *v8; // rax
  struct RFONT *v9; // rax
  __int64 v10; // rbx
  struct HLFONT__ *v11; // rdx
  HDC *v12; // rdx
  struct RFONT **v13; // r14
  __int64 v14; // rbx
  unsigned int v15; // ecx
  __int64 i; // r12
  struct PFE *v17; // rax
  struct PFE *v18; // r15
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *j; // rcx
  int Blink; // eax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // r8
  struct RFONT **v25; // rdi
  struct RFONT *v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+40h] [rbp-C0h] BYREF
  struct LFONT *v29; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v30[16]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-A0h] BYREF
  int v32; // [rsp+70h] [rbp-90h]
  _OWORD v33[2]; // [rsp+78h] [rbp-88h] BYREF
  _OWORD v34[4]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v35[80]; // [rsp+E0h] [rbp-20h] BYREF

  v4 = *(_QWORD *)this;
  v5 = *(_QWORD **)(v4 + 752);
  if ( !v5 || !*v5 )
  {
    v6 = 0;
    if ( !v5 )
    {
      v7 = *((_DWORD *)*a2 + 80);
      if ( v7 <= 0xA )
      {
        *(_QWORD *)(v4 + 752) = v4 + 760;
      }
      else
      {
        v8 = PALLOCMEM2(8 * v7, 1718382187LL, 1);
        *(_QWORD *)(*(_QWORD *)this + 752LL) = v8;
        if ( !v8 )
          return;
        v6 = 1;
      }
    }
    *(_DWORD *)(*(_QWORD *)this + 848LL) = 0;
    v9 = (struct RFONT *)(*a2)[6];
    v11 = (struct HLFONT__ *)(*a2)[267];
    v28 = *(_QWORD *)(*(_QWORD *)this + 112LL);
    v10 = v28;
    v26 = v9;
    LFONTOBJ::LFONTOBJ((LFONTOBJ *)&v29, v11, (struct PDEVOBJ *)&v26);
    v12 = *a2;
    v26 = *(struct RFONT **)this;
    DCOBJ::DCOBJ((DCOBJ *)v30, *v12);
    IFIOBJR::IFIOBJR(
      (IFIOBJR *)v34,
      *(const struct _IFIMETRICS **)(v10 + 32),
      (struct RFONTOBJ *)&v26,
      (struct DCOBJ *)v30);
    RFONTOBJ::ComputeEUDCLogfont(this, (struct _EUDCLOGFONT *)v33, (struct XDCOBJ *)a2);
    v13 = (struct RFONT **)v35;
    v14 = 0LL;
    v15 = *((_DWORD *)*a2 + 80);
    if ( v15 <= 0xA || (v13 = (struct RFONT **)PALLOCMEM2(8 * v15, 1718382187LL, 1)) != 0LL )
    {
      *(_DWORD *)(*(_QWORD *)this + 720LL) |= 0x200u;
      if ( ((_DWORD)(*a2)[6][14] & 0x8000) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 856LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 856LL));
        EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemCache", *(_QWORD *)(*(_QWORD *)this + 528LL));
        GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 528LL));
      }
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)*a2 + 80); i = (unsigned int)(i + 1) )
      {
        v31 = 0LL;
        v26 = 0LL;
        v27 = ghsemPublicPFT;
        GreAcquireSemaphore(ghsemPublicPFT);
        v17 = ppfeFromUFI((struct _UNIVERSAL_FONT_ID *)((*a2)[39] + 2 * i));
        v18 = v17;
        if ( v17 )
        {
          v31 = *(_QWORD *)v17;
          ++*(_DWORD *)(v31 + 68);
          v32 = 0;
        }
        SEMOBJ::vUnlock((SEMOBJ *)&v27);
        if ( v18 )
        {
          v34[0] = v33[0];
          v34[1] = v33[1];
          LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)&v28);
          if ( LinkedFontList )
          {
            for ( j = LinkedFontList->Flink; j != LinkedFontList; j = j->Flink )
            {
              if ( (struct PFE *)j[2].Flink == v18 || (struct PFE *)j[2].Blink == v18 )
              {
                Blink = (int)j[1].Blink;
                if ( Blink )
                  HIDWORD(v34[0]) = HIDWORD(v33[0]) * Blink / SHIDWORD(j[1].Blink);
                break;
              }
            }
          }
          RFONTOBJ::vInit((RFONTOBJ *)&v26, (struct XDCOBJ *)a2, v18, (struct _EUDCLOGFONT *)v34);
          if ( v26 )
          {
            v13[v14] = v26;
            v14 = (unsigned int)(v14 + 1);
          }
        }
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
        PFFREFOBJ::~PFFREFOBJ((PFFREFOBJ *)&v31);
      }
      if ( ((_DWORD)(*a2)[6][14] & 0x8000) != 0 )
      {
        GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 528LL));
        GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 856LL));
      }
      v22 = *(_QWORD *)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 0x200) != 0 )
      {
        if ( (_DWORD)v14 )
        {
          v23 = 0LL;
          v24 = (unsigned int)v14;
          do
          {
            *(_QWORD *)(v23 * 8 + *(_QWORD *)(*(_QWORD *)this + 752LL)) = v13[v23];
            ++v23;
            --v24;
          }
          while ( v24 );
          *(_DWORD *)(*(_QWORD *)this + 848LL) = v14;
          RFONTOBJ::UpdateFontLinksLockOrder(this);
        }
        else
        {
          if ( *(_QWORD *)(v22 + 752) != v22 + 760 )
            Win32FreePool(*(_QWORD *)(v22 + 752));
          *(_QWORD *)(*(_QWORD *)this + 752LL) = 0LL;
          *(_DWORD *)(*(_QWORD *)this + 848LL) = 0;
        }
        *(_DWORD *)(*(_QWORD *)this + 720LL) &= ~0x200u;
      }
      else if ( (_DWORD)v14 )
      {
        v25 = v13;
        do
        {
          v26 = *v25;
          RFONTOBJ::vMakeInactive(&v26);
          v26 = 0LL;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
          ++v25;
          --v14;
        }
        while ( v14 );
      }
      if ( v13 != (struct RFONT **)v35 )
        Win32FreePool(v13);
    }
    else if ( v6 )
    {
      Win32FreePool(*(_QWORD *)(*(_QWORD *)this + 752LL));
      *(_QWORD *)(*(_QWORD *)this + 752LL) = 0LL;
    }
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v30);
    v26 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
    LFONTOBJ::~LFONTOBJ(&v29);
  }
}
