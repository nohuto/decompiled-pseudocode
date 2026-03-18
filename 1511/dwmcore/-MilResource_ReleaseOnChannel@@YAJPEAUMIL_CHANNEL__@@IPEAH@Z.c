/*
 * XREFs of ?MilResource_ReleaseOnChannel@@YAJPEAUMIL_CHANNEL__@@IPEAH@Z @ 0x1800A1010
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@IPEAH@Z @ 0x1800A13F8 (-ReleaseOnChannel@CHandleTable@@QEAAJPEAVCChannel@@IPEAH@Z.c)
 */

__int64 __fastcall MilResource_ReleaseOnChannel(struct MIL_CHANNEL__ *a1, unsigned int a2, int *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // eax
  int v8; // ebx

  if ( a1 )
  {
    if ( a2 )
    {
      v6 = (struct _RTL_CRITICAL_SECTION *)((char *)a1 + 184);
      EnterCriticalSection((LPCRITICAL_SECTION)((char *)a1 + 184));
      if ( *((_BYTE *)a1 + 233) )
      {
        v8 = -2003303407;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303407, 0x12Fu);
      }
      else
      {
        v7 = CHandleTable::ReleaseOnChannel((struct MIL_CHANNEL__ *)((char *)a1 + 24), a1, a2, a3);
        v8 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x132u);
      }
      if ( v6 )
        LeaveCriticalSection(v6);
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x163u);
    }
    else
    {
      v8 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x161u);
    }
  }
  else
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x160u);
  }
  return (unsigned int)v8;
}
