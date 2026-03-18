/*
 * XREFs of ?SyncFlush@CChannel@@QEAAJXZ @ 0x1800A0440
 * Callers:
 *     ?MilChannel_SendSyncCommand@@YAJPEBXIPEAUMIL_CHANNEL__@@PEAUMIL_MESSAGE@@I@Z @ 0x1800B26E0 (-MilChannel_SendSyncCommand@@YAJPEBXIPEAUMIL_CHANNEL__@@PEAUMIL_MESSAGE@@I@Z.c)
 *     ?MilComposition_SyncFlush@@YAJPEAUMIL_CHANNEL__@@@Z @ 0x1800B4950 (-MilComposition_SyncFlush@@YAJPEAUMIL_CHANNEL__@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SynchronizeChannel@CConnection@@QEAAJI@Z @ 0x1800A3C30 (-SynchronizeChannel@CConnection@@QEAAJI@Z.c)
 */

__int64 __fastcall CChannel::SyncFlush(CChannel *this)
{
  unsigned int v1; // edx
  int v3; // eax
  unsigned int v4; // edi

  v1 = *((_DWORD *)this + 16);
  *((_BYTE *)this + 232) = 1;
  v3 = CConnection::SynchronizeChannel(*((CConnection **)this + 7), v1);
  v4 = v3;
  if ( v3 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x363u);
  *((_BYTE *)this + 232) = 0;
  return v4;
}
