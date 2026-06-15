/*
 * XREFs of ?Initialize@CProcess@@IEAAJPEAXKKPEBG11H1HH@Z @ 0x180011D80
 * Callers:
 *     ?CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHPEAPEAV1@@Z @ 0x1800316C4 (-CreateInstance@CProcess@@SAJPEAXKKPEBG11H1HHPEAPEAV1@@Z.c)
 * Callees:
 *     ?SetupProcessTerminationWatcher@CProcess@@IEAAJXZ @ 0x180011280 (-SetupProcessTerminationWatcher@CProcess@@IEAAJXZ.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x18002C920 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
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
        int a11)
{
  HANDLE CurrentProcess; // rbx
  HANDLE v14; // rax
  __int64 v15; // rdi
  __int64 v16; // r9
  int v17; // edx
  int v18; // ecx
  int v19; // ebx
  __int64 v20; // r9
  int v21; // edx
  int v22; // ecx
  __int64 v23; // r9
  signed int LastError; // eax

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
LABEL_16:
      if ( v19 >= 0 )
        return (unsigned int)v19;
      goto LABEL_23;
    }
  }
  v15 = -1LL;
  v16 = -1LL;
  do
    ++v16;
  while ( a5[v16] );
  v19 = _AllocStringWorker<CTCoAllocPolicy>((_DWORD)this, (_DWORD)hSourceHandle, (_DWORD)a5, v16);
  if ( v19 >= 0 )
  {
    v20 = -1LL;
    do
      ++v20;
    while ( a7[v20] );
    v19 = _AllocStringWorker<CTCoAllocPolicy>(v18, v17, (_DWORD)a7, v20);
    if ( v19 >= 0 )
    {
      if ( !a6 )
        goto LABEL_13;
      v23 = -1LL;
      do
        ++v23;
      while ( a6[v23] );
      v19 = _AllocStringWorker<CTCoAllocPolicy>(v22, v21, (_DWORD)a6, v23);
      if ( v19 >= 0 )
      {
LABEL_13:
        if ( !a9 )
          goto LABEL_14;
        do
          ++v15;
        while ( a9[v15] );
        v19 = _AllocStringWorker<CTCoAllocPolicy>(v22, v21, (_DWORD)a9, v15);
        if ( v19 >= 0 )
        {
LABEL_14:
          if ( hSourceHandle )
            v19 = CProcess::SetupProcessTerminationWatcher(this);
          goto LABEL_16;
        }
      }
    }
  }
LABEL_23:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      35LL,
      &WPP_f7cdc31509cb4a3405552b22f946de83_Traceguids,
      (unsigned int)v19);
  }
  return (unsigned int)v19;
}
