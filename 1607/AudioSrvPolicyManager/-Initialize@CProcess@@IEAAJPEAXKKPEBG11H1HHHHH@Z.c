/*
 * XREFs of ?Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HHHHH@Z @ 0x18000DDF4
 * Callers:
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHPEAPEAV1@@Z @ 0x18000D9C0 (-CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHPEAPEAV1@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180001008 (_TlgWrite.c)
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x18000F97C (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180010A54 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1800240C0 (__security_check_cookie.c)
 */

__int64 __fastcall CProcess::Initialize(
        CProcess *this,
        HANDLE hSourceHandle,
        int a3,
        int a4,
        const unsigned __int16 *a5,
        const unsigned __int16 *a6,
        const unsigned __int16 *a7,
        int a8,
        const unsigned __int16 *a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v17; // rax
  signed int LastError; // eax
  const GUID *v19; // r8
  const GUID *v20; // r9
  unsigned __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // r9
  __int64 v24; // rdx
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r9
  unsigned int v28; // eax
  DWORD dwDesiredAccess; // [rsp+20h] [rbp-89h]
  TraceLoggingHProvider hProvider; // [rsp+40h] [rbp-69h] BYREF
  int v32; // [rsp+48h] [rbp-61h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-59h] BYREF
  const char *v34; // [rsp+70h] [rbp-39h]
  __int64 v35; // [rsp+78h] [rbp-31h]
  int *v36; // [rsp+80h] [rbp-29h]
  __int64 v37; // [rsp+88h] [rbp-21h]
  TraceLoggingHProvider *p_hProvider; // [rsp+90h] [rbp-19h]
  __int64 v39; // [rsp+98h] [rbp-11h]

  *((_DWORD *)this + 50) = a8;
  *((_DWORD *)this + 105) = a10;
  *((_DWORD *)this + 106) = a11;
  *((_DWORD *)this + 107) = a12;
  *((_DWORD *)this + 108) = a13;
  *((_DWORD *)this + 109) = a14;
  LODWORD(hProvider) = 0;
  *((_DWORD *)this + 42) = a3;
  *((_DWORD *)this + 43) = a4;
  if ( hSourceHandle )
  {
    CurrentProcess = GetCurrentProcess();
    v17 = GetCurrentProcess();
    if ( !DuplicateHandle(v17, hSourceHandle, CurrentProcess, (LPHANDLE)this + 20, 0x101000u, 0, 0) )
    {
      LastError = GetLastError();
      v21 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v21 = (unsigned int)LastError;
      LODWORD(hProvider) = v21;
      goto LABEL_21;
    }
  }
  v22 = -1LL;
  v23 = -1LL;
  do
    ++v23;
  while ( a5[v23] );
  LODWORD(hProvider) = _AllocStringWorker<CTCoAllocPolicy>(0LL, hSourceHandle, a5);
  v21 = (unsigned int)hProvider;
  if ( (int)hProvider >= 0 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( a7[v25] );
    LODWORD(hProvider) = _AllocStringWorker<CTCoAllocPolicy>((unsigned int)hProvider, v24, a7);
    v21 = (unsigned int)hProvider;
    if ( (int)hProvider >= 0 )
    {
      if ( !a6 )
        goto LABEL_16;
      v27 = -1LL;
      do
        ++v27;
      while ( a6[v27] );
      LODWORD(hProvider) = _AllocStringWorker<CTCoAllocPolicy>((unsigned int)hProvider, v26, a6);
      v21 = (unsigned int)hProvider;
      if ( (int)hProvider >= 0 )
      {
LABEL_16:
        if ( !a9 )
          goto LABEL_19;
        do
          ++v22;
        while ( a9[v22] );
        LODWORD(hProvider) = _AllocStringWorker<CTCoAllocPolicy>(v21, v26, a9);
        v21 = (unsigned int)hProvider;
        if ( (int)hProvider >= 0 )
        {
LABEL_19:
          if ( hSourceHandle )
          {
            v28 = CProcess::SetupProcessTerminationWatcher(this);
            v21 = v28;
            LODWORD(hProvider) = v28;
          }
LABEL_21:
          if ( (v21 & 0x80000000) == 0LL )
            return (unsigned int)v21;
        }
      }
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, &WPP_5f6cc46befba39241e72a8abc69dfa61_Traceguids, v21);
    v21 = (unsigned int)hProvider;
  }
  if ( (unsigned int)dword_180034030 > 2 )
  {
    v35 = 9LL;
    v34 = "__FUNC__";
    v36 = &v32;
    p_hProvider = &hProvider;
    v32 = 2473;
    v37 = 4LL;
    v39 = 4LL;
    TlgWrite((TraceLoggingHProvider)v21, &unk_18002D869, v19, v20, dwDesiredAccess, &pData);
    LODWORD(v21) = (_DWORD)hProvider;
  }
  return (unsigned int)v21;
}
