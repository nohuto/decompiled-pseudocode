/*
 * XREFs of ?GetComposedEventId@CConnection@@QEAAJPEAI@Z @ 0x1800A3F70
 * Callers:
 *     ?MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z @ 0x1800B46E0 (-MilCompositionEngine_GetComposedEventId@@YAJPEAUHMIL_CONNECTION__@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?OpenComposedEvent@@YAJIKPEAPEAX@Z @ 0x1800AF2B4 (-OpenComposedEvent@@YAJIKPEAPEAX@Z.c)
 */

__int64 __fastcall CConnection::GetComposedEventId(CConnection *this, unsigned int *a2)
{
  unsigned int v4; // edi
  unsigned int CompositionId; // esi
  unsigned int v6; // edx
  int v7; // eax
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0;
  CompositionId = DwmQueryCompositionId();
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  if ( *((_QWORD *)this + 24) || (v7 = OpenComposedEvent(CompositionId, v6, (void **)this + 24), v4 = v7, v7 >= 0) )
    *a2 = CompositionId;
  else
    MilInstrumentationCheckHR(0x14u, &dword_1801740A0, 1u, v7, 0x2C2u);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return v4;
}
