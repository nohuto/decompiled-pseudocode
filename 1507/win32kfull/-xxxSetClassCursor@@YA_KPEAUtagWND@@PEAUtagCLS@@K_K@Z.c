/*
 * XREFs of ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C0154734
 * Callers:
 *     xxxSetClassData @ 0x1C0127AFC (xxxSetClassData.c)
 * Callees:
 *     ClassLock @ 0x1C005BE7C (ClassLock.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     HMValidateHandle @ 0x1C00956E8 (HMValidateHandle.c)
 *     ClassUnlock @ 0x1C0154834 (ClassUnlock.c)
 *     xxxSetClassIcon @ 0x1C0154854 (xxxSetClassIcon.c)
 */

_QWORD *__fastcall xxxSetClassCursor(struct tagWND *a1, struct tagCLS *a2, int a3, __int64 a4)
{
  _QWORD *v4; // rbx
  _QWORD *v8; // r14
  __int64 v9; // rbp
  __int64 v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  struct tagCLS *i; // rsi
  int v16; // ecx
  _QWORD v17[3]; // [rsp+20h] [rbp-68h] BYREF
  char v18[24]; // [rsp+38h] [rbp-50h] BYREF
  char v19[32]; // [rsp+50h] [rbp-38h] BYREF

  v4 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  if ( a4 )
  {
    v9 = HMValidateHandle(a4, 3);
    if ( !v9 )
    {
      if ( a3 == -14 || (v16 = 1402, a3 == -34) )
        v16 = 1414;
      UserSetLastError(v16);
    }
  }
  v10 = *((_QWORD *)a2 + 8);
  if ( !(unsigned int)ClassLock(v10, (__int64)v19) )
  {
    UserSetLastError(5);
    return 0LL;
  }
  v12 = gptiCurrent;
  v17[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v17;
  v17[1] = v9;
  if ( v9 )
    ++*(_DWORD *)(v9 + 8);
  if ( a3 == -14 || a3 == -34 )
  {
    v13 = (_QWORD *)xxxSetClassIcon(a1, v10);
    goto LABEL_8;
  }
  if ( a3 == -12 )
  {
    v13 = (_QWORD *)HMAssignmentLock(v10 + 120, v9);
LABEL_8:
    v8 = v13;
    if ( v13 )
      v8 = (_QWORD *)*v13;
  }
  for ( i = *(struct tagCLS **)(v10 + 72); ; i = *(struct tagCLS **)i )
  {
    if ( !i )
    {
LABEL_12:
      v4 = v8;
      goto LABEL_13;
    }
    if ( a3 == -34 || a3 == -14 )
      break;
    if ( a3 == -12 )
      HMAssignmentLock((char *)i + 120, v9);
LABEL_28:
    if ( !i )
      goto LABEL_12;
  }
  if ( (unsigned int)ClassLock((__int64)i, (__int64)v18) )
  {
    xxxSetClassIcon(a1, (__int64)i);
    i = (struct tagCLS *)ClassUnlock(i);
    goto LABEL_28;
  }
  UserSetLastError(5);
LABEL_13:
  ThreadUnlock1(v12, v11);
  ClassUnlock((struct tagCLS *)v10);
  return v4;
}
