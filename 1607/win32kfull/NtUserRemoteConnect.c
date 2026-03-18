/*
 * XREFs of NtUserRemoteConnect @ 0x1C00EB960
 * Callers:
 *     <none>
 * Callees:
 *     wcsncpycch @ 0x1C00E9E1C (wcsncpycch.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     __report_rangecheckfailure @ 0x1C01BF698 (__report_rangecheckfailure.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserRemoteConnect(_OWORD *a1, unsigned int a2, unsigned __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  _OWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  _OWORD *v13; // rax
  _OWORD *v14; // rcx
  int v15; // r10d
  __int64 v16; // rcx
  unsigned int v17; // r10d
  int v18; // eax
  unsigned int v19; // ebx
  int v21; // [rsp+20h] [rbp-2D8h]
  _BYTE v22[304]; // [rsp+30h] [rbp-2C8h] BYREF
  _QWORD v23[8]; // [rsp+160h] [rbp-198h] BYREF
  _BYTE v24[304]; // [rsp+1A0h] [rbp-158h] BYREF
  _WORD v25[12]; // [rsp+2D0h] [rbp-28h] BYREF

  v4 = a2;
  memset(v23, 0, sizeof(v23));
  EtwActivityIdControl(3u, (LPGUID)&v23[1]);
  v23[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v23[3]) = 31;
  EnterCrit(0LL, 1LL);
  CurrentProcess = PsGetCurrentProcess(v6);
  v9 = gpepCSRSS;
  if ( CurrentProcess == gpepCSRSS )
  {
    if ( a1 + 19 < a1 || (unsigned __int64)(a1 + 19) > W32UserProbeAddress )
      a1 = (_OWORD *)W32UserProbeAddress;
    v10 = v22;
    v11 = 2LL;
    v12 = 2LL;
    do
    {
      *v10 = *a1;
      v10[1] = a1[1];
      v10[2] = a1[2];
      v10[3] = a1[3];
      v10[4] = a1[4];
      v10[5] = a1[5];
      v10[6] = a1[6];
      v10 += 8;
      *(v10 - 1) = a1[7];
      a1 += 8;
      --v12;
    }
    while ( v12 );
    *v10 = *a1;
    v10[1] = a1[1];
    v10[2] = a1[2];
    v13 = v24;
    v14 = v22;
    do
    {
      *v13 = *v14;
      v13[1] = v14[1];
      v13[2] = v14[2];
      v13[3] = v14[3];
      v13[4] = v14[4];
      v13[5] = v14[5];
      v13[6] = v14[6];
      v13 += 8;
      *(v13 - 1) = v14[7];
      v14 += 8;
      --v11;
    }
    while ( v11 );
    *v13 = *v14;
    v13[1] = v14[1];
    v13[2] = v14[2];
    if ( (_DWORD)v4 )
    {
      if ( (a3 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a3 + v4 > W32UserProbeAddress || a3 + v4 < a3 )
        *W32UserProbeAddress = 0;
    }
    v15 = 9;
    if ( (unsigned int)v4 <= 9 )
      v15 = v4;
    v21 = v15;
    wcsncpycch(v25, a3, v15);
    if ( 2 * (unsigned __int64)v17 >= 0x14 )
      _report_rangecheckfailure(v16);
    v25[v17] = 0;
    gptiTSRequest = gptiCurrent;
    v18 = xxxRemoteConnect(v24, v17, v25, v23, v21);
    v19 = v18;
    if ( v18 < 0 )
    {
      v9 = gptiTSRequest;
      gptiTSRequest = 0LL;
    }
  }
  else
  {
    v19 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v9, v8);
  return v19;
}
