/*
 * XREFs of GreSetMagicColors @ 0x1C00BE85C
 * Callers:
 *     SetSysColor @ 0x1C0049E44 (SetSysColor.c)
 *     NtGdiSetMagicColors @ 0x1C00BEAD0 (NtGdiSetMagicColors.c)
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C002C080 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C002C144 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0030EC0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C00372E0 (EngAcquireSemaphore.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C0037A60 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C0037B20 (-vLock@NEEDGRELOCK@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004373C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C00458F4 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0045924 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C006E380 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     ?ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z @ 0x1C00B4A10 (-ulDispatchGFPEFunction@XEPALOBJ@@QEAAKW4GFPE_FUNCTION_ID@@K@Z.c)
 *     ?bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z @ 0x1C00BE7A8 (-bSetMagicColor@@YAHAEAVPDEVOBJ@@VXEPALOBJ@@KT_PAL_ULONG@@@Z.c)
 */

__int64 __fastcall GreSetMagicColors(HDC a1, unsigned int a2, unsigned int a3)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rbx
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  int v9; // r12d
  __int64 v10; // rdx
  DYNAMICMODECHANGESHARELOCK *v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rbx
  __int64 v14; // rax
  _QWORD *v15; // rcx
  int v16; // edx
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // ecx
  int v21; // r9d
  unsigned int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v28; // [rsp+38h] [rbp-59h] BYREF
  HSEMAPHORE v29; // [rsp+40h] [rbp-51h] BYREF
  HSEMAPHORE v30; // [rsp+48h] [rbp-49h] BYREF
  struct _ERESOURCE *v31; // [rsp+50h] [rbp-41h] BYREF
  struct _SINGLE_LIST_ENTRY *Next; // [rsp+58h] [rbp-39h] BYREF
  PERESOURCE v33; // [rsp+60h] [rbp-31h] BYREF
  _QWORD v34[2]; // [rsp+68h] [rbp-29h] BYREF
  _BYTE v35[80]; // [rsp+78h] [rbp-19h] BYREF
  __int64 v37; // [rsp+110h] [rbp+7Fh] BYREF

  DCOBJ::DCOBJ((DCOBJ *)v34, a1);
  v6 = v34[0];
  v7 = 0;
  v8 = 0;
  v9 = 0;
  if ( v34[0] && (a3 - 8 <= 1 || a3 - 246 <= 1) )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v37, v4, v5);
    if ( (a2 & 0xFD000000) != 0 )
    {
LABEL_36:
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v11, v10, v12);
      goto LABEL_37;
    }
    v13 = *(_QWORD *)(v6 + 48);
    v37 = v13;
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v31, (struct PDEVOBJ *)&v37);
    v30 = *(HSEMAPHORE *)(v13 + 72);
    EngAcquireSemaphore(v30);
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v35, (struct PDEVOBJ *)&v37);
    if ( (*(_DWORD *)(v13 + 2196) & 0x100) == 0 )
    {
      if ( (*(_DWORD *)(v13 + 56) & 0x20000) == 0 )
      {
LABEL_35:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v35);
        SEMOBJ::vUnlock((SEMOBJ *)&v30, v25, v26);
        NEEDGRELOCK::vUnlock(&v31);
        goto LABEL_36;
      }
      v14 = *(_QWORD *)(v13 + 1824);
      v15 = *(_QWORD **)v14;
      v16 = *(_DWORD *)(v14 + 16);
      while ( 1 )
      {
        v13 = v15[6];
        v37 = v13;
        if ( (*(_DWORD *)(v13 + 2196) & 0x100) != 0 )
          break;
        v15 = (_QWORD *)*v15;
        if ( !--v16 )
          goto LABEL_35;
      }
      v9 = 1;
    }
    v28 = *(_QWORD *)(v13 + 1832);
    v29 = ghsemHT;
    EngAcquireSemaphore(ghsemHT);
    v33 = ghsemPalette;
    EngAcquireSemaphore((HSEMAPHORE)ghsemPalette);
    Next = WPP_MAIN_CB.Dpc.DpcListEntry.Next;
    v17 = XEPALOBJ::ulDispatchGFPEFunction(
            (struct PALETTE **)&Next,
            (int)WPP_MAIN_CB.Dpc.DpcListEntry.Next[13].Next,
            a2);
    v20 = v17;
    if ( v17 != -1 )
    {
      if ( v17 >= 0xA )
        v20 = v17 + 236;
      if ( v20 == a3 )
      {
        if ( !v9 )
        {
          v7 = 1;
          goto LABEL_29;
        }
      }
      else if ( v20 - 8 > 1 && v20 - 246 > 1 )
      {
        if ( a3 == 8 )
        {
          v21 = 12639424;
        }
        else if ( a3 == 9 )
        {
          v21 = 15780518;
        }
        else
        {
          v21 = 10789024;
          if ( a3 == 246 )
            v21 = 15793151;
        }
        v22 = bSetMagicColor((__int64)&v37, v28, a3, v21);
        goto LABEL_28;
      }
    }
    v22 = bSetMagicColor((__int64)&v37, v28, a3, a2);
    v7 = v22;
LABEL_28:
    v8 = v22;
LABEL_29:
    SEMOBJ::vUnlock((SEMOBJ *)&v33, v18, v19);
    if ( v8 && (*(_DWORD *)(v13 + 56) & 0x400) == 0 )
    {
      if ( *(_QWORD *)(v13 + 1792) )
        (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v13 + 1792))(
          *(_QWORD *)(*(_QWORD *)(v13 + 40) + 1824LL),
          &v28,
          0LL,
          0LL,
          *(_DWORD *)(v28 + 28));
      else
        v7 = 0;
    }
    SEMOBJ::vUnlock((SEMOBJ *)&v29, v23, v24);
    goto LABEL_35;
  }
LABEL_37:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v34);
  return v7;
}
