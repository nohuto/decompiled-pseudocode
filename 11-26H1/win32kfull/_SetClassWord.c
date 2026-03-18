/*
 * XREFs of _SetClassWord @ 0x1402A4BA0
 * Callers:
 *     NtUserSetClassWord @ 0x1402BBFD0 (NtUserSetClassWord.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ @ 0x14014FA30 (--1-$SmartObjStackRefBase@UtagCLS@@@@IEAA@XZ.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z @ 0x14014FEF0 (--4-$SmartObjStackRefBase@UtagCLS@@@@IEAAAEAV0@QEAUtagCLS@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z @ 0x1401509D8 (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AEAAXPEAUtagCLS@@@Z.c)
 */

__int64 __fastcall SetClassWord(__int64 a1, int a2, __int16 a3)
{
  __int64 v3; // rbx
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  int v8; // ecx
  __int64 v9; // rax
  unsigned __int16 v10; // di
  __int64 i; // rdx
  __int64 v13[2]; // [rsp+20h] [rbp-10h] BYREF

  v3 = a2;
  SmartObjStackRefBase<tagCLS>::Init(v13, 0LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 16) + 456LL) != CurrentProcessWin32Process )
  {
    v8 = 5;
LABEL_13:
    UserSetLastError(v8);
    SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v13);
    return 0LL;
  }
  SmartObjStackRefBase<tagCLS>::operator=(v13, *(_QWORD *)(*(_QWORD *)(a1 + 136) + 56LL));
  if ( (int)v3 < 0
    || (int)v3 + 2 < (unsigned int)v3
    || (unsigned int)(v3 + 2) > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v13[0] + 8LL) + 12LL) )
  {
    v8 = 1413;
    goto LABEL_13;
  }
  v9 = *(_QWORD *)(*(_QWORD *)v13[0] + 8LL);
  v10 = *(_WORD *)(v9 + v3 + 88);
  *(_WORD *)(v9 + v3 + 88) = a3;
  for ( i = *(_QWORD *)(*(_QWORD *)v13[0] + 64LL); ; i = **(_QWORD **)v13[0] )
  {
    SmartObjStackRefBase<tagCLS>::operator=(v13, i);
    if ( !*(_QWORD *)v13[0] )
      break;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v13[0] + 8LL) + v3 + 88) = a3;
  }
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v13);
  return v10;
}
