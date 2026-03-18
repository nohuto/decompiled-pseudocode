/*
 * XREFs of ?GetComposedEventId@CConnection@@QEAAJPEAI@Z @ 0x1800A845C
 * Callers:
 *     ?MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z @ 0x1800A8980 (-MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z.c)
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x1800A83BC (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 */

__int64 __fastcall CConnection::GetComposedEventId(struct _RTL_CRITICAL_SECTION *this, unsigned int *a2)
{
  unsigned int v4; // edi
  int CompositionId; // esi
  __int64 v6; // rdx
  int v7; // eax
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  CompositionId = DwmQueryCompositionId();
  v9 = this + 3;
  EnterCriticalSection(this + 3);
  if ( this[4].LockSemaphore || (v7 = OpenComposedEvent(CompositionId, v6, &this[4].LockSemaphore), v4 = v7, v7 >= 0) )
    *a2 = CompositionId;
  else
    MilInstrumentationCheckHR(0x14u, &dword_1801ACEA0, 1u, v7, 0x280u);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v9);
  return v4;
}
