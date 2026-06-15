/*
 * XREFs of ?GetFormat@CSystemAudioDeviceSharedBase@@UEAAJ_KPEAPEAUtWAVEFORMATEX@@@Z @ 0x14002C120
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x140008140 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall CSystemAudioDeviceSharedBase::GetFormat(
        CSystemAudioDeviceSharedBase *this,
        __int64 a2,
        struct tWAVEFORMATEX **a3)
{
  int v5; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v8; // [rsp+28h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock(
    (ATL::CCritSecLock *)&lpCriticalSection,
    (struct _RTL_CRITICAL_SECTION *)((char *)this + 176));
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct tWAVEFORMATEX **))(**((_QWORD **)this + 38) + 152LL))(
         *((_QWORD *)this + 38),
         *((_QWORD *)this + 36),
         a3);
  if ( v5 < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Bu, (__int64)&WPP_c59105ced4022a196d4cc1b91b2ab5a7_Traceguids, v5);
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v5;
}
