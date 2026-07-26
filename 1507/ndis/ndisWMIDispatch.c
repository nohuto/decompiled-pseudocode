/*
 * XREFs of ndisWMIDispatch @ 0x1C00A7D9C
 * Callers:
 *     ndisWMIIrpDispatch @ 0x1C00A7D90 (ndisWMIIrpDispatch.c)
 *     NdisWdfDeviceWmiHandler @ 0x1C00D34A0 (NdisWdfDeviceWmiHandler.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     ?ExtensionFromDevice@@YAPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0024114 (-ExtensionFromDevice@@YAPEAUNDIS_SETUP_DEVICE_EXTENSION@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisWmiDisableEvents @ 0x1C009C360 (ndisWmiDisableEvents.c)
 *     ndisWmiEnableEvents @ 0x1C00A7F7C (ndisWmiEnableEvents.c)
 *     ndisWmiQuerySingleInstance @ 0x1C00A8144 (ndisWmiQuerySingleInstance.c)
 *     ndisWmiRegister @ 0x1C00A8710 (ndisWmiRegister.c)
 *     ndisDummyHandler @ 0x1C00D09F8 (ndisDummyHandler.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D53A0 (ndisWmiChangeSingleInstance.c)
 *     ndisWmiExecuteMethod @ 0x1C00D5B60 (ndisWmiExecuteMethod.c)
 *     ndisWmiQueryAllData @ 0x1C00D6580 (ndisWmiQueryAllData.c)
 */

NTSTATUS __fastcall ndisWMIDispatch(__int64 a1, struct _NDIS_MINIPORT_BLOCK *a2, _IRP *a3)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rbp
  unsigned int v4; // r14d
  _UNICODE_STRING *FileName; // r12
  ULONG LowPart; // r13d
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // r15
  char v11; // cl
  unsigned int MinorFunction; // r9d
  int AllData; // eax
  int v14; // ebx
  unsigned __int64 v15; // rax
  struct NDIS_SETUP_DEVICE_EXTENSION *v17; // rax
  _IRP *v18; // r8
  _IRP *v19; // rdx
  _DEVICE_OBJECT *NextDeviceObject; // rcx
  unsigned __int16 v21; // cx
  char v22; // [rsp+28h] [rbp-30h]
  __int64 v23; // [rsp+60h] [rbp+8h] BYREF

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v4 = 0;
  LODWORD(v23) = 0;
  FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( a1 && **(_BYTE **)(a1 + 64) == 23 )
  {
    v17 = ExtensionFromDevice((struct _DEVICE_OBJECT *)a1);
    ++v18->CurrentLocation;
    v18->Tail.Overlay.CurrentStackLocation = CurrentStackLocation + 1;
    v19 = v18;
    NextDeviceObject = v17->NextDeviceObject;
    return IofCallDriver(NextDeviceObject, v19);
  }
  v11 = byte_1C0085319;
  if ( (unsigned __int8)byte_1C0085319 >= 4u )
  {
    WPP_SF_qq(0x49u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, a2, a3);
    v11 = byte_1C0085319;
  }
  if ( a2->Header.Type != 17 )
    return ndisDummyHandler(a1, a2, a3);
  if ( CurrentStackLocation->Parameters.WMI.ProviderId != a1 )
  {
    ++a3->CurrentLocation;
    v19 = a3;
    ++a3->Tail.Overlay.CurrentStackLocation;
    NextDeviceObject = a2->NextDeviceObject;
    return IofCallDriver(NextDeviceObject, v19);
  }
  MinorFunction = CurrentStackLocation->MinorFunction;
  if ( MinorFunction <= 5 )
  {
    if ( MinorFunction == 5 )
    {
      if ( (unsigned __int8)v11 >= 4u )
        WPP_SF_q(0x51u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a2);
      AllData = ndisWmiDisableEvents((__int64)a2, FileName);
      goto LABEL_17;
    }
    if ( !CurrentStackLocation->MinorFunction )
    {
      if ( (unsigned __int8)v11 >= 4u )
        WPP_SF_q(0x4Bu, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a2);
      AllData = ndisWmiQueryAllData(a2, (__int64)&v23, v22);
      goto LABEL_17;
    }
    if ( MinorFunction == 1 )
    {
      if ( (unsigned __int8)v11 >= 4u )
        WPP_SF_q(0x4Cu, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a2);
      AllData = ndisWmiQuerySingleInstance(a2);
      goto LABEL_17;
    }
    if ( MinorFunction == 2 )
    {
      if ( (unsigned __int8)v11 >= 4u )
        WPP_SF_q(0x4Du, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a2);
      AllData = ndisWmiChangeSingleInstance(a2);
      goto LABEL_17;
    }
    if ( MinorFunction != 3 )
    {
      if ( MinorFunction == 4 )
      {
        if ( (unsigned __int8)v11 >= 4u )
          WPP_SF_q(0x50u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a2);
        AllData = ndisWmiEnableEvents(a2, FileName);
LABEL_17:
        v11 = byte_1C0085319;
        v14 = AllData;
        goto LABEL_18;
      }
LABEL_34:
      if ( (unsigned __int8)v11 >= 4u )
        WPP_SF_qD(0x54u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a2, MinorFunction);
      v14 = -1073741808;
      goto LABEL_19;
    }
    if ( (unsigned __int8)v11 >= 4u )
    {
      WPP_SF_q(0x4Eu, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a2);
      if ( (unsigned __int8)byte_1C0085319 >= 4u )
      {
        WPP_SF_q(0x41u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a2);
        if ( (unsigned __int8)byte_1C0085319 >= 4u )
        {
          v21 = 66;
LABEL_51:
          WPP_SF_q(v21, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a2);
          goto LABEL_52;
        }
      }
    }
    goto LABEL_52;
  }
  if ( MinorFunction != 6 )
  {
    if ( MinorFunction != 7 )
    {
      if ( MinorFunction == 8 )
      {
        if ( (unsigned __int8)v11 >= 4u )
          WPP_SF_q(0x4Au, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a2);
        AllData = ndisWmiRegister((_DWORD)a2, (__int64)&v23);
        goto LABEL_17;
      }
      if ( MinorFunction == 9 )
      {
        if ( (unsigned __int8)v11 >= 4u )
          WPP_SF_q(0x4Fu, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a2);
        AllData = ndisWmiExecuteMethod(a2, Parameters, LowPart, &v23);
        goto LABEL_17;
      }
      goto LABEL_34;
    }
    if ( (unsigned __int8)v11 >= 4u )
    {
      v21 = 83;
      goto LABEL_51;
    }
LABEL_52:
    v14 = -1073741637;
    goto LABEL_19;
  }
  if ( (unsigned __int8)v11 >= 4u )
  {
    WPP_SF_q(0x52u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a2);
    v11 = byte_1C0085319;
  }
  v14 = -1073741637;
LABEL_18:
  if ( v14 != 259 )
  {
LABEL_19:
    a3->IoStatus.Status = v14;
    if ( v14 == -1073741789 )
    {
      v15 = (unsigned int)v23;
    }
    else
    {
      if ( v14 >= 0 )
        v4 = v23;
      v15 = v4;
    }
    a3->IoStatus.Information = v15;
    IofCompleteRequest(a3, 0);
    v11 = byte_1C0085319;
    goto LABEL_24;
  }
  a3->Tail.Overlay.CurrentStackLocation->Control |= 1u;
LABEL_24:
  if ( (unsigned __int8)v11 >= 4u )
    WPP_SF_qD(0x55u, &WPP_d937986e7c9cfac467ff151df8b76bd8_Traceguids, (__int64)a2, v14);
  return v14;
}
