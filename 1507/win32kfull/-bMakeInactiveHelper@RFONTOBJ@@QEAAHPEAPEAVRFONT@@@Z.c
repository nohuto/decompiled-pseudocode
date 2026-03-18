/*
 * XREFs of ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C002A864
 * Callers:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C002D2B8 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002DF20 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     vMakeInactiveHelper @ 0x1C028B758 (vMakeInactiveHelper.c)
 * Callees:
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0019EF0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C002F444 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C0125E48 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C0126358 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0126370 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     TraceGreReleaseSemaphore @ 0x1C015CBD8 (TraceGreReleaseSemaphore.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01C1324 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C029AA74 (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 */

__int64 __fastcall RFONTOBJ::bMakeInactiveHelper(RFONTOBJ *this, struct RFONT **a2)
{
  unsigned int v3; // r15d
  __int64 v5; // rdx
  struct RFONT *v7; // r14
  const struct SEMOBJSHARED *v8; // rdx
  const struct SEMOBJSHARED *v9; // rdx
  RFONTOBJ *v10; // rcx
  struct RFONT *v11; // rcx
  struct RFONT *v12; // rcx
  struct RFONT *v13; // rcx
  unsigned int i; // edx
  struct RFONT *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // r9
  __int64 v21; // r10
  __int64 v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  int v25; // ecx
  unsigned int v26; // edx
  struct RFONT *v27; // rax
  struct RFONT *j; // rcx
  int v29; // edx
  int v30; // edx
  __int64 v31; // rcx
  _QWORD *v32; // rdx
  _QWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v38[2]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v39[5]; // [rsp+38h] [rbp-28h] BYREF
  struct RFONT *v40; // [rsp+B0h] [rbp+50h] BYREF
  struct RFONT *v41; // [rsp+B8h] [rbp+58h] BYREF

  v3 = 0;
  if ( !RFONTOBJ::bValid(this) )
    return 0LL;
  v7 = 0LL;
  if ( v5 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    TraceGreReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  v38[0] = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  if ( !RFONTOBJ::bActive(this, v8) )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    TraceGreReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    SEMOBJ::~SEMOBJ((SEMOBJ *)v38);
    return 0LL;
  }
  --*(_DWORD *)(*(_QWORD *)this + 492LL);
  if ( !RFONTOBJ::bActive(v10, v9) )
  {
    if ( a2 )
    {
      v11 = *(struct RFONT **)(*(_QWORD *)this + 728LL);
      if ( v11 )
      {
        *a2++ = v11;
        *(_QWORD *)(*(_QWORD *)this + 728LL) = 0LL;
      }
      v3 = 1;
      v12 = *(struct RFONT **)(*(_QWORD *)this + 736LL);
      if ( v12 )
      {
        *a2++ = v12;
        *(_QWORD *)(*(_QWORD *)this + 736LL) = 0LL;
      }
      v13 = *(struct RFONT **)(*(_QWORD *)this + 744LL);
      if ( v13 )
      {
        *a2++ = v13;
        *(_QWORD *)(*(_QWORD *)this + 744LL) = 0LL;
      }
      for ( i = 0; i < *(_DWORD *)(*(_QWORD *)this + 848LL); ++i )
      {
        v15 = *(struct RFONT **)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8LL * i);
        if ( v15 )
        {
          *a2++ = v15;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8LL * i) = 0LL;
        }
      }
      v16 = *(_QWORD *)(*(_QWORD *)this + 752LL);
      if ( v16 && v16 != *(_QWORD *)this + 760LL )
        Win32FreePool(v16);
      *(_QWORD *)(*(_QWORD *)this + 752LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 848LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 840LL) = 0;
    }
    v17 = *(_QWORD *)this;
    v18 = *(_QWORD *)(*(_QWORD *)this + 96LL);
    v37 = v18;
    if ( (*(_DWORD *)(v18 + 56) & 0x800000) != 0 )
      v19 = *(_QWORD *)(*(_QWORD *)(v18 + 3544) + 1552LL);
    else
      v19 = *(_QWORD *)(v18 + 1552);
    v20 = *(_QWORD *)(v17 + 496);
    v21 = v20 + 496;
    if ( !v20 )
      v21 = 0LL;
    v22 = *(_QWORD *)(v17 + 504);
    v23 = (_QWORD *)(v22 + 496);
    if ( !v22 )
      v23 = 0LL;
    if ( v20 )
    {
      *(_QWORD *)(v21 + 8) = v22;
      if ( v23 )
        *v23 = *(_QWORD *)(v17 + 496);
    }
    else
    {
      v19 = *(_QWORD *)(v17 + 504);
      if ( v23 )
        *v23 = 0LL;
    }
    if ( (*(_DWORD *)(v18 + 56) & 0x800000) != 0 )
      *(_QWORD *)(*(_QWORD *)(v18 + 3544) + 1552LL) = v19;
    else
      *(_QWORD *)(v18 + 1552) = v19;
    v24 = *(_QWORD *)(*(_QWORD *)this + 120LL);
    if ( *(_DWORD *)(v24 + 56) || *(_DWORD *)(v24 + 60) || *(_QWORD *)(v24 + 160) )
    {
      v25 = *(_DWORD *)(v18 + 56) & 0x800000;
      if ( v25 )
        v26 = *(_DWORD *)(*(_QWORD *)(v18 + 3544) + 1568LL);
      else
        v26 = *(_DWORD *)(v18 + 1568);
      if ( v26 < 0x40 )
      {
        if ( v25 )
          v29 = *(_DWORD *)(*(_QWORD *)(v18 + 3544) + 1568LL);
        else
          v29 = *(_DWORD *)(v18 + 1568);
        v30 = v29 + 1;
        if ( v25 )
          *(_DWORD *)(*(_QWORD *)(v18 + 3544) + 1568LL) = v30;
        else
          *(_DWORD *)(v18 + 1568) = v30;
      }
      else
      {
        v27 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v37);
        for ( j = v27; j; j = (struct RFONT *)*((_QWORD *)j + 63) )
          v7 = j;
        v40 = v7;
        v41 = v27;
        RFONTOBJ::vRemove(&v40, &v41, 1LL);
        PDEVOBJ::prfntInactive((PDEVOBJ *)&v37, v41);
        v40 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v40);
      }
      if ( (*(_DWORD *)(v18 + 56) & 0x800000) != 0 )
        v31 = *(_QWORD *)(*(_QWORD *)(v18 + 3544) + 1560LL);
      else
        v31 = *(_QWORD *)(v18 + 1560);
      v32 = (_QWORD *)(v31 + 496);
      v33 = (_QWORD *)(*(_QWORD *)this + 496LL);
      if ( !v31 )
        v32 = 0LL;
      if ( *(_QWORD *)this != -496LL )
      {
        *v33 = 0LL;
        v33[1] = v31;
        if ( v32 )
          *v32 = *(_QWORD *)this;
        v31 = *(_QWORD *)this;
      }
      if ( (*(_DWORD *)(v18 + 56) & 0x800000) != 0 )
        *(_QWORD *)(*(_QWORD *)(v18 + 3544) + 1560LL) = v31;
      else
        *(_QWORD *)(v18 + 1560) = v31;
    }
    else
    {
      v7 = *(struct RFONT **)this;
    }
  }
  SEMOBJ::~SEMOBJ((SEMOBJ *)v38);
  if ( a2 && !v3 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    TraceGreReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  if ( v7 )
  {
    v38[0] = *((_QWORD *)v7 + 15);
    v40 = v7;
    memset(v39, 0, 32);
    PushThreadGuardedObject(v39, v7, RestartInactiveHelper);
    RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v40, 0LL, (struct PFFOBJ *)v38, 1);
    PopThreadGuardedObject(v39, v34, v35, v36, v37);
    v40 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v40);
  }
  *(_QWORD *)this = 0LL;
  return v3;
}
