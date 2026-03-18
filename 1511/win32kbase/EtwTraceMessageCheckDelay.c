/*
 * XREFs of EtwTraceMessageCheckDelay @ 0x1C006DC50
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040170 (xxxDestroyThreadInfo.c)
 * Callees:
 *     Is_GetTopLevelWindowSupported_0 @ 0x1C00027E0 (Is_GetTopLevelWindowSupported_0.c)
 *     _GetTopLevelWindow_0 @ 0x1C00027E8 (_GetTopLevelWindow_0.c)
 *     ValidateHwndEx @ 0x1C0043480 (ValidateHwndEx.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C00AB3D4 (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00AB43C (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00AB468 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     Template_qqqqzzzqx @ 0x1C00AE9D0 (Template_qqqqzzzqx.c)
 *     Template_qqqqzzzzqx @ 0x1C00AEB58 (Template_qqqqzzzzqx.c)
 */

void __fastcall EtwTraceMessageCheckDelay(struct tagTHREADINFO *a1)
{
  unsigned __int64 v2; // r13
  int v3; // eax
  unsigned int v4; // r14d
  unsigned int ThreadInfoFlags; // eax
  unsigned int v6; // r15d
  __int64 v7; // r12
  PWSTR Buffer; // rdi
  PWSTR v9; // rsi
  struct tagWND *v10; // rax
  struct tagWND *TopLevelWindow_0; // rax
  int v12; // r13d
  __int64 v13; // rcx
  PACCESS_TOKEN v14; // rbx
  int v15; // eax
  const WCHAR *v16; // rdx
  const WCHAR *v17; // rcx
  PEPROCESS ThreadProcess; // rax
  _QWORD *v19; // rdx
  int v20; // r8d
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rcx
  unsigned int v23; // [rsp+70h] [rbp-268h] BYREF
  unsigned int v24; // [rsp+74h] [rbp-264h] BYREF
  struct tagWND *v25; // [rsp+78h] [rbp-260h]
  int v26; // [rsp+80h] [rbp-258h]
  int v27; // [rsp+84h] [rbp-254h]
  unsigned int v28; // [rsp+88h] [rbp-250h]
  PWSTR v29; // [rsp+90h] [rbp-248h]
  PWSTR v30; // [rsp+98h] [rbp-240h]
  int *v31; // [rsp+A0h] [rbp-238h]
  __int64 v32; // [rsp+A8h] [rbp-230h]
  __int64 v33; // [rsp+B8h] [rbp-220h]
  __int64 v34; // [rsp+C0h] [rbp-218h] BYREF
  __int64 v35; // [rsp+C8h] [rbp-210h] BYREF
  int v36; // [rsp+D0h] [rbp-208h] BYREF
  __int64 v37; // [rsp+D8h] [rbp-200h]
  struct _UNICODE_STRING v38; // [rsp+E0h] [rbp-1F8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+F0h] [rbp-1E8h] BYREF
  _BYTE v40[144]; // [rsp+110h] [rbp-1C8h] BYREF
  _BYTE v41[256]; // [rsp+1A0h] [rbp-138h] BYREF

  if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x8001000000040000uLL) != 0
    && (unsigned __int8)(byte_1C01020C8 - 1) > 2u
    && (qword_1C01020B0 & 0x8001000000040000uLL) != 0
    && (qword_1C01020B8 & 0x8001000000040000uLL) == qword_1C01020B8 )
  {
    v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v3 = *((_DWORD *)a1 + 254);
    if ( v3 )
    {
      v4 = v2 - v3;
      v26 = v2 - v3;
      if ( (int)v2 - v3 >= W32kEtwMessageCheckDelayTimeoutMs )
      {
        ThreadInfoFlags = EtwpGetThreadInfoFlags(a1);
        v6 = ThreadInfoFlags;
        v28 = ThreadInfoFlags;
        if ( (ThreadInfoFlags & 3) != 0
          && ((ThreadInfoFlags & 8) != 0 || (ThreadInfoFlags & 0x20) != 0)
          && ((ThreadInfoFlags & 0x200) == 0 || v4 >= gdwHungAppTimeout) )
        {
          v7 = 0LL;
          Buffer = 0LL;
          v30 = 0LL;
          v9 = 0LL;
          v29 = 0LL;
          v10 = (struct tagWND *)ValidateHwndEx(*((void **)a1 + 128), 1LL, 0LL);
          v25 = v10;
          if ( v10 )
          {
            if ( EtwpGetClassName(v10, &UnicodeString) >= 0 )
              Buffer = UnicodeString.Buffer;
            v30 = Buffer;
            if ( (int)Is_GetTopLevelWindowSupported_0() >= 0 )
            {
              TopLevelWindow_0 = (struct tagWND *)GetTopLevelWindow_0();
              if ( TopLevelWindow_0 )
              {
                if ( v25 == TopLevelWindow_0 )
                {
                  v9 = Buffer;
                  v29 = Buffer;
                }
                else if ( EtwpGetClassName(TopLevelWindow_0, &v38) >= 0 )
                {
                  v9 = v38.Buffer;
                  v29 = v38.Buffer;
                }
              }
            }
          }
          EtwpGetLastInputProcessTime(*((struct tagQ *const *)a1 + 48), v2, &v23, &v24);
          v12 = *((_DWORD *)a1 + 258);
          LODWORD(v25) = v12;
          v32 = *((_QWORD *)a1 + 130);
          v33 = v32;
          v31 = 0LL;
          v13 = *((_QWORD *)a1 + 47);
          if ( (*(_DWORD *)(v13 + 776) & 0x30) == 0x10 )
          {
            v14 = PsReferencePrimaryToken(*(PEPROCESS *)v13);
            v34 = 256LL;
            v35 = 130LL;
            v15 = RtlQueryPackageIdentity(v14, v41, &v34, v40, &v35, 0LL);
            if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
            {
              v16 = (const WCHAR *)v40;
              if ( v15 < 0 )
                v16 = &word_1C008D840;
              v17 = (const WCHAR *)v41;
              if ( v15 < 0 )
                v17 = &word_1C008D840;
              Template_qqqqzzzzqx(
                (_DWORD)v17,
                (_DWORD)v16,
                v32,
                v6,
                v4,
                v23,
                v24,
                (__int64)Buffer,
                (__int64)v9,
                (__int64)v17,
                (__int64)v16,
                v12,
                v32);
            }
            PsDereferencePrimaryToken(v14);
          }
          else
          {
            ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
            v19 = (_QWORD *)(*(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL);
            if ( v19 >= W32UserProbeAddress )
              v19 = W32UserProbeAddress;
            v20 = *(_DWORD *)v19;
            v27 = v20;
            v36 = v20;
            v21 = v19[1];
            v37 = v21;
            if ( (v21 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v22 = v21 + (unsigned __int16)v20 + 2LL;
            if ( v22 >= (unsigned __int64)W32UserProbeAddress || (unsigned __int16)v20 > HIWORD(v27) || v22 <= v21 )
              *(_BYTE *)W32UserProbeAddress = 0;
            v31 = &v36;
            if ( &v36 )
              v7 = v37;
            if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
              Template_qqqqzzzqx(v22, (_DWORD)v19, v32, v6, v4, v23, v24, (__int64)Buffer, (__int64)v9, v7, v12, v32);
          }
          if ( Buffer )
            RtlFreeUnicodeString(&UnicodeString);
          if ( v9 )
          {
            if ( Buffer != v9 )
              RtlFreeUnicodeString(&v38);
          }
        }
      }
    }
  }
}
