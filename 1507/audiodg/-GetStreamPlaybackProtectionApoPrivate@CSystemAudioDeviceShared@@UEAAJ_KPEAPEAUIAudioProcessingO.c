/*
 * XREFs of ?GetStreamPlaybackProtectionApoPrivate@CSystemAudioDeviceShared@@UEAAJ_KPEAPEAUIAudioProcessingObject@@@Z @ 0x14002CB70
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_Ds @ 0x1400297DC (WPP_SF_Ds.c)
 */

__int64 __fastcall CSystemAudioDeviceShared::GetStreamPlaybackProtectionApoPrivate(
        CSystemAudioDeviceShared *this,
        __int64 a2,
        struct IAudioProcessingObject **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r14
  int v7; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IAudioProcessingObject **))(**((_QWORD **)this + 45) + 80LL))(
         *((_QWORD *)this + 45),
         a2,
         a3);
  LeaveCriticalSection(v3);
  if ( v7 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_Ds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x2Eu,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids,
      v7,
      (__int64)"CSystemAudioDeviceShared::GetStreamPlaybackProtectionApoPrivate");
  }
  return (unsigned int)v7;
}
