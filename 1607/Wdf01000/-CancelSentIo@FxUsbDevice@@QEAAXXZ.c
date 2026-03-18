/*
 * XREFs of ?CancelSentIo@FxUsbDevice@@QEAAXXZ @ 0x1C008AEC8
 * Callers:
 *     ?CyclePort@FxUsbDevice@@QEAAJXZ @ 0x1C008B940 (-CyclePort@FxUsbDevice@@QEAAJXZ.c)
 *     ?Reset@FxUsbDevice@@QEAAJXZ @ 0x1C008EBF8 (-Reset@FxUsbDevice@@QEAAJXZ.c)
 * Callees:
 *     ?CancelSentIo@FxIoTarget@@QEAAXXZ @ 0x1C008371C (-CancelSentIo@FxIoTarget@@QEAAXXZ.c)
 */

void __fastcall FxUsbDevice::CancelSentIo(FxUsbDevice *this, __int64 a2, unsigned __int8 a3)
{
  __int64 i; // rdi
  FxUsbInterface *v5; // rsi
  __int64 j; // rbp
  FxIoTarget *v7; // rcx

  for ( i = 0LL; (unsigned int)i < this->m_NumInterfaces; i = (unsigned int)(i + 1) )
  {
    v5 = this->m_Interfaces[i];
    if ( v5->m_ConfiguredPipes )
    {
      for ( j = 0LL; (unsigned int)j < v5->m_NumberOfConfiguredPipes; j = (unsigned int)(j + 1) )
      {
        v7 = v5->m_ConfiguredPipes[j];
        if ( v7 )
          FxIoTarget::CancelSentIo(v7, a2, a3);
      }
    }
  }
  FxIoTarget::CancelSentIo(this, a2, a3);
}
