/*
 * XREFs of ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x140150B00
 * Callers:
 *     xxxSetClassData @ 0x140151060 (xxxSetClassData.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     HMValidateHandleWithDescriptor @ 0x140028DB8 (HMValidateHandleWithDescriptor.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x14014FA30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x14014FEF0 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     ClassLock @ 0x140150FE0 (ClassLock.c)
 *     ClassUnlock @ 0x140151B6C (ClassUnlock.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x140151BB0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     xxxSetClassIcon @ 0x140152AA8 (xxxSetClassIcon.c)
 */

_QWORD *__fastcall xxxSetClassCursor(struct tagWND *a1, struct tagCLS *a2, int a3, __int64 a4)
{
  _QWORD *v4; // rdi
  _QWORD *v6; // r14
  __int64 v7; // rsi
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct tagCLS *v19; // rbx
  struct tagTHREADINFO *v20; // rax
  struct tagCLS *v22; // rbx
  __int64 v23; // rcx
  struct tagTHREADINFO *v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  struct tagCLS **v27; // [rsp+28h] [rbp-39h] BYREF
  __int64 v28; // [rsp+30h] [rbp-31h] BYREF
  struct tagCLS **v29; // [rsp+38h] [rbp-29h] BYREF
  __int64 v30; // [rsp+40h] [rbp-21h] BYREF
  __int64 v31; // [rsp+48h] [rbp-19h] BYREF
  __int64 v32; // [rsp+50h] [rbp-11h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+58h] [rbp-9h] BYREF
  __int128 v34; // [rsp+68h] [rbp+7h] BYREF
  __int64 v35; // [rsp+78h] [rbp+17h]
  __int128 v36; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v37; // [rsp+90h] [rbp+2Fh]

  v4 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v11 = PtiCurrent((__int64)a1);
  v29 = (struct tagCLS **)gSmartObjNullRef;
  v30 = *((_QWORD *)v11 + 209);
  *((_QWORD *)v11 + 209) = &v30;
  v13 = PtiCurrent(v12);
  v27 = (struct tagCLS **)gSmartObjNullRef;
  v28 = *((_QWORD *)v13 + 209);
  *((_QWORD *)v13 + 209) = &v28;
  v35 = 0LL;
  v37 = 0LL;
  v34 = 0LL;
  v36 = 0LL;
  if ( a4 )
  {
    v7 = HMValidateHandleWithDescriptor(a4, 3u);
    if ( !v7 )
    {
      if ( a3 == -14 || (v25 = 1402, a3 == -34) )
        v25 = 1414;
      UserSetLastError(v25);
    }
  }
  SmartObjStackRefBase<tagCLS>::operator=((__int64 *)&v29, *((_QWORD *)a2 + 7));
  if ( !(unsigned int)ClassLock(*v29, &v34) )
  {
    UserSetLastError(5);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)&v27);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)&v29);
    return 0LL;
  }
  v15 = PtiCurrent(v14);
  Win32HM_LockIntoThread<1>((__int64)v15, v7, (__int64 *)BugCheckParameter3);
  if ( a3 == -34 || a3 == -14 )
  {
    v16 = (_QWORD *)xxxSetClassIcon(a1);
  }
  else
  {
    if ( a3 != -12 )
      goto LABEL_10;
    v32 = v7;
    v31 = (__int64)*v29 + 88;
    v16 = (_QWORD *)HMAssignmentLock(&v31, 0LL);
  }
  v6 = v16;
  if ( v16 )
    v6 = (_QWORD *)*v16;
LABEL_10:
  v17 = *((_QWORD *)*v29 + 8);
LABEL_11:
  SmartObjStackRefBase<tagCLS>::operator=((__int64 *)&v27, v17);
  while ( 1 )
  {
    if ( !*v27 )
    {
      v19 = *v29;
      v20 = PtiCurrent(v18);
      *((_QWORD *)v20 + 47) = v34;
      ClassUnlockWorker(v19);
      v4 = v6;
      goto LABEL_14;
    }
    if ( a3 != -34 && a3 != -14 )
    {
      if ( a3 == -12 )
      {
        v32 = v7;
        v31 = (__int64)*v27 + 88;
        HMAssignmentLock(&v31, 0LL);
      }
      goto LABEL_25;
    }
    if ( !(unsigned int)ClassLock(*v27, &v36) )
      break;
    xxxSetClassIcon(a1);
    v26 = ClassUnlock(*v27);
    SmartObjStackRefBase<tagCLS>::operator=((__int64 *)&v27, v26);
LABEL_25:
    if ( *v27 )
    {
      v17 = *(_QWORD *)*v27;
      goto LABEL_11;
    }
  }
  UserSetLastError(5);
  v22 = *v29;
  v24 = PtiCurrent(v23);
  *((_QWORD *)v24 + 47) = v34;
  ClassUnlockWorker(v22);
LABEL_14:
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)&v27);
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)&v29);
  return v4;
}
