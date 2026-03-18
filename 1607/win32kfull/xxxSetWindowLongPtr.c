/*
 * XREFs of xxxSetWindowLongPtr @ 0x1C00A1014
 * Callers:
 *     NtUserSetWindowLongPtr @ 0x1C00A0F60 (NtUserSetWindowLongPtr.c)
 *     xxxCsDdeInitialize @ 0x1C012B4E8 (xxxCsDdeInitialize.c)
 * Callees:
 *     xxxSetWindowData @ 0x1C00A11FC (xxxSetWindowData.c)
 *     safe_cast_wf_to_PDIALOG @ 0x1C00A20C0 (safe_cast_wf_to_PDIALOG.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall xxxSetWindowLongPtr(struct tagWND *a1, int a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rcx
  __int64 v8; // rdi
  HANDLE ThreadProcessId; // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 *v12; // r9
  __int64 result; // rax
  bool v14; // zf
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rcx
  __int64 v20; // rcx
  HANDLE v21; // rax
  __int64 CurrentProcess; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int16 v26; // r9
  _DWORD *v27; // rcx

  v6 = *((_QWORD *)a1 + 2);
  v8 = a2;
  if ( (*(_DWORD *)(v6 + 440) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 440LL) & 0xC) == 0 )
    goto LABEL_39;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v6);
  v10 = gpidLogon;
  if ( ThreadProcessId == (HANDLE)gpidLogon )
  {
    v21 = PsGetThreadProcessId((PETHREAD)*gptiCurrent);
    v10 = gpidLogon;
    if ( v21 != (HANDLE)gpidLogon )
      goto LABEL_39;
  }
  v11 = 0;
  if ( !gbEnforceUIPI )
  {
    CurrentProcess = PsGetCurrentProcess(v10);
    if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
    {
      v23 = *(_QWORD *)(gptiCurrent + 376LL);
      v24 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL);
      if ( *(_DWORD *)(v23 + 732) != *(_DWORD *)(v24 + 732) || *(_DWORD *)(v23 + 736) != *(_DWORD *)(v24 + 736) )
      {
LABEL_39:
        v20 = 5LL;
        goto LABEL_31;
      }
    }
  }
  v12 = (__int64 *)gpsi;
  if ( (*((_WORD *)a1 + 33) & 0x3FFF) != 0 )
  {
    v16 = safe_cast_wf_to_PDIALOG(a1);
    v19 = v16;
    if ( v16 )
    {
      if ( !(_DWORD)v8 )
      {
        result = *(_QWORD *)(v16 + 360);
        *(_QWORD *)(v19 + 360) = a3;
        return result;
      }
      if ( (_DWORD)v8 == 16 )
      {
        result = *(_QWORD *)(v16 + 376);
        *(_QWORD *)(v19 + 376) = a3;
        return result;
      }
      if ( (int)v8 < 0 )
        return xxxSetWindowData(a1);
      if ( (int)v8 < 30 )
      {
        v20 = 1415LL;
        goto LABEL_31;
      }
      goto LABEL_5;
    }
    if ( (int)v8 < 0 )
      return xxxSetWindowData(a1);
    if ( (int)v8 < *(unsigned __int16 *)(*v12 + 2LL * ((v17 & 0xFFFF3FFF) - 666) + 328) - 360 )
    {
      if ( v18 < 673 )
        goto LABEL_30;
      if ( v18 > 678 )
      {
        if ( v18 == 679 )
        {
          v14 = (_DWORD)v8 == 8;
          goto LABEL_13;
        }
        if ( v18 > 682 )
          goto LABEL_30;
      }
      v14 = (_DWORD)v8 == 0;
LABEL_13:
      if ( !v14 || *((_QWORD *)a1 + 45) && *((char *)a1 + 43) >= 0 )
        goto LABEL_30;
      goto LABEL_15;
    }
  }
LABEL_5:
  if ( (int)v8 < 0 )
    return xxxSetWindowData(a1);
LABEL_15:
  if ( (unsigned __int64)(unsigned int)v8 + 8 <= *((unsigned int *)a1 + 58) )
  {
    if ( !a5 )
      goto LABEL_18;
    v15 = *((_QWORD *)a1 + 19);
    if ( (*(_WORD *)(v15 + 34) & 0x100) == 0 )
      goto LABEL_18;
    v25 = *v12;
    v26 = *(_WORD *)(v15 + 8);
    v27 = &gDefaultServerClasses;
    while ( v26 != *(_WORD *)(v25 + 2LL * ((*v27 >> 3) & 0x1F) + 852) )
    {
      ++v11;
      v27 += 12;
      if ( v11 >= 8 )
        goto LABEL_18;
    }
    if ( (int)v8 >= *((_DWORD *)&gDefaultServerClasses + 12 * v11 + 6)
      || (*v27 & 0xF8) == 0xB0 && (unsigned __int64)(v8 + 8) <= 0x28 )
    {
LABEL_18:
      result = *(_QWORD *)((char *)a1 + v8 + 360);
      *(_QWORD *)((char *)a1 + v8 + 360) = a3;
      return result;
    }
    goto LABEL_39;
  }
LABEL_30:
  v20 = 1413LL;
LABEL_31:
  UserSetLastError(v20);
  return 0LL;
}
