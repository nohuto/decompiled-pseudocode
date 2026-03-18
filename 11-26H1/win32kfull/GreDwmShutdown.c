/*
 * XREFs of GreDwmShutdown @ 0x140253E18
 * Callers:
 *     ?zzzDwmStartRedirection@@YAJXZ @ 0x1402CF854 (-zzzDwmStartRedirection@@YAJXZ.c)
 *     xxxDwmStopRedirection @ 0x1402CFD60 (xxxDwmStopRedirection.c)
 * Callees:
 *     ??$GrepAcquireLockValidate@$03@@YAXXZ @ 0x14006B768 (--$GrepAcquireLockValidate@$03@@YAXXZ.c)
 *     ??$GrepAcquireLockValidate@$07@@YAXXZ @ 0x14006BD7C (--$GrepAcquireLockValidate@$07@@YAXXZ.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140072EE8 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z @ 0x14009E784 (-SpRenderHint@@YAJAEAVPDEVOBJ@@W4_RENDERHINT_NOTIFY@@_KPEAX@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FA80 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FAB8 (--0GreAcquireUnownedDMCLockShared@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FB18 (--0-$SEMOBJ@$06@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FB84 (--0-$SEMOBJ@$02@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z @ 0x1400A3FF4 (-vAccNotify@@YAXPEAU_SURFOBJ@@KPEAX@Z.c)
 *     ??1ENTER_GRE_DWM_CRIT@@QEAA@XZ @ 0x1400A8A5C (--1ENTER_GRE_DWM_CRIT@@QEAA@XZ.c)
 */

void __fastcall GreDwmShutdown(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rsi
  __int64 v3; // rdi
  _QWORD **v4; // r8
  _QWORD *v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rdx
  _QWORD **v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  Gre::Base *v12; // rcx
  struct Gre::Base::SESSION_GLOBALS *v13; // rax
  _BYTE v14[16]; // [rsp+30h] [rbp-48h] BYREF
  HSEMAPHORE v15; // [rsp+40h] [rbp-38h] BYREF
  __int64 v16; // [rsp+48h] [rbp-30h] BYREF
  HSEMAPHORE v17; // [rsp+50h] [rbp-28h]
  HSEMAPHORE v18; // [rsp+58h] [rbp-20h] BYREF
  HSEMAPHORE v19; // [rsp+60h] [rbp-18h] BYREF
  HSEMAPHORE v20; // [rsp+68h] [rbp-10h]
  Gre::Base *v21; // [rsp+80h] [rbp+8h] BYREF

  v21 = a1;
  if ( a1 )
  {
    v2 = Gre::Base::Globals(a1);
    GreAcquireUnownedDMCLockShared::GreAcquireUnownedDMCLockShared((GreAcquireUnownedDMCLockShared *)v14, v2);
    SEMOBJ<2>::SEMOBJ<2>(&v15, v2);
    SEMOBJ<3>::SEMOBJ<3>(&v16, v2);
    v17 = (HSEMAPHORE)*((_QWORD *)a1 + 7);
    GreAcquireSemaphoreInternal(v17);
    GrepAcquireLockValidate<4>();
    SEMOBJ<6>::SEMOBJ<6>(&v18, v2);
    SEMOBJ<7>::SEMOBJ<7>(&v19, v2);
    v20 = (HSEMAPHORE)*((_QWORD *)a1 + 6);
    GreAcquireSemaphoreInternal(v20);
    GrepAcquireLockValidate<8>();
    v3 = *((_QWORD *)v2 + 28);
    if ( v3 )
    {
      ZwSetEvent(*(HANDLE *)(v3 + 336), 0LL);
      ZwClose(*(HANDLE *)(v3 + 336));
      GreSfmDwmShutdown();
      SpRenderHint((struct PDEVOBJ *)&v21, 0x10001u, 0LL, 0LL);
      vAccNotify(
        (struct _SURFOBJ *)((*((_QWORD *)a1 + 318) + 24LL) & -(__int64)(*((_QWORD *)a1 + 318) != 0LL)),
        6u,
        0LL);
      GreDeleteObject(*(_QWORD *)(v3 + 184));
      v4 = (_QWORD **)(v3 + 120);
      while ( 1 )
      {
        v5 = *v4;
        if ( *v4 == v4 )
          break;
        v6 = *v5;
        if ( *(_QWORD **)(*v5 + 8LL) != v5 || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5) )
LABEL_13:
          __fastfail(3u);
        *v7 = v6;
        *(_QWORD *)(v6 + 8) = v7;
        v5[1] = v5;
        *v5 = v5;
      }
      v8 = (_QWORD **)(v3 + 104);
      while ( 1 )
      {
        v9 = *v8;
        if ( *v8 == v8 )
          break;
        v10 = *v9;
        if ( *(_QWORD **)(*v9 + 8LL) != v9 )
          goto LABEL_13;
        v11 = (_QWORD *)v9[1];
        if ( (_QWORD *)*v11 != v9 )
          goto LABEL_13;
        *v11 = v10;
        *(_QWORD *)(v10 + 8) = v11;
        v9[1] = v9;
        *v9 = v9;
      }
      *((_QWORD *)v2 + 28) = 0LL;
      Win32FreePool((void *)v3);
      v13 = Gre::Base::Globals(v12);
      ++*(_DWORD *)(*((_QWORD *)v13 + 232) + 1573020LL);
    }
    ENTER_GRE_DWM_CRIT::~ENTER_GRE_DWM_CRIT((ENTER_GRE_DWM_CRIT *)v14);
  }
  else
  {
    GrepCaptureLiveMemoryDump(400LL, 76LL, 0LL);
  }
}
