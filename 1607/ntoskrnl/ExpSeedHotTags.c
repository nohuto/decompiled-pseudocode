/*
 * XREFs of ExpSeedHotTags @ 0x1407B4510
 * Callers:
 *     InitializePool @ 0x1407B4330 (InitializePool.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 ExpSeedHotTags()
{
  __int64 v0; // r10
  unsigned int *v1; // r8
  int v2; // r11d
  __int64 v3; // r9
  __int64 v4; // rbx
  unsigned int v5; // edx
  __int64 result; // rax
  _DWORD v7[64]; // [rsp+0h] [rbp-100h] BYREF

  v0 = PoolTrackTable;
  v1 = v7;
  v2 = PoolTrackTableMask;
  v3 = 64LL;
  qmemcpy(
    v7,
    "Io  Hal MdlPPooLObStIrp NDdbIrpLIoOpMdl FileCMVaSeSdNtFCPoolTCPrCMNbSeTdNtFsTCPTTCPCKey ObSqIoNmIoEaTCPcNtFaNtf0Sect"
    "IrpSTokeSe  ObClCcScNtFLSeAcFSfmCcWkFSimAfdCAfdEFSroNtfnUIRPNpFrNpFRSePaSeUsAcpFAcpMSeScObNmNpFsSeLuScPDEvenRqrvVadl"
    "Pp  VadSVad VadLVadFMmdi",
    sizeof(v7));
  do
  {
    v4 = *v1;
    v5 = v2 & ((40543 * v4) ^ ((unsigned __int64)(40543 * v4) >> 32));
    while ( *(_DWORD *)(v0 + 40LL * v5) || v5 == PoolTrackTableSize - 1 )
    {
      result = v2 & (v5 + 1);
      v5 = result;
      if ( (_DWORD)result == (v2 & ((40543 * (int)v4) ^ ((unsigned __int64)(40543 * v4) >> 32))) )
        goto LABEL_6;
    }
    result = v5;
    *(_DWORD *)(v0 + 40LL * v5) = v4;
LABEL_6:
    ++v1;
    --v3;
  }
  while ( v3 );
  return result;
}
