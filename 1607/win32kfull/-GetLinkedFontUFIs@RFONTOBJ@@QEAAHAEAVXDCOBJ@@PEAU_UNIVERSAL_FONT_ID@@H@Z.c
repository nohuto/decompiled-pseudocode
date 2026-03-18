/*
 * XREFs of ?GetLinkedFontUFIs@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C0299C1C
 * Callers:
 *     NtGdiGetLinkedUFIs @ 0x1C0268030 (NtGdiGetLinkedUFIs.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C000AA50 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1C0027C60 (-pGetLinkedFontList@PFEOBJ@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002C5A0 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C0124DAC (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     TraceGreReleaseSemaphore @ 0x1C0159D38 (TraceGreReleaseSemaphore.c)
 *     ?AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z @ 0x1C0299B1C (-AddUFIToBuffer@RFONTOBJ@@AEAAXPEAVPFE@@AEAPEAU_UNIVERSAL_FONT_ID@@AEAHH@Z.c)
 *     ?GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z @ 0x1C0299B7C (-GetEUDCDefaultFontPFE@RFONTOBJ@@AEAAPEAVPFE@@I@Z.c)
 *     ?bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z @ 0x1C029A060 (-bInitSystemTT@RFONTOBJ@@QEAAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall RFONTOBJ::GetLinkedFontUFIs(
        RFONTOBJ *this,
        struct XDCOBJ *a2,
        struct _UNIVERSAL_FONT_ID *a3,
        int a4)
{
  unsigned int v4; // r13d
  unsigned int v6; // ebx
  struct _UNIVERSAL_FONT_ID *v7; // rsi
  struct PFT *v11; // rdx
  struct _LIST_ENTRY *LinkedFontList; // rax
  struct _LIST_ENTRY *Flink; // r12
  struct PFE *v14; // rdx
  struct PFT *v15; // rdx
  signed int v16; // eax
  int v17; // ebx
  struct PFE *EUDCDefaultFontPFE; // rax
  struct PFT *v19; // rdx
  int v20; // eax
  struct PFT *v21; // rdx
  __int64 v22; // rcx
  unsigned int i; // r12d
  int v24; // eax
  struct PFT *v25; // rdx
  int v26; // eax
  int v27; // ecx
  _QWORD v28[2]; // [rsp+30h] [rbp-10h] BYREF
  struct _UNIVERSAL_FONT_ID *v29; // [rsp+80h] [rbp+40h] BYREF
  int v30; // [rsp+88h] [rbp+48h] BYREF

  v29 = a3;
  v4 = 0;
  v6 = 0;
  v7 = a3;
  v30 = 0;
  if ( a4 && !a3 )
    return 0LL;
  if ( *(_DWORD *)(*(_QWORD *)this + 716LL) )
  {
    if ( !*(_QWORD *)(*(_QWORD *)this + 728LL) && !RFONTOBJ::bInitSystemTT(this, a2) )
      return 0LL;
    *(_DWORD *)(*(_QWORD *)this + 720LL) |= 0x100u;
  }
  if ( !gbFastLinkedFontUFIsEnabled )
  {
    GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 856LL));
    if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 1) == 0 )
    {
      GreAcquireSemaphore(ghsemEUDC1);
      ++gcEUDCCount;
      TraceGreReleaseSemaphore((__int64)L"ghsemEUDC1", (__int64)ghsemEUDC1);
      GreReleaseSemaphoreInternal(ghsemEUDC1);
      RFONTOBJ::vInitEUDC(this, a2);
      *(_DWORD *)(*(_QWORD *)this + 720LL) |= 0x101u;
    }
    TraceGreReleaseSemaphore((__int64)L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 856LL));
    GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 856LL));
    v21 = *(struct PFT **)(*(_QWORD *)this + 728LL);
    if ( v21 )
    {
      v6 = 1;
      if ( a4 > 0 )
      {
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v28, v21);
        *(_QWORD *)v7 = *(_QWORD *)(*(_QWORD *)(v28[0] + 112LL) + 92LL);
        v7 = (struct _UNIVERSAL_FONT_ID *)((char *)v7 + 8);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v28);
      }
    }
    v22 = *(_QWORD *)this;
    for ( i = 0; i < *(_DWORD *)(*(_QWORD *)this + 848LL); ++i )
    {
      v24 = v6++;
      if ( v24 < a4 )
      {
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v28, *(struct PFT **)(*(_QWORD *)(v22 + 752) + 8LL * i));
        *(_QWORD *)v7 = *(_QWORD *)(*(_QWORD *)(v28[0] + 112LL) + 92LL);
        v7 = (struct _UNIVERSAL_FONT_ID *)((char *)v7 + 8);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v28);
      }
      v22 = *(_QWORD *)this;
    }
    v25 = *(struct PFT **)(*(_QWORD *)this + 744LL);
    if ( v25 )
    {
      v26 = v6++;
      if ( v26 < a4 )
      {
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v28, v25);
        *(_QWORD *)v7 = *(_QWORD *)(*(_QWORD *)(v28[0] + 112LL) + 92LL);
        v7 = (struct _UNIVERSAL_FONT_ID *)((char *)v7 + 8);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v28);
      }
    }
    v19 = *(struct PFT **)(*(_QWORD *)this + 736LL);
    if ( !v19 )
      return v6;
    v27 = v6++;
    if ( v27 >= a4 )
      return v6;
    goto LABEL_39;
  }
  v11 = *(struct PFT **)(*(_QWORD *)this + 728LL);
  if ( v11 )
  {
    v6 = 1;
    v30 = 1;
    if ( a4 > 0 )
    {
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v28, v11);
      *(_QWORD *)v7 = *(_QWORD *)(*(_QWORD *)(v28[0] + 112LL) + 92LL);
      v7 = (struct _UNIVERSAL_FONT_ID *)((char *)v7 + 8);
      v29 = v7;
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v28);
    }
  }
  LOBYTE(v4) = *(_DWORD *)(*(_QWORD *)this + 852LL) != 0;
  GreAcquireSemaphore(ghsemEUDC1);
  ++gcEUDCCount;
  TraceGreReleaseSemaphore((__int64)L"ghsemEUDC1", (__int64)ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  v28[0] = *(_QWORD *)(*(_QWORD *)this + 112LL);
  LinkedFontList = PFEOBJ::pGetLinkedFontList((PFEOBJ *)v28);
  Flink = LinkedFontList->Flink;
  if ( LinkedFontList->Flink != LinkedFontList )
  {
    do
    {
      v14 = (struct PFE *)*((_QWORD *)&Flink[2].Flink + v4);
      if ( !v14 )
        v14 = (struct PFE *)Flink[2].Flink;
      RFONTOBJ::AddUFIToBuffer(this, v14, &v29, &v30, a4);
      Flink = Flink->Flink;
    }
    while ( Flink != PFEOBJ::pGetLinkedFontList((PFEOBJ *)v28) );
    v7 = v29;
    v6 = v30;
  }
  GreAcquireSemaphore(ghsemEUDC1);
  --gcEUDCCount;
  TraceGreReleaseSemaphore((__int64)L"ghsemEUDC1", (__int64)ghsemEUDC1);
  GreReleaseSemaphoreInternal(ghsemEUDC1);
  v15 = *(struct PFT **)(*(_QWORD *)this + 744LL);
  if ( v15 )
  {
    v16 = v6;
    v17 = v6 + 1;
    v30 = v17;
    if ( v16 < a4 )
    {
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v28, v15);
      *(_QWORD *)v7 = *(_QWORD *)(*(_QWORD *)(v28[0] + 112LL) + 92LL);
      v7 = (struct _UNIVERSAL_FONT_ID *)((char *)v7 + 8);
      v29 = v7;
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v28);
    }
  }
  else
  {
    EUDCDefaultFontPFE = RFONTOBJ::GetEUDCDefaultFontPFE(this, v4);
    RFONTOBJ::AddUFIToBuffer(this, EUDCDefaultFontPFE, &v29, &v30, a4);
    v7 = v29;
    v17 = v30;
  }
  v19 = *(struct PFT **)(*(_QWORD *)this + 736LL);
  if ( v19 )
  {
    v20 = v17;
    v6 = v17 + 1;
    if ( v20 < a4 )
    {
LABEL_39:
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v28, v19);
      *(_QWORD *)v7 = *(_QWORD *)(*(_QWORD *)(v28[0] + 112LL) + 92LL);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v28);
    }
  }
  else
  {
    GreAcquireSemaphore(ghsemEUDC1);
    RFONTOBJ::AddUFIToBuffer(this, (struct PFE *)(&gappfeSysEUDC)[v4], &v29, &v30, a4);
    TraceGreReleaseSemaphore((__int64)L"ghsemEUDC1", (__int64)ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    return (unsigned int)v30;
  }
  return v6;
}
