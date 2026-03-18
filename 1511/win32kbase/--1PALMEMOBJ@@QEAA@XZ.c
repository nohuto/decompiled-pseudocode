/*
 * XREFs of ??1PALMEMOBJ@@QEAA@XZ @ 0x1C0022AE0
 * Callers:
 *     GreCreatePaletteInternal @ 0x1C005CF0C (GreCreatePaletteInternal.c)
 *     EngCreatePalette @ 0x1C005E000 (EngCreatePalette.c)
 *     ?vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z @ 0x1C00B9798 (-vDynamicSwitchPalettes@@YAXPEAVSURFACE@@PEAVPDEV@@1@Z.c)
 *     ?CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z @ 0x1C00C06DC (-CreateSurfacePal@@YAHVXEPALOBJ@@KKK@Z.c)
 *     bInitPALOBJ @ 0x1C013A6D4 (bInitPALOBJ.c)
 * Callees:
 *     IsWin32FreeToPagedLookasideListImplSupported_0 @ 0x1C0002C48 (IsWin32FreeToPagedLookasideListImplSupported_0.c)
 *     Win32FreeToPagedLookasideListImpl_0 @ 0x1C0002C50 (Win32FreeToPagedLookasideListImpl_0.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     HmgDecProcessHandleCount @ 0x1C002522C (HmgDecProcessHandleCount.c)
 *     HmgDecrementShareReferenceCount @ 0x1C0031AF0 (HmgDecrementShareReferenceCount.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ?vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z @ 0x1C0031DD0 (-vLockHandle@HANDLELOCK@@QEAAXPEAU_ENTRY@@HIH@Z.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnrefPalette@XEPALOBJ@@QEAAXXZ @ 0x1C00B4B80 (-vUnrefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     Template_pqz @ 0x1C00C0018 (Template_pqz.c)
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

void __fastcall PALMEMOBJ::~PALMEMOBJ(__int64 **this, int a2, int a3)
{
  __int64 *v3; // rax
  unsigned __int8 *v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rbp
  struct _ERESOURCE *v8; // rbx
  struct _ENTRY *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  _QWORD *SystemArgument2; // rdi
  int v14; // ebx
  __int64 v15; // [rsp+30h] [rbp-48h] BYREF
  int v16; // [rsp+38h] [rbp-40h]
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF

  v3 = *this;
  if ( *this )
  {
    if ( *((_DWORD *)this + 2) )
    {
      HmgDecrementShareReferenceCount(*this);
    }
    else
    {
      if ( v3 != (__int64 *)v3[17] )
      {
        v17 = v3[17];
        XEPALOBJ::vUnrefPalette((XEPALOBJ *)&v17);
      }
      v5 = (unsigned __int8 *)(*this)[15];
      if ( v5 )
      {
        if ( v5 != gpRGBXlate )
          Win32FreePool();
        (*this)[15] = 0LL;
      }
      v6 = **this;
      v7 = (unsigned __int16)v6;
      if ( (unsigned __int16)v6 < (unsigned int)gcMaxHmgr )
      {
        v8 = ghsemHmgr;
        if ( ghsemHmgr )
        {
          PsEnterPriorityRegion();
          ExEnterCriticalRegionAndAcquireResourceExclusive(v8);
          LODWORD(v8) = (_DWORD)ghsemHmgr;
        }
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          Template_pqz((unsigned int)L"ghsemHmgr", a2, a3, (_DWORD)v8, 16, (__int64)L"ghsemHmgr");
        v9 = (struct _ENTRY *)((char *)WPP_MAIN_CB.Dpc.SystemArgument2 + 24 * (unsigned __int16)v6);
        HANDLELOCK::vLockHandle((HANDLELOCK *)&v15, v9, 1, (unsigned __int16)v6, 0);
        if ( v16 && v15 )
        {
          if ( *((_BYTE *)v9 + 14) == 8 && *((_WORD *)v9 + 6) == WORD1(v6) )
          {
            v12 = *(_QWORD *)v9;
            if ( !*(_WORD *)(*(_QWORD *)v9 + 12LL) && *(_DWORD *)(v12 + 8) == 1 )
            {
              *(_QWORD *)v12 = 0LL;
              SystemArgument2 = WPP_MAIN_CB.Dpc.SystemArgument2;
              v14 = *((_DWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 6 * v7 + 2);
              HmgDecProcessHandleCount(v14 & 0xFFFFFFFE);
              SystemArgument2[3 * v7] = ghFreeHmgr;
              *((_WORD *)v9 + 6) += 256;
              --gcCurHmgr;
              *((_BYTE *)v9 + 14) = 0;
              *((_QWORD *)v9 + 2) = 0LL;
              ghFreeHmgr = v7;
              LODWORD(SystemArgument2[3 * v7 + 1]) = v14 & 1;
            }
          }
          HANDLELOCK::vUnlock((HANDLELOCK *)&v15);
        }
        if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
          Template_pz(v10, &LockRelease, v11, ghsemHmgr, L"ghsemHmgr");
        if ( ghsemHmgr )
        {
          ExReleaseResourceAndLeaveCriticalRegion(ghsemHmgr);
          PsLeavePriorityRegion();
        }
        HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v15);
      }
      if ( *((__int16 *)*this + 7) >= 0 )
      {
        Win32FreePool();
      }
      else if ( (int)IsWin32FreeToPagedLookasideListImplSupported_0() >= 0 )
      {
        Win32FreeToPagedLookasideListImpl_0();
      }
    }
    *this = 0LL;
  }
}
