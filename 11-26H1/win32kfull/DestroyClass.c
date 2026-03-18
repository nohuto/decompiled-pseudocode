/*
 * XREFs of DestroyClass @ 0x14014EF4C
 * Callers:
 *     FinalUserInit @ 0x1400CBC1C (FinalUserInit.c)
 *     DestroyProcessesClasses @ 0x14014E170 (DestroyProcessesClasses.c)
 *     DereferenceClass @ 0x14014EE40 (DereferenceClass.c)
 *     DestroyClass @ 0x14014EF4C (DestroyClass.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x140151BB0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     _UnregisterClass @ 0x1401C4174 (_UnregisterClass.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyClass @ 0x14014EF4C (DestroyClass.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x14014F808 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x14014FA30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ?IsClassAtomPinned@@YA_NG@Z @ 0x14014FB1C (-IsClassAtomPinned@@YA_NG@Z.c)
 *     ??$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z @ 0x14014FB64 (--$DeferrableUnlockObjectAssignment@UtagDESKTOP@@@@YAXPEAPEAUtagDESKTOP@@@Z.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x14014FC0C (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     DestroyClassSmIcon @ 0x14014FCA0 (DestroyClassSmIcon.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x14014FD14 (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     ?UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z @ 0x140245300 (-UnlockAndFreeCPDs@@YAXPEAPEAU_CALLPROCDATA@@@Z.c)
 */

__int64 __fastcall DestroyClass(struct tagPROCESSINFO *a1, struct _CALLPROCDATA ***a2)
{
  struct _CALLPROCDATA **v2; // rbx
  unsigned __int16 v4; // dx
  __int64 v5; // rcx
  struct _CALLPROCDATA *v6; // rdx
  struct tagTHREADINFO *v7; // rax
  struct tagTHREADINFO *v8; // rax
  struct _CALLPROCDATA *v9; // rdi
  struct _CALLPROCDATA *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  struct _CALLPROCDATA *v15; // [rsp+20h] [rbp-10h] BYREF
  __int64 v16; // [rsp+28h] [rbp-8h] BYREF
  struct _CALLPROCDATA *v17; // [rsp+48h] [rbp+18h] BYREF

  v2 = *a2;
  *a2 = (struct _CALLPROCDATA **)**a2;
  if ( v2 == (struct _CALLPROCDATA **)v2[7] )
  {
    while ( v2[8] )
      DestroyClass(a1, v2 + 8);
    if ( !IsClassAtomPinned(*(_WORD *)v2[1]) )
    {
      v4 = *(_WORD *)v2[1];
      if ( v4 >= 0xC000u && !IsClassAtomRegistered(a1, v4) )
        UserDeleteAtom(*(unsigned __int16 *)v2[1]);
    }
    if ( (!IsClassAtomPinned(*((_WORD *)v2[1] + 1)) || *((_WORD *)v2[1] + 1) >= 0xC000u)
      && !IsClassAtomRegistered(a1, *((_WORD *)v2[1] + 1)) )
    {
      UserDeleteAtom(*((unsigned __int16 *)v2[1] + 1));
    }
    v5 = (__int64)v2[12];
    if ( (v5 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      Win32FreePool((void *)v5);
    v6 = v2[5];
    if ( v6 )
      DestroyCacheDC(0LL, *((_QWORD *)v6 + 2));
    v7 = PtiCurrent(v5);
    v15 = (struct _CALLPROCDATA *)gSmartObjNullRef;
    v15 = v2[16];
    ++*((_DWORD *)v2[16] + 2);
    v16 = *((_QWORD *)v7 + 209);
    *((_QWORD *)v7 + 209) = &v16;
    DestroyClassBrush(&v15);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v15);
  }
  v8 = PtiCurrent((__int64)a1);
  v15 = (struct _CALLPROCDATA *)gSmartObjNullRef;
  if ( v2 )
  {
    v15 = v2[16];
    ++*((_DWORD *)v2[16] + 2);
  }
  v16 = *((_QWORD *)v8 + 209);
  *((_QWORD *)v8 + 209) = &v16;
  DestroyClassSmIcon(&v15);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v15);
  HMAssignmentUnlock(v2 + 10);
  *((_QWORD *)v2[1] + 7) = 0LL;
  HMAssignmentUnlock(v2 + 14);
  HMAssignmentUnlock(v2 + 11);
  if ( v2[6] )
    UnlockAndFreeCPDs(v2 + 6);
  v10 = v2[13];
  v17 = v2[4];
  v9 = v17;
  v2[4] = 0LL;
  if ( v9 )
    RtlFreeHeap(*((PVOID *)v9 + 17), 0, v10);
  else
    Win32FreePool(v10);
  ClassFree(v9, (struct tagCLS *)v2);
  return DeferrableUnlockObjectAssignment<tagDESKTOP>(&v17, v11, v12, v13);
}
