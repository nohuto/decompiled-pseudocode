/*
 * XREFs of ?MilConnection_CreateChannel@@YAJPEAUHMIL_CONNECTION__@@PEAPEAUMIL_CHANNEL__@@@Z @ 0x1800B4A70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800A1C40 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z @ 0x1800A3D2C (-CreateKernelChannel@CConnection@@AEAAJPEAPEAVCChannel@@@Z.c)
 */

__int64 __fastcall MilConnection_CreateChannel(struct HMIL_CONNECTION__ *this, struct MIL_CHANNEL__ **a2)
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
  if ( !this )
  {
    v8 = 145;
    goto LABEL_10;
  }
  v9 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 128));
  v4 = CConnection::CreateKernelChannel(this, &v10);
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
