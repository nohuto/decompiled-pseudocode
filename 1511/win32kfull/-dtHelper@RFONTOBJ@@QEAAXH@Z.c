/*
 * XREFs of ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C0026AEC
 * Callers:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C002A200 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     GreGetGlyphOutlineInternal @ 0x1C0105EA4 (GreGetGlyphOutlineInternal.c)
 *     RFONTOBJ_dtHelperWrap @ 0x1C01527E0 (RFONTOBJ_dtHelperWrap.c)
 * Callees:
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0009550 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C00271B4 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::dtHelper(RFONTOBJ *this, int a2)
{
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // eax
  __int64 j; // rdi
  __int64 v8; // rcx
  HSEMAPHORE v9; // rcx
  int v10; // eax
  __int64 i; // rdi
  __int64 v12; // [rsp+20h] [rbp-10h] BYREF
  __int64 v13; // [rsp+28h] [rbp-8h] BYREF
  __int64 v14; // [rsp+50h] [rbp+20h] BYREF
  __int64 v15; // [rsp+60h] [rbp+30h] BYREF
  __int64 v16; // [rsp+68h] [rbp+38h] BYREF

  GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 856LL));
  if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 0x180) == 0x80 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)this + 728LL);
    if ( v8 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(*(_QWORD *)(v8 + 528)) )
      {
        v14 = *(_QWORD *)(*(_QWORD *)this + 728LL);
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v14);
        v9 = ghsemEUDC1;
        *(_DWORD *)(*(_QWORD *)this + 720LL) &= ~0x80u;
        GreAcquireSemaphore(v9);
        --gcEUDCCount;
        EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
        GreReleaseSemaphoreInternal(ghsemEUDC1);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v14);
      }
    }
  }
  v4 = *(_DWORD *)(*(_QWORD *)this + 720LL);
  if ( (v4 & 1) != 0 )
  {
    if ( (v4 & 0x100) == 0 )
    {
      v5 = *(_DWORD *)(*(_QWORD *)this + 848LL);
      if ( v5 > 0x20 )
      {
        v10 = v5 - 1;
        for ( i = v10; i >= 0; --i )
        {
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8 * i) )
          {
            v16 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8 * i);
            RFONTOBJ::vReleaseCache((RFONTOBJ *)&v16);
            RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v16);
          }
        }
      }
      else
      {
        v6 = v5 - 1;
        for ( j = v6; j >= 0; --j )
        {
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8LL * *(unsigned __int8 *)(*(_QWORD *)this + j + 864)) )
          {
            v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 752LL)
                            + 8LL * *(unsigned __int8 *)(*(_QWORD *)this + j + 864));
            RFONTOBJ::vReleaseCache((RFONTOBJ *)&v15);
            RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v15);
          }
        }
      }
      if ( *(_QWORD *)(*(_QWORD *)this + 744LL) )
      {
        v12 = *(_QWORD *)(*(_QWORD *)this + 744LL);
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v12);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v12);
      }
      if ( *(_QWORD *)(*(_QWORD *)this + 736LL) )
      {
        v13 = *(_QWORD *)(*(_QWORD *)this + 736LL);
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v13);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v13);
      }
    }
    if ( a2 )
    {
      GreAcquireSemaphore(ghsemEUDC1);
      --gcEUDCCount;
      EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
      GreReleaseSemaphoreInternal(ghsemEUDC1);
    }
  }
  *(_DWORD *)(*(_QWORD *)this + 720LL) &= 0xFFFFFEFE;
  EtwTraceGreLockReleaseSemaphore(L"prfnt->hsemEUDC", *(_QWORD *)(*(_QWORD *)this + 856LL));
  GreReleaseSemaphoreInternal(*(_QWORD *)(*(_QWORD *)this + 856LL));
}
