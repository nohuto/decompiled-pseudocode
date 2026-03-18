/*
 * XREFs of ?_SystemDmaCompletion@FxDmaSystemTransaction@@KAXPEAU_DMA_ADAPTER@@PEAU_DEVICE_OBJECT@@PEAXW4DMA_COMPLETION_STATUS@@@Z @ 0x1C0034E90
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qD @ 0x1C005CE10 (WPP_IFR_SF_qD.c)
 *     WPP_IFR_SF_qqqD @ 0x1C005D4B8 (WPP_IFR_SF_qqqD.c)
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
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
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
  FxNonPagedObject::Unlock(CompletionContext, oldIrql, v7);
  if ( v9 == 1 )
  {
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    {
      if ( CompletionContext->m_ObjectSize )
        _a2 = (const void *)((unsigned __int64)CompletionContext ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a2 = 0LL;
      WPP_IFR_SF_qD(m_Globals, v10, 0xFu, 0x3Cu, WPP_FxDmaTransaction_cpp_Traceguids, _a2, Status);
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
        v10,
        v11,
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
