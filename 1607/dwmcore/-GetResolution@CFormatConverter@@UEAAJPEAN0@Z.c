/*
 * XREFs of ?GetResolution@CFormatConverter@@UEAAJPEAN0@Z @ 0x180184B20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCMTALock@@@@QEAA@XZ @ 0x18009E978 (--1-$CGuard@VCMTALock@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFormatConverter::GetResolution(CFormatConverter *this, double *a2, double *a3)
{
  int v6; // ebx
  char *v7; // rcx
  bool v8; // zf
  __int64 v9; // rcx
  char *v11; // [rsp+40h] [rbp+8h] BYREF

  v6 = -2003292404;
  if ( this == (CFormatConverter *)72 )
    v7 = 0LL;
  else
    v7 = (char *)this - 56;
  v8 = v7[48] == 0;
  v11 = v7;
  if ( !v8 )
    EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 8));
  v9 = *((_QWORD *)this + 1);
  if ( !v9 || (v6 = (*(__int64 (__fastcall **)(__int64, double *, double *))(*(_QWORD *)v9 + 64LL))(v9, a2, a3), v6 < 0) )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x24Du);
  CGuard<CMTALock>::~CGuard<CMTALock>((__int64 *)&v11);
  return (unsigned int)v6;
}
