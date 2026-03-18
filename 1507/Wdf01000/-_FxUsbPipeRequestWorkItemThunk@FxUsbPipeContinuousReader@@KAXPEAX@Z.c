/*
 * XREFs of ?_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z @ 0x1C0091F90
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?GetStatus@FxRequest@@QEAAJXZ @ 0x1C005C2A8 (-GetStatus@FxRequest@@QEAAJXZ.c)
 *     ?GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z @ 0x1C008C814 (-GetPortStatus@FxUsbDevice@@IEAAJPEAK@Z.c)
 *     ?IsConnected@FxUsbDevice@@QEAAJXZ @ 0x1C008C988 (-IsConnected@FxUsbDevice@@QEAAJXZ.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C008E8F0 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 *     ?CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ @ 0x1C00905E8 (-CancelRepeaters@FxUsbPipeContinuousReader@@QEAAXXZ.c)
 *     ?Reset@FxUsbPipe@@QEAAJXZ @ 0x1C00916B0 (-Reset@FxUsbPipe@@QEAAJXZ.c)
 *     ?ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z @ 0x1C009177C (-ResubmitRepeater@FxUsbPipeContinuousReader@@QEAAKPEAUFxUsbPipeRepeatReader@@PEAJ@Z.c)
 */

void __fastcall FxUsbPipeContinuousReader::_FxUsbPipeRequestWorkItemThunk(
        FxRequest **Context,
        __int64 a2,
        unsigned __int8 a3)
{
  FxRequest *v3; // rbx
  FxRequest **Flink; // r12
  __int64 v5; // rsi
  unsigned __int8 v6; // r8
  int Next; // eax
  char v8; // di
  int v9; // eax
  FxVerifierLock *v10; // rcx
  __int64 v11; // rdx
  unsigned __int8 v12; // r8
  _FX_DRIVER_GLOBALS *v13; // r13
  unsigned int v14; // r15d
  WDFMEMORY__ *Buffer; // rcx
  unsigned int v16; // edi
  unsigned __int8 v17; // r8
  FxUsbDevice *v18; // r14
  __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  char v21; // al
  unsigned int v22; // edx
  int v23; // edi
  bool IsVersionGreaterThanOrEqualTo; // al
  FxUsbDevice *v25; // rcx
  unsigned __int8 v26; // r8
  __int64 v27; // rcx
  int v28; // r14d
  unsigned __int8 v29; // r8
  FxUsbPipeRepeatReader *v30; // rdi
  unsigned __int8 v31; // r8
  int v32; // eax
  char v33; // di
  unsigned int v34; // eax
  FxVerifierLock *v35; // rcx
  unsigned __int8 irql; // [rsp+70h] [rbp+48h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+78h] [rbp+50h] BYREF
  int Status; // [rsp+80h] [rbp+58h] BYREF
  IFxMemory PortStatus; // [rsp+88h] [rbp+60h] BYREF

  v3 = Context[2];
  Flink = Context;
  v5 = *(_QWORD *)&v3->m_ObjectFlags;
  FxNonPagedObject::Lock((FxNonPagedObject *)v5, &irql, a3);
  Next = (int)v3->m_DisposeSingleEntry.Next;
  if ( (Next & 1) != 0 )
  {
    v8 = 1;
    v3->m_ChildEntry.Flink = (_LIST_ENTRY *)Flink;
    v9 = Next | 2;
  }
  else
  {
    v8 = 0;
    v9 = Next | 1;
  }
  LODWORD(v3->m_DisposeSingleEntry.Next) = v9;
  if ( *(char *)(v5 + 24) < 0 && (v10 = *(FxVerifierLock **)(v5 - 24)) != 0LL )
    FxVerifierLock::Unlock(v10, irql, v6);
  else
    KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 112), irql);
  if ( !v8 )
  {
    do
    {
      v13 = *(_FX_DRIVER_GLOBALS **)(*(_QWORD *)&v3->m_ObjectFlags + 16LL);
      v14 = FxRequest::GetStatus(*Flink, v11, v12);
      Buffer = (*Flink)->m_RequestContext->m_CompletionParams.Parameters.Write.Buffer;
      if ( Buffer )
        v16 = *(_DWORD *)Buffer;
      else
        v16 = 0;
      FxUsbPipeContinuousReader::CancelRepeaters((FxUsbPipeContinuousReader *)v3);
      v18 = *(FxUsbDevice **)(*(_QWORD *)&v3->m_ObjectFlags + 360LL);
      if ( v3->m_Globals )
      {
        v19 = *(_QWORD *)&v3->m_ObjectFlags;
        v3->m_ChildEntry.Blink = (_LIST_ENTRY *)KeGetCurrentThread();
        if ( *(_WORD *)(v19 + 10) )
          v20 = v19 ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v20 = 0LL;
        v21 = ((__int64 (__fastcall *)(unsigned __int64, _QWORD, _QWORD))v3->m_Globals)(v20, v14, v16);
        v3->m_ChildEntry.Blink = 0LL;
      }
      else
      {
        v21 = 1;
      }
      if ( v21 )
      {
        Status = FxUsbDevice::IsConnected(v18);
        v23 = Status;
        if ( Status < 0 )
          goto LABEL_27;
        IsVersionGreaterThanOrEqualTo = _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(v13, v22, 9u);
        v25 = v18;
        if ( !IsVersionGreaterThanOrEqualTo )
          goto LABEL_24;
        if ( (int)FxUsbDevice::GetPortStatus(v18, &PortStatus) >= 0 && ((__int64)PortStatus.__vftable & 1) == 0 )
        {
          v25 = v18;
LABEL_24:
          v23 = FxUsbDevice::Reset(v25);
          Status = v23;
          goto LABEL_27;
        }
        FxUsbPipe::Reset(*(FxUsbPipe **)&v3->m_ObjectFlags);
      }
      else
      {
        v23 = -1073741823;
        Status = -1073741823;
      }
LABEL_27:
      FxNonPagedObject::Lock(*(FxNonPagedObject **)&v3->m_ObjectFlags, &PreviousIrql, v17);
      v27 = *(_QWORD *)&v3->m_ObjectFlags;
      v28 = 0;
      BYTE6(v3->m_DisposeSingleEntry.Next) = 0;
      if ( *(char *)(v27 + 24) < 0 && *(_QWORD *)(v27 - 24) )
        FxVerifierLock::Unlock(*(FxVerifierLock **)(v27 - 24), PreviousIrql, v26);
      else
        KeReleaseSpinLock((PKSPIN_LOCK)(v27 + 112), PreviousIrql);
      if ( v23 >= 0 )
      {
        BYTE4(v3->m_DisposeSingleEntry.Next) = 0;
        if ( BYTE5(v3->m_DisposeSingleEntry.Next) )
        {
          v30 = (FxUsbPipeRepeatReader *)&v3->96;
          do
          {
            if ( (FxUsbPipeContinuousReader::ResubmitRepeater((FxUsbPipeContinuousReader *)v3, v30, &Status) & 1) != 0 )
              IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)&v3->m_ObjectFlags + 304LL), v30->Request->m_Irp.m_Irp);
            ++v28;
            ++v30;
          }
          while ( v28 < BYTE5(v3->m_DisposeSingleEntry.Next) );
        }
      }
      FxNonPagedObject::Lock((FxNonPagedObject *)v5, &irql, v29);
      v32 = (int)v3->m_DisposeSingleEntry.Next;
      if ( (v32 & 2) != 0 )
      {
        Flink = (FxRequest **)v3->m_ChildEntry.Flink;
        v33 = 1;
        v3->m_ChildEntry.Flink = 0LL;
        v34 = v32 & 0xFFFFFFFD;
      }
      else
      {
        v33 = 0;
        v34 = v32 & 0xFFFFFFFE;
      }
      LODWORD(v3->m_DisposeSingleEntry.Next) = v34;
      if ( *(char *)(v5 + 24) < 0 && (v35 = *(FxVerifierLock **)(v5 - 24)) != 0LL )
        FxVerifierLock::Unlock(v35, irql, v31);
      else
        KeReleaseSpinLock((PKSPIN_LOCK)(v5 + 112), irql);
    }
    while ( v33 );
  }
}
