/*
 * XREFs of NtUserSetWindowLongPtr @ 0x1C0067CE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     xxxSetWindowData @ 0x1C0067F10 (xxxSetWindowData.c)
 */

__int64 __fastcall NtUserSetWindowLongPtr(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rcx
  HANDLE ThreadProcessId; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // r8d
  __int64 v17; // rcx
  bool v19; // zf
  int v20; // ecx
  HANDLE v21; // rax
  __int64 CurrentProcess; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int16 v25; // r10
  _DWORD *v26; // r8
  _QWORD v27[7]; // [rsp+20h] [rbp-38h] BYREF

  v4 = a2;
  EnterCrit(1LL);
  v6 = ValidateHwndEx(a1, 1LL, 1LL);
  v9 = 0LL;
  v10 = v6;
  if ( v6 )
  {
    v27[0] = *(_QWORD *)(gptiCurrent + 376LL);
    *(_QWORD *)(gptiCurrent + 376LL) = v27;
    v27[1] = v6;
    ++*(_DWORD *)(v6 + 8);
    v11 = *(_QWORD *)(v6 + 16);
    if ( (*(_DWORD *)(v11 + 448) & 0xC) != 0 && (*(_DWORD *)(gptiCurrent + 448LL) & 0xC) == 0
      || (ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)v11), v14 = gpidLogon,
                                                                    ThreadProcessId == (HANDLE)gpidLogon)
      && (v21 = PsGetThreadProcessId((PETHREAD)*gptiCurrent), v14 = gpidLogon, v21 != (HANDLE)gpidLogon)
      || !gbEnforceUIPI
      && (CurrentProcess = PsGetCurrentProcess(v14, v13), !(unsigned int)IsProcessDwm(CurrentProcess))
      && ((v23 = *(_QWORD *)(gptiCurrent + 384LL),
           v24 = *(_QWORD *)(*(_QWORD *)(v10 + 16) + 384LL),
           *(_DWORD *)(v23 + 740) != *(_DWORD *)(v24 + 740))
       || *(_DWORD *)(v23 + 744) != *(_DWORD *)(v24 + 744)) )
    {
LABEL_40:
      v20 = 5;
      goto LABEL_32;
    }
    v15 = *(unsigned __int16 *)(v10 + 66);
    v16 = *(_WORD *)(v10 + 66) & 0x3FFF;
    if ( !v16 )
      goto LABEL_6;
    v17 = v10 & -(__int64)((*(_BYTE *)(v10 + 42) & 1) != 0);
    if ( v17 )
    {
      if ( !(_DWORD)v4 )
      {
        v9 = *(_QWORD *)((v10 & -(__int64)((*(_BYTE *)(v10 + 42) & 1) != 0)) + 0x178);
        *(_QWORD *)((v10 & -(__int64)((*(_BYTE *)(v10 + 42) & 1) != 0)) + 0x178) = a3;
        goto LABEL_8;
      }
      if ( (_DWORD)v4 == 16 )
      {
        v9 = *(_QWORD *)((v10 & -(__int64)((*(_BYTE *)(v10 + 42) & 1) != 0)) + 0x188);
        *(_QWORD *)((v10 & -(__int64)((*(_BYTE *)(v10 + 42) & 1) != 0)) + 0x188) = a3;
        goto LABEL_8;
      }
      if ( (int)v4 < 0 )
        goto LABEL_7;
      if ( (int)v4 < 30 )
      {
        v20 = 1415;
        goto LABEL_32;
      }
LABEL_6:
      if ( (int)v4 < 0 )
      {
LABEL_7:
        v9 = xxxSetWindowData((struct tagWND *)v10);
        goto LABEL_8;
      }
LABEL_20:
      if ( (unsigned __int64)(unsigned int)v4 + 8 <= *(unsigned int *)(v10 + 232) )
      {
        v15 = *(_QWORD *)(v10 + 152);
        v17 = 256LL;
        if ( (*(_WORD *)(v15 + 34) & 0x100) != 0 )
        {
          v25 = *(_WORD *)(v15 + 8);
          v26 = &gDefaultServerClasses;
          LODWORD(v17) = 0;
          while ( 1 )
          {
            v15 = (unsigned int)*v26;
            if ( v25 == *(_WORD *)(gpsi + 2LL * ((*v26 >> 3) & 0x1F) + 852) )
              break;
            v17 = (unsigned int)(v17 + 1);
            v26 += 12;
            if ( (unsigned int)v17 >= 8 )
              goto LABEL_22;
          }
          v17 = 6LL * (unsigned int)v17;
          if ( (int)v4 < *((_DWORD *)&gDefaultServerClasses + 2 * v17 + 6) )
          {
            v15 = (unsigned __int8)v15 & 0xF8;
            if ( (_BYTE)v15 != 0xB0 || (unsigned __int64)(v4 + 8) > 0x28 )
              goto LABEL_40;
          }
        }
LABEL_22:
        v9 = *(_QWORD *)(v4 + v10 + 376);
        *(_QWORD *)(v4 + v10 + 376) = a3;
LABEL_8:
        ThreadUnlock1(v17, v15);
        goto LABEL_9;
      }
LABEL_31:
      v20 = 1413;
LABEL_32:
      UserSetLastError(v20);
      goto LABEL_8;
    }
    if ( (int)v4 < 0 )
      goto LABEL_7;
    if ( (int)v4 >= *(unsigned __int16 *)(gpsi + 2LL * (((unsigned int)v15 & 0xFFFF3FFF) - 666) + 328) - 376 )
      goto LABEL_6;
    if ( v16 < 673 )
      goto LABEL_31;
    if ( v16 > 678 )
    {
      if ( v16 == 679 )
      {
        v19 = (_DWORD)v4 == 8;
        goto LABEL_18;
      }
      if ( v16 > 682 )
        goto LABEL_31;
    }
    v19 = (_DWORD)v4 == 0;
LABEL_18:
    if ( !v19 || *(_QWORD *)(v10 + 376) && *(char *)(v10 + 43) >= 0 )
      goto LABEL_31;
    goto LABEL_20;
  }
LABEL_9:
  UserSessionSwitchLeaveCrit(v8, v7);
  return v9;
}
