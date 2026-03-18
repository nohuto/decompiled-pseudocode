/*
 * XREFs of ?Close@PROXYPORT@@QEAAXXZ @ 0x1C02A22A8
 * Callers:
 *     ?vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z @ 0x1C00F0CF8 (-vUMPDCachedResourceCleanup@@YAXPEAU_W32THREAD@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall PROXYPORT::Close(void ***this, __int64 a2, __int64 a3, __int64 a4)
{
  void *v5; // rcx
  void *v6; // rdi
  __int64 CurrentProcess; // rax
  void *v8; // rcx
  void *v9; // rcx

  v5 = (*this)[7];
  if ( v5 )
    MmUnsecureVirtualMemory(v5);
  v6 = (*this)[2];
  if ( v6 )
  {
    CurrentProcess = PsGetCurrentProcess(v5, a2, a3, a4);
    MmUnmapViewOfSection(CurrentProcess, v6);
  }
  v8 = (*this)[1];
  if ( v8 )
    ZwClose(v8);
  v9 = **this;
  if ( v9 )
    ObfDereferenceObject(v9);
  Win32FreePool(*this);
}
