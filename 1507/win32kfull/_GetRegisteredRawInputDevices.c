/*
 * XREFs of _GetRegisteredRawInputDevices @ 0x1C01D3DAC
 * Callers:
 *     NtUserGetRegisteredRawInputDevices @ 0x1C021C020 (NtUserGetRegisteredRawInputDevices.c)
 * Callees:
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 *     ?IsKeyboardDevice@@YAHGG@Z @ 0x1C0079474 (-IsKeyboardDevice@@YAHGG@Z.c)
 *     ?IsMouseDevice@@YAHGG@Z @ 0x1C007958C (-IsMouseDevice@@YAHGG@Z.c)
 *     ?SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z @ 0x1C01D2B24 (-SortRegisteredDevices@@YAXPEAUtagRAWINPUTDEVICE@@H@Z.c)
 */

__int64 __fastcall GetRegisteredRawInputDevices(struct tagRAWINPUTDEVICE *a1, unsigned int *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // esi
  __int64 v6; // rcx
  _QWORD *v7; // rcx
  __int64 CurrentProcessWin32Process; // r15
  _QWORD *v9; // rax
  _QWORD *i; // rcx
  _QWORD *j; // rcx
  _QWORD *k; // rax
  unsigned int *v13; // rax
  __int64 v14; // r14
  __int64 v15; // r10
  unsigned int v16; // r8d
  __int64 v17; // r10
  __int64 v18; // r11
  int v19; // eax
  __int64 *v20; // rax
  __int64 v21; // rax
  __int16 v22; // dx
  __int16 v23; // cx
  int v24; // edi
  int v25; // r9d
  __int64 v26; // r11
  unsigned int v27; // r8d
  int v28; // r9d
  __int64 *v29; // r10
  __int64 v30; // r11
  __int64 *v31; // rcx
  int v32; // eax
  __int64 *v33; // rax
  __int64 v34; // rax
  __int64 *v35; // rcx
  __int128 v37; // [rsp+28h] [rbp-B0h]
  __int128 v38; // [rsp+58h] [rbp-80h]
  unsigned __int64 v39; // [rsp+68h] [rbp-70h]

  v4 = 0;
  v5 = 0;
  EnterDeviceInfoListCrit_(a1);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
  v9 = *(_QWORD **)(CurrentProcessWin32Process + 784);
  if ( v9 )
  {
    for ( i = (_QWORD *)v9[2]; i != v9 + 2; i = (_QWORD *)*i )
      ++v5;
    for ( j = (_QWORD *)v9[4]; j != v9 + 4; j = (_QWORD *)*j )
      ++v5;
    v7 = v9 + 6;
    for ( k = (_QWORD *)v9[6]; k != v7; k = (_QWORD *)*k )
      ++v5;
  }
  if ( a1 )
  {
    v13 = a2;
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      v13 = (unsigned int *)W32UserProbeAddress;
    v14 = *v13;
    if ( (_DWORD)v14 )
    {
      ProbeForWrite(a1, 16 * v14, 4u);
      v15 = *(_QWORD *)(CurrentProcessWin32Process + 784);
      if ( v15 )
      {
        if ( (unsigned int)v14 >= v5 )
        {
          v16 = 0;
          v17 = *(_QWORD *)(v15 + 16);
          while ( 1 )
          {
            v18 = *(_QWORD *)(CurrentProcessWin32Process + 784);
            if ( v17 == v18 + 16 || v16 >= (unsigned int)v14 )
              break;
            DWORD1(v37) = 0;
            v19 = *(_DWORD *)(v17 + 20);
            if ( (v19 & 1) != 0 )
              DWORD1(v37) = (v19 & 2) != 0 ? 4096 : 256;
            LODWORD(v37) = *(_DWORD *)(v17 + 16);
            v20 = *(__int64 **)(v17 + 32);
            if ( v20 )
              v21 = *v20;
            else
              v21 = 0LL;
            *((_QWORD *)&v37 + 1) = v21;
            v24 = IsKeyboardDevice(*(_WORD *)(v17 + 16), *(_WORD *)(v17 + 18));
            if ( v24 && (*(_DWORD *)(v26 + 100) & 0x20) != 0
              || (unsigned int)IsMouseDevice(v23, v22) && (*(_DWORD *)(v26 + 100) & 2) != 0 )
            {
              v25 |= 0x30u;
              DWORD1(v37) = v25;
            }
            if ( v24 )
            {
              if ( (*(_DWORD *)(v26 + 100) & 0x200) != 0 )
              {
                v25 |= 0x200u;
                DWORD1(v37) = v25;
              }
              if ( (*(_DWORD *)(v26 + 100) & 0x400) != 0 )
                DWORD1(v37) = v25 | 0x400;
            }
            if ( (unsigned int)IsMouseDevice(v23, v22) && (*(_DWORD *)(v30 + 100) & 0x100) != 0 )
              DWORD1(v37) = v28 | 0x200;
            *((_OWORD *)a1 + v27) = v37;
            v17 = *v29;
            v16 = v27 + 1;
          }
          v31 = *(__int64 **)(v18 + 32);
          while ( v31 != (__int64 *)(*(_QWORD *)(CurrentProcessWin32Process + 784) + 32LL) && v16 < (unsigned int)v14 )
          {
            DWORD1(v38) = 32;
            v32 = *((_DWORD *)v31 + 5);
            if ( (v32 & 1) != 0 )
              DWORD1(v38) = ((v32 & 2) != 0 ? 4096 : 256) | 0x20;
            v33 = (__int64 *)v31[4];
            if ( v33 )
              v34 = *v33;
            else
              v34 = 0LL;
            *((_QWORD *)&v38 + 1) = v34;
            LODWORD(v38) = *((_DWORD *)v31 + 4);
            *((_OWORD *)a1 + v16) = v38;
            v31 = (__int64 *)*v31;
            ++v16;
          }
          v35 = *(__int64 **)(*(_QWORD *)(CurrentProcessWin32Process + 784) + 48LL);
          while ( v35 != (__int64 *)(*(_QWORD *)(CurrentProcessWin32Process + 784) + 48LL) && v16 < (unsigned int)v14 )
          {
            HIDWORD(v39) = 16;
            LODWORD(v39) = *((_DWORD *)v35 + 4);
            *((_OWORD *)a1 + v16) = v39;
            v35 = (__int64 *)*v35;
            ++v16;
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
          UserSetLastError(122);
        }
      }
    }
    else
    {
      v4 = -1;
      UserSetLastError(87);
    }
  }
  else
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (unsigned int *)W32UserProbeAddress;
    *a2 = v5;
  }
  LeaveDeviceInfoListCrit_(v7);
  return v4;
}
