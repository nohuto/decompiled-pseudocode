/*
 * XREFs of prfntKillList @ 0x1400F60E8
 * Callers:
 *     ?bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z @ 0x14020EAF0 (-bUnloadAllButPermanentFonts@PFTOBJ@@QEAAHH@Z.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z @ 0x14028B4D4 (-bUnloadWorkhorse@PFTOBJ@@QEAAHPEAVPFF@@IK@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140071590 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vUnlock@?$SEMOBJ@$0BC@@@QEAAXXZ @ 0x1400C3B0C (-vUnlock@-$SEMOBJ@$0BC@@@QEAAXXZ.c)
 *     ??$GrepReleaseLockValidate@$0BE@@@YAXXZ @ 0x1400C69D0 (--$GrepReleaseLockValidate@$0BE@@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0BE@@@YAXXZ @ 0x1400C6AC0 (--$GrepAcquireLockValidate@$0BE@@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$0BD@@@YAXXZ @ 0x1400F6488 (--$GrepAcquireLockValidate@$0BD@@@YAXXZ.c)
 *     ??$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400F651C (--$GreAcquireSemaphoreCommon@$0BC@P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 */

void __fastcall prfntKillList(_QWORD *a1, int **a2, __int64 a3)
{
  int v3; // esi
  Gre::Base *v6; // rcx
  struct Gre::Base::SESSION_GLOBALS *v7; // rdi
  HSEMAPHORE v8; // rbx
  Gre::Base *v9; // rcx
  HSEMAPHORE v10; // rbp
  __int64 *i; // rdi
  int v12; // eax
  struct _GRETHREAD *v13; // rax
  __int64 *v15; // r15
  __int64 *v16; // rax
  int *v17; // r14
  int *v18; // rdx
  __int64 *v19; // rax
  int *v20; // rcx
  __int64 *v21; // rax
  __int64 *v22; // r14
  __int64 *v23; // rdx
  __int64 *v24; // rax
  __int64 *v25; // rcx
  __int64 *v26; // rax
  __int64 v27; // r8
  __int64 **v28; // rcx
  __int64 *v29; // rcx
  __int64 **v30; // rax
  int *v31; // rax
  __int64 *v32; // rax
  int v33; // ecx
  int *v34; // rax
  __int64 v35; // r8
  int **v36; // rcx
  __int64 v37; // rcx
  int **v38; // rax
  int *v39; // rax
  __int64 v40; // [rsp+70h] [rbp+18h] BYREF
  HSEMAPHORE v41; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  LODWORD(v40) = 0;
  v41 = *(HSEMAPHORE *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 20328LL);
  GreAcquireSemaphoreCommon<18,void (*)(HSEMAPHORE__ *)>(GreAcquireSemaphoreInternal);
  v7 = Gre::Base::Globals(v6);
  v8 = *(HSEMAPHORE *)v7;
  GreAcquireSemaphoreInternal(*(HSEMAPHORE *)v7);
  GrepAcquireLockValidate<19>();
  v10 = (HSEMAPHORE)(*(_QWORD *)Gre::Base::Globals(v9) + 1512LL);
  GreAcquireSemaphoreInternal(v10);
  GrepAcquireLockValidate<20>();
  for ( i = (__int64 *)*((_QWORD *)v7 + 494); i; i = (__int64 *)*i )
  {
    v12 = *((_DWORD *)i + 10);
    if ( (v12 & 1) != 0 )
    {
      v15 = i + 439;
      if ( (v12 & 0x800000) != 0 )
      {
        v16 = (__int64 *)*v15;
        v3 |= 1u;
      }
      else
      {
        v16 = i;
      }
      if ( (v3 & 1) != 0 )
        v3 &= ~1u;
      v17 = (int *)v16[190];
      while ( 1 )
      {
        v18 = v17;
        if ( (i[5] & 0x800000) != 0 )
        {
          v19 = (__int64 *)*v15;
          v3 |= 2u;
        }
        else
        {
          v19 = i;
        }
        if ( (v3 & 2) != 0 )
          v3 &= ~2u;
        if ( v17 == (int *)(v19 + 190) )
          break;
        v20 = v17 - 168;
        v17 = *(int **)v17;
        if ( *((_QWORD *)v20 + 16) == *a1 && *(v18 - 1) <= 0 )
        {
          v34 = v18 - 46;
          v35 = *((_QWORD *)v18 - 23);
          if ( *(int **)(v35 + 8) != v18 - 46 )
            goto LABEL_42;
          v36 = (int **)*((_QWORD *)v34 + 1);
          if ( *v36 != v34
            || (*v36 = (int *)v35,
                *(_QWORD *)(v35 + 8) = v36,
                v37 = *(_QWORD *)v18,
                *(int **)(*(_QWORD *)v18 + 8LL) != v18)
            || (v38 = (int **)*((_QWORD *)v18 + 1), *v38 != v18)
            || (*v38 = (int *)v37, *(_QWORD *)(v37 + 8) = v38, v39 = *a2, *((int ***)*a2 + 1) != a2) )
          {
LABEL_42:
            __fastfail(3u);
          }
          *(_QWORD *)v18 = v39;
          *((_QWORD *)v18 + 1) = a2;
          *((_QWORD *)v39 + 1) = v18;
          *a2 = v18;
        }
        v40 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v40);
      }
      if ( (i[5] & 0x800000) != 0 )
      {
        v21 = (__int64 *)*v15;
        v3 |= 4u;
      }
      else
      {
        v21 = i;
      }
      if ( (v3 & 4) != 0 )
        v3 &= ~4u;
      v22 = (__int64 *)v21[192];
      while ( 1 )
      {
        v23 = v22;
        if ( (i[5] & 0x800000) != 0 )
        {
          v24 = (__int64 *)*v15;
          v3 |= 8u;
        }
        else
        {
          v24 = i;
        }
        if ( (v3 & 8) != 0 )
          v3 &= ~8u;
        if ( v22 == v24 + 192 )
          break;
        v25 = v22 - 84;
        v22 = (__int64 *)*v22;
        if ( v25[16] == *a1 )
        {
          v26 = v23 - 23;
          v27 = *(v23 - 23);
          if ( *(__int64 **)(v27 + 8) != v23 - 23 )
            goto LABEL_42;
          v28 = (__int64 **)v26[1];
          if ( *v28 != v26 )
            goto LABEL_42;
          *v28 = (__int64 *)v27;
          *(_QWORD *)(v27 + 8) = v28;
          v29 = (__int64 *)*v23;
          if ( *(__int64 **)(*v23 + 8) != v23 )
            goto LABEL_42;
          v30 = (__int64 **)v23[1];
          if ( *v30 != v23 )
            goto LABEL_42;
          *v30 = v29;
          v29[1] = (__int64)v30;
          v31 = *a2;
          if ( *((int ***)*a2 + 1) != a2 )
            goto LABEL_42;
          *v23 = (__int64)v31;
          v23[1] = (__int64)a2;
          *((_QWORD *)v31 + 1) = v23;
          *a2 = (int *)v23;
          if ( (i[5] & 0x800000) != 0 )
          {
            v32 = (__int64 *)*v15;
            v3 |= 0x10u;
          }
          else
          {
            v32 = i;
          }
          if ( (v3 & 0x10) != 0 )
            v3 &= ~0x10u;
          v33 = *((_DWORD *)v32 + 388) - 1;
          if ( (i[5] & 0x800000) != 0 )
          {
            v3 |= 0x20u;
            *(_DWORD *)(*v15 + 1552) = v33;
          }
          else
          {
            *((_DWORD *)i + 388) = v33;
          }
          if ( (v3 & 0x20) != 0 )
            v3 &= ~0x20u;
        }
        v40 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v40);
      }
    }
  }
  if ( v10 )
  {
    EtwTraceGreLockReleaseSemaphore(L"Hmgr", v10);
    GrepReleaseLockValidate<20>();
    GreReleaseSemaphoreExclusiveInternal(v10);
  }
  if ( v8 )
  {
    EtwTraceGreLockReleaseSemaphore(L"DriverMgmt", v8);
    v13 = GreGetCurrentThreadCrossSessionCheck();
    if ( v13 )
    {
      if ( (*((_BYTE *)v13 + 27))-- == 1 )
        *(_QWORD *)v13 &= ~0x80000uLL;
      if ( !*(_QWORD *)v13 )
        GrepOnAllLocksReleased();
    }
    GreReleaseSemaphoreExclusiveInternal(v8);
  }
  SEMOBJ<18>::vUnlock(&v41);
}
