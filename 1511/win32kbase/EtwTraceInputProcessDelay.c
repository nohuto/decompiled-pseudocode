/*
 * XREFs of EtwTraceInputProcessDelay @ 0x1C0072540
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
 *     Template_qqqzzzqx @ 0x1C00AEE60 (Template_qqqzzzqx.c)
 *     Template_qqqzzzzqx @ 0x1C00AEFC8 (Template_qqqzzzzqx.c)
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
  _QWORD *v19; // rdx
  int v20; // r8d
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rcx
  unsigned int v23; // [rsp+60h] [rbp-258h] BYREF
  unsigned int v24[3]; // [rsp+64h] [rbp-254h] BYREF
  PWSTR v25; // [rsp+70h] [rbp-248h]
  int v26; // [rsp+78h] [rbp-240h]
  int v27; // [rsp+7Ch] [rbp-23Ch]
  int *v28; // [rsp+80h] [rbp-238h]
  PWSTR v29; // [rsp+88h] [rbp-230h]
  _QWORD v30[2]; // [rsp+90h] [rbp-228h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-218h] BYREF
  int v32; // [rsp+B0h] [rbp-208h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-200h]
  struct _UNICODE_STRING v34; // [rsp+C0h] [rbp-1F8h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+D0h] [rbp-1E8h] BYREF
  _BYTE v36[144]; // [rsp+F0h] [rbp-1C8h] BYREF
  _BYTE v37[256]; // [rsp+180h] [rbp-138h] BYREF

  if ( (*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement & 0x8001000000040000uLL) == 0 )
    return;
  if ( (unsigned __int8)(byte_1C01020C8 - 1) <= 2u
    || (qword_1C01020B0 & 0x8001000000040000uLL) == 0
    || (qword_1C01020B8 & 0x8001000000040000uLL) != qword_1C01020B8 )
  {
    return;
  }
  EtwpGetLastInputProcessTime(
    *((struct tagQ *const *)a1 + 48),
    (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24,
    v24,
    &v23);
  if ( v24[0] < W32kEtwInputProcessDelayTimeoutMs )
    return;
  if ( v23 < W32kEtwInputProcessDelayTimeoutMs )
    return;
  ThreadInfoFlags = EtwpGetThreadInfoFlags(a1);
  v4 = ThreadInfoFlags;
  v24[1] = ThreadInfoFlags;
  if ( (ThreadInfoFlags & 3) == 0 || (ThreadInfoFlags & 8) == 0 && (ThreadInfoFlags & 0x20) == 0 )
    return;
  Buffer = 0LL;
  v29 = 0LL;
  v6 = 0LL;
  v25 = 0LL;
  v7 = (struct tagWND *)ValidateHwndEx(*((void **)a1 + 128), 1LL, 0LL);
  v8 = v7;
  if ( v7 )
  {
    if ( EtwpGetClassName(v7, &UnicodeString) >= 0 )
      Buffer = UnicodeString.Buffer;
    v29 = Buffer;
    v9 = (int)Is_GetTopLevelWindowSupported_0() < 0 ? 0LL : (struct tagWND *)GetTopLevelWindow_0();
    if ( v9 )
    {
      if ( v8 == v9 )
      {
        v6 = Buffer;
        goto LABEL_25;
      }
      if ( EtwpGetClassName(v9, &v34) >= 0 )
      {
        v6 = v34.Buffer;
LABEL_25:
        v25 = v6;
      }
    }
  }
  v10 = *((_DWORD *)a1 + 258);
  v27 = v10;
  v11 = *((_QWORD *)a1 + 130);
  v30[1] = v11;
  v28 = 0LL;
  v12 = 0LL;
  v13 = *((_QWORD *)a1 + 47);
  if ( (*(_DWORD *)(v13 + 776) & 0x30) == 0x10 )
  {
    v14 = PsReferencePrimaryToken(*(PEPROCESS *)v13);
    v31 = 256LL;
    v30[0] = 130LL;
    v15 = RtlQueryPackageIdentity(v14, v37, &v31, v36, v30, 0LL);
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
    {
      v16 = (const WCHAR *)v36;
      if ( v15 < 0 )
        v16 = &word_1C008D840;
      v17 = (const WCHAR *)v37;
      if ( v15 < 0 )
        v17 = &word_1C008D840;
      Template_qqqzzzzqx(
        (_DWORD)v17,
        (_DWORD)v16,
        (unsigned int)&word_1C008D840,
        v4,
        v24[0],
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
    v19 = (_QWORD *)(*(_QWORD *)(PsGetProcessPeb(ThreadProcess) + 32) + 96LL);
    if ( v19 >= W32UserProbeAddress )
      v19 = W32UserProbeAddress;
    v20 = *(_DWORD *)v19;
    v26 = v20;
    v32 = v20;
    v21 = v19[1];
    v33 = v21;
    if ( (v21 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = v21 + (unsigned __int16)v20 + 2LL;
    if ( v22 >= (unsigned __int64)W32UserProbeAddress || (unsigned __int16)v20 > HIWORD(v26) || v22 <= v21 )
      *(_BYTE *)W32UserProbeAddress = 0;
    v28 = &v32;
    if ( &v32 )
      v12 = v33;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100) != 0 )
      Template_qqqzzzqx(v22, (_DWORD)v19, v20, v4, v24[0], v23, (__int64)Buffer, (__int64)v6, v12, v10, v11);
  }
  if ( Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( v6 )
  {
    if ( Buffer != v6 )
      RtlFreeUnicodeString(&v34);
  }
}
