/*
 * XREFs of xxxSetWindowLong @ 0x1C00E43F0
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006F67C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxConsoleControl @ 0x1C0073248 (xxxConsoleControl.c)
 *     NtUserSetWindowLong @ 0x1C00E4340 (NtUserSetWindowLong.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C0055F0C (safe_cast_wf_to_PDIALOG.c)
 *     xxxSetWindowData @ 0x1C0057B34 (xxxSetWindowData.c)
 *     FCallerOk @ 0x1C00E4510 (FCallerOk.c)
 */

__int64 __fastcall xxxSetWindowLong(__int64 a1, int a2, unsigned int a3, unsigned int a4, int a5)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  int v9; // eax
  unsigned int v10; // r10d
  _QWORD *v11; // r11
  __int64 v12; // rcx
  __int64 result; // rax
  int v14; // ecx
  __int64 v15; // rax
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rdx
  int v19; // ecx
  __int16 v20; // r9
  _DWORD *v21; // rcx

  v6 = a3;
  v7 = a2;
  v9 = FCallerOk();
  v10 = 0;
  if ( v9 )
  {
    v11 = (_QWORD *)gpsi;
    if ( (*(_WORD *)(a1 + 66) & 0x3FFF) != 0 )
    {
      v15 = safe_cast_wf_to_PDIALOG(a1);
      v18 = v15;
      if ( v15 )
      {
        if ( !(_DWORD)v7 )
        {
          result = *(unsigned int *)(v15 + 376);
          *(_QWORD *)(v18 + 376) = (int)v6;
          return result;
        }
        if ( (_DWORD)v7 == 16 )
        {
          result = *(unsigned int *)(v15 + 392);
          *(_QWORD *)(v18 + 392) = (int)v6;
          return result;
        }
        if ( (int)v7 < 0 )
          goto LABEL_9;
        if ( (int)v7 < 30 )
        {
          v19 = 1415;
          goto LABEL_19;
        }
      }
      else
      {
        if ( (int)v7 < 0 )
          goto LABEL_9;
        if ( (int)v7 < *(unsigned __int16 *)(*v11 + 2LL * ((v16 & 0xFFFF3FFF) - 666) + 328) - 376 )
        {
          if ( v17 != 679 || (_DWORD)v7 && ((_DWORD)v7 != 8 || *(_DWORD *)(a1 + 376) != v10 && *(char *)(a1 + 43) >= 0) )
            goto LABEL_18;
          goto LABEL_4;
        }
      }
    }
    if ( (int)v7 >= 0 )
    {
LABEL_4:
      if ( (unsigned __int64)(unsigned int)v7 + 4 <= *(unsigned int *)(a1 + 232) )
      {
        if ( a5 == v10 )
          goto LABEL_7;
        v12 = *(_QWORD *)(a1 + 152);
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
          result = *(unsigned int *)(v7 + a1 + 376);
          *(_DWORD *)(v7 + a1 + 376) = v6;
          return result;
        }
        goto LABEL_17;
      }
LABEL_18:
      v19 = 1413;
      goto LABEL_19;
    }
LABEL_9:
    if ( (unsigned int)(v7 + 21) <= 9 )
    {
      v14 = 547;
      if ( _bittest(&v14, v7 + 21) )
        return xxxSetWindowData((struct tagWND *)a1, v7, v6, a4);
    }
    goto LABEL_18;
  }
LABEL_17:
  v19 = 5;
LABEL_19:
  UserSetLastError(v19);
  return 0LL;
}
