/*
 * XREFs of ?MilConnection_GetChannelKernelHandle@@YAJPEAUMIL_CHANNEL__@@PEAI@Z @ 0x180061050
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall MilConnection_GetChannelKernelHandle(struct MIL_CHANNEL__ *a1, unsigned int *a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // [rsp+20h] [rbp-18h]

  v2 = 0;
  if ( !a2 )
  {
    v4 = 179;
LABEL_7:
    v2 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v4);
    return v2;
  }
  if ( !a1 )
  {
    v4 = 182;
    goto LABEL_7;
  }
  *a2 = *((_DWORD *)a1 + 16);
  return v2;
}
