/*
 * XREFs of rimInputApc @ 0x1C00826A0
 * Callers:
 *     <none>
 * Callees:
 *     RIMUnlockExclusive @ 0x1C00523F0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0052410 (RIMLockExclusive.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C006EE0C (rimProcessDeviceBufferAndStartRead.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0075724 (RIMStartDeviceSpecificRead.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0075FE4 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C0075FF8 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00761AC (WPP_RECORDER_SF_qq.c)
 *     DbgPrintRIMAlways @ 0x1C00B3870 (DbgPrintRIMAlways.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00CFFB4 (RIMApplyPTPConfigRemedy.c)
 */

void __fastcall rimInputApc(char *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  __int64 v3; // rsi
  NTSTATUS Status; // ebp
  BOOL v6; // ebx
  __int64 v7; // rdx
  int v8; // ebx
  char v9; // [rsp+60h] [rbp+8h] BYREF

  v3 = *((_QWORD *)ApcContext + 43);
  *(struct _IO_STATUS_BLOCK *)(ApcContext + 168) = *IoStatusBlock;
  Status = IoStatusBlock->Status;
  if ( !*(_WORD *)(v3 + 72) )
  {
    v6 = ApcContext[48] == 2;
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v9, v6);
    if ( v6 && *((_DWORD *)ApcContext + 79) )
    {
      v8 = 1;
      if ( !gDebugPhoneInitRace )
        gDebugPhoneInitRace = 1;
      RIMLockExclusive(v3 + 96);
    }
    else
    {
      v8 = 0;
    }
    if ( *((_QWORD *)ApcContext + 28) )
    {
      RIMLockExclusive(v3 + 712);
      *((_DWORD *)ApcContext + 46) &= ~0x40u;
      if ( Status < 0 )
      {
        if ( Status != -1073741536 )
          RIMStartDeviceSpecificRead(v3, (__int64)ApcContext);
      }
      else
      {
        rimProcessDeviceBufferAndStartRead(v3, (__int64)ApcContext);
      }
      RIMUnlockExclusive(v3 + 712);
    }
    else if ( Status >= 0 )
    {
      WPP_RECORDER_SF_qq(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v7,
        5u,
        0x17u,
        (__int64)&WPP_6c94d55ff2a354cdce5d424b790ce363_Traceguids,
        v3,
        ApcContext);
      DbgPrintRIMAlways("pRimObj(%p) pRimDev(%p), pRimDev's handle == nullptr\n");
    }
    if ( v8 )
      RIMUnlockExclusive(v3 + 96);
    RIMApplyPTPConfigRemedy(v3, ApcContext);
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v9);
  }
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
}
