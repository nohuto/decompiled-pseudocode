/*
 * XREFs of GreSuspendDirectDraw @ 0x1C0060EE0
 * Callers:
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C0060DF8 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     DrvDisableMDEV @ 0x1C0064F40 (DrvDisableMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C0066760 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 * Callees:
 *     hdevEnumerate @ 0x1C0034180 (hdevEnumerate.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00343E4 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     GreLockVisRgn @ 0x1C0036AA0 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C0038810 (GreUnlockVisRgn.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A980 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A9B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C0061054 (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     GreUnlockDisplayDevice @ 0x1C0061400 (GreUnlockDisplayDevice.c)
 *     GreLockDisplayDevice @ 0x1C0061430 (GreLockDisplayDevice.c)
 *     DrvDxgkDisplayOnOff @ 0x1C0083ED0 (DrvDxgkDisplayOnOff.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreSuspendDirectDraw(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // rdx
  DYNAMICMODECHANGESHARELOCK *v6; // rcx
  __int64 v7; // r8
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  struct PDEV *j; // rcx
  struct PDEV *v14; // rax
  DYNAMICMODECHANGESHARELOCK *v15; // rcx
  __int64 v16; // rbx
  int v17; // ecx
  char v18; // al
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  struct PDEV *i; // rcx
  int v24; // ecx
  struct PDEV *v25; // rax
  struct PDEV *v26; // rbx
  __int64 v27; // [rsp+20h] [rbp-28h] BYREF
  struct PDEV *v28; // [rsp+28h] [rbp-20h] BYREF
  struct PDEV *v29; // [rsp+30h] [rbp-18h] BYREF
  char v30; // [rsp+70h] [rbp+28h] BYREF
  int v31; // [rsp+78h] [rbp+30h]
  char v32; // [rsp+80h] [rbp+38h] BYREF
  char v33; // [rsp+88h] [rbp+40h] BYREF

  v31 = a2;
  _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
  DisplayScenarioJournalDisplayUniquenessIncremented();
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v32, v3, v4);
  v27 = a1;
  if ( a1 )
  {
    v8 = *(_DWORD *)(a1 + 56);
    if ( (v8 & 1) != 0 )
    {
      if ( (v8 & 0x20000) != 0 )
      {
        for ( i = 0LL; ; i = v26 )
        {
          v25 = hdevEnumerate(i, v5, v7);
          v26 = v25;
          if ( !v25 )
            break;
          v24 = *((_DWORD *)v25 + 14) & 0x20001;
          v28 = v25;
          if ( v24 == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v28) && *((_QWORD *)v26 + 5) == a1 )
            DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v28);
        }
      }
      else if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v27) )
      {
        DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v27);
      }
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v6, v5, v7);
  if ( (v31 & 1) != 0 && !gProtocolType )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v33, v9, v10);
    for ( j = 0LL; ; j = (struct PDEV *)v16 )
    {
      v14 = hdevEnumerate(j, v11, v12);
      v16 = (__int64)v14;
      if ( !v14 )
        break;
      v17 = *((_DWORD *)v14 + 14) & 0x20401;
      v29 = v14;
      if ( v17 == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v29) )
      {
        GreLockVisRgn(v16, v11, v12);
        GreLockDisplayDevice(v16);
        v18 = ((__int64 (__fastcall *)(_QWORD, _QWORD, char *))qword_1C01014A0)(
                *(_QWORD *)(*(_QWORD *)(v16 + 2600) + 256LL),
                *(unsigned int *)(*(_QWORD *)(v16 + 2600) + 272LL),
                &v30);
        *(_DWORD *)(v16 + 2640) = 1;
        if ( ((v31 & 8) == 0 || v18) && *(_QWORD *)(v16 + 2760) )
        {
          if ( (v31 & 4) == 0 || (LOBYTE(v19) = 0, !v30) )
            LOBYTE(v19) = 1;
          DrvDxgkDisplayOnOff(v16, v19, 3LL);
          if ( (v31 & 4) == 0 || (v22 = 0LL, !v30) )
            v22 = 1LL;
          (*(void (__fastcall **)(_QWORD, __int64))(v16 + 2760))(*(_QWORD *)(v16 + 1824), v22);
        }
        *(_DWORD *)(v16 + 2640) = 0;
        GreUnlockDisplayDevice(v16);
        GreUnlockVisRgn(v16, v20, v21);
      }
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v15, v11, v12);
  }
}
