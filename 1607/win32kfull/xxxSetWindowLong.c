/*
 * XREFs of xxxSetWindowLong @ 0x1C009B210
 * Callers:
 *     xxxConsoleControl @ 0x1C009A9BC (xxxConsoleControl.c)
 *     NtUserSetWindowLong @ 0x1C009B160 (NtUserSetWindowLong.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C010048C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     xxxSetWindowData @ 0x1C00A11FC (xxxSetWindowData.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C00A20C0 (safe_cast_wf_to_PDIALOG.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall xxxSetWindowLong(struct tagWND *a1, int a2, int a3, __int64 a4, int a5)
{
  __int64 v6; // rcx
  __int64 v8; // rbx
  HANDLE ThreadProcessId; // rax
  __int64 v10; // rcx
  unsigned int v11; // edi
  _QWORD *v12; // r10
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 v15; // rax
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rdx
  int v19; // ecx
  HANDLE v20; // rax
  __int64 CurrentProcess; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int16 v25; // r9
  _DWORD *v26; // rcx

  v6 = *((_QWORD *)a1 + 2);
  v8 = a2;
  if ( (*(_DWORD *)(v6 + 440) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 440LL) & 0xC) == 0 )
    goto LABEL_22;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v6);
  v10 = gpidLogon;
  if ( ThreadProcessId == (HANDLE)gpidLogon )
  {
    v20 = PsGetThreadProcessId((PETHREAD)*gptiCurrent);
    v10 = gpidLogon;
    if ( v20 != (HANDLE)gpidLogon )
      goto LABEL_22;
  }
  v11 = 0;
  if ( !gbEnforceUIPI )
  {
    CurrentProcess = PsGetCurrentProcess(v10);
    if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
    {
      v22 = *(_QWORD *)(gptiCurrent + 376LL);
      v23 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL);
      if ( *(_DWORD *)(v22 + 732) != *(_DWORD *)(v23 + 732) || *(_DWORD *)(v22 + 736) != *(_DWORD *)(v23 + 736) )
      {
LABEL_22:
        v24 = 5LL;
LABEL_24:
        UserSetLastError(v24);
        return 0LL;
      }
    }
  }
  v12 = (_QWORD *)gpsi;
  if ( (*((_WORD *)a1 + 33) & 0x3FFF) == 0 )
    goto LABEL_5;
  v15 = safe_cast_wf_to_PDIALOG(a1);
  v18 = v15;
  if ( !v15 )
  {
    if ( (int)v8 < 0 )
      goto LABEL_12;
    if ( (int)v8 < *(unsigned __int16 *)(*v12 + 2LL * ((v16 & 0xFFFF3FFF) - 666) + 328) - 360 )
    {
      if ( v17 != 679 || (_DWORD)v8 && ((_DWORD)v8 != 8 || *((_DWORD *)a1 + 90) && *((char *)a1 + 43) >= 0) )
        goto LABEL_23;
      goto LABEL_6;
    }
LABEL_5:
    if ( (int)v8 >= 0 )
    {
LABEL_6:
      if ( (unsigned __int64)(unsigned int)v8 + 4 <= *((unsigned int *)a1 + 58) )
      {
        if ( !a5 )
          goto LABEL_9;
        v13 = *((_QWORD *)a1 + 19);
        if ( (*(_WORD *)(v13 + 34) & 0x100) == 0 )
          goto LABEL_9;
        v25 = *(_WORD *)(v13 + 8);
        v26 = &gDefaultServerClasses;
        while ( v25 != *(_WORD *)(*v12 + 2LL * ((*v26 >> 3) & 0x1F) + 852) )
        {
          ++v11;
          v26 += 12;
          if ( v11 >= 8 )
            goto LABEL_9;
        }
        if ( (int)v8 >= *((_DWORD *)&gDefaultServerClasses + 12 * v11 + 6)
          || (*v26 & 0xF8) == 0xB0 && (unsigned __int64)(v8 + 4) <= 0x28 )
        {
LABEL_9:
          result = *(unsigned int *)((char *)a1 + v8 + 360);
          *(_DWORD *)((char *)a1 + v8 + 360) = a3;
          return result;
        }
        goto LABEL_22;
      }
LABEL_23:
      v24 = 1413LL;
      goto LABEL_24;
    }
LABEL_12:
    if ( (unsigned int)(v8 + 21) <= 9 )
    {
      v19 = 547;
      if ( _bittest(&v19, v8 + 21) )
        return xxxSetWindowData(a1);
    }
    goto LABEL_23;
  }
  if ( (_DWORD)v8 )
  {
    if ( (_DWORD)v8 != 16 )
    {
      if ( (int)v8 < 0 )
        goto LABEL_12;
      if ( (int)v8 < 30 )
      {
        v24 = 1415LL;
        goto LABEL_24;
      }
      goto LABEL_5;
    }
    result = *(unsigned int *)(v15 + 376);
    *(_QWORD *)(v18 + 376) = a3;
  }
  else
  {
    result = *(unsigned int *)(v15 + 360);
    *(_QWORD *)(v18 + 360) = a3;
  }
  return result;
}
