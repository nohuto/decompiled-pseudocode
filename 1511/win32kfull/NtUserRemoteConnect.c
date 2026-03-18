/*
 * XREFs of NtUserRemoteConnect @ 0x1C00FFB70
 * Callers:
 *     <none>
 * Callees:
 *     wcsncpycch @ 0x1C0100664 (wcsncpycch.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C01C3198 (__report_rangecheckfailure.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserRemoteConnect(_OWORD *a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  _OWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _OWORD *v15; // rax
  _OWORD *v16; // rcx
  unsigned int v17; // r10d
  unsigned int v18; // r10d
  int v19; // eax
  unsigned int v20; // ebx
  _BYTE v22[304]; // [rsp+30h] [rbp-288h] BYREF
  _BYTE v23[304]; // [rsp+160h] [rbp-158h] BYREF
  _WORD v24[12]; // [rsp+290h] [rbp-28h] BYREF

  v4 = a2;
  EnterCrit(0LL, 1LL);
  if ( PsGetCurrentProcess(v7, v6, v8, v9) == gpepCSRSS )
  {
    if ( a1 + 19 < a1 || (unsigned __int64)(a1 + 19) > W32UserProbeAddress )
      a1 = (_OWORD *)W32UserProbeAddress;
    v12 = v22;
    v13 = 2LL;
    v14 = 2LL;
    do
    {
      *v12 = *a1;
      v12[1] = a1[1];
      v12[2] = a1[2];
      v12[3] = a1[3];
      v12[4] = a1[4];
      v12[5] = a1[5];
      v12[6] = a1[6];
      v12 += 8;
      *(v12 - 1) = a1[7];
      a1 += 8;
      --v14;
    }
    while ( v14 );
    *v12 = *a1;
    v12[1] = a1[1];
    v12[2] = a1[2];
    v15 = v23;
    v16 = v22;
    do
    {
      *v15 = *v16;
      v15[1] = v16[1];
      v15[2] = v16[2];
      v15[3] = v16[3];
      v15[4] = v16[4];
      v15[5] = v16[5];
      v15[6] = v16[6];
      v15 += 8;
      *(v15 - 1) = v16[7];
      v16 += 8;
      --v13;
    }
    while ( v13 );
    *v15 = *v16;
    v15[1] = v16[1];
    v15[2] = v16[2];
    if ( (_DWORD)v4 )
    {
      if ( (a3 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a3 + v4 > W32UserProbeAddress || a3 + v4 < a3 )
        *W32UserProbeAddress = 0;
    }
    v17 = 9;
    if ( (unsigned int)v4 <= 9 )
      v17 = v4;
    wcsncpycch(v24, a3, v17);
    if ( 2 * (unsigned __int64)v18 >= 0x14 )
      _report_rangecheckfailure();
    v24[v18] = 0;
    gptiTSRequest = gptiCurrent;
    v19 = RemoteConnect(v23, v18, v24);
    v20 = v19;
    if ( v19 < 0 )
    {
      v11 = gptiTSRequest;
      gptiTSRequest = 0LL;
    }
  }
  else
  {
    v20 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v11, v10);
  return v20;
}
