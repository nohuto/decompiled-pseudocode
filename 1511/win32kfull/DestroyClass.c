/*
 * XREFs of DestroyClass @ 0x1C011E02C
 * Callers:
 *     DereferenceClass @ 0x1C0068330 (DereferenceClass.c)
 *     FinalUserInit @ 0x1C00D744C (FinalUserInit.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C00F4720 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     _UnregisterClass @ 0x1C011D430 (_UnregisterClass.c)
 *     DestroyProcessesClasses @ 0x1C011DFE0 (DestroyProcessesClasses.c)
 *     DestroyClass @ 0x1C011E02C (DestroyClass.c)
 *     _WOWCleanup @ 0x1C0204AF0 (_WOWCleanup.c)
 *     _WOWModuleUnload @ 0x1C0204BF0 (_WOWModuleUnload.c)
 * Callees:
 *     ?UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z @ 0x1C010A670 (-UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z.c)
 *     DestroyClass @ 0x1C011E02C (DestroyClass.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z @ 0x1C011E17C (-ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z.c)
 *     ?IsClassAtomPinned@@YA_NG@Z @ 0x1C011E19C (-IsClassAtomPinned@@YA_NG@Z.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C011E1BC (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     DestroyClassSmIcon @ 0x1C011E1FC (DestroyClassSmIcon.c)
 *     ?DestroyClassBrush@@YAXPEAUtagCLS@@@Z @ 0x1C011E240 (-DestroyClassBrush@@YAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall DestroyClass(struct tagPROCESSINFO *a1, _QWORD **a2)
{
  _QWORD *v2; // rbx
  unsigned __int16 v4; // dx
  unsigned __int16 v5; // dx
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // dx
  __int64 v8; // rcx
  __int64 v9; // rdx
  struct tagDESKTOP *v11; // [rsp+38h] [rbp+10h] BYREF

  v2 = *a2;
  *a2 = (_QWORD *)**a2;
  if ( v2 == (_QWORD *)v2[8] )
  {
    while ( v2[9] )
      DestroyClass(a1);
    if ( !IsClassAtomPinned(*((_WORD *)v2 + 4)) && v4 >= 0xC000u && !IsClassAtomRegistered(a1, v4) )
      UserDeleteAtom(v5);
    if ( (!IsClassAtomPinned(*((_WORD *)v2 + 5)) || v6 >= 0xC000u) && !IsClassAtomRegistered(a1, v6) )
      UserDeleteAtom(v7);
    v8 = v2[17];
    if ( (v8 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      Win32FreePool(v8);
    v9 = v2[3];
    if ( v9 )
      DestroyCacheDC(0LL, *(_QWORD *)(v9 + 8));
    DestroyClassBrush((struct tagCLS *)v2);
  }
  DestroyClassSmIcon(v2);
  HMAssignmentUnlock(v2 + 14);
  HMAssignmentUnlock(v2 + 19);
  HMAssignmentUnlock(v2 + 15);
  if ( v2[7] )
    UnlockAndFreeCPDs((struct _CALLPROCDATA **)v2 + 7);
  v11 = (struct tagDESKTOP *)v2[2];
  v2[2] = 0LL;
  ClassFree(v11, (void *)v2[18]);
  ClassFree(v11, v2);
  return UnlockObjectAssignment(&v11);
}
