/*
 * XREFs of ?GetChannelVolume@CVADServer@@UEAAJIPEAM@Z @ 0x18008AA60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     WPP_SF_qD @ 0x1800448E8 (WPP_SF_qD.c)
 *     ?GetStreamChannelVolume@CAudioStream@@QEAAJIPEAM@Z @ 0x180081EBC (-GetStreamChannelVolume@CAudioStream@@QEAAJIPEAM@Z.c)
 */

__int64 __fastcall CVADServer::GetChannelVolume(CVADServer *this, unsigned int a2, float *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  CAudioStream *v7; // rcx
  int StreamChannelVolume; // ebx

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_qD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x40u,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      this,
      a2);
  }
  v6 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 248);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 248));
  v7 = (CAudioStream *)*((_QWORD *)this + 28);
  if ( v7 && *((_DWORD *)this + 54) )
    StreamChannelVolume = CAudioStream::GetStreamChannelVolume(v7, a2, a3);
  else
    StreamChannelVolume = -2004287487;
  LeaveCriticalSection(v6);
  if ( StreamChannelVolume < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x41u,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      StreamChannelVolume);
  }
  return (unsigned int)StreamChannelVolume;
}
