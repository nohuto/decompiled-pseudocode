/*
 * XREFs of ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0022FFC
 * Callers:
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C0025B2C (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C002667C (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     vMakeInactiveHelper @ 0x1C028B5AC (vMakeInactiveHelper.c)
 * Callees:
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C001C53C (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C001D0B4 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0027200 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C00272FC (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 */

__int64 __fastcall RFONTOBJ::bMakeInactiveHelper(struct RFONT **this, struct RFONT **a2)
{
  struct RFONT **v2; // r14
  unsigned int v4; // r12d
  struct RFONT *v5; // r15
  struct RFONT *v6; // rax
  struct RFONT *v7; // rcx
  struct RFONT *v8; // rcx
  unsigned int i; // edx
  struct RFONT *v10; // rax
  struct RFONT *v11; // rcx
  struct RFONT *v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // rax
  _QWORD *v18; // rcx
  __int64 v19; // rax
  int v20; // ecx
  unsigned int v21; // edx
  struct RFONT *v22; // rax
  struct RFONT *v23; // rcx
  int v24; // edx
  int v25; // edx
  struct RFONT *v26; // rcx
  struct RFONT **v27; // rdx
  _QWORD *v28; // rax
  __int64 v30; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v31[4]; // [rsp+30h] [rbp-20h] BYREF
  struct RFONT *v32; // [rsp+90h] [rbp+40h] BYREF
  struct RFONT *v33; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+58h] BYREF

  v2 = a2;
  v4 = 0;
  if ( !*this || !*((_DWORD *)*this + 123) )
    return 0LL;
  v5 = 0LL;
  if ( a2 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  GreAcquireSemaphore(ghsemRFONTList);
  if ( !--*((_DWORD *)*this + 123) )
  {
    if ( v2 )
    {
      v6 = (struct RFONT *)*((_QWORD *)*this + 91);
      if ( v6 )
      {
        *v2++ = v6;
        *((_QWORD *)*this + 91) = 0LL;
      }
      v4 = 1;
      v7 = (struct RFONT *)*((_QWORD *)*this + 92);
      if ( v7 )
      {
        *v2++ = v7;
        *((_QWORD *)*this + 92) = 0LL;
      }
      v8 = (struct RFONT *)*((_QWORD *)*this + 93);
      if ( v8 )
      {
        *v2++ = v8;
        *((_QWORD *)*this + 93) = 0LL;
      }
      for ( i = 0; i < *((_DWORD *)*this + 212); ++i )
      {
        v10 = *(struct RFONT **)(*((_QWORD *)*this + 94) + 8LL * i);
        if ( v10 )
        {
          *v2++ = v10;
          *(_QWORD *)(*((_QWORD *)*this + 94) + 8LL * i) = 0LL;
        }
      }
      v11 = (struct RFONT *)*((_QWORD *)*this + 94);
      if ( v11 && v11 != (struct RFONT *)((char *)*this + 760) )
        Win32FreePool(v11);
      *((_QWORD *)*this + 94) = 0LL;
      *((_DWORD *)*this + 212) = 0;
      *((_DWORD *)*this + 210) = 0;
    }
    v12 = *this;
    v13 = *((_QWORD *)*this + 12);
    v34 = v13;
    if ( (*(_DWORD *)(v13 + 56) & 0x800000) != 0 )
      v14 = *(_QWORD *)(*(_QWORD *)(v13 + 3544) + 1552LL);
    else
      v14 = *(_QWORD *)(v13 + 1552);
    v15 = *((_QWORD *)v12 + 62);
    v16 = v15 + 496;
    if ( !v15 )
      v16 = 0LL;
    v17 = *((_QWORD *)v12 + 63);
    v18 = (_QWORD *)(v17 + 496);
    if ( !v17 )
      v18 = 0LL;
    if ( v15 )
    {
      *(_QWORD *)(v16 + 8) = v17;
      if ( v18 )
        *v18 = *((_QWORD *)v12 + 62);
    }
    else
    {
      v14 = *((_QWORD *)v12 + 63);
      if ( v18 )
        *v18 = 0LL;
    }
    if ( (*(_DWORD *)(v13 + 56) & 0x800000) != 0 )
      *(_QWORD *)(*(_QWORD *)(v13 + 3544) + 1552LL) = v14;
    else
      *(_QWORD *)(v13 + 1552) = v14;
    v19 = *((_QWORD *)*this + 15);
    if ( *(_DWORD *)(v19 + 56) || *(_DWORD *)(v19 + 60) || *(_QWORD *)(v19 + 160) )
    {
      v20 = *(_DWORD *)(v13 + 56) & 0x800000;
      if ( v20 )
        v21 = *(_DWORD *)(*(_QWORD *)(v13 + 3544) + 1568LL);
      else
        v21 = *(_DWORD *)(v13 + 1568);
      if ( v21 < 0x40 )
      {
        if ( v20 )
          v24 = *(_DWORD *)(*(_QWORD *)(v13 + 3544) + 1568LL);
        else
          v24 = *(_DWORD *)(v13 + 1568);
        v25 = v24 + 1;
        if ( v20 )
          *(_DWORD *)(*(_QWORD *)(v13 + 3544) + 1568LL) = v25;
        else
          *(_DWORD *)(v13 + 1568) = v25;
      }
      else
      {
        v22 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v34);
        v23 = v22;
        while ( v22 )
        {
          v5 = v22;
          v22 = (struct RFONT *)*((_QWORD *)v22 + 63);
        }
        v33 = v23;
        v32 = v5;
        RFONTOBJ::vRemove(&v32, &v33, 1LL);
        PDEVOBJ::prfntInactive((PDEVOBJ *)&v34, v33);
        v32 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
      }
      if ( (*(_DWORD *)(v13 + 56) & 0x800000) != 0 )
        v26 = *(struct RFONT **)(*(_QWORD *)(v13 + 3544) + 1560LL);
      else
        v26 = *(struct RFONT **)(v13 + 1560);
      v27 = (struct RFONT **)((char *)v26 + 496);
      v28 = (_QWORD *)((char *)*this + 496);
      if ( !v26 )
        v27 = 0LL;
      if ( *this != (struct RFONT *)-496LL )
      {
        *v28 = 0LL;
        v28[1] = v26;
        if ( v27 )
          *v27 = *this;
        v26 = *this;
      }
      if ( (*(_DWORD *)(v13 + 56) & 0x800000) != 0 )
        *(_QWORD *)(*(_QWORD *)(v13 + 3544) + 1560LL) = v26;
      else
        *(_QWORD *)(v13 + 1560) = v26;
    }
    else
    {
      v5 = *this;
    }
  }
  if ( ghsemRFONTList )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemRFONTList);
    GreReleaseSemaphoreInternal(ghsemRFONTList);
  }
  if ( v2 && !v4 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  if ( v5 )
  {
    v30 = *((_QWORD *)v5 + 15);
    v32 = v5;
    memset(v31, 0, sizeof(v31));
    PushThreadGuardedObject(v31, v5, RestartInactiveHelper);
    RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&v32, 0LL, (struct PFFOBJ *)&v30, 1);
    PopThreadGuardedObject(v31);
    v32 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v32);
  }
  *this = 0LL;
  return v4;
}
