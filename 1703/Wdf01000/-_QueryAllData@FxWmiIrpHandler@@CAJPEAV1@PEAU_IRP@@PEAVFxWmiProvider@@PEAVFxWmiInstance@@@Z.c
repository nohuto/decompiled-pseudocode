/*
 * XREFs of ?_QueryAllData@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C00746B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qdD @ 0x1C0031878 (WPP_IFR_SF_qdD.c)
 *     WPP_IFR_SF_qddd @ 0x1C00684F0 (WPP_IFR_SF_qddd.c)
 *     WPP_IFR_SF_dqd @ 0x1C006C118 (WPP_IFR_SF_dqd.c)
 *     WPP_IFR_SF_qdd @ 0x1C0071D08 (WPP_IFR_SF_qdd.c)
 *     ?GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z @ 0x1C0073108 (-GetInstanceReferenced@FxWmiProvider@@QEAAPEAVFxWmiInstance@@KPEAX@Z.c)
 */

__int64 __fastcall FxWmiIrpHandler::_QueryAllData(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int v7; // r14d
  unsigned int v8; // esi
  int _a3; // ebx
  __int64 _a2; // r13
  unsigned __int8 v11; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdi
  _FX_DRIVER_GLOBALS *v15; // rcx
  const void *v16; // rdx
  _NAMED_PIPE_CREATE_PARAMETERS *v17; // rdx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  unsigned __int16 v20; // ax
  const void *v21; // rdi
  unsigned int LowPart; // r9d
  unsigned int v23; // r9d
  unsigned int *p_OutboundQuota; // r10
  unsigned int m_MinInstanceBufferSize; // r8d
  unsigned __int64 v26; // rdx
  unsigned int v27; // ecx
  unsigned int v28; // eax
  unsigned int v29; // eax
  FxWmiInstance *InstanceReferenced; // rax
  unsigned int v31; // r8d
  const void *v32; // rcx
  unsigned int *v33; // rax
  unsigned int v34; // edx
  unsigned int v35; // ecx
  int v36; // eax
  int v37; // edx
  const void *v38; // rcx
  unsigned int v39; // ecx
  unsigned int v40; // edx
  int v41; // eax
  bool v42; // cf
  const void *v43; // rcx
  unsigned int *v44; // rax
  const void *v45; // rcx
  _FX_DRIVER_GLOBALS *v46; // rcx
  unsigned __int16 v47; // ax
  const void *v48; // rdi
  const void *v50; // rcx
  char v51; // [rsp+50h] [rbp-78h]
  unsigned __int8 irql[3]; // [rsp+51h] [rbp-77h] BYREF
  unsigned int v53; // [rsp+54h] [rbp-74h]
  unsigned int v54; // [rsp+58h] [rbp-70h]
  unsigned int tmpSize; // [rsp+5Ch] [rbp-6Ch] BYREF
  unsigned int v56; // [rsp+60h] [rbp-68h]
  char *v57; // [rsp+68h] [rbp-60h]
  unsigned int *v58; // [rsp+70h] [rbp-58h]
  FxWmiInstance *v59; // [rsp+80h] [rbp-48h]
  unsigned int *v60; // [rsp+88h] [rbp-40h]
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // [rsp+90h] [rbp-38h]

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v42 = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart < 0x48;
  v7 = 0;
  v54 = 0;
  v8 = 0;
  v51 = 0;
  if ( v42 )
  {
    _a3 = -1073741823;
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, _a3, v8);
  }
  FxNonPagedObject::Lock(This, irql, (unsigned __int8)Provider);
  _a2 = Provider->m_NumInstances;
  FxNonPagedObject::Unlock(This, irql[0], v11);
  if ( !(_DWORD)_a2 )
  {
    _a3 = -1073741162;
    m_Globals = This->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      m_ObjectSize = Provider->m_ObjectSize;
      _a1 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        _a1 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 5u, 0xCu, 0xFu, WPP_FxWmiIrpHandler_cpp_Traceguids, _a1, -1073741162);
    }
    v8 = 0;
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, _a3, v8);
  }
  v15 = This->m_Globals;
  if ( v15->FxVerboseOn )
  {
    v16 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Provider->m_ObjectSize )
      v16 = 0LL;
    WPP_IFR_SF_qd(v15, 5u, 0xCu, 0x10u, WPP_FxWmiIrpHandler_cpp_Traceguids, v16, _a2);
  }
  v17 = Parameters;
  v18 = -1;
  Parameters[1].ReadMode &= ~0x10u;
  v17[1].MaximumInstances = _a2;
  if ( (unsigned __int64)(8 * _a2) > 0xFFFFFFFF )
  {
    _a3 = -1073741675;
LABEL_21:
    v20 = Provider->m_ObjectSize;
    v21 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v20 )
      v21 = 0LL;
    WPP_IFR_SF_dqd(This->m_Globals, 2u, 0xCu, 0x11u, WPP_FxWmiIrpHandler_cpp_Traceguids, _a2, v21, _a3);
    return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, _a3, v8);
  }
  v19 = 8 * _a2 + 60;
  if ( v19 >= 0x3C )
    v18 = 8 * _a2 + 60;
  _a3 = (unsigned int)(8 * _a2) >= 0xFFFFFFC4 ? 0xC0000095 : 0;
  if ( v19 >= 0x3C )
  {
    v7 = (v18 + 15) & 0xFFFFFFF0;
    if ( v7 < v18 )
      _a3 = -1073741675;
  }
  if ( _a3 < 0 )
    goto LABEL_21;
  v17[1].CompletionMode = v7;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( v7 > LowPart )
  {
    p_OutboundQuota = 0LL;
    v60 = 0LL;
    v57 = 0LL;
    v23 = 0;
    v53 = 0;
    _a3 = -1073741789;
    v51 = 1;
  }
  else
  {
    v23 = LowPart - v7;
    v53 = v23;
    p_OutboundQuota = &v17[1].OutboundQuota;
    v57 = (char *)v17 + v7;
    v60 = &v17[1].OutboundQuota;
  }
  m_MinInstanceBufferSize = Provider->m_MinInstanceBufferSize;
  if ( m_MinInstanceBufferSize )
  {
    v26 = (unsigned int)(_a2 - 1) * (unsigned __int64)((m_MinInstanceBufferSize + 15) & 0xFFFFFFF0);
    v27 = -1;
    if ( v26 > 0xFFFFFFFF )
    {
      LODWORD(v26) = -1;
      _a3 = -1073741675;
    }
    else
    {
      _a3 = 0;
    }
    if ( _a3 < 0 )
      return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, _a3, v8);
    v28 = m_MinInstanceBufferSize + v26;
    if ( m_MinInstanceBufferSize + (unsigned int)v26 >= (unsigned int)v26 )
      v27 = m_MinInstanceBufferSize + v26;
    _a3 = v28 < (unsigned int)v26 ? 0xC0000095 : 0;
    if ( v28 < (unsigned int)v26 )
      return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, _a3, v8);
    if ( v23 < v27 )
    {
      v8 = v27;
      _a3 = -1073741789;
      return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, _a3, v8);
    }
  }
  v29 = 0;
  v56 = 0;
  v58 = p_OutboundQuota;
  do
  {
    InstanceReferenced = FxWmiProvider::GetInstanceReferenced(Provider, v29, Irp);
    v59 = InstanceReferenced;
    if ( !InstanceReferenced )
      break;
    if ( InstanceReferenced->IsQueryInstanceSupported(InstanceReferenced) )
    {
      tmpSize = 0;
      _a3 = v59->QueryInstance(v59, v53, v57, &tmpSize);
      if ( (int)(_a3 + 0x80000000) < 0 || _a3 == -1073741789 )
      {
        v31 = (tmpSize + 15) & 0xFFFFFFF0;
        if ( v31 >= tmpSize )
        {
          v54 = v31 - tmpSize;
          if ( _a3 < 0 || v51 )
          {
            v51 = 1;
          }
          else
          {
            v33 = v58;
            v58[1] = tmpSize;
            *v33 = v7;
            v57 += v31;
          }
          v34 = v7;
          if ( v31 > v53 )
          {
            v35 = v53 + v7;
            v53 = 0;
          }
          else
          {
            v35 = v31 + v7;
            v53 -= v31;
          }
          v36 = -1;
          if ( v35 >= v7 )
            v36 = v35;
          v7 = v36;
          v37 = v35 < v34 ? 0xC0000095 : 0;
          if ( v37 >= 0 )
          {
            v39 = v31 + v8;
            v40 = v8;
            v41 = -1;
            if ( v31 + v8 >= v8 )
              v41 = v31 + v8;
            v8 = v41;
            v42 = v39 < v40;
            if ( v39 < v40 )
            {
              _a3 = v39 < v40 ? 0xC0000095 : 0;
              v43 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !Provider->m_ObjectSize )
                v43 = 0LL;
              WPP_IFR_SF_qddd(
                This->m_Globals,
                v40,
                0xCu,
                0x14u,
                WPP_FxWmiIrpHandler_cpp_Traceguids,
                v43,
                v41,
                v31,
                v42 ? 0xC0000095 : 0);
            }
          }
          else
          {
            _a3 = v37;
            v38 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !Provider->m_ObjectSize )
              v38 = 0LL;
            WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x13u, WPP_FxWmiIrpHandler_cpp_Traceguids, v38, v37);
          }
        }
        else
        {
          _a3 = -1073741675;
          v32 = (const void *)((unsigned __int64)v59 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !v59->m_ObjectSize )
            v32 = 0LL;
          WPP_IFR_SF_qdd(
            This->m_Globals,
            2u,
            0xCu,
            0x12u,
            WPP_FxWmiIrpHandler_cpp_Traceguids,
            v32,
            tmpSize,
            -1073741675);
        }
      }
    }
    else if ( v60 )
    {
      v44 = v58;
      v58[1] = 0;
      *v44 = v7;
    }
    v59->Release(v59, Irp, 1178, "minkernel\\wdf\\framework\\kmdf\\src\\irphandlers\\wmi\\fxwmiirphandler.cpp");
    if ( (int)(_a3 + 0x80000000) >= 0 && _a3 != -1073741789 )
      goto LABEL_79;
    v58 += 2;
    v29 = v56 + 1;
    v56 = v29;
  }
  while ( v29 < (unsigned int)_a2 );
  if ( _a3 == -1073741789 )
  {
LABEL_71:
    v8 -= v54;
    _a3 = -1073741789;
    v45 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !Provider->m_ObjectSize )
      v45 = 0LL;
    WPP_IFR_SF_qdD(This->m_Globals, 4u, 0xCu, 0x15u, WPP_FxWmiIrpHandler_cpp_Traceguids, v45, -1073741789, v8);
    goto LABEL_74;
  }
LABEL_79:
  if ( _a3 >= 0 )
  {
    if ( !v51 )
    {
      v8 = v7 - Parameters[1].CompletionMode - v54;
      goto LABEL_74;
    }
    goto LABEL_71;
  }
  v50 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !Provider->m_ObjectSize )
    v50 = 0LL;
  WPP_IFR_SF_qd(This->m_Globals, 2u, 0xCu, 0x16u, WPP_FxWmiIrpHandler_cpp_Traceguids, v50, _a3);
  v8 = 0;
LABEL_74:
  v46 = This->m_Globals;
  if ( v46->FxVerboseOn )
  {
    v47 = Provider->m_ObjectSize;
    v48 = (const void *)((unsigned __int64)Provider ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !v47 )
      v48 = 0LL;
    WPP_IFR_SF_qdD(v46, 5u, 0xCu, 0x17u, WPP_FxWmiIrpHandler_cpp_Traceguids, v48, _a3, v8);
  }
  return FxWmiIrpHandler::CompleteWmiRequest(This, Irp, _a3, v8);
}
