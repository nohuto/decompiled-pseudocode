/*
 * XREFs of xxxSetWindowLong @ 0x1C0080CF0
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C007B50C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxConsoleControl @ 0x1C00804C8 (xxxConsoleControl.c)
 *     NtUserSetWindowLong @ 0x1C0080C40 (NtUserSetWindowLong.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxSetWindowData @ 0x1C0067F10 (xxxSetWindowData.c)
 *     FCallerOk @ 0x1C0080DDC (FCallerOk.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C012466C (safe_cast_wf_to_PDIALOG.c)
 */

__int64 __fastcall xxxSetWindowLong(struct tagWND *a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v9; // eax
  unsigned int v10; // r10d
  _QWORD *v11; // r11
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rax
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdx
  int v18; // ecx
  int v19; // ecx
  __int16 v20; // r9
  _DWORD *v21; // rcx

  v6 = a3;
  v7 = a2;
  v9 = FCallerOk();
  v10 = 0;
  if ( !v9 )
  {
LABEL_13:
    v19 = 5;
LABEL_15:
    UserSetLastError(v19);
    return 0LL;
  }
  v11 = (_QWORD *)gpsi;
  if ( (*((_WORD *)a1 + 33) & 0x3FFF) == 0 )
    goto LABEL_3;
  v14 = safe_cast_wf_to_PDIALOG(a1);
  v17 = v14;
  if ( !v14 )
  {
    if ( (int)v7 < 0 )
      goto LABEL_10;
    if ( (int)v7 < *(unsigned __int16 *)(*v11 + 2LL * ((v15 & 0xFFFF3FFF) - 666) + 328) - 376 )
    {
      if ( v16 != 679 || (_DWORD)v7 && ((_DWORD)v7 != 8 || *((_DWORD *)a1 + 94) != v10 && *((char *)a1 + 43) >= 0) )
        goto LABEL_14;
      goto LABEL_4;
    }
LABEL_3:
    if ( (int)v7 >= 0 )
    {
LABEL_4:
      if ( (unsigned __int64)(unsigned int)v7 + 4 <= *((unsigned int *)a1 + 58) )
      {
        if ( a5 == v10 )
          goto LABEL_7;
        v12 = *((_QWORD *)a1 + 19);
        if ( (*(_WORD *)(v12 + 34) & 0x100) == 0 )
          goto LABEL_7;
        v20 = *(_WORD *)(v12 + 8);
        v21 = &gDefaultServerClasses;
        while ( v20 != *(_WORD *)(*v11 + 2LL * ((*v21 >> 3) & 0x1F) + 852) )
        {
          ++v10;
          v21 += 12;
          if ( v10 >= 8 )
            goto LABEL_7;
        }
        if ( (int)v7 >= *((_DWORD *)&gDefaultServerClasses + 12 * v10 + 6)
          || (*v21 & 0xF8) == 0xB0 && (unsigned __int64)(v7 + 4) <= 0x28 )
        {
LABEL_7:
          result = *(unsigned int *)((char *)a1 + v7 + 376);
          *(_DWORD *)((char *)a1 + v7 + 376) = v6;
          return result;
        }
        goto LABEL_13;
      }
LABEL_14:
      v19 = 1413;
      goto LABEL_15;
    }
LABEL_10:
    if ( (unsigned int)(v7 + 21) <= 9 )
    {
      v18 = 547;
      if ( _bittest(&v18, v7 + 21) )
        return xxxSetWindowData(a1, v7, v6, a4);
    }
    goto LABEL_14;
  }
  if ( (_DWORD)v7 )
  {
    if ( (_DWORD)v7 != 16 )
    {
      if ( (int)v7 < 0 )
        goto LABEL_10;
      if ( (int)v7 < 30 )
      {
        v19 = 1415;
        goto LABEL_15;
      }
      goto LABEL_3;
    }
    result = *(unsigned int *)(v14 + 392);
    *(_QWORD *)(v17 + 392) = (int)v6;
  }
  else
  {
    result = *(unsigned int *)(v14 + 376);
    *(_QWORD *)(v17 + 376) = (int)v6;
  }
  return result;
}
