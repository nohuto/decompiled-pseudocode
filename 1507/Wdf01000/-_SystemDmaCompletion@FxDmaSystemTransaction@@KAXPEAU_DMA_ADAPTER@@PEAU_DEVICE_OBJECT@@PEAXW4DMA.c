/*
 * XREFs of ?_SystemDmaCompletion@FxDmaSystemTransaction@@KAXPEAU_DMA_ADAPTER@@PEAU_DEVICE_OBJECT@@PEAXW4DMA_COMPLETION_STATUS@@@Z @ 0x1C0063AA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     WPP_IFR_SF_qD @ 0x1C0063E18 (WPP_IFR_SF_qD.c)
 *     WPP_IFR_SF_qqqD @ 0x1C00644C0 (WPP_IFR_SF_qqqD.c)
 */

void __fastcall FxDmaSystemTransaction::_SystemDmaCompletion(
        _DMA_ADAPTER *__formal,
        _DEVICE_OBJECT *a2,
        FxNonPagedObject *CompletionContext,
        unsigned int Status)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v7; // r8
  const void *level; // rdi
  char v9; // r14
  FxVerifierLock *m_DeviceBase; // rcx
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  const void *_a2; // rbx
  const _GUID *_a1; // [rsp+20h] [rbp-48h]
  unsigned __int8 oldIrql; // [rsp+80h] [rbp+18h] BYREF

  m_Globals = CompletionContext->m_Globals;
  FxNonPagedObject::Lock(CompletionContext, &oldIrql, (unsigned __int8)CompletionContext);
  level = 0LL;
  if ( *(_QWORD *)&CompletionContext[2].m_SpinLock.m_DbgFlagIsInitialized )
  {
    HIDWORD(CompletionContext[2].m_SpinLock.m_Lock) = Status;
    v9 = 1;
    BYTE1(CompletionContext[2].m_SpinLock.m_Lock) = 1;
  }
  else
  {
    v9 = 0;
  }
  if ( SLOBYTE(CompletionContext->m_ObjectFlags) < 0
    && (m_DeviceBase = (FxVerifierLock *)CompletionContext[-1].m_DeviceBase) != 0LL )
  {
    FxVerifierLock::Unlock(m_DeviceBase, oldIrql, v7);
  }
  else
  {
    KeReleaseSpinLock(&CompletionContext->m_NPLock.m_Lock, oldIrql);
  }
  if ( v9 == 1 )
  {
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    {
      if ( CompletionContext->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)CompletionContext ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      WPP_IFR_SF_qD(m_Globals, v11, 0xFu, 0x3Cu, WPP_FxDmaTransaction_cpp_Traceguids, _a2, Status);
    }
  }
  else
  {
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    {
      if ( CompletionContext->m_ObjectSize )
        level = (const void *)((unsigned __int64)CompletionContext ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qqqD(
        m_Globals,
        v11,
        v12,
        0x3Du,
        _a1,
        CompletionContext[2].m_DisposeSingleEntry.Next,
        CompletionContext[2].m_DeviceBase,
        level,
        Status);
    }
    ((void (__fastcall *)(FxNonPagedObject *, _QWORD))CompletionContext->__vftable[2].Release)(
      CompletionContext,
      Status);
  }
}
