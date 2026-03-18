/*
 * XREFs of RIMCloseDev @ 0x1C007707C
 * Callers:
 *     RIMUnregisterForInput @ 0x1C00719C0 (RIMUnregisterForInput.c)
 *     rimOnPnpRemoveComplete @ 0x1C0076908 (rimOnPnpRemoveComplete.c)
 *     rimOnPnpArrived @ 0x1C00769E4 (rimOnPnpArrived.c)
 *     rimOnPnpQueryRemove @ 0x1C00C9C18 (rimOnPnpQueryRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCloseDev(__int64 a1)
{
  unsigned int v2; // edi
  void *v3; // rcx
  void *v5; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = *(void **)(a1 + 224);
  if ( v3 )
  {
    ZwCancelIoFile(v3, &IoStatusBlock);
    if ( (*(_DWORD *)(a1 + 184) & 0x4000) == 0 )
      v2 = ZwClose(*(HANDLE *)(a1 + 224));
    v5 = *(void **)(a1 + 232);
    if ( v5 )
    {
      ObfDereferenceObject(v5);
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    *(_QWORD *)(a1 + 224) = 0LL;
    *(_DWORD *)(a1 + 184) &= ~0x40u;
  }
  return v2;
}
