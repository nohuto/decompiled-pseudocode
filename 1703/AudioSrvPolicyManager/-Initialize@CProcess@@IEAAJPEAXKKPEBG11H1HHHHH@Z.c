/*
 * XREFs of ?Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HHHHH@Z @ 0x18000D724
 * Callers:
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHPEAPEAV1@@Z @ 0x18000D36C (-CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHHHHPEAPEAV1@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x18000F0D8 (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x1800100A8 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x1800182A4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
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
  signed int v19; // ebx
  __int64 v20; // rdi
  __int64 v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r9

  *((_DWORD *)this + 50) = a8;
  *((_DWORD *)this + 105) = a10;
  *((_DWORD *)this + 106) = a11;
  *((_DWORD *)this + 107) = a12;
  *((_DWORD *)this + 108) = a13;
  *((_DWORD *)this + 109) = a14;
  *((_DWORD *)this + 42) = a3;
  *((_DWORD *)this + 43) = a4;
  if ( hSourceHandle )
  {
    CurrentProcess = GetCurrentProcess();
    v17 = GetCurrentProcess();
    if ( !DuplicateHandle(v17, hSourceHandle, CurrentProcess, (LPHANDLE)this + 20, 0x101000u, 0, 0) )
    {
      LastError = GetLastError();
      v19 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v19 = LastError;
      goto LABEL_21;
    }
  }
  v20 = -1LL;
  v21 = -1LL;
  do
    ++v21;
  while ( a5[v21] );
  v19 = _AllocStringWorker<CTCoAllocPolicy>(this, hSourceHandle, a5);
  if ( v19 >= 0 )
  {
    v24 = -1LL;
    do
      ++v24;
    while ( a7[v24] );
    v19 = _AllocStringWorker<CTCoAllocPolicy>(v23, v22, a7);
    if ( v19 >= 0 )
    {
      if ( !a6 )
        goto LABEL_16;
      v27 = -1LL;
      do
        ++v27;
      while ( a6[v27] );
      v19 = _AllocStringWorker<CTCoAllocPolicy>(v26, v25, a6);
      if ( v19 >= 0 )
      {
LABEL_16:
        if ( !a9 )
          goto LABEL_19;
        do
          ++v20;
        while ( a9[v20] );
        v19 = _AllocStringWorker<CTCoAllocPolicy>(v26, v25, a9);
        if ( v19 >= 0 )
        {
LABEL_19:
          if ( hSourceHandle )
            v19 = CProcess::SetupProcessTerminationWatcher(this);
LABEL_21:
          if ( v19 >= 0 )
            return (unsigned int)v19;
        }
      }
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x25u, &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids, v19);
  }
  AudPolicyLogError("CProcess::Initialize", 2548, v19);
  return (unsigned int)v19;
}
