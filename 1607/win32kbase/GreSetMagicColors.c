/*
 * XREFs of GreSetMagicColors @ 0x1C00CA4B8
 * Callers:
 *     SetSysColor @ 0x1C005B1F4 (SetSysColor.c)
 *     NtGdiSetMagicColors @ 0x1C00CA740 (NtGdiSetMagicColors.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002549C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0025504 (--1DCOBJ@@QEAA@XZ.c)
 *     EngAcquireSemaphore @ 0x1C0025AF0 (EngAcquireSemaphore.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026B40 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026B68 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C0026E10 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002F988 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002FA5C (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C0074AF8 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0075010 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00750D0 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C00BD410 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1C00CA398 (-bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z.c)
 */

__int64 __fastcall GreSetMagicColors(HDC a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // r14d
  unsigned int v5; // r15d
  int v6; // r12d
  DYNAMICMODECHANGESHARELOCK *v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  int v11; // edx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // r9d
  unsigned int v15; // eax
  __int64 v17; // [rsp+38h] [rbp-99h] BYREF
  struct PALETTE *v18; // [rsp+40h] [rbp-91h] BYREF
  HSEMAPHORE v19; // [rsp+48h] [rbp-89h] BYREF
  HSEMAPHORE v20; // [rsp+50h] [rbp-81h] BYREF
  HSEMAPHORE v21; // [rsp+58h] [rbp-79h] BYREF
  struct _ERESOURCE *v22; // [rsp+60h] [rbp-71h] BYREF
  _QWORD v23[2]; // [rsp+68h] [rbp-69h] BYREF
  __int64 v24[4]; // [rsp+78h] [rbp-59h] BYREF
  _BYTE v25[32]; // [rsp+98h] [rbp-39h] BYREF
  char v26[80]; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v28; // [rsp+150h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v23, a1);
  v4 = 0;
  v5 = 0;
  v6 = 0;
  if ( v23[0] && (a3 - 8 <= 1 || a3 - 246 <= 1) )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v28);
    if ( (a2 & 0xFD000000) != 0 )
    {
LABEL_36:
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v7);
      goto LABEL_37;
    }
    v28 = *(_QWORD *)(v23[0] + 48LL);
    v8 = v28;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v22, (struct PDEVOBJ *)&v28);
    v21 = *(HSEMAPHORE *)(v8 + 72);
    EngAcquireSemaphore(v21);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v25, (struct PDEVOBJ *)&v28);
    if ( (*(_DWORD *)(v8 + 2196) & 0x100) == 0 )
    {
      if ( (*(_DWORD *)(v8 + 56) & 0x20000) == 0 )
      {
LABEL_35:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v25);
        DCOBJ::~DCOBJ((DCOBJ *)v26);
        SEMOBJ::vUnlock((PERESOURCE *)&v21);
        NEEDGRELOCK::vUnlock(&v22);
        goto LABEL_36;
      }
      v9 = *(_QWORD *)(v8 + 1824);
      v10 = *(_QWORD **)v9;
      v11 = *(_DWORD *)(v9 + 16);
      while ( 1 )
      {
        v8 = v10[6];
        v28 = v8;
        if ( (*(_DWORD *)(v8 + 2196) & 0x100) != 0 )
          break;
        v10 = (_QWORD *)*v10;
        if ( !--v11 )
          goto LABEL_35;
      }
      v6 = 1;
    }
    v17 = *(_QWORD *)(v8 + 1832);
    v20 = ghsemHT;
    EngAcquireSemaphore(ghsemHT);
    v19 = ghsemPalette;
    EngAcquireSemaphore(ghsemPalette);
    v18 = (struct PALETTE *)WPP_MAIN_CB.DeviceQueue.1;
    v12 = XEPALOBJ::ulDispatchGFPEFunction(&v18, *(_DWORD *)(*(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 100LL), a2);
    v13 = v12;
    if ( v12 != -1 )
    {
      if ( v12 >= 0xA )
        v13 = v12 + 236;
      if ( v13 == a3 )
      {
        if ( !v6 )
        {
          v4 = 1;
          goto LABEL_29;
        }
      }
      else if ( v13 - 8 > 1 && v13 - 246 > 1 )
      {
        if ( a3 == 8 )
        {
          v14 = 12639424;
        }
        else if ( a3 == 9 )
        {
          v14 = 15780518;
        }
        else
        {
          v14 = 10789024;
          if ( a3 == 246 )
            v14 = 15793151;
        }
        v15 = bSetMagicColor((__int64)&v28, v17, a3, v14);
        goto LABEL_28;
      }
    }
    v15 = bSetMagicColor((__int64)&v28, v17, a3, a2);
    v4 = v15;
LABEL_28:
    v5 = v15;
LABEL_29:
    SEMOBJ::vUnlock((PERESOURCE *)&v19);
    if ( v5 && (*(_DWORD *)(v8 + 56) & 0x400) == 0 )
    {
      if ( *(_QWORD *)(v8 + 1792) )
        (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v8 + 1792))(
          *(_QWORD *)(*(_QWORD *)(v8 + 40) + 1824LL),
          &v17,
          0LL,
          0LL,
          *(_DWORD *)(v17 + 28));
      else
        v4 = 0;
    }
    SEMOBJ::vUnlock((PERESOURCE *)&v20);
    goto LABEL_35;
  }
LABEL_37:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v23);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v24);
  return v4;
}
