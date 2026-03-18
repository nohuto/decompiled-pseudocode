/*
 * XREFs of ?_SystemDmaCompletion@FxDmaSystemTransaction@@KAXPEAU_DMA_ADAPTER@@PEAU_DEVICE_OBJECT@@PEAXW4DMA_COMPLETION_STATUS@@@Z @ 0x1C0039D00
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qqqD @ 0x1C0068AB4 (WPP_IFR_SF_qqqD.c)
 *     WPP_IFR_SF_qD @ 0x1C006A380 (WPP_IFR_SF_qD.c)
 */

void __fastcall FxDmaSystemTransaction::_SystemDmaCompletion(
        _DMA_ADAPTER *__formal,
        _DEVICE_OBJECT *a2,
        FxNonPagedObject *CompletionContext,
        unsigned int Status)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  unsigned __int8 v7; // r8
  const void *globals; // rdi
  char v9; // bp
  unsigned __int8 v10; // dl
  unsigned int v11; // r8d
  const void *v12; // rbx
  unsigned __int8 oldIrql; // [rsp+80h] [rbp+18h] BYREF

  m_Globals = CompletionContext->m_Globals;
  FxNonPagedObject::Lock(CompletionContext, &oldIrql, (unsigned __int8)CompletionContext);
  globals = 0LL;
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
        v12 = (const void *)((unsigned __int64)CompletionContext ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v12 = 0LL;
      WPP_IFR_SF_qD(m_Globals, v10, 0xFu, 0xCu, WPP_FxDmaTransactionSystem_cpp_Traceguids, v12, Status);
    }
  }
  else
  {
    if ( m_Globals->FxVerifierOn && m_Globals->FxVerboseOn )
    {
      if ( CompletionContext->m_ObjectSize )
        globals = (const void *)((unsigned __int64)CompletionContext ^ 0xFFFFFFFFFFFFFFF8uLL);
      WPP_IFR_SF_qqqD(
        m_Globals,
        v10,
        v11,
        0xDu,
        WPP_FxDmaTransactionSystem_cpp_Traceguids,
        CompletionContext[2].m_DisposeSingleEntry.Next,
        CompletionContext[2].m_DeviceBase,
        globals,
        Status);
    }
    CompletionContext->__vftable[2].QueryInterface(CompletionContext, (FxQueryInterfaceParams *)Status);
  }
}
