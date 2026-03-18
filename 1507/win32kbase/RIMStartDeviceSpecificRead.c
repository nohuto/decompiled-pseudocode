/*
 * XREFs of RIMStartDeviceSpecificRead @ 0x1C0075724
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C006EE0C (rimProcessDeviceBufferAndStartRead.c)
 *     rimOnPnpArrived @ 0x1C00769E4 (rimOnPnpArrived.c)
 *     rimStartDeviceReadIfAllowed @ 0x1C0077E84 (rimStartDeviceReadIfAllowed.c)
 *     rimInputApc @ 0x1C00826A0 (rimInputApc.c)
 *     RIMOnPnpNotification @ 0x1C00C22E0 (RIMOnPnpNotification.c)
 * Callees:
 *     WPP_RECORDER_SF_qqD @ 0x1C0076D6C (WPP_RECORDER_SF_qqD.c)
 *     RawInputManagerDeviceObjectReference @ 0x1C0077220 (RawInputManagerDeviceObjectReference.c)
 *     DbgPrintRIMAlways @ 0x1C00B3870 (DbgPrintRIMAlways.c)
 */

__int64 __fastcall RIMStartDeviceSpecificRead(__int64 a1, __int64 a2)
{
  int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rax
  void *Buffer; // rbp
  ULONG Length; // r14d
  __int64 v9; // rcx
  int v10; // edi
  NTSTATUS File; // eax
  unsigned __int8 v13; // cl
  int v14; // edx
  int v15; // edx

  v4 = *(_DWORD *)(a2 + 184);
  if ( (v4 & 0x40) != 0 )
    return (unsigned int)-1073740682;
  v5 = *(unsigned __int8 *)(a2 + 48);
  *(_QWORD *)(a2 + 264) = 0LL;
  *(_DWORD *)(a2 + 168) = 0;
  *(_QWORD *)(a2 + 176) = 0LL;
  *(_DWORD *)(a2 + 256) = -1073741823;
  if ( (_BYTE)v5 != 2 )
  {
    Length = *(_DWORD *)(a1 + 80 * v5 + 176);
    Buffer = (void *)(a2 + *(unsigned int *)(a1 + 80 * v5 + 172));
LABEL_5:
    v9 = *(_QWORD *)(a2 + 32);
    *(_DWORD *)(a2 + 184) = v4 | 0x40;
    v10 = RawInputManagerDeviceObjectReference(v9);
    if ( v10 >= 0 )
    {
      File = ZwReadFile(
               *(HANDLE *)(a2 + 224),
               0LL,
               rimInputApc,
               (PVOID)a2,
               (PIO_STATUS_BLOCK)(a2 + 256),
               Buffer,
               Length,
               &gZero,
               0LL);
      *(_DWORD *)(a2 + 272) = File;
      v10 = File;
      if ( File < 0 )
        ObfDereferenceObject(*(PVOID *)(a2 + 32));
      if ( v10 == -1073741670 )
      {
        v13 = *(_BYTE *)(a2 + 204);
        *(_BYTE *)(a2 + 204) = v13 + 1;
        if ( v13 >= 5u )
        {
          DbgPrintRIMAlways(":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..not retrying read as maximum retryReads reached\n");
          WPP_RECORDER_SF_qqD(
            WPP_GLOBAL_Control->DeviceExtension,
            v15,
            5,
            11,
            (__int64)&WPP_1792ef5d37ca7c4ae58820114973c564_Traceguids,
            a1,
            a2,
            154);
        }
        else
        {
          DbgPrintRIMAlways(":rimInputApc [pRimObj:%p, pRimDev:%p] Status: %08x..retrying read as maximum retryReads not reached\n");
          WPP_RECORDER_SF_qqD(
            WPP_GLOBAL_Control->DeviceExtension,
            v14,
            5,
            10,
            (__int64)&WPP_1792ef5d37ca7c4ae58820114973c564_Traceguids,
            a1,
            a2,
            154);
          *(_DWORD *)(a2 + 184) &= ~0x40u;
          ZwSetEvent(*(HANDLE *)(a1 + 480), 0LL);
        }
      }
    }
    return (unsigned int)v10;
  }
  if ( *(_QWORD *)(a2 + 224) )
  {
    v6 = *(_QWORD *)(a2 + 400);
    Buffer = *(void **)(v6 + 24);
    Length = 10 * *(unsigned __int16 *)(v6 + 44);
    goto LABEL_5;
  }
  return 0LL;
}
