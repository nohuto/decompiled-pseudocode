/*
 * XREFs of xxxImmUnloadThreadsLayout @ 0x1C013AF40
 * Callers:
 *     ?xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C013AEF8 (-xxxFreeImeKeyboardLayouts@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C013AF40 (xxxImmUnloadThreadsLayout.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     LockW32Thread @ 0x1C00464F8 (LockW32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C008C240 (PopAndFreeW32ThreadLock.c)
 *     xxxImmUnloadThreadsLayout @ 0x1C013AF40 (xxxImmUnloadThreadsLayout.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     xxxImmUnloadLayout @ 0x1C01E38F8 (xxxImmUnloadLayout.c)
 */

__int64 __fastcall xxxImmUnloadThreadsLayout(__int64 *a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned int v4; // ebp
  int v7; // esi
  int v8; // ebx
  __int64 *v9; // rbp
  bool v10; // zf
  __int64 v11; // r8
  char v12; // di
  int v13; // ecx
  __int64 result; // rax
  __int64 *v15; // rsi
  int v16; // ebx
  __int64 v17; // rdx
  __int64 *v18; // rdx
  __int64 v19; // rsi
  int v21; // [rsp+20h] [rbp-2F8h]
  __int64 *v23; // [rsp+28h] [rbp-2F0h]
  __int64 *v24; // [rsp+30h] [rbp-2E8h]
  __int64 *v25; // [rsp+38h] [rbp-2E0h]
  __int64 v26; // [rsp+40h] [rbp-2D8h]
  __int64 v27; // [rsp+50h] [rbp-2C8h] BYREF
  _BYTE v28[648]; // [rsp+58h] [rbp-2C0h] BYREF

  v4 = a4;
  W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v27 = a3;
  v7 = 0;
  v8 = 0;
  if ( a2 > 0 )
  {
    v9 = a1;
    v24 = (__int64 *)v28;
    while ( 1 )
    {
      v10 = v7 == 16;
      if ( v7 >= 16 )
        break;
      v11 = *v9;
      if ( (*(_DWORD *)(*v9 + 448) & 1) == 0 )
      {
        if ( *(_QWORD *)(v11 + 704) )
        {
          v17 = *(_QWORD *)(v11 + 400);
          if ( v17 )
          {
            if ( a4 != 1 || (*gpsi & 4) != 0 || (*(_WORD *)(v17 + 42) & 0xF000) == 0xE000 )
            {
              LockW32Thread(*v9, (__int64)&v28[40 * v7++ + 8]);
              *v24 = *v9;
              v24 += 5;
            }
          }
        }
      }
      ++v8;
      ++v9;
      if ( v8 >= a2 )
      {
        v10 = v7 == 16;
        break;
      }
    }
    if ( v10 )
      ++v8;
    if ( v8 < a2 )
      return xxxImmUnloadThreadsLayout(&a1[v8], (unsigned int)(a2 - v8), &v27, a4);
    v4 = a4;
  }
  if ( v4 == 2 )
  {
    v4 = 1;
    v12 = 0;
  }
  else
  {
    v12 = 1;
  }
  v13 = v7 - 1;
  result = v7 - 1LL;
  v21 = v7 - 1;
  v26 = result;
  while ( 1 )
  {
    v15 = &v27;
    v16 = v13;
    v23 = &v27;
    do
    {
      if ( v16 >= 0 )
      {
        v18 = &v15[5 * result + 1];
        v25 = v18;
        v19 = (__int64)&v15[5 * v16 + 2];
        do
        {
          if ( (*(_DWORD *)(*v18 + 448) & 1) == 0 )
          {
            xxxImmUnloadLayout(*v18, v4);
            v18 = v25;
          }
          if ( v12 )
          {
            PopAndFreeW32ThreadLock(v19);
            v18 = v25;
          }
          v18 -= 5;
          v19 -= 40LL;
          --v16;
          v25 = v18;
        }
        while ( v16 >= 0 );
        v15 = v23;
      }
      v15 = (__int64 *)*v15;
      v16 = 15;
      v23 = v15;
      result = 15LL;
    }
    while ( v15 );
    if ( v12 )
      break;
    v13 = v21;
    v4 = 2;
    result = v26;
    v12 = 1;
  }
  return result;
}
