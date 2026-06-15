/*
 * XREFs of ??1CVolumeSoftware@@EEAA@XZ @ 0x18006FD80
 * Callers:
 *     ??_ECVolumeSoftware@@EEAAPEAXI@Z @ 0x180070060 (--_ECVolumeSoftware@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CVolumeSoftware::~CVolumeSoftware(CVolumeSoftware *this)
{
  __int64 v2; // rsi

  *(_QWORD *)this = &CVolumeSoftware::`vftable';
  if ( *((_QWORD *)this + 18) )
  {
    if ( ThreadPool )
      (*(void (__fastcall **)(CAudioThreadPool *, _QWORD))(*(_QWORD *)ThreadPool + 16LL))(
        ThreadPool,
        *((_QWORD *)this + 18));
    *((_QWORD *)this + 18) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v2 = *((_QWORD *)this + 11);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 11));
  CVolumeControlBase::~CVolumeControlBase(this);
}
