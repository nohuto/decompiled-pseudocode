/*
 * XREFs of DestroyClass @ 0x1C008FB6C
 * Callers:
 *     DereferenceClass @ 0x1C0055990 (DereferenceClass.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C006FA70 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     _UnregisterClass @ 0x1C0071F88 (_UnregisterClass.c)
 *     DestroyProcessesClasses @ 0x1C008FB20 (DestroyProcessesClasses.c)
 *     DestroyClass @ 0x1C008FB6C (DestroyClass.c)
 *     FinalUserInit @ 0x1C00BC3C8 (FinalUserInit.c)
 *     _WOWCleanup @ 0x1C01FBDD0 (_WOWCleanup.c)
 *     _WOWModuleUnload @ 0x1C01FBED0 (_WOWModuleUnload.c)
 * Callees:
 *     DestroyClass @ 0x1C008FB6C (DestroyClass.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z @ 0x1C008FCBC (-ClassFree@@YAXPEAUtagDESKTOP@@PEAX@Z.c)
 *     ?IsClassAtomPinned@@YA_NG@Z @ 0x1C008FCD0 (-IsClassAtomPinned@@YA_NG@Z.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C008FCF0 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     DestroyClassSmIcon @ 0x1C008FD30 (DestroyClassSmIcon.c)
 *     ?DestroyClassBrush@@YAXPEAUtagCLS@@@Z @ 0x1C008FD74 (-DestroyClassBrush@@YAXPEAUtagCLS@@@Z.c)
 *     ?UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z @ 0x1C00912E4 (-UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z.c)
 */

__int64 __fastcall DestroyClass(struct tagPROCESSINFO *a1, _QWORD **a2)
{
  _QWORD *v2; // rbx
  unsigned __int16 v4; // dx
  unsigned __int16 v5; // dx
  __int64 v6; // rdx
  __int64 v7; // r8
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
    if ( (!IsClassAtomPinned(*((_WORD *)v2 + 5)) || (unsigned __int16)v6 >= 0xC000u) && !IsClassAtomRegistered(a1, v6) )
      UserDeleteAtom((unsigned __int16)v6);
    v8 = v2[17];
    if ( (v8 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      Win32FreePool(v8, v6, v7);
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
