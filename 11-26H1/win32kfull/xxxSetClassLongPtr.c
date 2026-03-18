/*
 * XREFs of xxxSetClassLongPtr @ 0x140150DF0
 * Callers:
 *     NtUserSetClassLongPtr @ 0x140151C30 (NtUserSetClassLongPtr.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x14014FA30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x14014FEF0 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     xxxSetClassData @ 0x140151060 (xxxSetClassData.c)
 */

__int64 __fastcall xxxSetClassLongPtr(struct tagWND *a1, int a2, __int64 a3)
{
  __int64 v3; // rdi
  struct tagTHREADINFO *v6; // rax
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rbx
  int v10; // ecx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 i; // rdx
  __int64 **v14; // [rsp+20h] [rbp-10h] BYREF
  __int64 v15; // [rsp+28h] [rbp-8h] BYREF

  v3 = a2;
  v6 = PtiCurrent((__int64)a1);
  v14 = (__int64 **)gSmartObjNullRef;
  v15 = *((_QWORD *)v6 + 209);
  *((_QWORD *)v6 + 209) = &v15;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(&v15);
  v8 = 0LL;
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 456LL) != CurrentProcessWin32Process )
  {
    v10 = 5;
LABEL_8:
    UserSetLastError(v10);
    goto LABEL_6;
  }
  if ( (int)v3 < 0 )
  {
    v8 = xxxSetClassData(a1);
    goto LABEL_6;
  }
  SmartObjStackRefBase<tagCLS>::operator=((__int64 *)&v14, *(_QWORD *)(*((_QWORD *)a1 + 17) + 56LL));
  if ( (int)v3 + 8 < (unsigned int)v3 || (unsigned int)(v3 + 8) > *(_DWORD *)((*v14)[1] + 12) )
  {
    v10 = 1413;
    goto LABEL_8;
  }
  v11 = (*v14)[1];
  v12 = *(_QWORD *)(v11 + v3 + 88);
  *(_QWORD *)(v11 + v3 + 88) = a3;
  for ( i = (*v14)[8]; ; i = **v14 )
  {
    SmartObjStackRefBase<tagCLS>::operator=((__int64 *)&v14, i);
    if ( !*v14 )
      break;
    *(_QWORD *)((*v14)[1] + v3 + 88) = a3;
  }
  v8 = v12;
LABEL_6:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>((__int64 *)&v14);
  return v8;
}
