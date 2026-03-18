/*
 * XREFs of RIMStartDeviceSpecificRead @ 0x1C007AAF0
 * Callers:
 *     rimStartDeviceReadIfAllowed @ 0x1C000EFEC (rimStartDeviceReadIfAllowed.c)
 *     rimOnPnpArrived @ 0x1C0010120 (rimOnPnpArrived.c)
 *     rimInputApc @ 0x1C007C160 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0086A90 (rimProcessDeviceBufferAndStartRead.c)
 *     RIMOnPnpNotification @ 0x1C00C2F90 (RIMOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1C00104CC (WPP_RECORDER_SF_qqD.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0010880 (RawInputManagerDeviceObjectReference.c)
 *     DbgPrintRIMAlways @ 0x1C00B62F0 (DbgPrintRIMAlways.c)
 */

__int64 __fastcall RIMStartDeviceSpecificRead(__int64 a1, __int64 a2)
{
  int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rax
  void *Buffer; // rbp
  ULONG Length; // r14d
  void *v9; // rcx
  NTSTATUS v10; // edi
  NTSTATUS File; // eax
  unsigned __int8 v13; // cl
  __int64 v14; // rdx
  __int64 v15; // rdx
  PLARGE_INTEGER ByteOffset; // [rsp+38h] [rbp-30h]

  v4 = *(_DWORD *)(a2 + 176);
  if ( (v4 & 0x40) != 0 )
    return (unsigned int)-1073740682;
  v5 = *(unsigned __int8 *)(a2 + 48);
  *(_QWORD *)(a2 + 256) = 0LL;
  *(_DWORD *)(a2 + 160) = 0;
  *(_QWORD *)(a2 + 168) = 0LL;
  *(_DWORD *)(a2 + 248) = -1073741823;
  if ( (_BYTE)v5 != 2 )
  {
    Length = *(_DWORD *)(a1 + 80 * v5 + 176);
    Buffer = (void *)(a2 + *(unsigned int *)(a1 + 80 * v5 + 172));
LABEL_5:
    v9 = *(void **)(a2 + 32);
    *(_DWORD *)(a2 + 176) = v4 | 0x40;
    v10 = RawInputManagerDeviceObjectReference(v9);
    if ( v10 >= 0 )
    {
      File = ZwReadFile(
               *(HANDLE *)(a2 + 216),
               0LL,
               rimInputApc,
               (PVOID)a2,
               (PIO_STATUS_BLOCK)(a2 + 248),
               Buffer,
               Length,
               (PLARGE_INTEGER)&gZero,
               0LL);
      *(_DWORD *)(a2 + 264) = File;
      v10 = File;
      if ( File < 0 )
        ObfDereferenceObject(*(PVOID *)(a2 + 32));
      if ( v10 == -1073741670 )
      {
        v13 = *(_BYTE *)(a2 + 196);
        *(_BYTE *)(a2 + 196) = v13 + 1;
        if ( v13 >= 5u )
        {
          DbgPrintRIMAlways(":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..not retrying read as maximum retryReads reached\n");
          LODWORD(ByteOffset) = -1073741670;
          WPP_RECORDER_SF_qqD(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            v15,
            5u,
            0xBu,
            (__int64)&WPP_1792ef5d37ca7c4ae58820114973c564_Traceguids,
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
            (__int64)&WPP_1792ef5d37ca7c4ae58820114973c564_Traceguids,
            a1,
            a2,
            ByteOffset);
          *(_DWORD *)(a2 + 176) &= ~0x40u;
          ZwSetEvent(*(HANDLE *)(a1 + 512), 0LL);
        }
      }
    }
    return (unsigned int)v10;
  }
  if ( *(_QWORD *)(a2 + 216) )
  {
    v6 = *(_QWORD *)(a2 + 400);
    Buffer = *(void **)(v6 + 24);
    Length = 10 * *(unsigned __int16 *)(v6 + 44);
    goto LABEL_5;
  }
  return 0LL;
}
