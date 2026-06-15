/*
 * XREFs of ?InitializeAPOs@CMuteSoftware@@UEAAJ_KIPEAPEAUIAudioProcessingObject@@@Z @ 0x18006C0F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180002254 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 */

__int64 __fastcall CMuteSoftware::InitializeAPOs(
        CMuteSoftware *this,
        __int64 a2,
        unsigned int a3,
        struct IAudioProcessingObject **a4)
{
  unsigned int v7; // ebp
  __int64 v8; // rdx
  __int64 v9; // r14
  int v10; // ebx
  int v11; // eax
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Au,
      (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
      (__int64)this);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( !a3 )
    goto LABEL_15;
  v7 = 0;
  do
  {
    Microsoft::WRL::WeakRef::~WeakRef((CMuteSoftware *)((char *)this + 40));
    if ( ((__int64 (__fastcall *)(_QWORD, GUID *, char *))(*a4)->lpVtbl->QueryInterface)(
           *a4,
           &GUID_885c7b80_3fa2_4e5a_be07_cf01e1d6e2cd,
           (char *)this + 40) >= 0
      && *((_QWORD *)this + 5) )
    {
      break;
    }
    ++v7;
    ++a4;
  }
  while ( v7 < a3 );
  v9 = *((_QWORD *)this + 5);
  if ( !v9 )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Bu, (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids);
    }
LABEL_15:
    v10 = -2147467262;
    goto LABEL_20;
  }
  v14 = 50000LL;
  LOBYTE(v8) = *((_DWORD *)this + 6) != 0;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v9 + 32LL))(
          v9,
          v8,
          0LL,
          1LL,
          &v14);
  v10 = v11;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    LODWORD(v13) = v11;
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Cu,
      (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
      this,
      v13);
  }
LABEL_20:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v10 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Du, (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids, v10);
  }
  return (unsigned int)v10;
}
