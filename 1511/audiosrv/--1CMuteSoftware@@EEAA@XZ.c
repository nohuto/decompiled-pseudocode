/*
 * XREFs of ??1CMuteSoftware@@EEAA@XZ @ 0x18006FCA8
 * Callers:
 *     ??_ECMuteSoftware@@EEAAPEAXI@Z @ 0x180070020 (--_ECMuteSoftware@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CMuteSoftware::~CMuteSoftware(CMuteSoftware *this)
{
  __int64 v2; // rsi

  *(_QWORD *)this = &CMuteSoftware::`vftable';
  if ( *((_QWORD *)this + 11) )
  {
    if ( ThreadPool )
      (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 16LL))(
        ThreadPool,
        *((_QWORD *)this + 11));
    *((_QWORD *)this + 11) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 5));
  CMuteControlBase::~CMuteControlBase(this);
}
