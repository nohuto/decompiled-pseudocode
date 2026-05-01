/*
 * XREFs of RmpEnforcementWorkerSynchronize @ 0x180005104
 * Callers:
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180012E10 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@UEAAJK@Z @ 0x180034A30 (-ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     RmpActivityHostCheckQueueWork @ 0x18003B7DC (RmpActivityHostCheckQueueWork.c)
 *     RmpActivityHostGetHostId @ 0x18003BCD0 (RmpActivityHostGetHostId.c)
 */

char __fastcall RmpEnforcementWorkerSynchronize(__int64 a1)
{
  int v2; // eax
  const struct _TlgProvider_t *v3; // rcx
  int v4; // edi
  __int64 HostId; // rax
  TraceLoggingHProvider v6; // rcx
  LPCGUID v7; // r8
  LPCGUID v8; // r9
  int v10; // [rsp+30h] [rbp-9h] BYREF
  __int64 v11; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  __int64 *v13; // [rsp+60h] [rbp+27h]
  int v14; // [rsp+68h] [rbp+2Fh]
  int v15; // [rsp+6Ch] [rbp+33h]
  int *v16; // [rsp+70h] [rbp+37h]
  int v17; // [rsp+78h] [rbp+3Fh]
  int v18; // [rsp+7Ch] [rbp+43h]

  while ( 1 )
  {
    v2 = RmpActivityHostCheckQueueWork(a1);
    v4 = v2;
    if ( (unsigned int)dword_1800690A0 > 4 )
    {
      LOBYTE(v2) = TlgKeywordOn(v3, 1uLL);
      if ( (_BYTE)v2 )
      {
        HostId = RmpActivityHostGetHostId(a1);
        v15 = 0;
        v18 = 0;
        v11 = HostId;
        v13 = &v11;
        v16 = &v10;
        v14 = 8;
        v10 = v4;
        v17 = 4;
        LOBYTE(v2) = TlgWrite(v6, &unk_18005ADB0, v7, v8, 4u, &pData);
      }
    }
    if ( !v4 )
      break;
    RtlSleepConditionVariableCS(a1 + 752, &RmpGlobalLock, 0LL);
  }
  return v2;
}
