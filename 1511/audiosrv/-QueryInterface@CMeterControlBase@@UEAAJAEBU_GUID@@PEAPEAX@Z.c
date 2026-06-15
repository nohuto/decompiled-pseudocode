/*
 * XREFs of ?QueryInterface@CMeterControlBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18006BD30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CMeterControlBase::QueryInterface(CMeterControlBase *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // edi

  v3 = 0;
  if ( a3 )
  {
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1
      && *(_QWORD *)a2->Data4 == *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4 )
    {
      (*(void (__fastcall **)(CMeterControlBase *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
      return v3;
    }
    *a3 = 0LL;
    v3 = -2147467262;
  }
  else
  {
    v3 = -2147467261;
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xCu, (__int64)&WPP_c4b6e3fb0b78b7ef89729a36f54e7633_Traceguids, v3);
  }
  return v3;
}
