/*
 * XREFs of RmpEnforcementWorkerSynchronize @ 0x180017480
 * Callers:
 *     ?AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAUIResourceSetCallback@2@PEAXPEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAUIResourceSet@2@@Z @ 0x18000FCB0 (-AcquireResourceSetHelperPhase2@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU.c)
 *     ?Apply@ResourceSet@ExecutionModel@@UEAAJK@Z @ 0x180012750 (-Apply@ResourceSet@ExecutionModel@@UEAAJK@Z.c)
 *     ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z @ 0x18002BEE8 (-ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z.c)
 * Callees:
 *     RmpActivityHostCheckQueueWork @ 0x180017600 (RmpActivityHostCheckQueueWork.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

ULONG __fastcall RmpEnforcementWorkerSynchronize(__int64 a1)
{
  ULONG result; // eax
  ULONG v3; // ebx
  ULONG v5; // [rsp+30h] [rbp-88h] BYREF
  __int64 v6; // [rsp+38h] [rbp-80h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-68h] BYREF
  void *v9; // [rsp+60h] [rbp-58h]
  int v10; // [rsp+68h] [rbp-50h]
  int v11; // [rsp+6Ch] [rbp-4Ch]
  __int64 *v12; // [rsp+70h] [rbp-48h]
  __int64 v13; // [rsp+78h] [rbp-40h]
  ULONG *v14; // [rsp+80h] [rbp-38h]
  __int64 v15; // [rsp+88h] [rbp-30h]

  while ( 1 )
  {
    result = RmpActivityHostCheckQueueWork(a1);
    v3 = result;
    if ( (unsigned int)dword_18004C030 > 4 && (qword_18004C040 & 1) != 0 && (qword_18004C048 & 1) == qword_18004C048 )
    {
      v6 = *(_QWORD *)(a1 + 24);
      v12 = &v6;
      v14 = &v5;
      v13 = 8LL;
      v5 = result;
      v15 = 4LL;
      *(_DWORD *)&EventDescriptor.Level = 4;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_18003F5AE - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      UserData.Ptr = (ULONGLONG)off_18004C038;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_18004C038;
      UserData.Reserved = 2;
      v9 = &unk_18003F5B9;
      v10 = 55;
      v11 = 1;
      result = EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
    if ( !v3 )
      break;
    RtlSleepConditionVariableCS(a1 + 800, &RmpGlobalLock, 0LL);
  }
  return result;
}
