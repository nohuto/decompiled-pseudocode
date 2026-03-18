/*
 * XREFs of DestroyClass @ 0x1C00D8FFC
 * Callers:
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C005BCA0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     _UnregisterClass @ 0x1C005D4C0 (_UnregisterClass.c)
 *     DereferenceClass @ 0x1C008A2C0 (DereferenceClass.c)
 *     DestroyProcessesClasses @ 0x1C00D8FB0 (DestroyProcessesClasses.c)
 *     DestroyClass @ 0x1C00D8FFC (DestroyClass.c)
 *     FinalUserInit @ 0x1C0138628 (FinalUserInit.c)
 *     _WOWCleanup @ 0x1C0204770 (_WOWCleanup.c)
 *     _WOWModuleUnload @ 0x1C0204870 (_WOWModuleUnload.c)
 * Callees:
 *     DestroyClass @ 0x1C00D8FFC (DestroyClass.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z @ 0x1C00D914C (-ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z.c)
 *     ?IsClassAtomPinned@@YA_NG@Z @ 0x1C00D916C (-IsClassAtomPinned@@YA_NG@Z.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C00D918C (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     DestroyClassSmIcon @ 0x1C00D91CC (DestroyClassSmIcon.c)
 *     ?DestroyClassBrush@@YAXPEAUtagCLS@@@Z @ 0x1C00D9210 (-DestroyClassBrush@@YAXPEAUtagCLS@@@Z.c)
 *     ?UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z @ 0x1C00D95F0 (-UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z.c)
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
