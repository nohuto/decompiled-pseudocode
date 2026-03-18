/*
 * XREFs of ?MilResource_DuplicateHandleOnTarget@@YAJIIW4MIL_RESOURCE_TYPE@@PEAUMIL_CHANNEL__@@PEAI@Z @ 0x180060D90
 * Callers:
 *     <none>
 * Callees:
 *     ?DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z @ 0x180050AD4 (-DuplicateHandleOnTarget@CHandleTable@@QEAAJIIW4MIL_RESOURCE_TYPE@@PEAVCChannel@@PEAI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180051C78 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall MilResource_DuplicateHandleOnTarget(int a1, int a2, unsigned int a3, __int64 a4, _DWORD *a5)
{
  _DWORD *v9; // rdi
  __int64 v10; // rcx
  int v11; // eax
  int v12; // ebx
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+68h] [rbp+20h] BYREF

  if ( a4 )
  {
    v9 = a5;
    if ( a5 )
    {
      v14 = (struct _RTL_CRITICAL_SECTION *)(a4 + 184);
      EnterCriticalSection((LPCRITICAL_SECTION)(a4 + 184));
      if ( *(_BYTE *)(a4 + 233) )
      {
        v12 = -2003303407;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303407, 0x101u);
      }
      else
      {
        v11 = CHandleTable::DuplicateHandleOnTarget(v10, a1, a2, a3, (CChannel *)a4, v9);
        v12 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x10Eu);
      }
      CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v14);
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x150u);
    }
    else
    {
      v12 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x14Eu);
    }
  }
  else
  {
    v12 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x14Du);
  }
  return (unsigned int)v12;
}
