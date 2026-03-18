/*
 * XREFs of EtwTraceMessageCheckDelay @ 0x1C0015AA0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00131CC (xxxDestroyThreadInfo.c)
 * Callees:
 *     Is_GetTopLevelWindowSupported_0 @ 0x1C00027C0 (Is_GetTopLevelWindowSupported_0.c)
 *     _GetTopLevelWindow_0 @ 0x1C00027C8 (_GetTopLevelWindow_0.c)
 *     ValidateHwndEx @ 0x1C0020B00 (ValidateHwndEx.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     ?EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z @ 0x1C00B4AE4 (-EtwpGetClassName@@YAJQEAUtagWND@@PEAU_UNICODE_STRING@@@Z.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00B4B4C (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00B4B78 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     Template_qqqqzzzqx @ 0x1C00B818C (Template_qqqqzzzqx.c)
 *     Template_qqqqzzzzqx @ 0x1C00B8314 (Template_qqqqzzzzqx.c)
 */

void __fastcall EtwTraceMessageCheckDelay(struct tagTHREADINFO *a1)
{
  unsigned __int64 v2; // r13
  int v3; // eax
  unsigned int v4; // esi
  unsigned int ThreadInfoFlags; // eax
  unsigned int v6; // r14d
  __int64 v7; // r15
  PWSTR Buffer; // rbx
  PWSTR v9; // rdi
  struct tagWND *v10; // rax
  struct tagWND *TopLevelWindow_0; // rax
  int v12; // r13d
  __int64 v13; // rcx
  PACCESS_TOKEN v14; // r12
  int v15; // eax
  const WCHAR *v16; // rdx
  const WCHAR *v17; // rcx
  PEPROCESS ThreadProcess; // rax
  unsigned __int64 v19; // rdx
  int v20; // ecx
  ULONGLONG v21; // r8
  ULONGLONG v22; // rdx
  unsigned int v23; // [rsp+70h] [rbp-268h] BYREF
  unsigned int v24; // [rsp+74h] [rbp-264h] BYREF
  struct tagWND *v25; // [rsp+78h] [rbp-260h]
  int v26; // [rsp+80h] [rbp-258h]
  int v27; // [rsp+84h] [rbp-254h]
  unsigned int v28; // [rsp+88h] [rbp-250h]
  PWSTR v29; // [rsp+90h] [rbp-248h]
  __int64 v30; // [rsp+98h] [rbp-240h]
  int *v31; // [rsp+A0h] [rbp-238h]
  PWSTR v32; // [rsp+A8h] [rbp-230h]
  __int64 v33; // [rsp+B0h] [rbp-228h] BYREF
  _QWORD v34[3]; // [rsp+B8h] [rbp-220h] BYREF
  int v35; // [rsp+D0h] [rbp-208h] BYREF
  __int64 v36; // [rsp+D8h] [rbp-200h]
  struct _UNICODE_STRING UnicodeString; // [rsp+E0h] [rbp-1F8h] BYREF
  struct _UNICODE_STRING v38; // [rsp+F0h] [rbp-1E8h] BYREF
  _BYTE v39[144]; // [rsp+110h] [rbp-1C8h] BYREF
  _BYTE v40[256]; // [rsp+1A0h] [rbp-138h] BYREF

  if ( ((unsigned __int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x8001000000040000uLL) != 0
    && (unsigned __int8)(byte_1C0118B28 - 1) > 2u
    && (qword_1C0118B10 & 0x8001000000040000uLL) != 0
    && (qword_1C0118B18 & 0x8001000000040000uLL) == qword_1C0118B18 )
  {
    v2 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v3 = *((_DWORD *)a1 + 260);
    if ( v3 )
    {
      v4 = v2 - v3;
      v27 = v2 - v3;
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
          v32 = 0LL;
          v9 = 0LL;
          v29 = 0LL;
          v10 = (struct tagWND *)ValidateHwndEx(*((void **)a1 + 131));
          v25 = v10;
          if ( v10 )
          {
            if ( EtwpGetClassName(v10, &UnicodeString) >= 0 )
              Buffer = UnicodeString.Buffer;
            v32 = Buffer;
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
          EtwpGetLastInputProcessTime(*((struct tagQ *const *)a1 + 48), v2, &v24, &v23);
          v12 = *((_DWORD *)a1 + 264);
          LODWORD(v25) = v12;
          v30 = *((_QWORD *)a1 + 133);
          v34[1] = v30;
          v31 = 0LL;
          v13 = *((_QWORD *)a1 + 47);
          if ( (*(_DWORD *)(v13 + 768) & 0x30) == 0x10 )
          {
            v14 = PsReferencePrimaryToken(*(PEPROCESS *)v13);
            v34[0] = 256LL;
            v33 = 130LL;
            v15 = RtlQueryPackageIdentity(v14, v40, v34, v39, &v33, 0LL);
            if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
            {
              v16 = (const WCHAR *)v39;
              if ( v15 < 0 )
                v16 = &pwsz;
              v17 = (const WCHAR *)v40;
              if ( v15 < 0 )
                v17 = &pwsz;
              Template_qqqqzzzzqx(
                (_DWORD)v17,
                (_DWORD)v16,
                v30,
                v6,
                v4,
                v24,
                v23,
                (__int64)Buffer,
                (__int64)v9,
                (__int64)v17,
                (__int64)v16,
                v12,
                v30);
            }
            PsDereferencePrimaryToken(v14);
          }
          else
          {
            ThreadProcess = PsGetThreadProcess(*(PETHREAD *)a1);
            v19 = *(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL;
            if ( v19 >= W32UserProbeAddress )
              v19 = W32UserProbeAddress;
            v20 = *(_DWORD *)v19;
            v26 = v20;
            v35 = v20;
            v21 = *(_QWORD *)(v19 + 8);
            v36 = v21;
            if ( (v21 & 1) != 0 )
              ExRaiseDatatypeMisalignment();
            v22 = v21 + (unsigned __int16)v20 + 2LL;
            if ( v22 >= W32UserProbeAddress || (unsigned __int16)v20 > HIWORD(v26) || (v20 & 1) != 0 || v22 <= v21 )
              *(_BYTE *)W32UserProbeAddress = 0;
            v31 = &v35;
            if ( &v35 )
              v7 = v36;
            if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
              Template_qqqqzzzqx(v20, v22, v30, v6, v4, v24, v23, (__int64)Buffer, (__int64)v9, v7, v12, v30);
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
