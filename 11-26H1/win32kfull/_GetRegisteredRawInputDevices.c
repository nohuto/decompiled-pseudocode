/*
 * XREFs of _GetRegisteredRawInputDevices @ 0x14022109C
 * Callers:
 *     NtUserGetRegisteredRawInputDevices @ 0x140221010 (NtUserGetRegisteredRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?IsKeyboardDevice@@YAHGG@Z @ 0x1402214A4 (-IsKeyboardDevice@@YAHGG@Z.c)
 *     ?IsMouseDevice@@YAHGG@Z @ 0x1402214C0 (-IsMouseDevice@@YAHGG@Z.c)
 *     ?SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z @ 0x1402214DC (-SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z.c)
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1403E236C (RtlWriteULongToUser.c)
 */

__int64 __fastcall GetRegisteredRawInputDevices(volatile void *a1, __int64 a2)
{
  unsigned int v2; // ebx
  unsigned int v3; // edi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rsi
  __int64 v6; // rcx
  _QWORD *i; // rax
  _QWORD *j; // rax
  _QWORD **v9; // rcx
  _QWORD *k; // rax
  unsigned int ULongFromUser; // eax
  unsigned int v12; // r14d
  __int64 v13; // rax
  unsigned int v14; // r10d
  __int64 v15; // r11
  __int64 v16; // r8
  int v17; // eax
  __int64 *v18; // rax
  __int64 v19; // rax
  unsigned __int16 v20; // dx
  unsigned __int16 v21; // cx
  __int64 v22; // r8
  int v23; // r9d
  int v24; // r15d
  unsigned __int16 v25; // dx
  unsigned __int16 v26; // cx
  __int64 v27; // r8
  int v28; // r9d
  __int64 v29; // r8
  int v30; // r9d
  unsigned int v31; // r10d
  __int64 *v32; // r11
  __int64 *v33; // rdx
  __int64 v34; // r9
  int v35; // eax
  int v36; // r8d
  __int16 v37; // r15
  __int64 *v38; // r9
  __int64 v39; // r9
  __int64 v40; // rcx
  __int64 *v41; // r9
  __int64 v42; // rcx
  __int128 v44; // [rsp+28h] [rbp-A0h]
  __int16 v45; // [rsp+8Ah] [rbp-3Eh]

  v2 = 0;
  v3 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v5 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  v6 = *(_QWORD *)(v5 + 824);
  if ( v6 )
  {
    for ( i = *(_QWORD **)(v6 + 16); i != (_QWORD *)(v6 + 16); i = (_QWORD *)*i )
      ++v3;
    for ( j = *(_QWORD **)(v6 + 32); j != (_QWORD *)(v6 + 32); j = (_QWORD *)*j )
      ++v3;
    v9 = (_QWORD **)(v6 + 48);
    for ( k = *v9; k != v9; k = (_QWORD *)*k )
      ++v3;
  }
  if ( a1 )
  {
    ULongFromUser = RtlReadULongFromUser(a2);
    v12 = ULongFromUser;
    if ( ULongFromUser )
    {
      ProbeForWrite(a1, 16LL * ULongFromUser, 4u);
      v13 = *(_QWORD *)(v5 + 824);
      if ( v13 )
      {
        if ( v12 >= v3 )
        {
          v14 = 0;
          v15 = *(_QWORD *)(v13 + 16);
          while ( 1 )
          {
            v16 = *(_QWORD *)(v5 + 824);
            if ( v15 == v16 + 16 || v14 >= v12 )
              break;
            DWORD1(v44) = 0;
            v17 = *(_DWORD *)(v15 + 20);
            if ( (v17 & 1) != 0 )
              DWORD1(v44) = (v17 & 2) != 0 ? 4096 : 256;
            LODWORD(v44) = *(_DWORD *)(v15 + 16);
            v18 = *(__int64 **)(v15 + 32);
            if ( v18 )
              v19 = *v18;
            else
              v19 = 0LL;
            *((_QWORD *)&v44 + 1) = v19;
            v24 = IsKeyboardDevice(*(_WORD *)(v15 + 16), *(_WORD *)(v15 + 18));
            if ( v24 && (*(_DWORD *)(v22 + 100) & 0x20) != 0
              || (unsigned int)IsMouseDevice(v21, v20) && (*(_DWORD *)(v22 + 100) & 2) != 0 )
            {
              v23 |= 0x30u;
              DWORD1(v44) = v23;
            }
            if ( v24 && (*(_DWORD *)(v22 + 100) & 0x200) != 0 )
              DWORD1(v44) = v23 | 0x200;
            if ( (unsigned int)IsKeyboardDevice(v21, v20) && (*(_DWORD *)(v27 + 100) & 0x400) != 0 )
              DWORD1(v44) = v28 | 0x400;
            if ( (unsigned int)IsMouseDevice(v26, v25) )
            {
              if ( (*(_DWORD *)(v29 + 100) & 0x100) != 0 )
              {
                v30 |= 0x200u;
                DWORD1(v44) = v30;
              }
              if ( (*(_DWORD *)(v29 + 100) & 0x800) != 0 )
                DWORD1(v44) = v30 | 0x8000;
            }
            *((_OWORD *)a1 + v31) = v44;
            v15 = *v32;
            v14 = v31 + 1;
          }
          v33 = *(__int64 **)(v16 + 32);
          while ( 1 )
          {
            v34 = *(_QWORD *)(v5 + 824);
            if ( v33 == (__int64 *)(v34 + 32) || v14 >= v12 )
              break;
            v35 = *((_DWORD *)v33 + 5);
            v36 = 32;
            if ( (v35 & 1) != 0 )
              v36 = (v35 & 2) != 0 ? 4128 : 288;
            v37 = *((_WORD *)v33 + 9);
            v38 = (__int64 *)v33[4];
            if ( v38 )
              v39 = *v38;
            else
              v39 = 0LL;
            v40 = 2LL * v14;
            *((_WORD *)a1 + 4 * v40) = *((_WORD *)v33 + 8);
            *((_WORD *)a1 + 4 * v40 + 1) = v37;
            *((_DWORD *)a1 + 2 * v40 + 1) = v36;
            *((_QWORD *)a1 + v40 + 1) = v39;
            v33 = (__int64 *)*v33;
            ++v14;
          }
          v41 = *(__int64 **)(v34 + 48);
          while ( v41 != (__int64 *)(*(_QWORD *)(v5 + 824) + 48LL) && v14 < v12 )
          {
            v45 = *((_WORD *)v41 + 9);
            v42 = 2LL * v14;
            *((_WORD *)a1 + 4 * v42) = *((_WORD *)v41 + 8);
            *((_WORD *)a1 + 4 * v42 + 1) = v45;
            *((_DWORD *)a1 + 2 * v42 + 1) = 16;
            *((_QWORD *)a1 + v42 + 1) = 0LL;
            v41 = (__int64 *)*v41;
            ++v14;
          }
          SortRegisteredDevices((struct tagRAWINPUTDEVICE *)a1, v3);
          return v3;
        }
        else
        {
          RtlWriteULongToUser(a2, v3);
          v2 = -1;
          UserSetLastError(122);
        }
      }
    }
    else
    {
      v2 = -1;
      UserSetLastError(87);
    }
  }
  else
  {
    RtlWriteULongToUser(a2, v3);
  }
  return v2;
}
