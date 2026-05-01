/*
 * XREFs of ?RmpEnforcementWorkerSynchronize@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013CDC
 * Callers:
 *     ?AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITION@@PEAXPEAUIResourceSetCallback@2@2PEBGPEAT_RM_SID@@KK_KKPEAU_RM_ACTIVATOR@@PEA_NPEAVResourceSet@2@PEAPEAV82@@Z @ 0x18000D900 (-AcquireResourceSet@ResourceManager@ExecutionModel@@QEAAJPEBU_ResourceSetInfo@2@PEAU_RM_PARTITIO.c)
 *     ?Apply@ResourceSet@ExecutionModel@@QEAAJK@Z @ 0x18000FF88 (-Apply@ResourceSet@ExecutionModel@@QEAAJK@Z.c)
 *     ?ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z @ 0x18002B19C (-ApplyTerminalResourceSet@ResourceManager@ExecutionModel@@QEAAJK@Z.c)
 * Callees:
 *     ?RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180013E50 (-RmpActivityHostCheckQueueWork@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

void __fastcall RmpEnforcementWorkerSynchronize(struct _RM_ACTIVITY_HOST *a1)
{
  unsigned int v2; // edi
  __int64 v4; // rax
  unsigned int v5; // [rsp+30h] [rbp-29h] BYREF
  __int64 v6; // [rsp+38h] [rbp-21h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+40h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-9h] BYREF
  void *v9; // [rsp+60h] [rbp+7h]
  int v10; // [rsp+68h] [rbp+Fh]
  int v11; // [rsp+6Ch] [rbp+13h]
  __int64 *v12; // [rsp+70h] [rbp+17h]
  int v13; // [rsp+78h] [rbp+1Fh]
  int v14; // [rsp+7Ch] [rbp+23h]
  unsigned int *v15; // [rsp+80h] [rbp+27h]
  int v16; // [rsp+88h] [rbp+2Fh]
  int v17; // [rsp+8Ch] [rbp+33h]

  while ( 1 )
  {
    v2 = RmpActivityHostCheckQueueWork(a1);
    if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 1) != 0 && (qword_18004D048 & 1) == qword_18004D048 )
    {
      v4 = *((_QWORD *)a1 + 3);
      v14 = 0;
      v17 = 0;
      v6 = v4;
      v12 = &v6;
      v15 = &v5;
      v13 = 8;
      v5 = v2;
      v16 = 4;
      *(_DWORD *)&EventDescriptor.Level = 4;
      UserData.Ptr = (ULONGLONG)off_18004D038;
      *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_1800425A6 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
      EventDescriptor.Keyword = 1LL;
      UserData.Size = *(unsigned __int16 *)off_18004D038;
      v9 = &unk_1800425B1;
      UserData.Reserved = 2;
      v10 = 55;
      v11 = 1;
      EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
    }
    if ( !v2 )
      break;
    RtlSleepConditionVariableCS((char *)a1 + 800, &RmpGlobalLock, 0LL);
  }
}
