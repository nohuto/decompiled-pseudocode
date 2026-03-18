/*
 * XREFs of ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E8530
 * Callers:
 *     xxxSetClassData @ 0x1C0103C44 (xxxSetClassData.c)
 * Callees:
 *     HMValidateHandle @ 0x1C004AD4C (HMValidateHandle.c)
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ClassLock @ 0x1C00F1844 (ClassLock.c)
 *     ClassUnlock @ 0x1C01E86C4 (ClassUnlock.c)
 *     xxxSetClassIcon @ 0x1C0223AFC (xxxSetClassIcon.c)
 */

_QWORD *__fastcall xxxSetClassCursor(struct tagWND *a1, struct tagCLS *a2, int a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v8; // r14
  __int64 v9; // rbp
  int v10; // ecx
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax
  struct tagCLS *i; // rsi
  _QWORD v17[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v18[3]; // [rsp+38h] [rbp-50h] BYREF
  __int64 v19[4]; // [rsp+50h] [rbp-38h] BYREF

  v4 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( a4 )
  {
    v9 = HMValidateHandle(a4, 3);
    if ( !v9 )
    {
      if ( a3 == -14 || (v10 = 1402, a3 == -34) )
        v10 = 1414;
      UserSetLastError(v10);
    }
  }
  v11 = *((_QWORD *)a2 + 8);
  if ( !(unsigned int)ClassLock(v11, v19) )
  {
    UserSetLastError(5);
    return 0LL;
  }
  v14 = gptiCurrent;
  v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v17;
  v17[1] = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  if ( a3 == -34 || a3 == -14 )
  {
    v15 = (_QWORD *)xxxSetClassIcon(a1, v11);
LABEL_16:
    v8 = v15;
    if ( v15 )
      v8 = (_QWORD *)*v15;
    goto LABEL_18;
  }
  if ( a3 == -12 )
  {
    v15 = (_QWORD *)HMAssignmentLock(v11 + 120, v9);
    goto LABEL_16;
  }
LABEL_18:
  for ( i = *(struct tagCLS **)(v11 + 72); ; i = *(struct tagCLS **)i )
  {
    if ( !i )
    {
LABEL_28:
      v4 = v8;
      goto LABEL_29;
    }
    if ( a3 == -34 || a3 == -14 )
      break;
    if ( a3 == -12 )
      HMAssignmentLock((char *)i + 120, v9);
LABEL_25:
    if ( !i )
      goto LABEL_28;
  }
  if ( (unsigned int)ClassLock((__int64)i, v18) )
  {
    xxxSetClassIcon(a1, (__int64)i);
    i = (struct tagCLS *)ClassUnlock(i);
    goto LABEL_25;
  }
  UserSetLastError(5);
LABEL_29:
  ThreadUnlock1(v14, v12);
  ClassUnlock((struct tagCLS *)v11);
  return v4;
}
