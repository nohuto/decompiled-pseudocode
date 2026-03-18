/*
 * XREFs of xxxSetWindowLongPtr @ 0x1C0057954
 * Callers:
 *     NtUserSetWindowLongPtr @ 0x1C00578A0 (NtUserSetWindowLongPtr.c)
 *     xxxCsDdeInitialize @ 0x1C01089B8 (xxxCsDdeInitialize.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C0055F0C (safe_cast_wf_to_PDIALOG.c)
 *     xxxSetWindowData @ 0x1C0057B34 (xxxSetWindowData.c)
 */

__int64 __fastcall xxxSetWindowLongPtr(__int64 a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rcx
  __int64 v8; // rdi
  unsigned int v9; // ebx
  __int64 *v10; // r9
  __int64 result; // rax
  __int64 v12; // rax
  int v13; // edx
  int v14; // r8d
  __int64 v15; // rcx
  bool v16; // zf
  __int64 v17; // rcx
  int v18; // ecx
  __int64 CurrentProcess; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int16 v23; // r9
  _DWORD *v24; // rcx

  v6 = *(_QWORD *)(a1 + 16);
  v8 = a2;
  if ( (*(_DWORD *)(v6 + 440) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 440LL) & 0xC) == 0
    || PsGetThreadProcessId(*(PETHREAD *)v6) == (HANDLE)gpidLogon
    && PsGetThreadProcessId((PETHREAD)*gptiCurrent) != (HANDLE)gpidLogon
    || (v9 = 0, !gbEnforceUIPI)
    && (CurrentProcess = PsGetCurrentProcess(), !(unsigned int)IsProcessDwm(CurrentProcess))
    && ((v20 = *(_QWORD *)(gptiCurrent + 376LL),
         v21 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL),
         *(_DWORD *)(v20 + 740) != *(_DWORD *)(v21 + 740))
     || *(_DWORD *)(v20 + 744) != *(_DWORD *)(v21 + 744)) )
  {
LABEL_38:
    v18 = 5;
    goto LABEL_30;
  }
  v10 = (__int64 *)gpsi;
  if ( (*(_WORD *)(a1 + 66) & 0x3FFF) != 0 )
  {
    v12 = safe_cast_wf_to_PDIALOG(a1);
    v15 = v12;
    if ( v12 )
    {
      if ( !(_DWORD)v8 )
      {
        result = *(_QWORD *)(v12 + 376);
        *(_QWORD *)(v15 + 376) = a3;
        return result;
      }
      if ( (_DWORD)v8 == 16 )
      {
        result = *(_QWORD *)(v12 + 392);
        *(_QWORD *)(v15 + 392) = a3;
        return result;
      }
      if ( (int)v8 < 0 )
        return xxxSetWindowData((struct tagWND *)a1);
      if ( (int)v8 < 30 )
      {
        v18 = 1415;
        goto LABEL_30;
      }
      goto LABEL_5;
    }
    if ( (int)v8 < 0 )
      return xxxSetWindowData((struct tagWND *)a1);
    if ( (int)v8 < *(unsigned __int16 *)(*v10 + 2LL * ((v13 & 0xFFFF3FFF) - 666) + 328) - 376 )
    {
      if ( v14 < 673 )
        goto LABEL_29;
      if ( v14 > 678 )
      {
        if ( v14 == 679 )
        {
          v16 = (_DWORD)v8 == 8;
          goto LABEL_15;
        }
        if ( v14 > 682 )
          goto LABEL_29;
      }
      v16 = (_DWORD)v8 == 0;
LABEL_15:
      if ( !v16 || *(_QWORD *)(a1 + 376) && *(char *)(a1 + 43) >= 0 )
        goto LABEL_29;
      goto LABEL_17;
    }
  }
LABEL_5:
  if ( (int)v8 < 0 )
    return xxxSetWindowData((struct tagWND *)a1);
LABEL_17:
  if ( (unsigned __int64)(unsigned int)v8 + 8 <= *(unsigned int *)(a1 + 232) )
  {
    if ( !a5 )
      goto LABEL_20;
    v17 = *(_QWORD *)(a1 + 152);
    if ( (*(_WORD *)(v17 + 34) & 0x100) == 0 )
      goto LABEL_20;
    v22 = *v10;
    v23 = *(_WORD *)(v17 + 8);
    v24 = &gDefaultServerClasses;
    while ( v23 != *(_WORD *)(v22 + 2LL * ((*v24 >> 3) & 0x1F) + 852) )
    {
      ++v9;
      v24 += 12;
      if ( v9 >= 8 )
        goto LABEL_20;
    }
    if ( (int)v8 >= *((_DWORD *)&gDefaultServerClasses + 12 * v9 + 6)
      || (*v24 & 0xF8) == 0xB0 && (unsigned __int64)(v8 + 8) <= 0x28 )
    {
LABEL_20:
      result = *(_QWORD *)(v8 + a1 + 376);
      *(_QWORD *)(v8 + a1 + 376) = a3;
      return result;
    }
    goto LABEL_38;
  }
LABEL_29:
  v18 = 1413;
LABEL_30:
  UserSetLastError(v18);
  return 0LL;
}
