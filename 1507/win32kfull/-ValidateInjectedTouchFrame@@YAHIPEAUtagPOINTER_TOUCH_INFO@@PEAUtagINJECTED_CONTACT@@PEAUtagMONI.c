/*
 * XREFs of ?ValidateInjectedTouchFrame@@YAHIPEAUtagPOINTER_TOUCH_INFO@@PEAUtagINJECTED_CONTACT@@PEAUtagMONITOR@@I@Z @ 0x1C01DBFA0
 * Callers:
 *     xxxInjectTouchInput @ 0x1C01DCB84 (xxxInjectTouchInput.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
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
  __int64 v13; // rcx
  char *v14; // rax
  int v15; // ecx
  unsigned int v16; // ecx
  _DWORD *v17; // r8
  int v18; // edx
  _DWORD *i; // rax
  int *j; // rdx
  int v22; // r8d
  unsigned int v23; // r8d
  int v24; // ecx
  bool v25; // zf
  __int128 v26; // [rsp+20h] [rbp-48h] BYREF

  v5 = 0;
  v9 = a1;
  v10 = 0;
  if ( !(_DWORD)a1 )
  {
LABEL_18:
    v16 = 0;
    if ( a5 )
    {
      v17 = (_DWORD *)((char *)a3 + 8);
      do
      {
        if ( ((*v17 - 0x20000) & 0xFFFDFFFF) != 0 )
        {
          v18 = 0;
          if ( !v9 )
            return 0LL;
          for ( i = (_DWORD *)((char *)a2 + 4); *i != v16; i += 36 )
          {
            if ( ++v18 >= v9 )
              return 0LL;
          }
        }
        ++v16;
        v17 += 3;
      }
      while ( v16 < a5 );
    }
    if ( !v9 )
      return 1LL;
    for ( j = (int *)((char *)a2 + 12); ; j += 36 )
    {
      v22 = *j;
      if ( (*j & 0x8000) != 0 && ((v22 - 163840) & 0xFFFDFFFF) != 0 )
        return 0LL;
      v23 = v22 & 0xFFFF7FFF;
      v24 = *((_DWORD *)a3 + 3 * (unsigned int)*(j - 2) + 2);
      switch ( v23 )
      {
        case 0x10006u:
          goto LABEL_39;
        case 0x20000u:
          v25 = ((v24 - 131074) & 0xFFFDFFFF) == 0;
          break;
        case 0x20002u:
LABEL_39:
          v25 = ((v24 - 0x20000) & 0xFFFDFFFD) == 0;
          break;
        case 0x20006u:
        case 0x40000u:
        case 0x40002u:
          v25 = ((v24 - 65542) & 0xFFFEFFFF) == 0;
          break;
        default:
          goto LABEL_41;
      }
      if ( !v25 )
        return 0LL;
LABEL_41:
      if ( ((v23 & 2) == 0 || v23 == 262146)
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
    if ( (v12 = *v11, (*(_DWORD *)(PsGetCurrentProcessWin32Process(a1) + 776) & 0x2000) != 0)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) != 0
      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
        ? (v13 = 0LL)
        : (v13 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416) + 8LL)
                           + 260LL) & 1),
          !(_DWORD)v13) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) == 0
        || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v15 = 0)
          : (v15 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v14 = (char *)a4 + 60,
            !v15) )
      {
        v14 = (char *)a4 + 28;
      }
    }
    else
    {
      v14 = (char *)a4 + 44;
    }
    v26 = *(_OWORD *)v14;
    if ( !PtInRect(&v26, v12) )
      return 0LL;
    ++v10;
    v11 += 18;
    if ( v10 >= v9 )
      goto LABEL_18;
  }
}
