/*
 * XREFs of ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C0070CF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qdD @ 0x1C002ECE4 (WPP_IFR_SF_qdD.c)
 *     ?GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ @ 0x1C003A700 (-GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ.c)
 *     WPP_IFR_SF_qddd @ 0x1C00651D0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dqd @ 0x1C0068884 (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qdd @ 0x1C006E2BC (WPP_IFR_SF_qdd.c)
 *     ?GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C006F74C (-GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::_QueryAllData(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  bool v7; // cf
  unsigned int _a3; // esi
  int v9; // edi
  unsigned __int8 v10; // r8
  unsigned int v11; // r10d
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // rbx
  _FX_DRIVER_GLOBALS *v14; // rcx
  const void *v15; // rax
  _NAMED_PIPE_CREATE_PARAMETERS *v16; // r8
  unsigned __int64 v17; // rax
  unsigned int v18; // ebp
  unsigned int LowPart; // r12d
  unsigned int v20; // r12d
  unsigned int *p_OutboundQuota; // r9
  unsigned int m_MinInstanceBufferSize; // r8d
  unsigned __int64 v23; // rdx
  unsigned int v24; // eax
  unsigned int v25; // r13d
  FxWmiInstance *InstanceReferenced; // rax
  unsigned int v27; // edx
  const void *v28; // rax
  unsigned int *v29; // rax
  int v30; // r8d
  WDFWORKITEM__ *v31; // rax
  int _a2; // r8d
  WDFWORKITEM__ *Handle; // rax
  int v34; // edx
  unsigned int *v35; // rax
  const void *v36; // rax
  const void *v37; // rax
  _FX_DRIVER_GLOBALS *v38; // rcx
  const void *v39; // rbx
  const void *v40; // rbx
  char v42; // [rsp+50h] [rbp-68h]
  unsigned __int8 irql[3]; // [rsp+51h] [rbp-67h] BYREF
  unsigned int tmpSize; // [rsp+54h] [rbp-64h] BYREF
  unsigned int v45; // [rsp+58h] [rbp-60h]
  unsigned int v46; // [rsp+5Ch] [rbp-5Ch]
  char *v47; // [rsp+60h] [rbp-58h]
  unsigned int *v48; // [rsp+68h] [rbp-50h]
  FxWmiInstance *v49; // [rsp+70h] [rbp-48h]
  unsigned int *v50; // [rsp+78h] [rbp-40h]
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+80h] [rbp-38h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v7 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart < 0x48;
  _a3 = 0;
  v45 = 0;
  v42 = 0;
  if ( v7 )
  {
    v9 = -1073741823;
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
  }
  FxNonPagedObject::Lock(This, irql, (unsigned __int8)Provider);
  tmpSize = Provider->m_NumInstances;
  FxNonPagedObject::Unlock(This, irql[0], v10);
  v11 = tmpSize;
  if ( !tmpSize )
  {
    v9 = -1073741162;
    m_Globals = This->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( Provider->m_ObjectSize )
        _a1 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a1 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 5u, 0xCu, 0xFu, WPP_FxWmiIrpHandler_cpp_Traceguids, _a1, -1073741162);
    }
    _a3 = 0;
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
  }
  v14 = This->m_Globals;
  if ( v14->FxVerboseOn )
  {
    if ( Provider->m_ObjectSize )
      v15 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v15 = 0LL;
    WPP_IFR_SF_qd(v14, 5u, 0xCu, 0x10u, WPP_FxWmiIrpHandler_cpp_Traceguids, v15, tmpSize);
    v11 = tmpSize;
  }
  v16 = Parameters;
  v17 = 8LL * v11;
  Parameters[1].ReadMode &= ~0x10u;
  v16[1].MaximumInstances = v11;
  if ( v17 > 0xFFFFFFFF || (unsigned int)v17 >= 0xFFFFFFC4 )
  {
    v9 = -1073741675;
LABEL_81:
    if ( Provider->m_ObjectSize )
      v40 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v40 = 0LL;
    WPP_IFR_SF_dqd(This->m_Globals, 2u, 0xCu, 0x11u, WPP_FxWmiIrpHandler_cpp_Traceguids, v11, v40, v9);
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
  }
  v18 = (v17 + 75) & 0xFFFFFFF0;
  v9 = 0;
  if ( v18 < (int)v17 + 60 )
    v9 = -1073741675;
  if ( v9 < 0 )
    goto LABEL_81;
  v16[1].CompletionMode = v18;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( v18 > LowPart )
  {
    p_OutboundQuota = 0LL;
    v50 = 0LL;
    v47 = 0LL;
    v20 = 0;
    v42 = 1;
    v9 = -1073741789;
  }
  else
  {
    v20 = LowPart - v18;
    p_OutboundQuota = &v16[1].OutboundQuota;
    v47 = (char *)v16 + v18;
    v50 = &v16[1].OutboundQuota;
  }
  if ( v11 )
  {
    m_MinInstanceBufferSize = Provider->m_MinInstanceBufferSize;
    if ( m_MinInstanceBufferSize )
    {
      v23 = (v11 - 1) * (unsigned __int64)((m_MinInstanceBufferSize + 15) & 0xFFFFFFF0);
      if ( v23 > 0xFFFFFFFF || (unsigned int)v23 + m_MinInstanceBufferSize < (unsigned int)v23 )
      {
        v9 = -1073741675;
        return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
      }
      v9 = 0;
      if ( v20 < (unsigned int)v23 + m_MinInstanceBufferSize )
      {
        _a3 = v23 + m_MinInstanceBufferSize;
        v9 = -1073741789;
        return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
      }
    }
  }
  v24 = 0;
  v46 = 0;
  if ( v11 )
  {
    v25 = tmpSize;
    v48 = p_OutboundQuota;
    do
    {
      InstanceReferenced = FxWmiProvider::GetInstanceReferenced(Provider, v24, Irp);
      v49 = InstanceReferenced;
      if ( !InstanceReferenced )
        break;
      if ( InstanceReferenced->IsQueryInstanceSupported(InstanceReferenced) )
      {
        tmpSize = 0;
        v9 = v49->QueryInstance(v49, v20, v47, &tmpSize);
        if ( (int)(v9 + 0x80000000) < 0 || v9 == -1073741789 )
        {
          v27 = (tmpSize + 15) & 0xFFFFFFF0;
          if ( v27 >= tmpSize )
          {
            v45 = v27 - tmpSize;
            if ( v9 < 0 || v42 )
            {
              v42 = 1;
            }
            else
            {
              v29 = v48;
              v48[1] = tmpSize;
              *v29 = v18;
              v47 += v27;
            }
            if ( v27 > v20 )
            {
              if ( v20 + v18 < v18 )
              {
                v18 = -1;
                v30 = -1073741675;
              }
              else
              {
                v18 += v20;
                v30 = 0;
              }
              v20 = 0;
            }
            else
            {
              v20 -= v27;
              if ( v27 + v18 < v18 )
              {
                v18 = -1;
                v30 = -1073741675;
              }
              else
              {
                v18 += v27;
                v30 = 0;
              }
            }
            if ( v30 >= 0 )
            {
              if ( v27 + _a3 < _a3 )
              {
                _a3 = -1;
                v9 = -1073741675;
                Handle = FxWmiProvider::GetHandle((FxWorkItem *)Provider);
                WPP_IFR_SF_qddd(
                  This->m_Globals,
                  v34,
                  0xCu,
                  0x14u,
                  WPP_FxWmiIrpHandler_cpp_Traceguids,
                  Handle,
                  -1,
                  v34,
                  -1073741675);
              }
              else
              {
                _a3 += v27;
              }
            }
            else
            {
              v9 = v30;
              v31 = FxWmiProvider::GetHandle((FxWorkItem *)Provider);
              WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x13u, WPP_FxWmiIrpHandler_cpp_Traceguids, v31, _a2);
            }
          }
          else
          {
            v9 = -1073741675;
            if ( v49->m_ObjectSize )
              v28 = (const void *)((unsigned __int64)v49 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v28 = 0LL;
            WPP_IFR_SF_qdd(
              This->m_Globals,
              2u,
              0xCu,
              0x12u,
              WPP_FxWmiIrpHandler_cpp_Traceguids,
              v28,
              tmpSize,
              -1073741675);
          }
        }
      }
      else if ( v50 )
      {
        v35 = v48;
        v48[1] = 0;
        *v35 = v18;
      }
      v49->Release(v49, Irp, 1178, "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
      if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741789 )
        goto LABEL_66;
      v48 += 2;
      v24 = v46 + 1;
      v46 = v24;
    }
    while ( v24 < v25 );
  }
  if ( v9 == -1073741789 )
  {
LABEL_64:
    _a3 -= v45;
    v9 = -1073741789;
    if ( Provider->m_ObjectSize )
      v36 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v36 = 0LL;
    WPP_IFR_SF_qdD(This->m_Globals, 4u, 0xCu, 0x15u, WPP_FxWmiIrpHandler_cpp_Traceguids, v36, -1073741789, _a3);
    goto LABEL_75;
  }
LABEL_66:
  if ( v9 >= 0 )
  {
    if ( !v42 )
    {
      _a3 = v18 - Parameters[1].CompletionMode - v45;
      goto LABEL_75;
    }
    goto LABEL_64;
  }
  if ( Provider->m_ObjectSize )
    v37 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v37 = 0LL;
  WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x16u, WPP_FxWmiIrpHandler_cpp_Traceguids, v37, v9);
  _a3 = 0;
LABEL_75:
  v38 = This->m_Globals;
  if ( v38->FxVerboseOn )
  {
    if ( Provider->m_ObjectSize )
      v39 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v39 = 0LL;
    WPP_IFR_SF_qdD(v38, 5u, 0xCu, 0x17u, WPP_FxWmiIrpHandler_cpp_Traceguids, v39, v9, _a3);
  }
  return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
}
