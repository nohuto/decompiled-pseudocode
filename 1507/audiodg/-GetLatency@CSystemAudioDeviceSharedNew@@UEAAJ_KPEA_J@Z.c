/*
 * XREFs of ?GetLatency@CSystemAudioDeviceSharedNew@@UEAAJ_KPEA_J@Z @ 0x14002E160
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x1400106A0 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedNew::GetLatency(CSystemAudioDeviceSharedNew *this, __int64 a2, __int64 *a3)
{
  int v6; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 176));
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(**((_QWORD **)this + 45) + 40LL))(
         *((_QWORD *)this + 45),
         a2,
         a3);
  if ( v6 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x11u,
      (__int64)&WPP_c0a199d1e000f5a39bc1451c73891527_Traceguids,
      v6);
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v6;
}
