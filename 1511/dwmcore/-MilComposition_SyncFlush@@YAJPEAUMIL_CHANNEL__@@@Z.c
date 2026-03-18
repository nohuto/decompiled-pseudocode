/*
 * XREFs of ?MilComposition_SyncFlush@@YAJPEAUMIL_CHANNEL__@@@Z @ 0x1800B4950
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SyncFlush@CChannel@@QEAAJXZ @ 0x1800A0440 (-SyncFlush@CChannel@@QEAAJXZ.c)
 */

__int64 __fastcall MilComposition_SyncFlush(struct MIL_CHANNEL__ *a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  if ( a1 )
  {
    v1 = CChannel::SyncFlush(a1);
    v2 = v1;
    if ( v1 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0xD6u);
  }
  else
  {
    v2 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xD4u);
  }
  return v2;
}
