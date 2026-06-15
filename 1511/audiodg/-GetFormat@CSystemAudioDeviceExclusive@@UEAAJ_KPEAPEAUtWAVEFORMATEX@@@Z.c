/*
 * XREFs of ?GetFormat@CSystemAudioDeviceExclusive@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14002B6B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_Ds @ 0x14002A548 (WPP_SF_Ds.c)
 */

__int64 __fastcall CSystemAudioDeviceExclusive::GetFormat(
        CSystemAudioDeviceExclusive *this,
        __int64 a2,
        struct tWAVEFORMATEX **a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbp
  int v6; // ebx

  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  v6 = (*(__int64 (__fastcall **)(_QWORD, struct tWAVEFORMATEX **))(**((_QWORD **)this + 28) + 24LL))(
         *((_QWORD *)this + 28),
         a3);
  LeaveCriticalSection(v3);
  if ( v6 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_Ds(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xEu,
      (__int64)&WPP_c56ec536faef012c7fc5216e19ea82f9_Traceguids,
      v6,
      (__int64)"CSystemAudioDeviceExclusive::GetFormat");
  }
  return (unsigned int)v6;
}
