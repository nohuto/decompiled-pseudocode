/*
 * XREFs of ?MilConnection_CreateChannel@@YAJPEAUHMIL_CONNECTION__@@PEAPEAUMIL_CHANNEL__@@@Z @ 0x180095560
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x1800956CC (-CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 */

__int64 __fastcall MilConnection_CreateChannel(struct HMIL_CONNECTION__ *a1, struct MIL_CHANNEL__ **a2)
{
  int v4; // eax
  int v5; // ebx
  int v7; // r9d
  unsigned int v8; // [rsp+20h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+48h] [rbp+10h] BYREF
  struct CChannel *v10; // [rsp+50h] [rbp+18h] BYREF

  if ( !a2 )
  {
    v8 = 144;
LABEL_10:
    v7 = -2147024809;
    v5 = -2147024809;
LABEL_12:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v8);
    return (unsigned int)v5;
  }
  if ( !a1 )
  {
    v8 = 145;
    goto LABEL_10;
  }
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)a1 + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)a1 + 128));
  v4 = CConnection::CreateKernelChannel(a1, &v10);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xACu);
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  if ( v5 < 0 )
  {
    v8 = 149;
    v7 = v5;
    goto LABEL_12;
  }
  *a2 = v10;
  return (unsigned int)v5;
}
