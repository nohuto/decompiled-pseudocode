/*
 * XREFs of ?SetMuteValue@CMuteHardware@@UEAAJH@Z @ 0x180056250
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMuteHardware::SetMuteValue(CMuteHardware *this, unsigned int a2)
{
  __int64 v4; // rcx

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x13u,
      (__int64)&WPP_5d80dfde78b839f7e098599d7a4ea935_Traceguids,
      this,
      a2);
  }
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v4 + 24LL))(v4, a2, (char *)this + 60);
  else
    return 2147500035LL;
}
