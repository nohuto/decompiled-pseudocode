/*
 * XREFs of GreSetMagicColors @ 0x1C00BD108
 * Callers:
 *     SetSysColor @ 0x1C0025420 (SetSysColor.c)
 *     NtGdiSetMagicColors @ 0x1C00BD390 (NtGdiSetMagicColors.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000BD98 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C000D220 (EngAcquireSemaphore.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0027814 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00278E8 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0033A80 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0033B40 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A980 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C003A9B0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00AEEE0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00AEF58 (--1DCOBJ@@QEAA@XZ.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C00B16F0 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1C00BCFE8 (-bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z.c)
 */

__int64 __fastcall GreSetMagicColors(HDC a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  int v8; // r12d
  __int64 v9; // rdx
  DYNAMICMODECHANGESHARELOCK *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // rcx
  int v15; // edx
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  unsigned int v19; // ecx
  unsigned int v20; // r9d
  unsigned int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v29; // [rsp+38h] [rbp-99h] BYREF
  HSEMAPHORE v30; // [rsp+40h] [rbp-91h] BYREF
  HSEMAPHORE v31; // [rsp+48h] [rbp-89h] BYREF
  char v32[8]; // [rsp+50h] [rbp-81h] BYREF
  struct PALETTE *v33; // [rsp+58h] [rbp-79h] BYREF
  HSEMAPHORE v34; // [rsp+60h] [rbp-71h] BYREF
  _QWORD v35[6]; // [rsp+68h] [rbp-69h] BYREF
  _BYTE v36[32]; // [rsp+98h] [rbp-39h] BYREF
  char v37[80]; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v39; // [rsp+150h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v35, a1);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( v35[0] && (a3 - 8 <= 1 || a3 - 246 <= 1) )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v39, v4, v5);
    if ( (a2 & 0xFD000000) != 0 )
    {
LABEL_36:
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v10, v9, v11);
      goto LABEL_37;
    }
    v39 = *(_QWORD *)(v35[0] + 48LL);
    v12 = v39;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v32, (struct PDEVOBJ *)&v39);
    v31 = *(HSEMAPHORE *)(v12 + 72);
    EngAcquireSemaphore(v31);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v36, (struct PDEVOBJ *)&v39);
    if ( (*(_DWORD *)(v12 + 2196) & 0x100) == 0 )
    {
      if ( (*(_DWORD *)(v12 + 56) & 0x20000) == 0 )
      {
LABEL_35:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v36);
        DCOBJ::~DCOBJ((DCOBJ *)v37);
        SEMOBJ::vUnlock((SEMOBJ *)&v31, v24, v25);
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v32, v26, v27);
        goto LABEL_36;
      }
      v13 = *(_QWORD *)(v12 + 1824);
      v14 = *(_QWORD **)v13;
      v15 = *(_DWORD *)(v13 + 16);
      while ( 1 )
      {
        v12 = v14[6];
        v39 = v12;
        if ( (*(_DWORD *)(v12 + 2196) & 0x100) != 0 )
          break;
        v14 = (_QWORD *)*v14;
        if ( !--v15 )
          goto LABEL_35;
      }
      v8 = 1;
    }
    v29 = *(_QWORD *)(v12 + 1832);
    v30 = ghsemHT;
    EngAcquireSemaphore(ghsemHT);
    v34 = ghsemPalette;
    EngAcquireSemaphore(ghsemPalette);
    v33 = ppalDefault;
    v16 = XEPALOBJ::ulDispatchGFPEFunction(&v33, *((_DWORD *)ppalDefault + 26), a2);
    v19 = v16;
    if ( v16 != -1 )
    {
      if ( v16 >= 0xA )
        v19 = v16 + 236;
      if ( v19 == a3 )
      {
        if ( !v8 )
        {
          v6 = 1;
          goto LABEL_29;
        }
      }
      else if ( v19 - 8 > 1 && v19 - 246 > 1 )
      {
        if ( a3 == 8 )
        {
          v20 = 12639424;
        }
        else if ( a3 == 9 )
        {
          v20 = 15780518;
        }
        else
        {
          v20 = 10789024;
          if ( a3 == 246 )
            v20 = 15793151;
        }
        v21 = bSetMagicColor((__int64)&v39, v29, a3, v20);
        goto LABEL_28;
      }
    }
    v21 = bSetMagicColor((__int64)&v39, v29, a3, a2);
    v6 = v21;
LABEL_28:
    v7 = v21;
LABEL_29:
    SEMOBJ::vUnlock((SEMOBJ *)&v34, v17, v18);
    if ( v7 && (*(_DWORD *)(v12 + 56) & 0x400) == 0 )
    {
      if ( *(_QWORD *)(v12 + 1792) )
        (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v12 + 1792))(
          *(_QWORD *)(*(_QWORD *)(v12 + 40) + 1824LL),
          &v29,
          0LL,
          0LL,
          *(_DWORD *)(v29 + 28));
      else
        v6 = 0;
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v30, v22, v23);
    goto LABEL_35;
  }
LABEL_37:
  DCOBJ::~DCOBJ((DCOBJ *)v35);
  return v6;
}
