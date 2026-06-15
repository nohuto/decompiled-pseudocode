/*
 * XREFs of ?Initialize@CMuteSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x18006D410
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18003E0E0 (-Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CMuteSoftware::Initialize(CMuteSoftware *this, struct IMMDevice *a2)
{
  signed int v3; // edi
  __int64 v4; // rax
  signed int LastError; // eax

  v3 = CMuteControlBase::Initialize(this, a2);
  if ( v3 < 0 )
    goto LABEL_9;
  if ( ThreadPool )
  {
    v4 = (*(__int64 (__fastcall **)(CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_TIMER *), CMuteSoftware *))(*(_QWORD *)ThreadPool + 8LL))(
           ThreadPool,
           CMuteSoftware::OnPersistState,
           this);
    *((_QWORD *)this + 11) = v4;
    if ( !v4 )
    {
      LastError = GetLastError();
      v3 = LastError;
      if ( LastError > 0 )
        v3 = (unsigned __int16)LastError | 0x80070000;
    }
  }
  if ( v3 < 0 )
  {
LABEL_9:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x26u,
        (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
        v3);
    }
  }
  return (unsigned int)v3;
}
