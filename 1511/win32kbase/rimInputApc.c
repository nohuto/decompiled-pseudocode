/*
 * XREFs of rimInputApc @ 0x1C007C160
 * Callers:
 *     <none>
 * Callees:
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C000FE08 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0010BF0 (WPP_RECORDER_SF_qq.c)
 *     RIMUnlockExclusive @ 0x1C0046AD0 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     RIMStartDeviceSpecificRead @ 0x1C007AAF0 (RIMStartDeviceSpecificRead.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0086A90 (rimProcessDeviceBufferAndStartRead.c)
 *     DbgPrintRIMAlways @ 0x1C00B62F0 (DbgPrintRIMAlways.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C00CE68C (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C00D1390 (RIMApplyPTPConfigRemedy.c)
 */

void __fastcall rimInputApc(struct _IO_STATUS_BLOCK *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  __int64 Pointer; // rsi
  NTSTATUS Status; // ebp
  BOOL v6; // ebx
  __int64 v7; // rdx
  int v8; // ebx
  char v9; // [rsp+60h] [rbp+8h] BYREF

  Pointer = (__int64)ApcContext[21].Pointer;
  ApcContext[10] = *IoStatusBlock;
  Status = IoStatusBlock->Status;
  if ( !*(_WORD *)(Pointer + 72) )
  {
    v6 = LOBYTE(ApcContext[3].Status) == 2;
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v9, v6, 0);
    if ( v6 && HIDWORD(ApcContext[19].Pointer) )
    {
      v8 = 1;
      if ( !gDebugPhoneInitRace )
        gDebugPhoneInitRace = 1;
      RIMLockExclusive(Pointer + 96);
    }
    else
    {
      v8 = 0;
    }
    if ( ApcContext[13].Information )
    {
      RIMLockExclusive(Pointer + 744);
      ApcContext[11].Status &= ~0x40u;
      if ( Status < 0 )
      {
        if ( Status != -1073741536 )
          RIMStartDeviceSpecificRead(Pointer, (__int64)ApcContext);
      }
      else
      {
        rimProcessDeviceBufferAndStartRead(Pointer, ApcContext);
      }
      RIMUnlockExclusive(Pointer + 744);
    }
    else if ( Status >= 0 )
    {
      WPP_RECORDER_SF_qq(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v7,
        5u,
        0x18u,
        (__int64)&WPP_764b95e916dcfe1972f518bef10ad2df_Traceguids,
        Pointer,
        ApcContext);
      DbgPrintRIMAlways("pRimObj(%p) pRimDev(%p), pRimDev's handle == nullptr\n");
    }
    if ( v8 )
      RIMUnlockExclusive(Pointer + 96);
    RIMApplyPTPConfigRemedy(Pointer, ApcContext);
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v9);
  }
  ObfDereferenceObject(ApcContext[2].Pointer);
}
