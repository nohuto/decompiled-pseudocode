/*
 * XREFs of ?MilResource_DuplicateHandle@@YAJPEAUMIL_CHANNEL__@@I0PEAI@Z @ 0x1800A1C70
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?DuplicateHandle@CChannel@@QEAAJIPEAV1@PEAI@Z @ 0x1800A056C (-DuplicateHandle@CChannel@@QEAAJIPEAV1@PEAI@Z.c)
 */

__int64 __fastcall MilResource_DuplicateHandle(
        struct MIL_CHANNEL__ *a1,
        unsigned int a2,
        struct MIL_CHANNEL__ *a3,
        unsigned int *a4)
{
  int v4; // eax
  unsigned int v5; // ebx

  if ( a1 )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        v4 = CChannel::DuplicateHandle(a1, a2, a3, a4);
        v5 = v4;
        if ( v4 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x13Bu);
      }
      else
      {
        v5 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x139u);
      }
    }
    else
    {
      v5 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x138u);
    }
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x137u);
  }
  return v5;
}
