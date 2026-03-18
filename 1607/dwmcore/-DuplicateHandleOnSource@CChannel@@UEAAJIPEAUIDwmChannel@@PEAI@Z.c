/*
 * XREFs of ?DuplicateHandleOnSource@CChannel@@UEAAJIPEAUIDwmChannel@@PEAI@Z @ 0x18004A5F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z @ 0x180047924 (-DuplicateHandle@CHandleTable@@QEAAJPEAVCChannel@@I0PEAI@Z.c)
 */

__int64 __fastcall CChannel::DuplicateHandleOnSource(
        CChannel *this,
        unsigned int a2,
        struct IDwmChannel *a3,
        unsigned int *a4)
{
  int v8; // eax
  unsigned int v9; // ebx
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+40h] [rbp+8h] BYREF

  v11 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  if ( *((_QWORD *)a3 + 6) == *((_QWORD *)this + 6) )
  {
    v8 = CHandleTable::DuplicateHandle((CChannel *)((char *)this + 16), this, a2, a3, a4);
    v9 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x2DCu);
  }
  else
  {
    v9 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x2D6u);
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v11);
  return v9;
}
