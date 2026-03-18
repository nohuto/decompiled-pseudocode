/*
 * XREFs of InternalRegisterClassEx @ 0x1C00705B8
 * Callers:
 *     RegisterIconTitleClass @ 0x1C009E254 (RegisterIconTitleClass.c)
 *     _RegisterClassEx @ 0x1C009F9F0 (_RegisterClassEx.c)
 *     RegisterDefaultClass @ 0x1C009FA7C (RegisterDefaultClass.c)
 * Callees:
 *     AllocateUnicodeString @ 0x1C0019B7C (AllocateUnicodeString.c)
 *     ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x1C0070A24 (-ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C0070A84 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     _InnerGetClassPtr @ 0x1C007215C (_InnerGetClassPtr.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C008FAE4 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z @ 0x1C008FCBC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z.c)
 *     MapClientToServerPfn @ 0x1C00A2060 (MapClientToServerPfn.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

_QWORD *__fastcall InternalRegisterClassEx(__int64 a1, __int16 a2, unsigned int a3)
{
  __int16 v3; // r13
  __int64 v6; // r15
  __int64 v7; // rcx
  unsigned __int16 Atom; // r10
  unsigned __int16 v9; // r10
  __int64 v10; // r11
  struct tagDESKTOP *v11; // r15
  unsigned int v12; // ecx
  unsigned int v13; // edx
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  __int16 v16; // r12
  __int64 v17; // rax
  int v18; // r12d
  __int64 v19; // rcx
  unsigned __int16 v20; // ax
  __int64 v21; // rcx
  int v22; // r12d
  unsigned __int16 v23; // ax
  unsigned int v24; // r8d
  const WCHAR *v25; // rdx
  int v26; // r13d
  _BYTE *v27; // rax
  const WCHAR *v28; // rdx
  __int64 v29; // rax
  __int64 v31; // rcx
  struct _UNICODE_STRING v32; // [rsp+28h] [rbp-70h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-58h] BYREF
  _STRING v34; // [rsp+50h] [rbp-48h] BYREF
  __int64 v35; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v36; // [rsp+B0h] [rbp+18h]
  int v37; // [rsp+B8h] [rbp+20h]

  v36 = a3;
  v3 = a3;
  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  v37 = 0;
  LODWORD(v35) = 0;
  if ( (unsigned int)(*(_DWORD *)(a1 + 20) + 360) < *(_DWORD *)(a1 + 20) )
    goto LABEL_63;
  v6 = *(_QWORD *)(a1 + 24);
  if ( (a3 & 1) == 0 && v6 == hModuleWin && *(_WORD *)(gptiCurrent + 552LL) >= 0x400u )
    goto LABEL_63;
  v7 = *(_QWORD *)(a1 + 80);
  if ( (v7 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    Atom = UserFindAtom();
  else
    Atom = v7;
  if ( Atom
    && (v3 & 1) == 0
    && (InnerGetClassPtr(Atom, *(_QWORD *)(gptiCurrent + 376LL) + 312LL, v6)
     || (*(_DWORD *)(a1 + 4) & 0x4000) != 0 && InnerGetClassPtr(v9, v10 + 320, 0LL)) )
  {
    v31 = 1410LL;
LABEL_45:
    UserSetLastError(v31);
    return 0LL;
  }
  v11 = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 4) == 0 )
    v11 = *(struct tagDESKTOP **)(gptiCurrent + 408LL);
  v12 = (v3 & 8) + 160;
  v13 = v12 + *(_DWORD *)(a1 + 16);
  if ( v13 < v12 )
  {
LABEL_63:
    v31 = 87LL;
    goto LABEL_45;
  }
  v14 = ClassAlloc(v11, v13, a3);
  v15 = v14;
  *(_QWORD *)&v32.Length = v14;
  if ( !v14 )
    return 0LL;
  LockObjectAssignment(v14 + 2, v11);
  v15[8] = v15;
  *(_OWORD *)((char *)v15 + 84) = *(_OWORD *)(a1 + 4);
  *(_OWORD *)((char *)v15 + 100) = *(_OWORD *)(a1 + 20);
  *(_OWORD *)((char *)v15 + 116) = *(_OWORD *)(a1 + 36);
  *(_OWORD *)((char *)v15 + 132) = *(_OWORD *)(a1 + 52);
  *(_QWORD *)((char *)v15 + 148) = *(_QWORD *)(a1 + 68);
  *((_DWORD *)v15 + 39) = *(_DWORD *)(a1 + 76);
  *((_WORD *)v15 + 17) = v3;
  *((_WORD *)v15 + 6) = a2;
  if ( a2 )
    *(_WORD *)(gpsi + 2LL * ((a2 & 0x3FFFu) - 666) + 328) = *((_WORD *)v15 + 50) + 360;
  v16 = *((_WORD *)v15 + 17);
  if ( (v16 & 1) == 0 )
  {
    v17 = MapClientToServerPfn(v15[11]);
    if ( v17 )
    {
      *((_WORD *)v15 + 17) = v16 & 0xFFFC | 1;
      v15[11] = v17;
    }
  }
  v18 = ((unsigned __int8)v3 >> 6) & 1;
  if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)v15 + 15, v18) )
    goto LABEL_62;
  if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)v15 + 14, v18) )
  {
LABEL_61:
    HMAssignmentUnlock(v15 + 15);
LABEL_62:
    v35 = v15[2];
    v15[2] = 0LL;
    ClassFree(v11, v15);
    UnlockObjectAssignment(&v35);
    return 0LL;
  }
  if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)v15 + 19, v18) )
  {
LABEL_60:
    HMAssignmentUnlock(v15 + 14);
    goto LABEL_61;
  }
  v19 = *(_QWORD *)(a1 + 64);
  if ( (v19 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v37 = 1;
    v20 = UserAddAtomEx(v19, 0LL, 2LL);
  }
  else
  {
    v20 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(gptiCurrent + 376LL), v19);
  }
  if ( !v20 )
  {
LABEL_59:
    HMAssignmentUnlock(v15 + 19);
    goto LABEL_60;
  }
  *((_WORD *)v15 + 5) = v20;
  v21 = *(_QWORD *)(a1 + 80);
  if ( (v21 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v22 = 1;
    LODWORD(v35) = 1;
    v23 = UserAddAtomEx(v21, 0LL, 2LL);
  }
  else
  {
    v23 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(gptiCurrent + 376LL), v21);
    v22 = 0;
  }
  if ( !v23 )
  {
LABEL_57:
    if ( v37 )
      UserDeleteAtom(*((unsigned __int16 *)v15 + 5));
    goto LABEL_59;
  }
  *((_WORD *)v15 + 4) = v23;
  v25 = *(const WCHAR **)(a1 + 64);
  if ( ((unsigned __int64)v25 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, v25);
    v26 = DestinationString.Length + 1;
  }
  else
  {
    v26 = 7;
  }
  v27 = ClassAlloc(v11, v26, v24);
  v15[18] = v27;
  if ( !v27 )
  {
LABEL_55:
    if ( v22 )
      UserDeleteAtom(*((unsigned __int16 *)v15 + 4));
    goto LABEL_57;
  }
  if ( (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v34.Length = 0;
    v34.MaximumLength = v26;
    v34.Buffer = (PCHAR)v15[18];
    RtlUnicodeStringToAnsiString(&v34, &DestinationString, 0);
  }
  else
  {
    *v27 = 35;
    RtlIntegerToChar(*(unsigned __int16 *)(a1 + 64), 0xAu, v26 - 1, (PCHAR)(v15[18] + 1LL));
  }
  v28 = (const WCHAR *)v15[17];
  if ( !v28 || ((unsigned __int64)v28 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    goto LABEL_35;
  RtlInitUnicodeString(&DestinationString, v28);
  if ( !DestinationString.Length )
  {
    v15[17] = 0LL;
    goto LABEL_35;
  }
  if ( !(unsigned int)AllocateUnicodeString(&v32, &DestinationString.Length) )
  {
    ClassFree(v11, (void *)v15[18]);
    goto LABEL_55;
  }
  v15[17] = v32.Buffer;
LABEL_35:
  v29 = *(_QWORD *)(gptiCurrent + 376LL);
  if ( (*((_DWORD *)v15 + 21) & 0x4000) == 0 && (v36 & 1) == 0 )
  {
    *v15 = *(_QWORD *)(v29 + 312);
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 312LL) = v15;
  }
  else
  {
    *v15 = *(_QWORD *)(v29 + 320);
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 376LL) + 320LL) = v15;
  }
  return v15;
}
