/*
 * XREFs of ?MilChannel_BeginCommand@@YAJPEAUMIL_CHANNEL__@@PEAXII@Z @ 0x1800A0F20
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?BeginCommand@CChannel@@QEAAJPEAXII@Z @ 0x1800A0650 (-BeginCommand@CChannel@@QEAAJPEAXII@Z.c)
 */

__int64 __fastcall MilChannel_BeginCommand(struct MIL_CHANNEL__ *a1, void *a2, unsigned int a3, int a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned int v7; // [rsp+20h] [rbp-18h]

  if ( !a1 )
  {
    v7 = 412;
    goto LABEL_9;
  }
  if ( !a2 || a3 < 4 )
  {
    v7 = 416;
LABEL_9:
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, v7);
    return v5;
  }
  v4 = CChannel::BeginCommand(a1, a2, a3, a4);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1A3u);
  return v5;
}
