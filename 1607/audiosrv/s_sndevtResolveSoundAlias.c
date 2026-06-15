/*
 * XREFs of s_sndevtResolveSoundAlias @ 0x180054FD0
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x1800282C0 (MIDL_user_allocate.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     ?StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x180054CA8 (-StringCbCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     ?_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z @ 0x18008F990 (-_GetSoundAlias@@YAHPEBGPEAG_KAEAKHPEAUHKEY__@@0@Z.c)
 */

void __fastcall __noreturn s_sndevtResolveSoundAlias(
        void *a1,
        unsigned __int16 *a2,
        unsigned __int16 *a3,
        unsigned int a4,
        LPHANDLE lpTargetHandle,
        wchar_t **a6)
{
  char *FileW; // r13
  char *v8; // rsi
  int v9; // r14d
  unsigned __int64 v10; // r8
  unsigned __int16 *v11; // rcx
  int SoundAlias; // ebx
  HANDLE CurrentProcess; // rax
  __int64 v14; // rax
  size_t v15; // r14
  wchar_t *v16; // rax
  int dwCreationDisposition; // [rsp+20h] [rbp-E0h]
  unsigned int v18; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v19; // [rsp+54h] [rbp-ACh]
  unsigned int Pid; // [rsp+58h] [rbp-A8h] BYREF
  HKEY phkResult; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int16 *v22; // [rsp+68h] [rbp-98h]
  unsigned __int16 *v23; // [rsp+70h] [rbp-90h]
  wchar_t FileName[264]; // [rsp+80h] [rbp-80h] BYREF
  wchar_t Ext[256]; // [rsp+290h] [rbp+190h] BYREF
  wchar_t Filename[256]; // [rsp+490h] [rbp+390h] BYREF

  v19 = a4;
  v18 = a4;
  v23 = a3;
  FileW = 0LL;
  v22 = a2;
  v8 = 0LL;
  v9 = 0;
  if ( a2 && lpTargetHandle )
  {
    *lpTargetHandle = (HANDLE)-1LL;
    if ( a6 )
      *a6 = 0LL;
    if ( !RpcImpersonateClient(a1) )
    {
      while ( 1 )
      {
        FileName[0] = 0;
        if ( RegOpenCurrentUser(1u, &phkResult) )
          goto LABEL_17;
        v11 = (unsigned __int16 *)&szSystemDefaultSound;
        if ( !v9 )
          v11 = v22;
        SoundAlias = _GetSoundAlias(v11, FileName, v10, &v18, dwCreationDisposition, phkResult, v23);
        RegCloseKey(phkResult);
        if ( !SoundAlias || !FileName[0] )
          goto LABEL_17;
        FileW = (char *)CreateFileW(FileName, 0x80000000, 3u, 0LL, 3u, 0x60000080u, 0LL);
        if ( FileW != (char *)-1LL )
          break;
        if ( (v19 & 2) != 0 || v9 == 1 )
        {
          GetLastError();
LABEL_17:
          RpcRevertToSelf();
          goto LABEL_18;
        }
        v9 = 1;
      }
      if ( I_RpcBindingInqLocalClientPID(a1, &Pid) )
        goto LABEL_17;
      v8 = (char *)OpenProcess(0x40u, 0, Pid);
      if ( RpcRevertToSelf() )
        goto LABEL_17;
      if ( v8
        && (CurrentProcess = GetCurrentProcess(), DuplicateHandle(CurrentProcess, FileW, v8, lpTargetHandle, 0, 0, 2u)) )
      {
        if ( a6 )
        {
          if ( _wsplitpath_s(FileName, 0LL, 0LL, 0LL, 0LL, Filename, 0x100uLL, Ext, 0x100uLL) )
            goto LABEL_35;
          FileName[0] = 0;
          if ( (unsigned int)_o__wmakepath_s(FileName, 260LL, 0LL, 0LL, Filename, Ext) )
            goto LABEL_35;
          v14 = -1LL;
          do
            ++v14;
          while ( FileName[v14] );
          v15 = 2 * v14 + 2;
          v16 = (wchar_t *)MIDL_user_allocate(v15);
          *a6 = v16;
          if ( !v16 )
          {
LABEL_35:
            if ( (char *)*lpTargetHandle - 1 <= (char *)0xFFFFFFFFFFFFFFFDLL )
            {
              CloseHandle(*lpTargetHandle);
              *lpTargetHandle = 0LL;
            }
            *lpTargetHandle = (HANDLE)-1LL;
          }
          else
          {
            StringCbCopyExW(v16, v15, FileName, 0LL, 0LL, 0x600u);
          }
        }
      }
      else
      {
        GetLastError();
      }
LABEL_18:
      if ( (unsigned __int64)(FileW - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(FileW);
      if ( (unsigned __int64)(v8 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v8);
    }
  }
}
