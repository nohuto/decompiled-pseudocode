/*
 * XREFs of GreRealizePalette @ 0x1401FD0C8
 * Callers:
 *     xxxRealizePalette @ 0x140292500 (xxxRealizePalette.c)
 *     ?DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z @ 0x140346178 (-DrvRealizeHalftonePalette@@YAPEAVPALETTE@@PEAUHDEV__@@H@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C6B4 (--$GreReleaseSemaphoreCommon@$03P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14006B768 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006BE08 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0?$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14006FAEC (--0-$SEMOBJ@$0N@@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vUnlock@?$SEMOBJ@$0N@@@QEAAXXZ @ 0x140071BDC (-vUnlock@-$SEMOBJ@$0N@@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??$GrepReleaseLockValidate@$0BE@@@YAXXZ @ 0x1400C69D0 (--$GrepReleaseLockValidate@$0BE@@@YAXXZ.c)
 *     ??0?$SEMOBJ@$0BE@@@QEAA@XZ @ 0x1400C6A7C (--0-$SEMOBJ@$0BE@@@QEAA@XZ.c)
 *     ?ulTime@XEPALOBJ@@QEAAKXZ @ 0x1401575D0 (-ulTime@XEPALOBJ@@QEAAKXZ.c)
 *     ??0PALDCOBJs@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDC__@@PEAVDC@@@Z @ 0x1402562E8 (--0PALDCOBJs@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHDC__@@PEAVDC@@@Z.c)
 *     ??1PALDCOBJs@@QEAA@XZ @ 0x14028F578 (--1PALDCOBJs@@QEAA@XZ.c)
 *     ?ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z @ 0x140334AF8 (-ptransMatchAPal@@YAPEAU_TRANSLATE@@PEAVDC@@VXEPALOBJ@@1HPEAK2@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall GreRealizePalette(HDC a1)
{
  Gre::Base *v1; // rcx
  struct Gre::Base::SESSION_GLOBALS *v2; // rbx
  struct Gre::Base::SESSION_GLOBALS *v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned int v8; // ebx
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v12; // eax
  _DWORD *v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  _QWORD *v16; // rax
  void *v17; // rcx
  _DWORD *v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  HSEMAPHORE v24; // rbx
  __int64 v25; // rdx
  int v26; // eax
  _DWORD *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  _QWORD *v30; // r8
  void *v31; // rcx
  _DWORD *v32; // rcx
  __int64 matched; // rax
  void (__fastcall *v34)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD); // rax
  _DWORD *v35; // r8
  unsigned int v36; // r9d
  __int64 *v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  int v41; // [rsp+70h] [rbp-90h]
  HSEMAPHORE v42; // [rsp+78h] [rbp-88h] BYREF
  HSEMAPHORE v43; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v44[8]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v46[32]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  char v49; // [rsp+E0h] [rbp-20h]
  struct DC *v50[14]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v51[192]; // [rsp+160h] [rbp+60h] BYREF
  int v52; // [rsp+238h] [rbp+138h] BYREF
  int v53; // [rsp+240h] [rbp+140h] BYREF
  HSEMAPHORE v54; // [rsp+248h] [rbp+148h] BYREF

  v53 = 0;
  v52 = 0;
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v50, a1);
  if ( !v50[0] )
    goto LABEL_9;
  v2 = Gre::Base::Globals(v1);
  v39 = *((_QWORD *)v50[0] + 6);
  v3 = Gre::Base::Globals(v50[0]);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v45, v3);
  NEEDGRELOCK::vLock((NEEDGRELOCK *)v44, (struct PDEVOBJ *)&v39);
  v4 = *(_QWORD *)(*((_QWORD *)v50[0] + 6) + 56LL);
  if ( v4 )
  {
    GreAcquireSemaphoreInternal(*(HSEMAPHORE *)(*((_QWORD *)v50[0] + 6) + 56LL));
    GrepAcquireLockValidate<4>();
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v51, (struct PDEVOBJ *)&v39);
  v5 = v39;
  v6 = *(_QWORD *)(v39 + 1792);
  v38 = v6;
  v37 = (__int64 *)*((_QWORD *)v50[0] + 11);
  v7 = *v37;
  if ( (*(_DWORD *)(v39 + 2156) & 0x100) != 0 )
  {
    SEMOBJ<13>::SEMOBJ<13>(&v43, v2);
    if ( v7 == *((_QWORD *)v2 + 470) )
      goto LABEL_80;
    if ( *(_DWORD *)(*((_QWORD *)v50[0] + 122) + 208LL) != 1 )
      goto LABEL_81;
    v10 = (unsigned __int16)*((_DWORD *)v2 + 940) | (*((_DWORD *)v2 + 940) >> 8) & 0xFF0000u;
    if ( ((unsigned __int16)v7 | ((unsigned int)v7 >> 8) & 0xFF0000) != (_DWORD)v10 )
      goto LABEL_81;
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( *((_QWORD *)v2 + 471) == CurrentProcessWin32Process )
    {
LABEL_80:
      if ( !XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v37) )
      {
        v25 = v37[9];
        if ( !v25 || v25 != v37[10] || (v26 = XEPALOBJ::ulTime((XEPALOBJ *)&v38), *v27 != v26) )
        {
          SEMOBJ<20>::SEMOBJ<20>((Gre::Base *)&v54);
          PALDCOBJs::PALDCOBJs((PALDCOBJs *)v46, v2, (HDC)v37[5], v50[0]);
          if ( v49 )
          {
            v28 = v47;
            v29 = v48;
            while ( v28 != v29 )
            {
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 976LL) + 152LL) |= 0xFu;
              v28 += 8LL;
            }
            v30 = v37;
            v31 = (void *)v37[11];
            if ( v31 )
            {
              if ( v31 != (void *)v37[9] )
              {
                Win32FreePool(v31);
                v30 = v37;
              }
              v30[11] = 0LL;
              v30 = v37;
            }
            v32 = (_DWORD *)v30[9];
            if ( v32 && !*v32 )
            {
              if ( (_DWORD *)v30[10] != v32 )
              {
                Win32FreePool(v32);
                v30 = v37;
              }
              v30[9] = 0LL;
              v30 = v37;
            }
            if ( v30[9] )
            {
              vMatchAPal(v50[0], v38, v30, &v52, &v53);
            }
            else
            {
              matched = ptransMatchAPal(v32, v38, v30, 1LL, &v52, &v53);
              v37[9] = matched;
            }
            v37[11] = v37[10];
            v37[10] = v37[9];
          }
          PALDCOBJs::~PALDCOBJs((PALDCOBJs *)v46);
          v24 = v54;
          goto LABEL_65;
        }
      }
    }
    else
    {
LABEL_81:
      if ( !XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v37) )
      {
        if ( !v37[10] || (v12 = XEPALOBJ::ulTime((XEPALOBJ *)&v38), *v13 != v12) )
        {
          SEMOBJ<20>::SEMOBJ<20>((Gre::Base *)&v42);
          PALDCOBJs::PALDCOBJs((PALDCOBJs *)v46, v2, (HDC)v37[5], v50[0]);
          if ( v49 )
          {
            v14 = v47;
            v15 = v48;
            while ( v14 != v15 )
            {
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v14 + 976LL) + 152LL) |= 0xFu;
              v14 += 8LL;
            }
            v16 = v37;
            v17 = (void *)v37[11];
            if ( v17 )
            {
              if ( v17 != (void *)v37[9] )
              {
                Win32FreePool(v17);
                v16 = v37;
              }
              v16[11] = 0LL;
              v16 = v37;
            }
            v18 = (_DWORD *)v16[9];
            if ( v18 && !*v18 )
            {
              if ( (_DWORD *)v16[10] != v18 )
              {
                Win32FreePool(v18);
                v16 = v37;
              }
              v16[9] = 0LL;
              v16 = v37;
            }
            if ( !v16[9] )
            {
              v41 = 0;
              v40 = 0LL;
              if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v40, 1u, *(_DWORD *)(v38 + 28), 0LL, 0, 0, 0, 0x800u, 1) )
              {
                v19 = *(_DWORD *)(v38 + 28);
                if ( v19 >= *(_DWORD *)(v40 + 28) )
                  v19 = *(_DWORD *)(v40 + 28);
                memmove(*(void **)(v40 + 112), *(const void **)(v38 + 112), 4LL * v19);
                *(_DWORD *)(v40 + 60) = *(_DWORD *)(v38 + 60);
                *(_DWORD *)(v40 + 24) = *(_DWORD *)(v38 + 24);
                XEPALOBJ::vComputeCallTables((XEPALOBJ *)&v40);
                v21 = ptransMatchAPal(v20, v40, v37, 1LL, &v54, &v54);
                v37[9] = v21;
              }
              PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v40);
              v16 = v37;
            }
            v22 = v16[10];
            v16[11] = v22;
            if ( v37[9] )
            {
              v23 = ptransMatchAPal(v22, v38, v37, 0LL, &v52, &v53);
              v37[10] = v23;
              if ( !v37[10] )
                v37[10] = v37[9];
            }
            else
            {
              v37[10] = 0LL;
            }
          }
          PALDCOBJs::~PALDCOBJs((PALDCOBJs *)v46);
          v24 = v42;
LABEL_65:
          if ( v24 )
          {
            EtwTraceGreLockReleaseSemaphore(L"Hmgr", v24);
            GrepReleaseLockValidate<20>();
            GreReleaseSemaphoreExclusiveInternal(v24);
          }
        }
      }
    }
    SEMOBJ<13>::vUnlock(&v43);
    v5 = v39;
    v6 = v38;
  }
  if ( v52 )
  {
    if ( (*(_DWORD *)(v5 + 40) & 0x400) == 0 )
    {
      v34 = *(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v5 + 1752);
      if ( v34 )
      {
        v34(*(_QWORD *)(*(_QWORD *)(v5 + 24) + 1784LL), &v38, 0LL, 0LL, *(_DWORD *)(v6 + 28));
        v6 = v38;
      }
    }
    if ( *(_DWORD *)(v6 + 28) == 256 )
    {
      v35 = &aPalHalftone;
      v36 = 0;
      while ( ((*v35 ^ *(_DWORD *)((char *)v35 + *(_QWORD *)(v6 + 112) - (_QWORD)&aPalHalftone)) & 0xFFFFFF) == 0 )
      {
        ++v36;
        ++v35;
        if ( v36 >= 0x100 )
        {
          if ( v36 == 256 )
          {
            *(_DWORD *)(v6 + 24) |= 0x100000u;
            goto LABEL_6;
          }
          break;
        }
      }
      *(_DWORD *)(v6 + 24) &= ~0x100000u;
    }
  }
LABEL_6:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v51);
  if ( v4 )
    GreReleaseSemaphoreCommon<4,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v4);
  NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v44);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v45);
LABEL_9:
  v8 = v53 | (v52 << 16);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v50);
  return v8;
}
