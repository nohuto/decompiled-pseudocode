/*
 * XREFs of ndisWMIDispatch @ 0x1C00A883C
 * Callers:
 *     ndisWMIIrpDispatch @ 0x1C00A8830 (ndisWMIIrpDispatch.c)
 *     NdisWdfDeviceWmiHandler @ 0x1C00D2920 (NdisWdfDeviceWmiHandler.c)
 * Callees:
 *     ?ExtensionFromDevice@@YAPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0027BC4 (-ExtensionFromDevice@@YAPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ?ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z @ 0x1C009B98C (-ndisIsSetupDevice@@YA_NPEBU_DEVICE_OBJECT@@@Z.c)
 *     ndisDummyHandler @ 0x1C009C11C (ndisDummyHandler.c)
 *     ndisWmiEnableEvents @ 0x1C00A8A18 (ndisWmiEnableEvents.c)
 *     ndisWmiRegister @ 0x1C00A9990 (ndisWmiRegister.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00A9BF4 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiDisableEvents @ 0x1C00B0578 (ndisWmiDisableEvents.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D4BB0 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00D5370 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00D5C4C (ndisWmiQueryAllData.c)
 */

NTSTATUS __fastcall ndisWMIDispatch(struct _DEVICE_OBJECT *a1, struct _NDIS_MINIPORT_BLOCK *a2, _IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  unsigned int v4; // r14d
  _UNICODE_STRING *FileName; // r12
  ULONG LowPart; // r13d
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  char v13; // cl
  unsigned int MinorFunction; // r9d
  int AllData; // eax
  int v16; // ebx
  unsigned __int64 v17; // rax
  struct NDIS_SETUP_DEVICE_EXTENSION *v19; // rax
  _IRP *v20; // r8
  _IRP *v21; // rdx
  _DEVICE_OBJECT *NextDeviceObject; // rcx
  unsigned __int16 v23; // cx
  __int64 v24; // [rsp+20h] [rbp-38h]
  char v25; // [rsp+28h] [rbp-30h]
  __int64 v26; // [rsp+70h] [rbp+18h] BYREF

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  LODWORD(v26) = 0;
  FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( ndisIsSetupDevice(a1) )
  {
    v19 = ExtensionFromDevice(a1);
    ++v20->CurrentLocation;
    v20->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
    v21 = v20;
    NextDeviceObject = v19->NextDeviceObject;
    return IofCallDriver(NextDeviceObject, v21);
  }
  v13 = byte_1C00895D9;
  if ( (unsigned __int8)byte_1C00895D9 >= 4u )
  {
    WPP_SF_qq(0x49u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, v11, v12);
    v13 = byte_1C00895D9;
  }
  if ( a2->Header.Type != 17 )
    return ndisDummyHandler((__int64)a1, a2, a3);
  if ( (struct _DEVICE_OBJECT *)CurrentStackLocation->Parameters.Create.SecurityContext != a1 )
  {
    ++a3->CurrentLocation;
    v21 = a3;
    ++a3->Tail.Overlay.CurrentStackLocation;
    NextDeviceObject = a2->NextDeviceObject;
    return IofCallDriver(NextDeviceObject, v21);
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction <= 5 )
  {
    if ( MinorFunction == 5 )
    {
      if ( (unsigned __int8)v13 >= 4u )
        WPP_SF_q(0x51u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
      AllData = ndisWmiDisableEvents(a2, FileName);
      goto LABEL_16;
    }
    if ( !CurrentStackLocation->MinorFunction )
    {
      if ( (unsigned __int8)v13 >= 4u )
        WPP_SF_q(0x4Bu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
      AllData = ndisWmiQueryAllData(a2, (__int64)&v26, v25);
      goto LABEL_16;
    }
    if ( MinorFunction == 1 )
    {
      if ( (unsigned __int8)v13 >= 4u )
        WPP_SF_q(0x4Cu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
      AllData = ndisWmiQuerySingleInstance(a2, v24);
      goto LABEL_16;
    }
    if ( MinorFunction == 2 )
    {
      if ( (unsigned __int8)v13 >= 4u )
        WPP_SF_q(0x4Du, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
      AllData = ndisWmiChangeSingleInstance(a2);
      goto LABEL_16;
    }
    if ( MinorFunction != 3 )
    {
      if ( MinorFunction == 4 )
      {
        if ( (unsigned __int8)v13 >= 4u )
          WPP_SF_q(0x50u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
        AllData = ndisWmiEnableEvents(a2, FileName);
LABEL_16:
        v13 = byte_1C00895D9;
        v16 = AllData;
        goto LABEL_17;
      }
LABEL_30:
      if ( (unsigned __int8)v13 >= 4u )
        WPP_SF_qD(0x54u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2, MinorFunction);
      v16 = -1073741808;
      goto LABEL_18;
    }
    if ( (unsigned __int8)v13 >= 4u )
    {
      WPP_SF_q(0x4Eu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
      if ( (unsigned __int8)byte_1C00895D9 >= 4u )
      {
        WPP_SF_q(0x41u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
        if ( (unsigned __int8)byte_1C00895D9 >= 4u )
        {
          v23 = 66;
LABEL_50:
          WPP_SF_q(v23, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
          goto LABEL_51;
        }
      }
    }
    goto LABEL_51;
  }
  if ( MinorFunction != 6 )
  {
    if ( MinorFunction != 7 )
    {
      if ( MinorFunction == 8 )
      {
        if ( (unsigned __int8)v13 >= 4u )
          WPP_SF_q(0x4Au, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
        AllData = ndisWmiRegister((_DWORD)a2, (__int64)&v26);
        goto LABEL_16;
      }
      if ( MinorFunction == 9 )
      {
        if ( (unsigned __int8)v13 >= 4u )
          WPP_SF_q(0x4Fu, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
        AllData = ndisWmiExecuteMethod(a2, Parameters, LowPart, &v26);
        goto LABEL_16;
      }
      goto LABEL_30;
    }
    if ( (unsigned __int8)v13 >= 4u )
    {
      v23 = 83;
      goto LABEL_50;
    }
LABEL_51:
    v16 = -1073741637;
    goto LABEL_18;
  }
  if ( (unsigned __int8)v13 >= 4u )
  {
    WPP_SF_q(0x52u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2);
    v13 = byte_1C00895D9;
  }
  v16 = -1073741637;
LABEL_17:
  if ( v16 != 259 )
  {
LABEL_18:
    a3->IoStatus.Status = v16;
    if ( v16 == -1073741789 )
    {
      v17 = (unsigned int)v26;
    }
    else
    {
      if ( v16 >= 0 )
        v4 = v26;
      v17 = v4;
    }
    a3->IoStatus.Information = v17;
    IofCompleteRequest(a3, 0);
    v13 = byte_1C00895D9;
    goto LABEL_23;
  }
  a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
LABEL_23:
  if ( (unsigned __int8)v13 >= 4u )
    WPP_SF_qD(0x55u, &WPP_6cfa583b85a83ad776181b24463a0d24_Traceguids, (__int64)a2, v16);
  return v16;
}
