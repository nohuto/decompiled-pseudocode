/*
 * XREFs of ?CreateTokenThread@CSurfaceManager@@IEAAJXZ @ 0x180037348
 * Callers:
 *     ?Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z @ 0x1800373C0 (-Initialize@CSurfaceManager@@IEAAJPEAPEAX0@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x1800376DC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSurfaceManager::CreateTokenThread(CSurfaceManager *this)
{
  unsigned int v1; // ebx
  HANDLE Thread; // rax
  int v5; // r9d
  DWORD dwCreationFlags; // [rsp+20h] [rbp-18h]

  v1 = 0;
  if ( *((_BYTE *)this + 424) )
  {
    v5 = -2147467260;
    dwCreationFlags = 357;
LABEL_7:
    v1 = v5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, dwCreationFlags);
    return v1;
  }
  Thread = CreateThread(0LL, 0LL, CSurfaceManager::s_TokenThreadMain, this, 4u, 0LL);
  *((_QWORD *)this + 51) = Thread;
  if ( !Thread )
  {
    dwCreationFlags = 370;
    v5 = -2147024882;
    goto LABEL_7;
  }
  SetThreadPriority(Thread, 15);
  ResumeThread(*((HANDLE *)this + 51));
  return v1;
}
