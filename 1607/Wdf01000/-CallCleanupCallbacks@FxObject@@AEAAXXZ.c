/*
 * XREFs of ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C001C048
 * Callers:
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0007E60 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C0008E30 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     imp_WdfRegistryOpenKey @ 0x1C00091F0 (imp_WdfRegistryOpenKey.c)
 *     ?Dispose@FxRequestBase@@MEAAEXZ @ 0x1C000CCD0 (-Dispose@FxRequestBase@@MEAAEXZ.c)
 *     imp_WdfRegistryClose @ 0x1C000F230 (imp_WdfRegistryClose.c)
 *     ?CallCleanup@FxObject@@QEAAXXZ @ 0x1C0063DF0 (-CallCleanup@FxObject@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxObject::CallCleanupCallbacks(FxObject *this)
{
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v3; // rsi
  char *i; // rdi
  void (__fastcall *v5)(unsigned __int64); // rax

  if ( (this->m_ObjectFlags & 8) != 0 )
  {
    m_ObjectSize = this->m_ObjectSize;
    if ( m_ObjectSize )
      v3 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v3 = 0LL;
    if ( m_ObjectSize )
    {
      for ( i = (char *)this + m_ObjectSize; i; i = (char *)*((_QWORD *)i + 1) )
      {
        v5 = (void (__fastcall *)(unsigned __int64))*((_QWORD *)i + 2);
        if ( v5 )
        {
          v5(v3);
          *((_QWORD *)i + 2) = 0LL;
        }
      }
    }
    this->m_ObjectFlags &= ~0x400u;
  }
}
