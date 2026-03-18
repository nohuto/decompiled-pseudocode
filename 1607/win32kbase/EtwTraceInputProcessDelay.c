/*
 * XREFs of EtwTraceInputProcessDelay @ 0x1C0015690
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
 *     Template_qqqzzzqx @ 0x1C00B861C (Template_qqqzzzqx.c)
 *     Template_qqqzzzzqx @ 0x1C00B8784 (Template_qqqzzzzqx.c)
 */

void __fastcall EtwTraceInputProcessDelay(struct tagTHREADINFO *a1)
{
  unsigned int ThreadInfoFlags; // eax
  unsigned int v4; // esi
  PWSTR Buffer; // rbx
  PWSTR v6; // rdi
  struct tagWND *v7; // rax
  struct tagWND *v8; // r15
  struct tagWND *v9; // rax
  int v10; // r12d
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // rcx
  PACCESS_TOKEN v14; // r14
  int v15; // eax
  const WCHAR *v16; // rdx
  const WCHAR *v17; // rcx
  PEPROCESS ThreadProcess; // rax
  unsigned __int64 v19; // rdx
  int v20; // ecx
  ULONGLONG v21; // r8
  ULONGLONG v22; // rdx
  unsigned int v23; // [rsp+60h] [rbp-258h] BYREF
  unsigned int v24; // [rsp+64h] [rbp-254h] BYREF
  int v25; // [rsp+68h] [rbp-250h]
  unsigned int v26; // [rsp+6Ch] [rbp-24Ch]
  int v27; // [rsp+70h] [rbp-248h]
  PWSTR v28; // [rsp+78h] [rbp-240h]
  int *v29; // [rsp+80h] [rbp-238h]
  PWSTR v30; // [rsp+88h] [rbp-230h]
  __int64 v31; // [rsp+90h] [rbp-228h] BYREF
  _QWORD v32[3]; // [rsp+98h] [rbp-220h] BYREF
  int v33; // [rsp+B0h] [rbp-208h] BYREF
  __int64 v34; // [rsp+B8h] [rbp-200h]
  struct _UNICODE_STRING UnicodeString; // [rsp+C0h] [rbp-1F8h] BYREF
  struct _UNICODE_STRING v36; // [rsp+D0h] [rbp-1E8h] BYREF
  _BYTE v37[144]; // [rsp+F0h] [rbp-1C8h] BYREF
  _BYTE v38[256]; // [rsp+180h] [rbp-138h] BYREF

  if ( ((unsigned __int64)WPP_MAIN_CB.Queue.Wcb.CurrentIrp & 0x8001000000040000uLL) == 0 )
    return;
  if ( (unsigned __int8)(byte_1C0118B28 - 1) <= 2u
    || (qword_1C0118B10 & 0x8001000000040000uLL) == 0
    || (qword_1C0118B18 & 0x8001000000040000uLL) != qword_1C0118B18 )
  {
    return;
  }
  EtwpGetLastInputProcessTime(
    *((struct tagQ *const *)a1 + 48),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    &v24,
    &v23);
  if ( v24 < W32kEtwInputProcessDelayTimeoutMs )
    return;
  if ( v23 < W32kEtwInputProcessDelayTimeoutMs )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags(a1);
  v4 = ThreadInfoFlags;
  v26 = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 8) == 0 && (ThreadInfoFlags & 0x20) == 0 )
    return;
  Buffer = 0LL;
  v30 = 0LL;
  v6 = 0LL;
  v28 = 0LL;
  v7 = (struct tagWND *)ValidateHwndEx(*((void **)a1 + 131));
  v8 = v7;
  if ( v7 )
  {
    if ( EtwpGetClassName(v7, &UnicodeString) >= 0 )
      Buffer = UnicodeString.Buffer;
    v30 = Buffer;
    v9 = (int)Is_GetTopLevelWindowSupported_0() < 0 ? 0LL : (struct tagWND *)GetTopLevelWindow_0();
    if ( v9 )
    {
      if ( v8 == v9 )
      {
        v6 = Buffer;
        goto LABEL_24;
      }
      if ( EtwpGetClassName(v9, &v36) >= 0 )
      {
        v6 = v36.Buffer;
LABEL_24:
        v28 = v6;
      }
    }
  }
  v10 = *((_DWORD *)a1 + 264);
  v27 = v10;
  v11 = *((_QWORD *)a1 + 133);
  v32[1] = v11;
  v29 = 0LL;
  v12 = 0LL;
  v13 = *((_QWORD *)a1 + 47);
  if ( (*(_DWORD *)(v13 + 768) & 0x30) == 0x10 )
  {
    v14 = PsReferencePrimaryToken(*(PEPROCESS *)v13);
    v32[0] = 256LL;
    v31 = 130LL;
    v15 = RtlQueryPackageIdentity(v14, v38, v32, v37, &v31, 0LL);
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v16 = (const WCHAR *)v37;
      if ( v15 < 0 )
        v16 = &pwsz;
      v17 = (const WCHAR *)v38;
      if ( v15 < 0 )
        v17 = &pwsz;
      Template_qqqzzzzqx(
        (_DWORD)v17,
        (_DWORD)v16,
        (unsigned int)&pwsz,
        v4,
        v24,
        v23,
        (__int64)Buffer,
        (__int64)v6,
        (__int64)v17,
        (__int64)v16,
        v10,
        v11);
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
    v25 = v20;
    v33 = v20;
    v21 = *(_QWORD *)(v19 + 8);
    v34 = v21;
    if ( (v21 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = v21 + (unsigned __int16)v20 + 2LL;
    if ( v22 >= W32UserProbeAddress || (unsigned __int16)v20 > HIWORD(v25) || (v20 & 1) != 0 || v22 <= v21 )
      *(_BYTE *)W32UserProbeAddress = 0;
    v29 = &v33;
    if ( &v33 )
      v12 = v34;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      Template_qqqzzzqx(v20, v22, v21, v4, v24, v23, (__int64)Buffer, (__int64)v6, v12, v10, v11);
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v6 )
  {
    if ( Buffer != v6 )
      RtlFreeUnicodeString(&v36);
  }
}
