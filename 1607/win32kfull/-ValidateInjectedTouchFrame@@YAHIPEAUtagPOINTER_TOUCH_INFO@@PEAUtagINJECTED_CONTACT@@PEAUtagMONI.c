/*
 * XREFs of ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagMONITOR@@I@Z @ 0x1C01D4048
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01D4AF4 (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C0059530 (PtInRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall ValidateInjectedTouchFrame(
        __int64 a1,
        struct tagPOINTER_TOUCH_INFO *a2,
        struct tagINJECTED_CONTACT *a3,
        struct tagMONITOR *a4,
        unsigned int a5)
{
  int v5; // edi
  unsigned int v9; // r15d
  unsigned int v10; // ebp
  unsigned __int64 *v11; // rsi
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  char *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // ecx
  unsigned int v25; // ecx
  _DWORD *v26; // r8
  int v27; // edx
  _DWORD *i; // rax
  int *j; // rdx
  int v31; // r8d
  unsigned int v32; // r8d
  int v33; // ecx
  bool v34; // zf
  __int128 v35; // [rsp+20h] [rbp-48h] BYREF

  v5 = 0;
  v9 = a1;
  v10 = 0;
  if ( !(_DWORD)a1 )
  {
LABEL_17:
    v25 = 0;
    if ( a5 )
    {
      v26 = (_DWORD *)((char *)a3 + 8);
      do
      {
        if ( ((*v26 - 0x20000) & 0xFFFDFFFF) != 0 )
        {
          v27 = 0;
          if ( !v9 )
            return 0LL;
          for ( i = (_DWORD *)((char *)a2 + 4); *i != v25; i += 36 )
          {
            if ( ++v27 >= v9 )
              return 0LL;
          }
        }
        ++v25;
        v26 += 3;
      }
      while ( v25 < a5 );
    }
    if ( !v9 )
      return 1LL;
    for ( j = (int *)((char *)a2 + 12); ; j += 36 )
    {
      v31 = *j;
      if ( (*j & 0x8000) != 0 && ((v31 - 163840) & 0xFFFDFFFF) != 0 )
        return 0LL;
      v32 = v31 & 0xFFFF7FFF;
      v33 = *((_DWORD *)a3 + 3 * (unsigned int)*(j - 2) + 2);
      switch ( v32 )
      {
        case 0x10006u:
          goto LABEL_38;
        case 0x20000u:
          v34 = ((v33 - 131074) & 0xFFFDFFFF) == 0;
          break;
        case 0x20002u:
LABEL_38:
          v34 = ((v33 - 0x20000) & 0xFFFDFFFD) == 0;
          break;
        case 0x20006u:
        case 0x40000u:
        case 0x40002u:
          v34 = ((v33 - 65542) & 0xFFFEFFFF) == 0;
          break;
        default:
          goto LABEL_40;
      }
      if ( !v34 )
        return 0LL;
LABEL_40:
      if ( ((v32 & 2) == 0 || v32 == 262146)
        && (j[5] != *((_DWORD *)a3 + 3 * (unsigned int)*(j - 2))
         || j[6] != *((_DWORD *)a3 + 3 * (unsigned int)*(j - 2) + 1)) )
      {
        return 0LL;
      }
      if ( ++v5 >= v9 )
        return 1LL;
    }
  }
  v11 = (unsigned __int64 *)((char *)a2 + 32);
  while ( 1 )
  {
    v12 = *v11;
    if ( (W32GetCurrentThreadDpiAwarenessContext(a1, (__int64)a2, (__int64)a3, (__int64)a4) & 0xF) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v13, v15, v16) + 408)
        ? (v14 = 0LL)
        : (v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                       (__int64)KeGetCurrentThread(),
                                                       v13,
                                                       v15,
                                                       v16)
                                                   + 408)
                                       + 8LL)
                           + 244LL) & 1),
          !(_DWORD)v14) )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext(v14, v13, v15, v16) & 0xF) != 1
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v18, v19, v20) + 408)
          ? (v24 = 0)
          : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                         (__int64)KeGetCurrentThread(),
                                                         v21,
                                                         v22,
                                                         v23)
                                                     + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v17 = (char *)a4 + 60,
            !v24) )
      {
        v17 = (char *)a4 + 28;
      }
    }
    else
    {
      v17 = (char *)a4 + 44;
    }
    v35 = *(_OWORD *)v17;
    if ( !PtInRect(&v35, v12) )
      return 0LL;
    ++v10;
    v11 += 18;
    if ( v10 >= v9 )
      goto LABEL_17;
  }
}
