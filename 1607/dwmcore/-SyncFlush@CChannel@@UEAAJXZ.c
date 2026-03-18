/*
 * XREFs of ?SyncFlush@CChannel@@UEAAJXZ @ 0x18004A9A0
 * Callers:
 *     ?SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@I@Z @ 0x18001E758 (-SendSyncCommand@CChannel@@AEAAJPEBXIPEAUMIL_MESSAGE@@I@Z.c)
 *     ?SyncFlipChainInitializeSharedDataObjects@CChannel@@UEAAJIIU?$TMILFlagsEnum@W4FlagsEnum@SharedDisplaySurface@@@@AEBUtagRECT@@PEBX22@Z @ 0x180115A70 (-SyncFlipChainInitializeSharedDataObjects@CChannel@@UEAAJIIU-$TMILFlagsEnum@W4FlagsEnum@SharedDi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SynchronizeChannel@CConnection@@QEAAJI@Z @ 0x1800A8624 (-SynchronizeChannel@CConnection@@QEAAJI@Z.c)
 */

__int64 __fastcall CChannel::SyncFlush(CChannel *this)
{
  unsigned int v1; // edx
  int v3; // eax
  unsigned int v4; // edi

  v1 = *((_DWORD *)this + 14);
  *((_BYTE *)this + 224) = 1;
  v3 = CConnection::SynchronizeChannel(*((CConnection **)this + 6), v1);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x24Bu);
  *((_BYTE *)this + 224) = 0;
  return v4;
}
