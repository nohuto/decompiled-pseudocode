/*
 * XREFs of ?Reset@CDWMInputThread@@QEAAJXZ @ 0x1800A7DB8
 * Callers:
 *     ?Initialize@CInputManager@@IEAAJXZ @ 0x1800A8230 (-Initialize@CInputManager@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDWMInputThread::Reset(HANDLE *this)
{
  unsigned int v1; // edi
  HANDLE v3; // rax
  int v5; // ebx
  DWORD ThreadId; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( !this[1] )
  {
    if ( *((_BYTE *)this + 24) )
    {
      v5 = -2147467260;
      MilInstrumentationCheckHR(0x14u, &dword_1801B9C20, 1u, -2147467260, 0x72u);
    }
    else
    {
      v3 = CreateThread(0LL, 0LL, CDWMInputThread::RunInputThreadStatic, this, 4u, &ThreadId);
      this[1] = v3;
      if ( v3 )
      {
        SetThreadPriority(v3, 16);
        ResumeThread(this[1]);
        goto LABEL_5;
      }
      v5 = -2147024882;
      MilInstrumentationCheckHR(0x14u, &dword_1801B9C20, 1u, -2147024882, 0x82u);
    }
    v1 = v5;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x98u);
    return v1;
  }
LABEL_5:
  if ( !*((_BYTE *)this + 24) )
    SetEvent(this[2]);
  return v1;
}
