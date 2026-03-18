/*
 * XREFs of InternalRegisterClassEx @ 0x14014E310
 * Callers:
 *     _RegisterClassEx @ 0x14014ECE0 (_RegisterClassEx.c)
 *     RegisterDefaultClass @ 0x1402A2BB4 (RegisterDefaultClass.c)
 *     RegisterIconTitleClass @ 0x1402A2E30 (RegisterIconTitleClass.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x14014EC6C (-ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x14014F7F0 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x14014FAC4 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x14014FB64 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x14014FC0C (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x14014FEF0 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x140150318 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     DesktopAllocInternal @ 0x140150424 (DesktopAllocInternal.c)
 *     ??$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z @ 0x14015053C (--$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z.c)
 *     MapClientToServerPfn @ 0x1401505B0 (MapClientToServerPfn.c)
 *     _InnerGetClassPtr @ 0x140150670 (_InnerGetClassPtr.c)
 *     ??4?$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QEAAPEADPEAD@Z @ 0x1401507C0 (--4-$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QEAAPEADPEAD@Z.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1401507F4 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1401F5F90 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 *     AllocateUnicodeString @ 0x14021C838 (AllocateUnicodeString.c)
 */

__int64 __fastcall InternalRegisterClassEx(__int64 a1, unsigned __int16 a2, unsigned int a3, _DWORD *a4)
{
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // r8d
  struct tagTHREADINFO *v11; // r14
  void *v12; // r12
  int v13; // eax
  __int64 v14; // rcx
  unsigned __int16 Atom; // r13
  char *ClassPtr; // r12
  __int64 v17; // rax
  struct tagDESKTOP *v18; // rsi
  struct tagCLS *v19; // rax
  struct tagCLS *v20; // r12
  __int64 v21; // rcx
  __int64 v22; // rdx
  int v23; // r13d
  __int64 v24; // r8
  int v25; // r15d
  const WCHAR *v26; // rdx
  const WCHAR *v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rcx
  unsigned __int16 v30; // ax
  __int64 v31; // rcx
  unsigned __int16 v32; // ax
  __int64 v33; // r8
  __int64 v34; // r9
  const WCHAR *v35; // rdx
  unsigned int v36; // r15d
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v40; // rax
  __int16 v41; // r12
  __int16 v42; // r12
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r8
  struct tagDESKTOP *v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rcx
  unsigned int v53; // r9d
  __int64 v54; // r8
  int v55; // edx
  int v56; // [rsp+20h] [rbp-A8h]
  PCWSTR SourceString[2]; // [rsp+30h] [rbp-98h] BYREF
  struct tagDESKTOP *v58[2]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v59[2]; // [rsp+58h] [rbp-70h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+68h] [rbp-60h] BYREF
  _STRING v61; // [rsp+78h] [rbp-50h] BYREF
  __int64 v62; // [rsp+D0h] [rbp+8h] BYREF
  unsigned __int16 v63; // [rsp+D8h] [rbp+10h]
  int v64; // [rsp+E0h] [rbp+18h]

  v63 = a2;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v59);
  DestinationString = 0LL;
  v61 = 0LL;
  v7 = 0LL;
  v56 = 0;
  LODWORD(v62) = 0;
  v11 = PtiCurrent(v8);
  v12 = *(void **)(a1 + 24);
  v13 = a3 & 1;
  v64 = v13;
  if ( (a3 & 1) != 0 || v12 != hModuleWin || *((_WORD *)v11 + 332) < 0x400u )
  {
    v14 = *(_QWORD *)(a1 + 80);
    if ( (v14 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      Atom = UserFindAtom(v14, v9);
      v13 = v64;
    }
    else
    {
      Atom = *(_WORD *)(a1 + 80);
    }
    if ( a4 )
      *a4 = 0;
    if ( Atom && !v13 )
    {
      v58[0] = *((struct tagDESKTOP **)v11 + 57);
      ClassPtr = (char *)InnerGetClassPtr(Atom, (char *)v58[0] + 352, v12);
      if ( ClassPtr )
        goto LABEL_76;
      if ( (*(_DWORD *)(a1 + 4) & 0x4000) != 0 )
      {
        for ( ClassPtr = (char *)v58[0] + 360; *(_QWORD *)ClassPtr; ClassPtr = *(char **)ClassPtr )
        {
          v17 = *(_QWORD *)(*(_QWORD *)ClassPtr + 8LL);
          if ( *(_WORD *)v17 == Atom && (*(_BYTE *)(v17 + 6) & 4) == 0 )
            goto LABEL_16;
        }
        ClassPtr = 0LL;
LABEL_16:
        if ( ClassPtr )
        {
LABEL_76:
          if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
          {
            if ( a4 )
              *a4 = 1;
            v7 = *(_QWORD *)ClassPtr;
          }
          else
          {
            UserSetLastError(1410);
          }
          goto LABEL_53;
        }
      }
    }
    v18 = 0LL;
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)v11 + 130, 0, 0) & 4) == 0 )
      v18 = (struct tagDESKTOP *)*((_QWORD *)v11 + 61);
    v58[0] = v18;
    if ( *(_DWORD *)(a1 + 16) >= 0xFFFFFFA8 )
      goto LABEL_54;
    v19 = (struct tagCLS *)ClassAlloc(v18, *(_DWORD *)(a1 + 16) + 88, v10);
    v20 = v19;
    if ( v19 && !(unsigned __int8)InitLookAsideRef<tagCLS>(v19) )
    {
      ClassFree(v18, v20);
      v20 = 0LL;
    }
    SmartObjStackRefBase<tagCLS>::operator=(v59, v20);
    if ( !*(_QWORD *)v59[0] )
    {
LABEL_53:
      SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v59);
      return v7;
    }
    LockObjectAssignment(*(_QWORD *)v59[0] + 32LL, v18);
    *(_QWORD *)(*(_QWORD *)v59[0] + 56LL) = *(_QWORD *)v59[0];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 8LL) = *(_DWORD *)(a1 + 4);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 32LL) = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 12LL) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 80LL) = *(_DWORD *)(a1 + 20);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 64LL) = *(_QWORD *)(a1 + 24);
    *(_OWORD *)(*(_QWORD *)v59[0] + 80LL) = *(_OWORD *)(a1 + 32);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 72LL) = *(_QWORD *)(a1 + 48);
    v21 = *(_QWORD *)v59[0];
    *(_OWORD *)(v21 + 96) = *(_OWORD *)(a1 + 56);
    *(_QWORD *)(v21 + 112) = *(_QWORD *)(a1 + 72);
    v22 = *(_QWORD *)(*(_QWORD *)v59[0] + 8LL);
    *(_DWORD *)(v22 + 84) = *(_DWORD *)(a1 + 88);
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 6LL) = a3;
    v23 = v63;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 4LL) = v63;
    if ( (_WORD)v23 )
    {
      v40 = *(_QWORD *)(*(_QWORD *)v59[0] + 8LL);
      if ( *(_DWORD *)(a1 + 92) == 1 )
        v41 = *(_WORD *)(v40 + 84);
      else
        v41 = *(_WORD *)(v40 + 80);
      v42 = *(_WORD *)(W32GetUserSessionState(*(_QWORD *)v59[0], v22) + 71164) + v41;
      *(_WORD *)(*(_QWORD *)(W32GetUserSessionState(v44, v43) + 19904) + 2LL * ((v23 & 0xFFFF2FFF) - 666) + 328) = v42;
    }
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 6LL) & 1) == 0 )
    {
      v24 = MapClientToServerPfn(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 32LL));
      if ( v24 )
      {
        v53 = 0;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 6LL) |= 1u;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 6LL) &= ~2u;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 32LL) = v24;
        while ( v53 < 5 )
        {
          v54 = 12LL * v53;
          if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 32LL) == *(_QWORD *)&gDefaultServerClasses[v54 + 4] )
          {
            v55 = gDefaultServerClasses[v54 + 6];
            if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 80LL) >= v55 )
            {
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 84LL) = v55;
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 80LL) -= gDefaultServerClasses[v54 + 6];
            }
            break;
          }
          ++v53;
        }
      }
    }
    v25 = (a3 >> 6) & 1;
    if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v59[0] + 88LL), v25) )
    {
LABEL_67:
      v62 = *(_QWORD *)(*(_QWORD *)v59[0] + 32LL);
      *(_QWORD *)(*(_QWORD *)v59[0] + 32LL) = 0LL;
      ClassFree(v18, *(struct tagCLS **)v59[0]);
      DeferrableUnlockObjectAssignment<tagDESKTOP>(&v62, v46, v47, v48);
      goto LABEL_55;
    }
    if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v59[0] + 80LL), v25) )
    {
LABEL_66:
      HMAssignmentUnlock(*(_QWORD *)v59[0] + 88LL);
      goto LABEL_67;
    }
    if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v59[0] + 112LL), v25) )
    {
LABEL_65:
      HMAssignmentUnlock(*(_QWORD *)v59[0] + 80LL);
      goto LABEL_66;
    }
    v26 = *(const WCHAR **)(*(_QWORD *)v59[0] + 112LL);
    v27 = (const WCHAR *)(*(_QWORD *)v59[0] + 112LL);
    if ( v26 )
      v28 = *(_QWORD *)v26;
    else
      v28 = 0LL;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 56LL) = v28;
    SourceString[0] = v27;
    SourceString[1] = v26;
    HMAssignmentLock(SourceString, 0LL);
    v29 = *(_QWORD *)(a1 + 64);
    if ( (v29 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v56 = 1;
      v30 = UserAddAtomEx(v29, 0LL, 2LL);
    }
    else
    {
      v30 = ValidateClassAtomForRegisterClass(*((struct tagPROCESSINFO **)v11 + 57), *(_WORD *)(a1 + 64));
    }
    if ( !v30 )
    {
LABEL_64:
      v45 = *(_QWORD *)v59[0] + 112LL;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 56LL) = 0LL;
      HMAssignmentUnlock(v45);
      goto LABEL_65;
    }
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 2LL) = v30;
    v31 = *(_QWORD *)(a1 + 80);
    if ( (v31 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      LODWORD(v62) = 1;
      v32 = UserAddAtomEx(v31, 0LL, 2LL);
    }
    else
    {
      v32 = ValidateClassAtomForRegisterClass(*((struct tagPROCESSINFO **)v11 + 57), *(_WORD *)(a1 + 80));
    }
    if ( !v32 )
    {
LABEL_62:
      if ( v56 )
        UserDeleteAtom(*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 2LL));
      goto LABEL_64;
    }
    **(_WORD **)(*(_QWORD *)v59[0] + 8LL) = v32;
    v35 = *(const WCHAR **)(a1 + 64);
    if ( ((unsigned __int64)v35 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      RtlInitUnicodeString(&DestinationString, v35);
      v36 = DestinationString.Length + 1;
    }
    else
    {
      v36 = 7;
    }
    if ( v18 )
    {
      LOBYTE(v34) = 1;
      v37 = DesktopAllocInternal(v18, v36, v33, v34);
    }
    else
    {
      v37 = Win32AllocPoolZInit(v36, 1818456917LL);
    }
    if ( v37 )
    {
      v38 = *(_QWORD *)v59[0];
      if ( v18 )
      {
        tagCLS::SharedPointerFieldlpszAnsiClassName<char>::operator=(v38 + 104, v37);
      }
      else
      {
        *(_QWORD *)(v38 + 104) = v37;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 48LL) = 0LL;
      }
      if ( (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        v61.MaximumLength = v36;
        v61.Buffer = *(PCHAR *)(*(_QWORD *)v59[0] + 104LL);
        RtlUnicodeStringToAnsiString(&v61, &DestinationString, 0);
      }
      else
      {
        **(_BYTE **)(*(_QWORD *)v59[0] + 104LL) = 35;
        RtlIntegerToChar(
          *(unsigned __int16 *)(a1 + 64),
          0xAu,
          v36 - 1,
          (PCHAR)(*(_QWORD *)(*(_QWORD *)v59[0] + 104LL) + 1LL));
      }
      SourceString[0] = *(PCWSTR *)(*(_QWORD *)v59[0] + 96LL);
      if ( SourceString[0] && ((unsigned __int64)SourceString[0] & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString[0]);
        if ( DestinationString.Length )
        {
          *(_OWORD *)v58 = 0LL;
          if ( (unsigned int)AllocateUnicodeString(v58, &DestinationString) )
          {
            v49 = *(_QWORD *)v59[0];
            v50 = v58[1];
            v51 = (__int64)v58[1];
            if ( ((unsigned __int64)v58[1] & 0xFFFFFFFFFFFF0000uLL) != 0 )
              v51 = -1LL;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 40LL) = v51;
            *(_QWORD *)(v49 + 96) = v50;
            goto LABEL_48;
          }
          ClassFree(v18, *(char **)(*(_QWORD *)v59[0] + 104LL));
          goto LABEL_60;
        }
        v52 = *(_QWORD *)v59[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 40LL) = 0LL;
        *(_QWORD *)(v52 + 96) = 0LL;
      }
LABEL_48:
      if ( v64 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v59[0] + 8LL) + 8LL) & 0x4000) != 0 )
      {
        **(_QWORD **)v59[0] = *(_QWORD *)(*((_QWORD *)v11 + 57) + 360LL);
        *(_QWORD *)(*((_QWORD *)v11 + 57) + 360LL) = *(_QWORD *)v59[0];
      }
      else
      {
        **(_QWORD **)v59[0] = *(_QWORD *)(*((_QWORD *)v11 + 57) + 352LL);
        *(_QWORD *)(*((_QWORD *)v11 + 57) + 352LL) = *(_QWORD *)v59[0];
      }
      v7 = *(_QWORD *)v59[0];
      goto LABEL_53;
    }
LABEL_60:
    if ( (_DWORD)v62 )
      UserDeleteAtom(**(unsigned __int16 **)(*(_QWORD *)v59[0] + 8LL));
    goto LABEL_62;
  }
LABEL_54:
  UserSetLastError(87);
LABEL_55:
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v59);
  return 0LL;
}
