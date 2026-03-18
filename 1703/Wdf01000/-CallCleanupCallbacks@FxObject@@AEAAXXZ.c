/*
 * XREFs of ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C003F364
 * Callers:
 *     imp_WdfRegistryClose @ 0x1C0001F60 (imp_WdfRegistryClose.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C000B600 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z @ 0x1C000C500 (-DisposeChildrenWorker@FxObject@@AEAAEW4FxObjectState@@EE@Z.c)
 *     imp_WdfRegistryOpenKey @ 0x1C000C920 (imp_WdfRegistryOpenKey.c)
 *     ?Dispose@FxRequestBase@@MEAAEXZ @ 0x1C0010B80 (-Dispose@FxRequestBase@@MEAAEXZ.c)
 *     ?Dispose@FxIoTarget@@MEAAEXZ @ 0x1C002ABD0 (-Dispose@FxIoTarget@@MEAAEXZ.c)
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1C007ADA0 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C007D960 (-Dispose@FxDevice@@UEAAEXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxObject::CallCleanupCallbacks(FxObject *this)
{
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 v3; // rsi
  char *i; // rbx
  void (__fastcall *v5)(unsigned __int64); // rax

  if ( (this->m_ObjectFlags & 8) != 0 )
  {
    m_ObjectSize = this->m_ObjectSize;
    v3 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
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
