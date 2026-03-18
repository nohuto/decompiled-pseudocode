/*
 * XREFs of ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C006A3B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qdD @ 0x1C00237D4 (WPP_IFR_SF_qdD.c)
 *     ?GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ @ 0x1C0030AF0 (-GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_qddd @ 0x1C005DBF0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dqd @ 0x1C0063BE8 (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0067ED4 (WPP_IFR_SF_qdd.c)
 *     ?GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C0068E2C (-GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::_QueryAllData(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r13
  unsigned int _a3; // esi
  bool v8; // cf
  int v9; // edi
  unsigned __int8 v10; // r8
  FxVerifierLock *v11; // rcx
  unsigned int v12; // r10d
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *_a1; // rbx
  _FX_DRIVER_GLOBALS *v15; // rcx
  const void *v16; // rax
  _NAMED_PIPE_CREATE_PARAMETERS *v17; // r8
  unsigned __int64 v18; // rax
  unsigned int v19; // r14d
  unsigned int LowPart; // r12d
  unsigned int v21; // r12d
  unsigned int *p_OutboundQuota; // r9
  unsigned int m_MinInstanceBufferSize; // r8d
  unsigned __int64 v24; // rdx
  unsigned int v25; // eax
  unsigned int v26; // r13d
  FxWmiInstance *InstanceReferenced; // rax
  unsigned int v28; // edx
  const void *v29; // rax
  unsigned int *v30; // rax
  int v31; // r8d
  WDFWORKITEM__ *v32; // rax
  int _a2; // r8d
  WDFWORKITEM__ *Handle; // rax
  int v35; // edx
  unsigned int *v36; // rax
  const void *v37; // rax
  const void *v38; // rax
  _FX_DRIVER_GLOBALS *v39; // rcx
  const void *v40; // rbx
  const void *v41; // rbx
  char v43; // [rsp+50h] [rbp-68h]
  unsigned __int8 irql[3]; // [rsp+51h] [rbp-67h] BYREF
  unsigned int tmpSize; // [rsp+54h] [rbp-64h] BYREF
  unsigned int v46; // [rsp+58h] [rbp-60h]
  unsigned int v47; // [rsp+5Ch] [rbp-5Ch]
  char *v48; // [rsp+60h] [rbp-58h]
  unsigned int *v49; // [rsp+68h] [rbp-50h]
  FxWmiInstance *v50; // [rsp+70h] [rbp-48h]
  unsigned int *v51; // [rsp+78h] [rbp-40h]
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+80h] [rbp-38h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v46 = 0;
  v43 = 0;
  _a3 = 0;
  v8 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart < 0x48;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  if ( v8 )
  {
    v9 = -1073741823;
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
  }
  FxNonPagedObject::Lock(This, irql, (unsigned __int8)Provider);
  tmpSize = Provider->m_NumInstances;
  if ( SLOBYTE(This->m_ObjectFlags) < 0
    && (v11 = *(FxVerifierLock **)&This[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Unlock(v11, irql[0], v10);
  }
  else
  {
    KeReleaseSpinLock(&This->m_NPLock.m_Lock, irql[0]);
  }
  v12 = tmpSize;
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
  v15 = This->m_Globals;
  if ( v15->FxVerboseOn )
  {
    if ( Provider->m_ObjectSize )
      v16 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v16 = 0LL;
    WPP_IFR_SF_qd(v15, 5u, 0xCu, 0x10u, WPP_FxWmiIrpHandler_cpp_Traceguids, v16, tmpSize);
    v12 = tmpSize;
  }
  v17 = Parameters;
  v18 = 8LL * v12;
  Parameters[1].ReadMode &= ~0x10u;
  v17[1].MaximumInstances = v12;
  if ( v18 > 0xFFFFFFFF || (unsigned int)v18 >= 0xFFFFFFC4 )
  {
    v9 = -1073741675;
LABEL_85:
    if ( Provider->m_ObjectSize )
      v41 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v41 = 0LL;
    WPP_IFR_SF_dqd(This->m_Globals, 2u, 0xCu, 0x11u, WPP_FxWmiIrpHandler_cpp_Traceguids, v12, v41, v9);
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
  }
  v19 = (v18 + 75) & 0xFFFFFFF0;
  v9 = 0;
  if ( v19 < (int)v18 + 60 )
    v9 = -1073741675;
  if ( v9 < 0 )
    goto LABEL_85;
  v17[1].CompletionMode = v19;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( v19 > LowPart )
  {
    p_OutboundQuota = 0LL;
    v51 = 0LL;
    v48 = 0LL;
    v21 = 0;
    v43 = 1;
    v9 = -1073741789;
  }
  else
  {
    v21 = LowPart - v19;
    p_OutboundQuota = &v17[1].OutboundQuota;
    v48 = (char *)v17 + v19;
    v51 = &v17[1].OutboundQuota;
  }
  if ( v12 )
  {
    m_MinInstanceBufferSize = Provider->m_MinInstanceBufferSize;
    if ( m_MinInstanceBufferSize )
    {
      v24 = (v12 - 1) * (unsigned __int64)((m_MinInstanceBufferSize + 15) & 0xFFFFFFF0);
      if ( v24 > 0xFFFFFFFF || (unsigned int)v24 + m_MinInstanceBufferSize < (unsigned int)v24 )
      {
        v9 = -1073741675;
        return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
      }
      v9 = 0;
      if ( v21 < (unsigned int)v24 + m_MinInstanceBufferSize )
      {
        _a3 = v24 + m_MinInstanceBufferSize;
        v9 = -1073741789;
        return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
      }
    }
  }
  v25 = 0;
  v47 = 0;
  if ( v12 )
  {
    v26 = tmpSize;
    v49 = p_OutboundQuota;
    do
    {
      InstanceReferenced = FxWmiProvider::GetInstanceReferenced(Provider, v25, Irp);
      v50 = InstanceReferenced;
      if ( !InstanceReferenced )
        break;
      if ( InstanceReferenced->IsQueryInstanceSupported(InstanceReferenced) )
      {
        tmpSize = 0;
        v9 = v50->QueryInstance(v50, v21, v48, &tmpSize);
        if ( (int)(v9 + 0x80000000) < 0 || v9 == -1073741789 )
        {
          v28 = (tmpSize + 15) & 0xFFFFFFF0;
          if ( v28 >= tmpSize )
          {
            v46 = v28 - tmpSize;
            if ( v9 < 0 || v43 )
            {
              v43 = 1;
            }
            else
            {
              v30 = v49;
              v49[1] = tmpSize;
              *v30 = v19;
              v48 += v28;
            }
            if ( v28 > v21 )
            {
              if ( v21 + v19 < v19 )
              {
                v19 = -1;
                v31 = -1073741675;
              }
              else
              {
                v19 += v21;
                v31 = 0;
              }
              v21 = 0;
            }
            else
            {
              v21 -= v28;
              if ( v28 + v19 < v19 )
              {
                v19 = -1;
                v31 = -1073741675;
              }
              else
              {
                v19 += v28;
                v31 = 0;
              }
            }
            if ( v31 >= 0 )
            {
              if ( v28 + _a3 < _a3 )
              {
                _a3 = -1;
                v9 = -1073741675;
                Handle = FxWmiProvider::GetHandle((FxWorkItem *)Provider);
                WPP_IFR_SF_qddd(
                  This->m_Globals,
                  v35,
                  0xCu,
                  0x14u,
                  WPP_FxWmiIrpHandler_cpp_Traceguids,
                  Handle,
                  -1,
                  v35,
                  -1073741675);
              }
              else
              {
                _a3 += v28;
              }
            }
            else
            {
              v9 = v31;
              v32 = FxWmiProvider::GetHandle((FxWorkItem *)Provider);
              WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x13u, WPP_FxWmiIrpHandler_cpp_Traceguids, v32, _a2);
            }
          }
          else
          {
            v9 = -1073741675;
            if ( v50->m_ObjectSize )
              v29 = (const void *)((unsigned __int64)v50 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v29 = 0LL;
            WPP_IFR_SF_qdd(
              This->m_Globals,
              2u,
              0xCu,
              0x12u,
              WPP_FxWmiIrpHandler_cpp_Traceguids,
              v29,
              tmpSize,
              -1073741675);
          }
        }
      }
      else if ( v51 )
      {
        v36 = v49;
        v49[1] = 0;
        *v36 = v19;
      }
      v50->Release(v50, Irp, 1178, "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
      if ( (int)(v9 + 0x80000000) >= 0 && v9 != -1073741789 )
        goto LABEL_70;
      v49 += 2;
      v25 = v47 + 1;
      v47 = v25;
    }
    while ( v25 < v26 );
  }
  if ( v9 == -1073741789 )
  {
LABEL_68:
    _a3 -= v46;
    v9 = -1073741789;
    if ( Provider->m_ObjectSize )
      v37 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v37 = 0LL;
    WPP_IFR_SF_qdD(This->m_Globals, 4u, 0xCu, 0x15u, WPP_FxWmiIrpHandler_cpp_Traceguids, v37, -1073741789, _a3);
    goto LABEL_79;
  }
LABEL_70:
  if ( v9 >= 0 )
  {
    if ( !v43 )
    {
      _a3 = v19 - Parameters[1].CompletionMode - v46;
      goto LABEL_79;
    }
    goto LABEL_68;
  }
  if ( Provider->m_ObjectSize )
    v38 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v38 = 0LL;
  WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x16u, WPP_FxWmiIrpHandler_cpp_Traceguids, v38, v9);
  _a3 = 0;
LABEL_79:
  v39 = This->m_Globals;
  if ( v39->FxVerboseOn )
  {
    if ( Provider->m_ObjectSize )
      v40 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v40 = 0LL;
    WPP_IFR_SF_qdD(v39, 5u, 0xCu, 0x17u, WPP_FxWmiIrpHandler_cpp_Traceguids, v40, v9, _a3);
  }
  return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, v9, _a3);
}
