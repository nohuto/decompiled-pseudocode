/*
 * XREFs of GreSuspendDirectDraw @ 0x1C0065420
 * Callers:
 *     ?DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z @ 0x1C0065330 (-DrvDisableDirectDrawForModeChange@@YAPEAPEAUHDEV__@@PEAU_MDEV@@0PEAPEAU1@K@Z.c)
 *     DrvDisableMDEV @ 0x1C0069650 (DrvDisableMDEV.c)
 *     ?DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z @ 0x1C007E4B8 (-DrvDisableDisplay@@YAHPEAUHDEV__@@H@Z.c)
 * Callees:
 *     GreLockVisRgn @ 0x1C0025520 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C00255C0 (GreUnlockVisRgn.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026B40 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026B68 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C0031A08 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     hdevEnumerate @ 0x1C0034350 (hdevEnumerate.c)
 *     ?DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z @ 0x1C006596C (-DxLddmPrimaryLockCleanUpSinglePDev@@YAXPEAVPDEVOBJ@@@Z.c)
 *     GreUnlockDisplayDevice @ 0x1C0065B20 (GreUnlockDisplayDevice.c)
 *     GreLockDisplayDevice @ 0x1C0065B60 (GreLockDisplayDevice.c)
 *     DrvDxgkDisplayOnOff @ 0x1C0082190 (DrvDxgkDisplayOnOff.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall GreSuspendDirectDraw(__int64 a1, int a2)
{
  int v3; // edx
  DYNAMICMODECHANGESHARELOCK *v4; // rcx
  int v5; // r8d
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  struct _LIST_ENTRY *j; // rcx
  struct _LIST_ENTRY *v10; // rax
  DYNAMICMODECHANGESHARELOCK *v11; // rcx
  __int64 v12; // rbx
  int v13; // ecx
  char v14; // al
  __int64 v15; // rdx
  __int64 v16; // rdx
  struct _LIST_ENTRY *i; // rcx
  int v18; // ecx
  struct _LIST_ENTRY *v19; // rax
  struct _LIST_ENTRY *v20; // rbx
  __int64 v21; // [rsp+20h] [rbp-28h] BYREF
  struct _LIST_ENTRY *v22; // [rsp+28h] [rbp-20h] BYREF
  struct _LIST_ENTRY *v23; // [rsp+30h] [rbp-18h] BYREF
  char v24; // [rsp+70h] [rbp+28h] BYREF
  int v25; // [rsp+78h] [rbp+30h]
  char v26; // [rsp+80h] [rbp+38h] BYREF
  char v27; // [rsp+88h] [rbp+40h] BYREF

  v25 = a2;
  _InterlockedIncrement((volatile signed __int32 *)gpGdiSharedMemory + 393252);
  DisplayScenarioJournalDisplayUniquenessIncremented();
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v26);
  v21 = a1;
  if ( a1 )
  {
    v6 = *(_DWORD *)(a1 + 56);
    if ( (v6 & 1) != 0 )
    {
      if ( (v6 & 0x20000) != 0 )
      {
        for ( i = 0LL; ; i = v20 )
        {
          v19 = hdevEnumerate(i, v3, v5);
          v20 = v19;
          if ( !v19 )
            break;
          v18 = (__int64)v19[3].Blink & 0x20001;
          v22 = v19;
          if ( v18 == 1
            && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v22)
            && v20[2].Blink == (struct _LIST_ENTRY *)a1 )
          {
            DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v22);
          }
        }
      }
      else if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v21) )
      {
        DxLddmPrimaryLockCleanUpSinglePDev((struct PDEVOBJ *)&v21);
      }
    }
  }
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v4);
  if ( (v25 & 1) != 0 && !gProtocolType )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v27);
    for ( j = 0LL; ; j = (struct _LIST_ENTRY *)v12 )
    {
      v10 = hdevEnumerate(j, v7, v8);
      v12 = (__int64)v10;
      if ( !v10 )
        break;
      v13 = (__int64)v10[3].Blink & 0x20401;
      v23 = v10;
      if ( v13 == 1 && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v23) )
      {
        GreLockVisRgn(v12, v7, v8);
        GreLockDisplayDevice(v12);
        v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, char *))qword_1C011B608)(
                *(_QWORD *)(*(_QWORD *)(v12 + 2600) + 256LL),
                *(unsigned int *)(*(_QWORD *)(v12 + 2600) + 272LL),
                &v24);
        *(_DWORD *)(v12 + 2640) = 1;
        if ( ((v25 & 8) == 0 || v14) && *(_QWORD *)(v12 + 2752) )
        {
          if ( (v25 & 4) == 0 || (LOBYTE(v15) = 0, !v24) )
            LOBYTE(v15) = 1;
          DrvDxgkDisplayOnOff(v12, v15, 3LL);
          if ( (v25 & 4) == 0 || (v16 = 0LL, !v24) )
            v16 = 1LL;
          (*(void (__fastcall **)(_QWORD, __int64))(v12 + 2752))(*(_QWORD *)(v12 + 1824), v16);
        }
        *(_DWORD *)(v12 + 2640) = 0;
        GreUnlockDisplayDevice(v12);
        GreUnlockVisRgn(v12);
      }
    }
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v11);
  }
}
