/*
 * XREFs of RIMStartDeviceSpecificRead @ 0x1C0010A8C
 * Callers:
 *     rimOnPnpArrived @ 0x1C000C7E8 (rimOnPnpArrived.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00103C4 (rimProcessDeviceBufferAndStartRead.c)
 *     rimStartDeviceReadIfAllowed @ 0x1C0010A58 (rimStartDeviceReadIfAllowed.c)
 *     rimInputApc @ 0x1C0010CF0 (rimInputApc.c)
 *     RIMOnPnpNotification @ 0x1C00CFB10 (RIMOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1C000CCA4 (WPP_RECORDER_SF_qqD.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0010C90 (RawInputManagerDeviceObjectReference.c)
 *     DbgPrintRIMAlways @ 0x1C00C0E60 (DbgPrintRIMAlways.c)
 */

__int64 __fastcall RIMStartDeviceSpecificRead(__int64 a1, __int64 a2)
{
  int v4; // ecx
  struct _IO_STATUS_BLOCK *IoStatusBlock; // r15
  __int64 v6; // rdx
  __int64 v8; // rax
  void *Buffer; // rbp
  ULONG Length; // r14d
  int v11; // edi
  NTSTATUS File; // eax
  unsigned __int8 v13; // cl
  __int64 v14; // rdx
  __int64 v15; // rdx
  PLARGE_INTEGER ByteOffset; // [rsp+38h] [rbp-30h]

  v4 = *(_DWORD *)(a2 + 184);
  if ( (v4 & 0x40) != 0 )
  {
    return (unsigned int)-1073740682;
  }
  else
  {
    *(_QWORD *)(a2 + 264) = 0LL;
    IoStatusBlock = (struct _IO_STATUS_BLOCK *)(a2 + 256);
    *(_DWORD *)(a2 + 168) = 0;
    *(_QWORD *)(a2 + 176) = 0LL;
    v6 = *(unsigned __int8 *)(a2 + 48);
    IoStatusBlock->Status = -1073741823;
    if ( !*(_QWORD *)(a2 + 224) )
      return 0LL;
    if ( (_BYTE)v6 == 2 )
    {
      v8 = *(_QWORD *)(a2 + 464);
      Buffer = *(void **)(v8 + 24);
      Length = 10 * *(unsigned __int16 *)(v8 + 44);
    }
    else
    {
      Length = *(_DWORD *)(a1 + 80 * v6 + 176);
      Buffer = (void *)(a2 + *(unsigned int *)(a1 + 80 * v6 + 172));
    }
    *(_DWORD *)(a2 + 184) = v4 | 0x40;
    v11 = RawInputManagerDeviceObjectReference(*(_QWORD *)(a2 + 32));
    if ( v11 >= 0 )
    {
      File = ZwReadFile(
               *(HANDLE *)(a2 + 224),
               0LL,
               rimInputApc,
               (PVOID)a2,
               IoStatusBlock,
               Buffer,
               Length,
               (PLARGE_INTEGER)&gZero,
               0LL);
      *(_DWORD *)(a2 + 272) = File;
      v11 = File;
      if ( File < 0 )
        ObfDereferenceObject(*(PVOID *)(a2 + 32));
      if ( v11 == -1073741670 )
      {
        v13 = *(_BYTE *)(a2 + 204);
        *(_BYTE *)(a2 + 204) = v13 + 1;
        if ( v13 >= 5u )
        {
          DbgPrintRIMAlways(":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..not retrying read as maximum retryReads reached\n");
          LODWORD(ByteOffset) = -1073741670;
          WPP_RECORDER_SF_qqD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v15,
            5u,
            0xBu,
            (__int64)&WPP_ceeac32ef805382885a2a3107365133a_Traceguids,
            a1,
            a2,
            ByteOffset);
        }
        else
        {
          DbgPrintRIMAlways(":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum retryReads not reached\n");
          LODWORD(ByteOffset) = -1073741670;
          WPP_RECORDER_SF_qqD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v14,
            5u,
            0xAu,
            (__int64)&WPP_ceeac32ef805382885a2a3107365133a_Traceguids,
            a1,
            a2,
            ByteOffset);
          *(_DWORD *)(a2 + 184) &= ~0x40u;
          ZwSetEvent(*(HANDLE *)(a1 + 520), 0LL);
        }
      }
    }
  }
  return (unsigned int)v11;
}
