/*
 * XREFs of ?_RegInfo@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C0027200
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C0031E08 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     memmove @ 0x1C0033080 (memmove.c)
 */

__int64 __fastcall FxWmiIrpHandler::_RegInfo(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        FxWmiProvider *Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v5; // ebp
  FxDeviceBase *m_DeviceBase; // r15
  PIRP v7; // rdi
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // r14
  int Blink_high; // r8d
  unsigned __int16 *p_m_ParentObject; // rcx
  unsigned int v12; // r13d
  __int64 v13; // rax
  FxDriver *m_Driver; // r12
  unsigned int v15; // edx
  unsigned int v16; // ecx
  unsigned int v17; // esi
  bool v18; // r9
  unsigned int v19; // esi
  _LIST_ENTRY *Flink; // rdi
  unsigned int v21; // r15d
  _WORD *v22; // rcx
  unsigned __int16 *v23; // rcx
  unsigned int *v25; // rdx
  int v26; // ecx
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  FxVerifierLock *v28; // rcx
  FxVerifierLock *v29; // rcx
  FxVerifierLock *v30; // rcx
  bool i; // [rsp+20h] [rbp-58h]
  unsigned int v32; // [rsp+28h] [rbp-50h]
  unsigned int LowPart; // [rsp+2Ch] [rbp-4Ch]
  unsigned int v34; // [rsp+30h] [rbp-48h]
  const void **v35; // [rsp+38h] [rbp-40h]
  unsigned __int8 irql; // [rsp+80h] [rbp+8h] BYREF
  PIRP v37; // [rsp+88h] [rbp+10h]

  v37 = Irp;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = 0;
  m_DeviceBase = This->m_DeviceBase;
  v7 = Irp;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( SLOBYTE(This->m_ObjectFlags) < 0
    && (v28 = *(FxVerifierLock **)&This[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized) != 0LL )
  {
    FxVerifierLock::Lock(v28, &irql, (unsigned __int8)Provider);
    LOBYTE(Blink_high) = irql;
  }
  else
  {
    LOBYTE(Blink_high) = KeAcquireSpinLockRaiseToDpc(&This->m_NPLock.m_Lock);
    irql = Blink_high;
  }
  p_m_ParentObject = 0LL;
  v12 = 32 * This->m_NumProviders + 24;
  v35 = 0LL;
  if ( m_DeviceBase[1].m_ChildEntry.Flink )
  {
    p_m_ParentObject = (unsigned __int16 *)&m_DeviceBase[1].m_ParentObject;
    v35 = (const void **)&m_DeviceBase[1].m_ParentObject;
  }
  else
  {
    v13 = *(_QWORD *)&m_DeviceBase[1].m_ObjectFlags;
    if ( v13 )
    {
      while ( !*(_QWORD *)(v13 + 272) )
      {
        v13 = *(_QWORD *)(v13 + 224);
        if ( !v13 )
          goto LABEL_5;
      }
      p_m_ParentObject = (unsigned __int16 *)(v13 + 264);
      v35 = (const void **)(v13 + 264);
    }
LABEL_5:
    m_DeviceBase = This->m_DeviceBase;
  }
  m_Driver = m_DeviceBase->m_Driver;
  v15 = 32 * This->m_NumProviders + 26;
  v34 = v15;
  if ( p_m_ParentObject )
  {
    v15 += *p_m_ParentObject;
    v34 = v15;
  }
  v16 = v15 + m_Driver->m_RegistryPath.Length;
  if ( v16 < v15 || (v17 = v16 + 2, v32 = v16 + 2, v16 + 2 < v16) )
  {
    v5 = -1073741675;
    if ( SLOBYTE(This->m_ObjectFlags) < 0
      && (v30 = *(FxVerifierLock **)&This[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Unlock(v30, Blink_high, Blink_high);
    }
    else
    {
      KeReleaseSpinLock(&This->m_NPLock.m_Lock, Blink_high);
    }
    v21 = 0;
  }
  else
  {
    Parameters->NamedPipeType = v17;
    if ( v17 > LowPart )
    {
      v21 = 4;
    }
    else
    {
      Parameters->ReadMode = 0;
      Parameters->MaximumInstances = v12;
      Parameters->CompletionMode = v15;
      Parameters->InboundQuota = This->m_NumProviders;
      v18 = v7->Tail.Overlay.CurrentStackLocation->MinorFunction == 11;
      v19 = 0;
      Flink = This->m_ProvidersListHead.Flink;
      for ( i = v18; v19 < This->m_NumProviders; ++v19 )
      {
        v25 = &Parameters->NamedPipeType + 8 * v19;
        *(_LIST_ENTRY *)(v25 + 6) = Flink[3];
        v25[11] = (unsigned int)Flink[2].Flink;
        Blink_high = HIDWORD(Flink[4].Blink);
        if ( (Blink_high & 4) != 0 )
        {
          v26 = 528384;
        }
        else
        {
          v26 = 32;
          if ( (Blink_high & 2) != 0 )
            v26 = 33;
          if ( (Blink_high & 1) != 0 )
            v26 |= 0x40u;
        }
        if ( BYTE2(Flink[5].Blink) )
        {
          v26 |= 0x10000u;
          BYTE2(Flink[5].Blink) = 0;
        }
        v25[10] = v26;
        m_DeviceObject = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
        *((_QWORD *)v25 + 6) = m_DeviceObject;
        if ( v18 )
        {
          ObfReferenceObject(m_DeviceObject);
          v18 = i;
        }
        Flink = Flink->Flink;
      }
      v17 = v32;
      v21 = v32;
      v7 = v37;
    }
    if ( SLOBYTE(This->m_ObjectFlags) < 0
      && (v29 = *(FxVerifierLock **)&This[-1].m_UpdateEvent.m_Event.m_DbgFlagIsInitialized) != 0LL )
    {
      FxVerifierLock::Unlock(v29, irql, Blink_high);
    }
    else
    {
      KeReleaseSpinLock(&This->m_NPLock.m_Lock, irql);
    }
    if ( v17 <= LowPart )
    {
      v22 = (_WORD *)((char *)Parameters + v12);
      if ( v35 )
      {
        *v22 = *(_WORD *)v35;
        memmove(v22 + 1, v35[1], *(unsigned __int16 *)v35);
      }
      else
      {
        *v22 = 0;
      }
      v23 = (unsigned __int16 *)((char *)Parameters + v34);
      *v23 = m_Driver->m_RegistryPath.Length;
      memmove(v23 + 1, m_Driver->m_RegistryPath.Buffer, m_Driver->m_RegistryPath.Length);
    }
  }
  v7->IoStatus.Information = v21;
  v7->IoStatus.Status = v5;
  IofCompleteRequest(v7, 0);
  return v5;
}
