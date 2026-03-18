/*
 * XREFs of xxxImmUnloadThreadsLayout @ 0x1C00E7380
 * Callers:
 *     ?xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C00E7338 (-xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C00E7380 (xxxImmUnloadThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 *     LockW32Thread @ 0x1C009E9CC (LockW32Thread.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C00E7380 (xxxImmUnloadThreadsLayout.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     xxxImmUnloadLayout @ 0x1C01DA638 (xxxImmUnloadLayout.c)
 */

__int64 __fastcall xxxImmUnloadThreadsLayout(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebp
  int v6; // edi
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // esi
  int v10; // ebx
  __int64 *v11; // rbp
  bool v12; // zf
  char v13; // di
  int v14; // ecx
  __int64 result; // rax
  __int64 *v16; // rsi
  int v17; // ebx
  __int64 v18; // rdx
  __int64 *v19; // rdx
  __int64 v20; // rsi
  unsigned int v21; // [rsp+20h] [rbp-2F8h]
  int v22; // [rsp+20h] [rbp-2F8h]
  __int64 *v24; // [rsp+28h] [rbp-2F0h]
  __int64 *v25; // [rsp+30h] [rbp-2E8h]
  __int64 *v26; // [rsp+38h] [rbp-2E0h]
  __int64 v27; // [rsp+40h] [rbp-2D8h]
  __int64 v28; // [rsp+50h] [rbp-2C8h] BYREF
  _BYTE v29[648]; // [rsp+58h] [rbp-2C0h] BYREF

  v4 = a4;
  v21 = a4;
  v6 = a2;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v28 = a3;
  v9 = 0;
  v10 = 0;
  if ( v6 > 0 )
  {
    v11 = a1;
    v26 = (__int64 *)v29;
    while ( 1 )
    {
      v12 = v9 == 16;
      if ( v9 >= 16 )
        break;
      v7 = *v11;
      if ( (*(_DWORD *)(*v11 + 440) & 1) == 0 )
      {
        if ( *(_QWORD *)(v7 + 696) )
        {
          v18 = *(_QWORD *)(v7 + 392);
          if ( v18 )
          {
            if ( v21 != 1 || (*gpsi & 4) != 0 || (*(_WORD *)(v18 + 42) & 0xF000) == 0xE000 )
            {
              LockW32Thread(*v11, (__int64)&v29[40 * v9++ + 8]);
              *v26 = *v11;
              v26 += 5;
            }
          }
        }
      }
      ++v10;
      ++v11;
      if ( v10 >= v6 )
      {
        v12 = v9 == 16;
        break;
      }
    }
    if ( v12 )
      ++v10;
    if ( v10 < v6 )
      return xxxImmUnloadThreadsLayout(&a1[v10], (unsigned int)(v6 - v10), &v28, v21);
    v4 = v21;
  }
  if ( v4 == 2 )
  {
    v4 = 1;
    v13 = 0;
  }
  else
  {
    v13 = 1;
  }
  v14 = v9 - 1;
  result = v9 - 1LL;
  v22 = v9 - 1;
  v27 = result;
  while ( 1 )
  {
    v16 = &v28;
    v17 = v14;
    v24 = &v28;
    do
    {
      if ( v17 >= 0 )
      {
        v19 = &v16[5 * result + 1];
        v25 = v19;
        v20 = (__int64)&v16[5 * v17 + 2];
        do
        {
          if ( (*(_DWORD *)(*v19 + 440) & 1) == 0 )
          {
            xxxImmUnloadLayout(*v19, v4);
            v19 = v25;
          }
          if ( v13 )
          {
            PopAndFreeW32ThreadLock(v20, (__int64)v19, v7, v8);
            v19 = v25;
          }
          v19 -= 5;
          v20 -= 40LL;
          --v17;
          v25 = v19;
        }
        while ( v17 >= 0 );
        v16 = v24;
      }
      v16 = (__int64 *)*v16;
      v17 = 15;
      v24 = v16;
      result = 15LL;
    }
    while ( v16 );
    if ( v13 )
      break;
    v14 = v22;
    v4 = 2;
    result = v27;
    v13 = 1;
  }
  return result;
}
