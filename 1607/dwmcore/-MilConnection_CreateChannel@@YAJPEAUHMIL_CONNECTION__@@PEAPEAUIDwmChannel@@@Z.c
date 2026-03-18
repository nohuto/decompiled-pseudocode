/*
 * XREFs of ?MilConnection_CreateChannel@@YAJPEAUHMIL_CONNECTION__@@PEAPEAUIDwmChannel@@@Z @ 0x1800A8AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x1800A871C (-CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 */

__int64 __fastcall MilConnection_CreateChannel(struct HMIL_CONNECTION__ *this, struct IDwmChannel **a2)
{
  int v4; // eax
  int v5; // ebx
  struct _RTL_CRITICAL_SECTION *v7; // [rsp+48h] [rbp+10h] BYREF
  struct CChannel *v8; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 )
  {
    if ( this )
    {
      v7 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 120);
      EnterCriticalSection((LPCRITICAL_SECTION)this + 3);
      v4 = CConnection::CreateKernelChannel(this, &v8);
      v5 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x90u);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v7);
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x70u);
      else
        *a2 = v8;
    }
    else
    {
      v5 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x6Cu);
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x6Bu);
  }
  return (unsigned int)v5;
}
