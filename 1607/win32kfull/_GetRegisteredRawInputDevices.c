/*
 * XREFs of _GetRegisteredRawInputDevices @ 0x1C01CC858
 * Callers:
 *     NtUserGetRegisteredRawInputDevices @ 0x1C0214F10 (NtUserGetRegisteredRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?IsKeyboardDevice@@YAHGG@Z @ 0x1C00E215C (-IsKeyboardDevice@@YAHGG@Z.c)
 *     ?IsMouseDevice@@YAHGG@Z @ 0x1C00E4A38 (-IsMouseDevice@@YAHGG@Z.c)
 *     ?SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z @ 0x1C01CC190 (-SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z.c)
 */

__int64 __fastcall GetRegisteredRawInputDevices(struct tagRAWINPUTDEVICE *a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // rcx
  __int64 CurrentProcessWin32Process; // r15
  _QWORD *v11; // rax
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  _QWORD *k; // rax
  unsigned int *v15; // rax
  __int64 v16; // r14
  __int64 v17; // r10
  unsigned int v18; // r8d
  __int64 v19; // r10
  __int64 v20; // r11
  int v21; // eax
  __int64 *v22; // rax
  __int64 v23; // rax
  __int16 v24; // dx
  __int16 v25; // cx
  int v26; // edi
  int v27; // r9d
  __int64 v28; // r11
  unsigned int v29; // r8d
  int v30; // r9d
  __int64 *v31; // r10
  __int64 v32; // r11
  __int64 *v33; // rcx
  int v34; // eax
  __int64 *v35; // rax
  __int64 v36; // rax
  __int64 *v37; // rcx
  __int128 v39; // [rsp+28h] [rbp-B0h]
  __int128 v40; // [rsp+58h] [rbp-80h]
  unsigned __int64 v41; // [rsp+68h] [rbp-70h]

  v4 = 0;
  v5 = 0;
  EnterDeviceInfoListCrit_(a1);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6);
  v11 = *(_QWORD **)(CurrentProcessWin32Process + 776);
  if ( v11 )
  {
    for ( i = (_QWORD *)v11[2]; i != v11 + 2; i = (_QWORD *)*i )
      ++v5;
    v8 = v11 + 4;
    for ( j = (_QWORD *)v11[4]; j != v8; j = (_QWORD *)*j )
      ++v5;
    v9 = v11 + 6;
    for ( k = (_QWORD *)v11[6]; k != v9; k = (_QWORD *)*k )
      ++v5;
  }
  if ( a1 )
  {
    v15 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v15 = (unsigned int *)W32UserProbeAddress;
    v16 = *v15;
    if ( (_DWORD)v16 )
    {
      ProbeForWrite(a1, 16 * v16, 4u);
      v17 = *(_QWORD *)(CurrentProcessWin32Process + 776);
      if ( v17 )
      {
        if ( (unsigned int)v16 >= v5 )
        {
          v18 = 0;
          v19 = *(_QWORD *)(v17 + 16);
          while ( 1 )
          {
            v20 = *(_QWORD *)(CurrentProcessWin32Process + 776);
            if ( v19 == v20 + 16 || v18 >= (unsigned int)v16 )
              break;
            DWORD1(v39) = 0;
            v21 = *(_DWORD *)(v19 + 20);
            if ( (v21 & 1) != 0 )
              DWORD1(v39) = (v21 & 2) != 0 ? 4096 : 256;
            LODWORD(v39) = *(_DWORD *)(v19 + 16);
            v22 = *(__int64 **)(v19 + 32);
            if ( v22 )
              v23 = *v22;
            else
              v23 = 0LL;
            *((_QWORD *)&v39 + 1) = v23;
            v26 = IsKeyboardDevice(*(_WORD *)(v19 + 16), *(_WORD *)(v19 + 18));
            if ( v26 && (*(_DWORD *)(v28 + 100) & 0x20) != 0
              || (unsigned int)IsMouseDevice(v25, v24) && (*(_DWORD *)(v28 + 100) & 2) != 0 )
            {
              v27 |= 0x30u;
              DWORD1(v39) = v27;
            }
            if ( v26 )
            {
              if ( (*(_DWORD *)(v28 + 100) & 0x200) != 0 )
              {
                v27 |= 0x200u;
                DWORD1(v39) = v27;
              }
              if ( (*(_DWORD *)(v28 + 100) & 0x400) != 0 )
                DWORD1(v39) = v27 | 0x400;
            }
            if ( (unsigned int)IsMouseDevice(v25, v24) && (*(_DWORD *)(v32 + 100) & 0x100) != 0 )
              DWORD1(v39) = v30 | 0x200;
            *((_OWORD *)a1 + v29) = v39;
            v19 = *v31;
            v18 = v29 + 1;
          }
          v33 = *(__int64 **)(v20 + 32);
          while ( v33 != (__int64 *)(*(_QWORD *)(CurrentProcessWin32Process + 776) + 32LL) && v18 < (unsigned int)v16 )
          {
            DWORD1(v40) = 32;
            v34 = *((_DWORD *)v33 + 5);
            if ( (v34 & 1) != 0 )
              DWORD1(v40) = ((v34 & 2) != 0 ? 4096 : 256) | 0x20;
            v35 = (__int64 *)v33[4];
            if ( v35 )
              v36 = *v35;
            else
              v36 = 0LL;
            *((_QWORD *)&v40 + 1) = v36;
            LODWORD(v40) = *((_DWORD *)v33 + 4);
            *((_OWORD *)a1 + v18) = v40;
            v33 = (__int64 *)*v33;
            ++v18;
          }
          v37 = *(__int64 **)(*(_QWORD *)(CurrentProcessWin32Process + 776) + 48LL);
          while ( v37 != (__int64 *)(*(_QWORD *)(CurrentProcessWin32Process + 776) + 48LL) && v18 < (unsigned int)v16 )
          {
            HIDWORD(v41) = 16;
            LODWORD(v41) = *((_DWORD *)v37 + 4);
            *((_OWORD *)a1 + v18) = v41;
            v37 = (__int64 *)*v37;
            ++v18;
          }
          SortRegisteredDevices(a1, v5);
          v4 = v5;
        }
        else
        {
          if ( (unsigned __int64)a2 >= W32UserProbeAddress )
            a2 = (unsigned int *)W32UserProbeAddress;
          *a2 = v5;
          v4 = -1;
          UserSetLastError(122LL);
        }
      }
    }
    else
    {
      v4 = -1;
      UserSetLastError(87LL);
    }
  }
  else
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (unsigned int *)W32UserProbeAddress;
    *a2 = v5;
  }
  LeaveDeviceInfoListCrit_(v9, v8);
  return v4;
}
