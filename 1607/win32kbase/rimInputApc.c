/*
 * XREFs of rimInputApc @ 0x1C0010CF0
 * Callers:
 *     <none>
 * Callees:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00103C4 (rimProcessDeviceBufferAndStartRead.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00105A4 (WPP_RECORDER_SF_qq.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0010A8C (RIMStartDeviceSpecificRead.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C0010E6C (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@HH@Z @ 0x1C0010E90 (--0ApiSetEditionCrit@@QEAA@HH@Z.c)
 *     RIMApplyPTPConfigRemedy @ 0x1C0010ED8 (RIMApplyPTPConfigRemedy.c)
 *     RIMUnlockExclusive @ 0x1C0012A60 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x1C0012A80 (RIMLockExclusive.c)
 *     DbgPrintRIMAlways @ 0x1C00C0E60 (DbgPrintRIMAlways.c)
 */

void __fastcall rimInputApc(char *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  __int64 v3; // rsi
  NTSTATUS Status; // ebp
  BOOL v7; // ebx
  __int64 v8; // rdx
  int v9; // ebx
  unsigned int v10; // eax
  char v11; // [rsp+60h] [rbp+8h] BYREF

  v3 = *((_QWORD *)ApcContext + 44);
  *(struct _IO_STATUS_BLOCK *)(ApcContext + 168) = *IoStatusBlock;
  Status = IoStatusBlock->Status;
  if ( !*(_WORD *)(v3 + 72) )
  {
    v7 = ApcContext[48] == 2;
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v11, v7, 0);
    if ( v7 && *((_DWORD *)ApcContext + 79) )
    {
      v9 = 1;
      if ( !gDebugPhoneInitRace )
        gDebugPhoneInitRace = 1;
      RIMLockExclusive(v3 + 96);
    }
    else
    {
      v9 = 0;
    }
    if ( *((_QWORD *)ApcContext + 28) )
    {
      RIMLockExclusive(v3 + 696);
      v10 = *((_DWORD *)ApcContext + 46) & 0xFFFFFFBF;
      *((_DWORD *)ApcContext + 46) = v10;
      if ( Status < 0 )
      {
        if ( (v10 & 8) == 0 && Status != -1073741536 )
          RIMStartDeviceSpecificRead(v3, (__int64)ApcContext);
      }
      else
      {
        rimProcessDeviceBufferAndStartRead(v3, (__int64)ApcContext);
      }
      RIMUnlockExclusive(v3 + 696);
    }
    else if ( Status >= 0 )
    {
      WPP_RECORDER_SF_qq(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v8,
        5u,
        0x1Au,
        (__int64)&WPP_cd8468652fd634243bf5ebcdf265be96_Traceguids,
        v3,
        ApcContext);
      DbgPrintRIMAlways("pRimObj(%p) pRimDev(%p), pRimDev's handle == nullptr\n");
    }
    if ( v9 )
      RIMUnlockExclusive(v3 + 96);
    if ( IoStatusBlock->Status != -1073741536 )
      RIMApplyPTPConfigRemedy(v3, ApcContext);
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v11);
  }
  ObfDereferenceObject(*((PVOID *)ApcContext + 4));
}
