/*
 * XREFs of ?GetLatency@CSystemAudioDeviceOffload@@UEAAJ_KPEA_J@Z @ 0x14002DA20
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_Ds @ 0x14002A548 (WPP_SF_Ds.c)
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
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_Ds(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xBu,
      (__int64)&WPP_0c9f4c97d2e4db079a99cda1b29d38b3_Traceguids,
      v6,
      (__int64)"CSystemAudioDeviceOffload::GetLatency");
  }
  return (unsigned int)v6;
}
