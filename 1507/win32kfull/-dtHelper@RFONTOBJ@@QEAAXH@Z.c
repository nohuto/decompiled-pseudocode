/*
 * XREFs of ?dtHelper@RFONTOBJ@@QEAAXH@Z @ 0x1C002E718
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C001E8B0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     GreGetGlyphOutlineInternal @ 0x1C014EFE4 (GreGetGlyphOutlineInternal.c)
 *     RFONTOBJ_dtHelperWrap @ 0x1C015CFE0 (RFONTOBJ_dtHelperWrap.c)
 * Callees:
 *     ?vReleaseCache@RFONTOBJ@@QEAAXXZ @ 0x1C002F3F8 (-vReleaseCache@RFONTOBJ@@QEAAXXZ.c)
 *     ??0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z @ 0x1C010095C (--0PUBLIC_PFTOBJ@@QEAA@PEAVPFT@@@Z.c)
 *     ??1RFONTTMPOBJ@@QEAA@XZ @ 0x1C0121138 (--1RFONTTMPOBJ@@QEAA@XZ.c)
 */

void __fastcall RFONTOBJ::dtHelper(RFONTOBJ *this, int a2)
{
  __int64 v4; // rcx
  HSEMAPHORE v5; // rcx
  int v6; // ecx
  unsigned int v7; // eax
  int v8; // eax
  __int64 j; // rdi
  struct PFT *v10; // rdx
  int v11; // eax
  __int64 i; // rdi
  struct PFT *v13; // rdx
  struct PFT *v14; // rdx
  struct PFT *v15; // rdx
  _BYTE v16[8]; // [rsp+20h] [rbp-10h] BYREF
  _BYTE v17[8]; // [rsp+28h] [rbp-8h] BYREF
  char v18; // [rsp+50h] [rbp+20h] BYREF
  char v19; // [rsp+60h] [rbp+30h] BYREF
  char v20; // [rsp+68h] [rbp+38h] BYREF

  GreAcquireSemaphore(*(_QWORD *)(*(_QWORD *)this + 856LL));
  if ( (*(_DWORD *)(*(_QWORD *)this + 720LL) & 0x180) == 0x80 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)this + 728LL);
    if ( v4 )
    {
      if ( (unsigned int)GreIsSemaphoreOwnedByCurrentThread(*(_QWORD *)(v4 + 528)) )
      {
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v18, *(struct PFT **)(*(_QWORD *)this + 728LL));
        RFONTOBJ::vReleaseCache((RFONTOBJ *)&v18);
        v5 = ghsemEUDC1;
        *(_DWORD *)(*(_QWORD *)this + 720LL) &= ~0x80u;
        GreAcquireSemaphore(v5);
        --gcEUDCCount;
        EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
        GreReleaseSemaphoreInternal(ghsemEUDC1);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v18);
      }
    }
  }
  v6 = *(_DWORD *)(*(_QWORD *)this + 720LL);
  if ( (v6 & 1) != 0 )
  {
    if ( (v6 & 0x100) == 0 )
    {
      v7 = *(_DWORD *)(*(_QWORD *)this + 848LL);
      if ( v7 > 0x20 )
      {
        v11 = v7 - 1;
        for ( i = v11; i >= 0; --i )
        {
          v13 = *(struct PFT **)(*(_QWORD *)(*(_QWORD *)this + 752LL) + 8 * i);
          if ( v13 )
          {
            PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v20, v13);
            RFONTOBJ::vReleaseCache((RFONTOBJ *)&v20);
            RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v20);
          }
        }
      }
      else
      {
        v8 = v7 - 1;
        for ( j = v8; j >= 0; --j )
        {
          v10 = *(struct PFT **)(*(_QWORD *)(*(_QWORD *)this + 752LL)
                               + 8LL * *(unsigned __int8 *)(*(_QWORD *)this + j + 864));
          if ( v10 )
          {
            PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)&v19, v10);
            RFONTOBJ::vReleaseCache((RFONTOBJ *)&v19);
            RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)&v19);
          }
        }
      }
      v14 = *(struct PFT **)(*(_QWORD *)this + 744LL);
      if ( v14 )
      {
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v16, v14);
        RFONTOBJ::vReleaseCache((RFONTOBJ *)v16);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v16);
      }
      v15 = *(struct PFT **)(*(_QWORD *)this + 736LL);
      if ( v15 )
      {
        PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v17, v15);
        RFONTOBJ::vReleaseCache((RFONTOBJ *)v17);
        RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v17);
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
