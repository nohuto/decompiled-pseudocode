/*
 * XREFs of xxxImmActivateAndUnloadThreadsLayout @ 0x1C01D9FA0
 * Callers:
 *     ?xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z @ 0x1C00E728C (-xxxSetPKLinThreads@@YAXPEAUtagKL@@0@Z.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01D9FA0 (xxxImmActivateAndUnloadThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C009E9CC (LockW32Thread.c)
 *     xxxImmActivateLayout @ 0x1C01354E4 (xxxImmActivateLayout.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     xxxImmActivateAndUnloadThreadsLayout @ 0x1C01D9FA0 (xxxImmActivateAndUnloadThreadsLayout.c)
 *     xxxImmUnloadLayout @ 0x1C01DA638 (xxxImmUnloadLayout.c)
 */

__int64 __fastcall xxxImmActivateAndUnloadThreadsLayout(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  __int64 v6; // rdx
  __int64 v7; // r9
  int v8; // edi
  int v9; // r11d
  __int64 v10; // r8
  __int64 v11; // rcx
  char v12; // bl
  __int64 v13; // r9
  __int64 v14; // rcx
  PRKPROCESS *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // edi
  __int64 result; // rax
  int v20; // edi
  _QWORD *v21; // rbx
  __int64 v22; // rax
  _DWORD *i; // rcx
  _QWORD *v24; // rdi
  int v25; // ebx
  _QWORD *j; // rcx
  __int64 v27; // rcx
  int v28; // [rsp+34h] [rbp-314h]
  _DWORD *v30; // [rsp+38h] [rbp-310h]
  int v31; // [rsp+40h] [rbp-308h]
  _QWORD *v33; // [rsp+48h] [rbp-300h]
  int v34; // [rsp+50h] [rbp-2F8h]
  int v35; // [rsp+58h] [rbp-2F0h]
  __int64 ThreadWin32Thread; // [rsp+68h] [rbp-2E0h]
  __int64 v37; // [rsp+70h] [rbp-2D8h]
  __int64 v38; // [rsp+78h] [rbp-2D0h]
  _QWORD v39[82]; // [rsp+90h] [rbp-2B8h] BYREF

  v34 = a2;
  v37 = a1;
  v38 = a4;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v39[0] = a3;
  v8 = 0;
  v9 = 0;
  v31 = 0;
  while ( 1 )
  {
    v10 = a1;
    if ( v8 >= v34 )
      break;
    v6 = 0LL;
    v28 = 0;
    v11 = *(_QWORD *)(a1 + 8LL * v8);
    if ( (*(_DWORD *)(v11 + 440) & 1) != 0 )
    {
      v6 = 4294901760LL;
LABEL_14:
      v28 = v6;
      goto LABEL_15;
    }
    if ( *(_QWORD *)(v11 + 392) == a4 )
      goto LABEL_15;
    if ( *(_QWORD *)(v11 + 696) )
    {
      v6 = 1LL;
      goto LABEL_14;
    }
    v12 = 0;
    HMAssignmentLock(v11 + 392, a4);
    v10 = a1;
    v13 = v8;
    v14 = *(_QWORD *)(a1 + 8LL * v8);
    if ( *(_QWORD *)(v14 + 432) != *(_QWORD *)(ThreadWin32Thread + 432) )
    {
      v15 = *(PRKPROCESS **)(v14 + 376);
      if ( v15 != *(PRKPROCESS **)(ThreadWin32Thread + 376) )
      {
        KeAttachProcess(*v15);
        v12 = 1;
        v10 = a1;
        v13 = v8;
      }
    }
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8 * v13) + 432LL) + 152LL) = *(_WORD *)(a4 + 72);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 8 * v13) + 432LL) + 144LL) = *(_QWORD *)(a4 + 40);
    v6 = 0LL;
    if ( v12 )
    {
      KeDetachProcess();
      v6 = 0LL;
      v10 = a1;
    }
    v9 = v31;
LABEL_15:
    v7 = *(_QWORD *)(v10 + 8LL * v8);
    if ( *(_QWORD *)(v7 + 696) )
    {
      v16 = *(_QWORD *)(v7 + 392);
      if ( v16 )
      {
        if ( (a5 != 1 || (*(_WORD *)(v16 + 42) & 0xF000) == 0xE000 || (*gpsi & 4) != 0) && (_DWORD)v6 != -65536 )
        {
          v6 = (unsigned int)v6 | 2;
          v28 = v6;
        }
      }
    }
    if ( (((_DWORD)v6 + 0x10000) & 0xFFFEFFFF) != 0 )
    {
      v17 = 5LL * v9;
      LockW32Thread(v7, (__int64)&v39[5 * v9 + 2]);
      v10 = a1;
      v39[v17 + 1] = *(_QWORD *)(a1 + 8LL * v8);
      LODWORD(v39[v17 + 5]) = v28;
      v9 = v31 + 1;
      v31 = v9;
      if ( v9 == 16 )
      {
        v18 = v8 + 1;
        if ( v18 < v34 )
          return xxxImmActivateAndUnloadThreadsLayout((int)a1 + 8 * v18, v34 - v18, (unsigned int)v39, a4, a5);
        break;
      }
    }
    ++v8;
  }
  v35 = v9 - 1;
  v20 = v9 - 1;
  v21 = v39;
  v22 = v9 - 1;
  while ( v21 )
  {
    for ( i = &v21[5 * v22 + 5]; ; i -= 10 )
    {
      v30 = i;
      if ( v20 < 0 )
        break;
      if ( (*i & 1) != 0 )
      {
        v10 = *((_QWORD *)i - 4);
        if ( (*(_DWORD *)(v10 + 440) & 1) == 0 )
        {
          xxxImmActivateLayout(*((_QWORD *)i - 4), a4, v10, v7);
          i = v30;
        }
      }
      if ( (*i & 3) == 1 )
      {
        PopAndFreeW32ThreadLock((__int64)&v21[4 * v20 + 2 + v20], v6, v10, v7);
        i = v30;
      }
      --v20;
    }
    v6 = 15LL;
    v20 = 15;
    v22 = 15LL;
    v21 = (_QWORD *)*v21;
  }
  v24 = v39;
  v25 = v35;
  result = v35;
  while ( v24 )
  {
    for ( j = &v24[4 * result + 1 + result]; ; j -= 5 )
    {
      v33 = j;
      if ( v25 < 0 )
        break;
      if ( (j[4] & 2) != 0 )
      {
        v27 = *j;
        if ( (*(_DWORD *)(v27 + 440) & 1) == 0 )
          xxxImmUnloadLayout(v27, a5);
        PopAndFreeW32ThreadLock((__int64)&v24[4 * v25 + 2 + v25], v6, v10, v7);
        j = v33;
      }
      --v25;
    }
    result = 15LL;
    v25 = 15;
    v24 = (_QWORD *)*v24;
  }
  return result;
}
