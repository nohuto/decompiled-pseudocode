/*
 * XREFs of ?ProcessPendingPLMExemptionChange@CApplication@@IEAAXXZ @ 0x18001C0B8
 * Callers:
 *     ?ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z @ 0x18001ED40 (-ApplyPBMPolicy@CApplicationManager@@QEAAJPEAVCApplication@@I@Z.c)
 * Callees:
 *     ?NotifyPLM@CApplication@@IEAAXW4_PLM_EXEMPTION@@@Z @ 0x18001C014 (-NotifyPLM@CApplication@@IEAAXW4_PLM_EXEMPTION@@@Z.c)
 */

void __fastcall CApplication::ProcessPendingPLMExemptionChange(struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rsi
  unsigned int DebugInfo_high; // ebx

  v1 = this + 6;
  EnterCriticalSection(this + 6);
  if ( !LODWORD(this[7].DebugInfo) )
  {
    LODWORD(this[7].DebugInfo) = 1;
    while ( HIDWORD(this[7].DebugInfo) )
    {
      DebugInfo_high = HIDWORD(this[7].DebugInfo);
      HIDWORD(this[7].DebugInfo) = 0;
      LeaveCriticalSection(v1);
      CApplication::NotifyPLM((__int64)this, DebugInfo_high);
      EnterCriticalSection(v1);
    }
    LODWORD(this[7].DebugInfo) = 0;
  }
  LeaveCriticalSection(v1);
}
