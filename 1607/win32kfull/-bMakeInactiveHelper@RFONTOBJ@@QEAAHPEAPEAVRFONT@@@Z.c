/*
 * XREFs of ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C002E04C
 * Callers:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C002B454 (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002C5A0 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     vMakeInactiveHelper @ 0x1C028A148 (vMakeInactiveHelper.c)
 * Callees:
 *     ?bValid@RFONTOBJ@@QEAAHXZ @ 0x1C0022AB0 (-bValid@RFONTOBJ@@QEAAHXZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00294A0 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C0029AF0 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C002D748 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C002D840 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     TraceGreReleaseSemaphore @ 0x1C0159D38 (TraceGreReleaseSemaphore.c)
 *     ??1SEMOBJ@@QEAA@XZ @ 0x1C01BF4C8 (--1SEMOBJ@@QEAA@XZ.c)
 *     ?bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z @ 0x1C025A5E4 (-bActive@RFONTOBJ@@QEBA_NAEBVSEMOBJSHARED@@@Z.c)
 */

__int64 __fastcall RFONTOBJ::bMakeInactiveHelper(RFONTOBJ *this, struct RFONT **a2)
{
  unsigned int v3; // r15d
  __int64 v5; // rdx
  struct _FONTOBJ *v7; // r14
  const struct SEMOBJSHARED *v8; // rdx
  const struct SEMOBJSHARED *v9; // rdx
  RFONTOBJ *v10; // rcx
  __int64 v11; // r8
  struct RFONT *v12; // rcx
  struct RFONT *v13; // rcx
  struct RFONT *v14; // rcx
  __int64 i; // rdx
  struct RFONT *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // r9
  __int64 v22; // r10
  __int64 v23; // rax
  _QWORD *v24; // rcx
  __int64 v25; // rax
  int v26; // ecx
  unsigned int v27; // edx
  struct RFONT *v28; // rax
  struct _FONTOBJ *pvProducer; // rcx
  int v30; // edx
  int v31; // edx
  __int64 v32; // rcx
  _QWORD *v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v36[2]; // [rsp+28h] [rbp-38h] BYREF
  _QWORD v37[5]; // [rsp+38h] [rbp-28h] BYREF
  struct _FONTOBJ *v38; // [rsp+B0h] [rbp+50h] BYREF
  struct RFONT *v39; // [rsp+B8h] [rbp+58h] BYREF

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
  v36[0] = ghsemRFONTList;
  GreAcquireSemaphore(ghsemRFONTList);
  if ( !RFONTOBJ::bActive(this, v8) )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    TraceGreReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
    SEMOBJ::~SEMOBJ((SEMOBJ *)v36);
    return 0LL;
  }
  --*(_DWORD *)(*(_QWORD *)this + 492LL);
  if ( !RFONTOBJ::bActive(v10, v9) )
  {
    if ( a2 )
    {
      v12 = *(struct RFONT **)(*(_QWORD *)this + 728LL);
      if ( v12 )
      {
        *a2++ = v12;
        *(_QWORD *)(*(_QWORD *)this + 728LL) = 0LL;
      }
      v3 = 1;
      v13 = *(struct RFONT **)(*(_QWORD *)this + 736LL);
      if ( v13 )
      {
        *a2++ = v13;
        *(_QWORD *)(*(_QWORD *)this + 736LL) = 0LL;
      }
      v14 = *(struct RFONT **)(*(_QWORD *)this + 744LL);
      if ( v14 )
      {
        *a2++ = v14;
        *(_QWORD *)(*(_QWORD *)this + 744LL) = 0LL;
      }
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)this + 848LL); i = (unsigned int)(i + 1) )
      {
        v11 = (unsigned int)i;
        v16 = *(struct RFONT **)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8LL * (unsigned int)i);
        if ( v16 )
        {
          *a2++ = v16;
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8LL * (unsigned int)i) = 0LL;
        }
      }
      v17 = *(_QWORD *)(*(_QWORD *)this + 752LL);
      if ( v17 && v17 != *(_QWORD *)this + 760LL )
        Win32FreePool(v17, i, v11);
      *(_QWORD *)(*(_QWORD *)this + 752LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 848LL) = 0;
      *(_DWORD *)(*(_QWORD *)this + 840LL) = 0;
    }
    v18 = *(_QWORD *)this;
    v19 = *(_QWORD *)(*(_QWORD *)this + 96LL);
    v35 = v19;
    if ( (*(_DWORD *)(v19 + 56) & 0x800000) != 0 )
      v20 = *(_QWORD *)(*(_QWORD *)(v19 + 3536) + 1552LL);
    else
      v20 = *(_QWORD *)(v19 + 1552);
    v21 = *(_QWORD *)(v18 + 496);
    v22 = v21 + 496;
    if ( !v21 )
      v22 = 0LL;
    v23 = *(_QWORD *)(v18 + 504);
    v24 = (_QWORD *)(v23 + 496);
    if ( !v23 )
      v24 = 0LL;
    if ( v21 )
    {
      *(_QWORD *)(v22 + 8) = v23;
      if ( v24 )
        *v24 = *(_QWORD *)(v18 + 496);
    }
    else
    {
      v20 = *(_QWORD *)(v18 + 504);
      if ( v24 )
        *v24 = 0LL;
    }
    if ( (*(_DWORD *)(v19 + 56) & 0x800000) != 0 )
      *(_QWORD *)(*(_QWORD *)(v19 + 3536) + 1552LL) = v20;
    else
      *(_QWORD *)(v19 + 1552) = v20;
    v25 = *(_QWORD *)(*(_QWORD *)this + 120LL);
    if ( *(_DWORD *)(v25 + 56) || *(_DWORD *)(v25 + 60) || *(_QWORD *)(v25 + 160) )
    {
      v26 = *(_DWORD *)(v19 + 56) & 0x800000;
      if ( v26 )
        v27 = *(_DWORD *)(*(_QWORD *)(v19 + 3536) + 1568LL);
      else
        v27 = *(_DWORD *)(v19 + 1568);
      if ( v27 < 0x40 )
      {
        if ( v26 )
          v30 = *(_DWORD *)(*(_QWORD *)(v19 + 3536) + 1568LL);
        else
          v30 = *(_DWORD *)(v19 + 1568);
        v31 = v30 + 1;
        if ( v26 )
          *(_DWORD *)(*(_QWORD *)(v19 + 3536) + 1568LL) = v31;
        else
          *(_DWORD *)(v19 + 1568) = v31;
      }
      else
      {
        v28 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v35);
        pvProducer = (struct _FONTOBJ *)v28;
        if ( v28 )
        {
          do
          {
            v7 = pvProducer;
            pvProducer = (struct _FONTOBJ *)pvProducer[7].pvProducer;
          }
          while ( pvProducer );
        }
        v38 = v7;
        v39 = v28;
        RFONTOBJ::vRemove((__int64)&v38, &v39, 1);
        PDEVOBJ::prfntInactive((PDEVOBJ *)&v35, v39);
        v38 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v38);
      }
      if ( (*(_DWORD *)(v19 + 56) & 0x800000) != 0 )
        v32 = *(_QWORD *)(*(_QWORD *)(v19 + 3536) + 1560LL);
      else
        v32 = *(_QWORD *)(v19 + 1560);
      v33 = (_QWORD *)(v32 + 496);
      v34 = (_QWORD *)(*(_QWORD *)this + 496LL);
      if ( !v32 )
        v33 = 0LL;
      if ( *(_QWORD *)this != -496LL )
      {
        *v34 = 0LL;
        v34[1] = v32;
        if ( v33 )
          *v33 = *(_QWORD *)this;
        v32 = *(_QWORD *)this;
      }
      if ( (*(_DWORD *)(v19 + 56) & 0x800000) != 0 )
        *(_QWORD *)(*(_QWORD *)(v19 + 3536) + 1560LL) = v32;
      else
        *(_QWORD *)(v19 + 1560) = v32;
    }
    else
    {
      v7 = *(struct _FONTOBJ **)this;
    }
  }
  SEMOBJ::~SEMOBJ((SEMOBJ *)v36);
  if ( a2 && !v3 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    TraceGreReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  if ( v7 )
  {
    v36[0] = v7[1].pvProducer;
    v38 = v7;
    memset(v37, 0, 32);
    PushThreadGuardedObject(v37, v7, RestartInactiveHelper);
    RFONTOBJ::vDeleteRFONT(&v38, 0LL, (struct PFFOBJ *)v36, 1);
    PopThreadGuardedObject(v37);
    v38 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v38);
  }
  *(_QWORD *)this = 0LL;
  return v3;
}
