/*
 * XREFs of ?MilResource_CreateOrAddRefOnChannel@@YAJPEAUMIL_CHANNEL__@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x1800510E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z @ 0x1800508D4 (-CreateOrAddRefOnChannel@CHandleTable@@QEAAJPEAVCChannel@@W4MIL_RESOURCE_TYPE@@PEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall MilResource_CreateOrAddRefOnChannel(__int64 a1, unsigned int a2, unsigned int *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // eax
  int v8; // ebx

  if ( a1 )
  {
    if ( a3 )
    {
      v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 184);
      EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 184));
      if ( *(_BYTE *)(a1 + 233) )
      {
        v8 = -2003303407;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303407, 0x99u);
      }
      else
      {
        v7 = CHandleTable::CreateOrAddRefOnChannel(a1 + 24, (CChannel *)a1, a2, a3);
        v8 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xA2u);
      }
      if ( v6 )
        LeaveCriticalSection(v6);
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x126u);
    }
    else
    {
      v8 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x124u);
    }
  }
  else
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x123u);
  }
  return (unsigned int)v8;
}
