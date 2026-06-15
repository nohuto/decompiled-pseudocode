/*
 * XREFs of ?Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HH@Z @ 0x180029CA8
 * Callers:
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHPEAPEAV1@@Z @ 0x180038E70 (-CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHPEAPEAV1@@Z.c)
 * Callees:
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x180029040 (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180031FB0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800323E0 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

__int64 __fastcall CProcess::Initialize(
        CProcess *this,
        HANDLE hSourceHandle,
        int a3,
        int a4,
        unsigned __int16 *a5,
        unsigned __int16 *a6,
        unsigned __int16 *a7,
        int a8,
        const unsigned __int16 *a9,
        int a10,
        int a11)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v14; // rax
  __int64 v15; // r14
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // r15
  unsigned __int16 *v18; // rax
  int v19; // ebx
  unsigned __int64 v20; // rbp
  unsigned __int64 v21; // r15
  unsigned __int128 v22; // rax
  unsigned __int16 *v23; // rax
  unsigned __int64 v24; // rbp
  unsigned __int64 v25; // r12
  unsigned __int16 *v26; // rax
  signed int LastError; // eax
  unsigned __int16 **dwDesiredAccess; // [rsp+20h] [rbp-48h]
  unsigned __int64 *bInheritHandle; // [rsp+28h] [rbp-40h]
  DWORD dwOptions; // [rsp+30h] [rbp-38h]

  *((_DWORD *)this + 50) = a8;
  *((_DWORD *)this + 105) = a10;
  *((_DWORD *)this + 106) = a11;
  *((_DWORD *)this + 42) = a3;
  *((_DWORD *)this + 43) = a4;
  if ( hSourceHandle )
  {
    CurrentProcess = GetCurrentProcess();
    v14 = GetCurrentProcess();
    if ( !DuplicateHandle(v14, hSourceHandle, CurrentProcess, (LPHANDLE)this + 20, 0x101000u, 0, 0) )
    {
      LastError = GetLastError();
      v19 = LastError;
      if ( LastError > 0 )
        v19 = (unsigned __int16)LastError | 0x80070000;
      goto LABEL_28;
    }
  }
  v15 = -1LL;
  v16 = -1LL;
  do
    ++v16;
  while ( a5[v16] );
  v17 = v16 + 1;
  *((_QWORD *)this + 22) = 0LL;
  if ( v16 + 1 < v16 )
  {
    v19 = -2147024362;
    goto LABEL_41;
  }
  *((_QWORD *)this + 22) = 0LL;
  if ( is_mul_ok(v17, 2uLL) )
  {
    v18 = (unsigned __int16 *)CoTaskMemAlloc(2 * v17);
    *((_QWORD *)this + 22) = v18;
    if ( !v18 )
      goto LABEL_39;
    v19 = 0;
    StringCchCopyNExW(v18, v16 + 1, a5, v16, dwDesiredAccess, bInheritHandle, dwOptions);
  }
  else
  {
    v19 = -2147024362;
  }
  if ( v19 < 0 )
    goto LABEL_41;
  v20 = -1LL;
  do
    ++v20;
  while ( a7[v20] );
  v21 = v20 + 1;
  *((_QWORD *)this + 24) = 0LL;
  if ( v20 + 1 < v20 )
    goto LABEL_38;
  *((_QWORD *)this + 24) = 0LL;
  v22 = v21 * (unsigned __int128)2uLL;
  if ( is_mul_ok(v21, 2uLL) )
  {
    v23 = (unsigned __int16 *)CoTaskMemAlloc(2 * v21);
    *((_QWORD *)this + 24) = v23;
    if ( !v23 )
      goto LABEL_39;
    v19 = 0;
    StringCchCopyNExW(v23, v20 + 1, a7, v20, dwDesiredAccess, bInheritHandle, dwOptions);
  }
  else
  {
    v19 = -2147024362;
  }
  if ( v19 < 0 )
    goto LABEL_41;
  if ( !a6 )
    goto LABEL_25;
  v24 = -1LL;
  do
    ++v24;
  while ( a6[v24] );
  v25 = v24 + 1;
  *((_QWORD *)this + 23) = 0LL;
  if ( v24 + 1 < v24 )
  {
LABEL_38:
    v19 = -2147024362;
    goto LABEL_41;
  }
  *((_QWORD *)this + 23) = 0LL;
  v22 = v25 * (unsigned __int128)2uLL;
  if ( is_mul_ok(v25, 2uLL) )
  {
    v26 = (unsigned __int16 *)CoTaskMemAlloc(2 * v25);
    *((_QWORD *)this + 23) = v26;
    if ( v26 )
    {
      v19 = 0;
      StringCchCopyNExW(v26, v24 + 1, a6, v24, dwDesiredAccess, bInheritHandle, dwOptions);
      goto LABEL_24;
    }
LABEL_39:
    v19 = -2147024882;
    goto LABEL_41;
  }
  v19 = -2147024362;
LABEL_24:
  if ( v19 >= 0 )
  {
LABEL_25:
    if ( a9 )
    {
      do
        ++v15;
      while ( a9[v15] );
      v19 = _AllocStringWorker<CTCoAllocPolicy>(0, DWORD2(v22), (_DWORD)a9, v15);
      if ( v19 < 0 )
        goto LABEL_41;
    }
    if ( hSourceHandle )
      v19 = CProcess::SetupProcessTerminationWatcher(this);
LABEL_28:
    if ( v19 >= 0 )
      return (unsigned int)v19;
  }
LABEL_41:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      37LL,
      &WPP_fcf29b4c1df1b65e7f7c4a2882eee266_Traceguids,
      (unsigned int)v19);
  }
  return (unsigned int)v19;
}
