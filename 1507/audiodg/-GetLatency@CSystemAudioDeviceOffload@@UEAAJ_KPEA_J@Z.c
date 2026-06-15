/*
 * XREFs of ?GetLatency@CSystemAudioDeviceOffload@@UEAAJ_KPEA_J@Z @ 0x14002E980
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_Ds @ 0x1400297DC (WPP_SF_Ds.c)
 */

__int64 __fastcall CSystemAudioDeviceOffload::GetLatency(CSystemAudioDeviceOffload *this, __int64 a2, __int64 *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  int v6; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 28) + 40LL))(*((_QWORD *)this + 28), a3);
  LeaveCriticalSection(v3);
  if ( v6 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_Ds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0xBu,
      (__int64)&WPP_defc16d433e2f54121a67667cf2bcce9_Traceguids,
      v6,
      (__int64)"CSystemAudioDeviceOffload::GetLatency");
  }
  return (unsigned int)v6;
}
