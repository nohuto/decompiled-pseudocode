/*
 * XREFs of ?GetChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x1800781A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_SD @ 0x18006BA28 (WPP_SF_SD.c)
 */

__int64 __fastcall CAudioSession::GetChannelCount(CAudioSession *this, unsigned int *a2)
{
  bool v4; // zf
  LPCRITICAL_SECTION v6; // [rsp+30h] [rbp-18h] BYREF
  char v7; // [rsp+38h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v6, (struct _RTL_CRITICAL_SECTION *)this + 18);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_SD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x28u,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      *((const wchar_t **)this + 88));
  }
  v4 = v7 == 0;
  *a2 = *((_DWORD *)this + 193);
  if ( !v4 )
    ATL::CCritSecLock::Unlock(&v6);
  return 0LL;
}
