/*
 * XREFs of ?GetChannelCount@CAudioSession@@UEAAJPEAI@Z @ 0x1800733C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_SD @ 0x180070D50 (WPP_SF_SD.c)
 */

__int64 __fastcall CAudioSession::GetChannelCount(CAudioSession *this, unsigned int *a2)
{
  bool v4; // zf
  LPCRITICAL_SECTION v6; // [rsp+30h] [rbp-18h] BYREF
  char v7; // [rsp+38h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v6, (struct _RTL_CRITICAL_SECTION *)((char *)this + 872));
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_SD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x28u,
      (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      *((const wchar_t **)this + 107));
  }
  v4 = v7 == 0;
  *a2 = *((_DWORD *)this + 231);
  if ( !v4 )
    ATL::CCritSecLock::Unlock(&v6);
  return 0LL;
}
