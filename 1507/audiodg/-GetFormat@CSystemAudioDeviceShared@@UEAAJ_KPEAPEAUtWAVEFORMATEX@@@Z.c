/*
 * XREFs of ?GetFormat@CSystemAudioDeviceShared@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14002C8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_Ds @ 0x1400297DC (WPP_SF_Ds.c)
 */

__int64 __fastcall CSystemAudioDeviceShared::GetFormat(
        CSystemAudioDeviceShared *this,
        __int64 a2,
        struct tWAVEFORMATEX **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // r14
  int v6; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct tWAVEFORMATEX **))(**((_QWORD **)this + 45) + 120LL))(
         *((_QWORD *)this + 45),
         *((_QWORD *)this + 42),
         a3);
  if ( v6 < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x200) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_Ds(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      0x2Fu,
      (__int64)&WPP_b1d6ba9c58c135fb3d6ee1afdfbb2a6e_Traceguids,
      v6,
      (__int64)"CSystemAudioDeviceShared::GetFormat");
  }
  LeaveCriticalSection(v3);
  return (unsigned int)v6;
}
