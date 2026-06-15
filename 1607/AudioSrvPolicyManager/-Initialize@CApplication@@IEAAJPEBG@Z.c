/*
 * XREFs of ?Initialize@CApplication@@IEAAJPEBG@Z @ 0x18000AD80
 * Callers:
 *     ?CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z @ 0x18000A95C (-CreateInstance@CApplication@@SAJPEBGKPEAPEAV1@@Z.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180010A54 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplication::Initialize(CApplication *this, const unsigned __int16 *a2)
{
  __int64 v2; // r9
  signed int v5; // ecx
  BOOL v6; // ecx
  __int64 v7; // rax
  signed int LastError; // eax

  v2 = -1LL;
  do
    ++v2;
  while ( a2[v2] );
  v5 = _AllocStringWorker<CTCoAllocPolicy>(this, a2, a2);
  if ( v5 >= 0 )
  {
    v6 = *a2 != 0;
    *((_DWORD *)this + 125) = v6;
    *((_DWORD *)this + 124) = v6;
    if ( !v6 )
    {
      *((_DWORD *)this + 28) = 1;
      *((_DWORD *)this + 30) = 2;
      *((_DWORD *)this + 57) = 2;
      *((_DWORD *)this + 58) = 2;
    }
    v7 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), CApplication *))(*(_QWORD *)ThreadPool + 8LL))(
           ThreadPool,
           CApplication::SoundLevelChangeCompletionCallback,
           this);
    *((_QWORD *)this + 21) = v7;
    if ( v7 )
    {
      return 0;
    }
    else
    {
      LastError = GetLastError();
      v5 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        return (unsigned int)LastError;
    }
  }
  return (unsigned int)v5;
}
