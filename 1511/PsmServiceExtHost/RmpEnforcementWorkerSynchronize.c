/*
 * XREFs of RmpEnforcementWorkerSynchronize @ 0x180008AEC
 * Callers:
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEA_NPEAUIResourceSet@2@PEAPEAU62@@Z @ 0x180011420 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@UEAAJK@Z @ 0x18003BB70 (-ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@UEAAJK@Z.c)
 * Callees:
 *     RmpActivityHostCheckQueueWork @ 0x18000ADC0 (RmpActivityHostCheckQueueWork.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 */

ULONG __fastcall RmpEnforcementWorkerSynchronize(__int64 a1)
{
  ULONG result; // eax
  ULONG v3; // edi
  __int64 v5; // rax
  ULONG v6; // [rsp+30h] [rbp-19h] BYREF
  __int64 v7; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-9h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp+7h] BYREF
  void *v10; // [rsp+60h] [rbp+17h]
  int v11; // [rsp+68h] [rbp+1Fh]
  int v12; // [rsp+6Ch] [rbp+23h]
  __int64 *v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+78h] [rbp+2Fh]
  int v15; // [rsp+7Ch] [rbp+33h]
  ULONG *v16; // [rsp+80h] [rbp+37h]
  int v17; // [rsp+88h] [rbp+3Fh]
  int v18; // [rsp+8Ch] [rbp+43h]

  while ( 1 )
  {
    result = RmpActivityHostCheckQueueWork(a1);
    v3 = result;
    if ( (unsigned int)dword_180071060 > 4 && (qword_180071070 & 1) != 0 && (qword_180071078 & 1) == qword_180071078 )
    {
      v5 = *(_QWORD *)(a1 + 24);
      v15 = 0;
      v18 = 0;
      v7 = v5;
      v13 = &v7;
      v16 = &v6;
      v14 = 8;
      v6 = v3;
      v17 = 4;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_180071068;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800625B7 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_180071068;
      v10 = &unk_1800625C2;
      UserData.Reserved = 2;
      v11 = 55;
      v12 = 1;
      result = EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
    if ( !v3 )
      break;
    RtlSleepConditionVariableCS(a1 + 760, &RmpGlobalLock, 0LL);
  }
  return result;
}
