/*
 * XREFs of ?PostMessageToChannel@CChannel@@QEAAJPEBUMIL_MESSAGE@@@Z @ 0x1800A02F8
 * Callers:
 *     ?PostMessageToClient@CConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z @ 0x1800A3B00 (-PostMessageToClient@CConnection@@UEAAJPEBUUCE_RDP_HEADER@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z @ 0x1800AB220 (-HrAlloc@WPF@@YAJ_J_KPEAPEAX@Z.c)
 */

__int64 __fastcall CChannel::PostMessageToChannel(CChannel *this, const struct MIL_MESSAGE *a2, __int64 a3, void **a4)
{
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  CChannel **v9; // rcx
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = 0LL;
  v6 = WPF::HrAlloc(this, 48LL, (unsigned __int64)&v11, a4);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x383u);
  }
  else
  {
    v8 = v11;
    *(_OWORD *)(v11 + 16) = *(_OWORD *)a2;
    *(_QWORD *)(v8 + 32) = *((_QWORD *)a2 + 2);
    *(_DWORD *)(v8 + 40) = *((_DWORD *)a2 + 6);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
    v9 = (CChannel **)*((_QWORD *)this + 10);
    *(_QWORD *)v8 = (char *)this + 72;
    *(_QWORD *)(v8 + 8) = v9;
    if ( *v9 != (CChannel *)((char *)this + 72) )
      __fastfail(3u);
    *v9 = (CChannel *)v8;
    *((_QWORD *)this + 10) = v8;
    SetEvent(*((HANDLE *)this + 11));
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  }
  return v7;
}
