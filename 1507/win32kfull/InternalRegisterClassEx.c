/*
 * XREFs of InternalRegisterClassEx @ 0x1C005CF60
 * Callers:
 *     RegisterDefaultClass @ 0x1C0059D10 (RegisterDefaultClass.c)
 *     _RegisterClassEx @ 0x1C0059EFC (_RegisterClassEx.c)
 *     RegisterIconTitleClass @ 0x1C00F1DF4 (RegisterIconTitleClass.c)
 * Callees:
 *     MapClientToServerPfn @ 0x1C0059BB8 (MapClientToServerPfn.c)
 *     ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x1C005D43C (-ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C005D49C (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     _InnerGetClassPtr @ 0x1C005D68C (_InnerGetClassPtr.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C00D8F78 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z @ 0x1C00D914C (-ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z.c)
 *     AllocateUnicodeString @ 0x1C00F47D4 (AllocateUnicodeString.c)
 */

_QWORD *__fastcall InternalRegisterClassEx(__int64 a1, __int16 a2, __int16 a3)
{
  __int64 v6; // rbx
  int v7; // edx
  __int64 v8; // rcx
  unsigned __int16 Atom; // r10
  unsigned __int16 v10; // r10
  __int64 v11; // r11
  __int64 v12; // rcx
  struct tagDESKTOP *v13; // r15
  unsigned int v14; // ecx
  unsigned int v15; // edx
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  __int16 v18; // r12
  __int64 v19; // rax
  int v20; // r12d
  __int64 v21; // rcx
  unsigned __int16 v22; // ax
  __int64 v23; // rcx
  unsigned __int16 v24; // ax
  __int16 v25; // r8
  const WCHAR *v26; // rdx
  int v27; // r13d
  _BYTE *v28; // rax
  const WCHAR *v29; // rdx
  int v31; // [rsp+20h] [rbp-78h]
  _QWORD v32[3]; // [rsp+30h] [rbp-68h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-50h] BYREF
  _STRING v34; // [rsp+58h] [rbp-40h] BYREF
  __int64 v35; // [rsp+A0h] [rbp+8h] BYREF
  int v36; // [rsp+B8h] [rbp+20h]

  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  HIWORD(DestinationString.Buffer) = 0;
  v31 = 0;
  v36 = 0;
  if ( (unsigned int)(*(_DWORD *)(a1 + 20) + 376) < *(_DWORD *)(a1 + 20) )
    goto LABEL_61;
  v6 = *(_QWORD *)(a1 + 24);
  v7 = a3 & 1;
  LODWORD(v35) = v7;
  if ( (a3 & 1) == 0 && v6 == hModuleWin && *(_WORD *)(gptiCurrent + 560LL) >= 0x400u )
    goto LABEL_61;
  v8 = *(_QWORD *)(a1 + 80);
  if ( (v8 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    Atom = UserFindAtom(v8);
    v7 = v35;
  }
  else
  {
    Atom = v8;
  }
  if ( Atom
    && !v7
    && (InnerGetClassPtr(Atom, *(_QWORD *)(gptiCurrent + 384LL) + 320LL, v6)
     || (*(_DWORD *)(a1 + 4) & 0x4000) != 0 && InnerGetClassPtr(v10, v11 + 328, 0LL)) )
  {
    v12 = 1410LL;
LABEL_62:
    UserSetLastError(v12);
    return 0LL;
  }
  v13 = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 448LL) & 4) == 0 )
    v13 = *(struct tagDESKTOP **)(gptiCurrent + 416LL);
  v14 = (a3 & 8) + 160;
  v15 = v14 + *(_DWORD *)(a1 + 16);
  if ( v15 < v14 )
  {
LABEL_61:
    v12 = 87LL;
    goto LABEL_62;
  }
  v16 = ClassAlloc(v13, v15, a3);
  v17 = v16;
  v32[0] = v16;
  if ( !v16 )
    return 0LL;
  LockObjectAssignment(v16 + 2, v13);
  v17[8] = v17;
  *(_OWORD *)((char *)v17 + 84) = *(_OWORD *)(a1 + 4);
  *(_OWORD *)((char *)v17 + 100) = *(_OWORD *)(a1 + 20);
  *(_OWORD *)((char *)v17 + 116) = *(_OWORD *)(a1 + 36);
  *(_OWORD *)((char *)v17 + 132) = *(_OWORD *)(a1 + 52);
  *(_QWORD *)((char *)v17 + 148) = *(_QWORD *)(a1 + 68);
  *((_DWORD *)v17 + 39) = *(_DWORD *)(a1 + 76);
  *((_WORD *)v17 + 17) = a3;
  *((_WORD *)v17 + 6) = a2;
  if ( a2 )
    *(_WORD *)(gpsi + 2LL * ((a2 & 0x3FFFu) - 666) + 328) = *((_WORD *)v17 + 50) + 376;
  v18 = *((_WORD *)v17 + 17);
  if ( (v18 & 1) == 0 )
  {
    v19 = MapClientToServerPfn(v17[11]);
    if ( v19 )
    {
      *((_WORD *)v17 + 17) = v18 & 0xFFFC | 1;
      v17[11] = v19;
    }
  }
  v20 = ((unsigned __int8)a3 >> 6) & 1;
  if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)v17 + 15, v20) )
  {
LABEL_60:
    v35 = v17[2];
    v17[2] = 0LL;
    ClassFree(v13, v17);
    UnlockObjectAssignment(&v35);
    return 0LL;
  }
  if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)v17 + 14, v20) )
  {
LABEL_59:
    HMAssignmentUnlock(v17 + 15);
    goto LABEL_60;
  }
  if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)v17 + 19, v20) )
  {
LABEL_58:
    HMAssignmentUnlock(v17 + 14);
    goto LABEL_59;
  }
  v21 = *(_QWORD *)(a1 + 64);
  if ( (v21 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v31 = 1;
    v22 = UserAddAtomEx(v21, 0LL, 2LL);
  }
  else
  {
    v22 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(gptiCurrent + 384LL), v21);
  }
  if ( !v22 )
  {
LABEL_57:
    HMAssignmentUnlock(v17 + 19);
    goto LABEL_58;
  }
  *((_WORD *)v17 + 5) = v22;
  v23 = *(_QWORD *)(a1 + 80);
  if ( (v23 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v36 = 1;
    v24 = UserAddAtomEx(v23, 0LL, 2LL);
  }
  else
  {
    v24 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(gptiCurrent + 384LL), v23);
  }
  if ( !v24 )
  {
LABEL_55:
    if ( v31 )
      UserDeleteAtom(*((unsigned __int16 *)v17 + 5));
    goto LABEL_57;
  }
  *((_WORD *)v17 + 4) = v24;
  v26 = *(const WCHAR **)(a1 + 64);
  if ( ((unsigned __int64)v26 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, v26);
    v27 = DestinationString.Length + 1;
  }
  else
  {
    v27 = 7;
  }
  v28 = ClassAlloc(v13, v27, v25);
  v17[18] = v28;
  if ( !v28 )
  {
LABEL_53:
    if ( v36 )
      UserDeleteAtom(*((unsigned __int16 *)v17 + 4));
    goto LABEL_55;
  }
  if ( (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v34.Length = 0;
    v34.MaximumLength = v27;
    v34.Buffer = (PCHAR)v17[18];
    RtlUnicodeStringToAnsiString(&v34, &DestinationString, 0);
  }
  else
  {
    *v28 = 35;
    RtlIntegerToChar(*(unsigned __int16 *)(a1 + 64), 0xAu, v27 - 1, (PCHAR)(v17[18] + 1LL));
  }
  v29 = (const WCHAR *)v17[17];
  if ( v29 && ((unsigned __int64)v29 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, v29);
    if ( !DestinationString.Length )
    {
      v17[17] = 0LL;
      goto LABEL_48;
    }
    if ( (unsigned int)AllocateUnicodeString(v32, &DestinationString) )
    {
      v17[17] = v32[1];
      goto LABEL_48;
    }
    ClassFree(v13, (void *)v17[18]);
    goto LABEL_53;
  }
LABEL_48:
  if ( (_DWORD)v35 || (*((_DWORD *)v17 + 21) & 0x4000) != 0 )
  {
    *v17 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 328LL);
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 328LL) = v17;
  }
  else
  {
    *v17 = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 320LL);
    *(_QWORD *)(*(_QWORD *)(gptiCurrent + 384LL) + 320LL) = v17;
  }
  return v17;
}
