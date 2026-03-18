/*
 * XREFs of RIMCloseDev @ 0x1C000C778
 * Callers:
 *     rimOnPnpArrived @ 0x1C000C7E8 (rimOnPnpArrived.c)
 *     rimOnPnpRemoveComplete @ 0x1C000EA9C (rimOnPnpRemoveComplete.c)
 *     RIMUnregisterForInput @ 0x1C007DAD0 (RIMUnregisterForInput.c)
 *     rimOnPnpQueryRemove @ 0x1C00DB234 (rimOnPnpQueryRemove.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCloseDev(__int64 a1)
{
  unsigned int v2; // edi
  void *v3; // rcx
  NTSTATUS v5; // eax
  void *v6; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+20h] [rbp-18h] BYREF

  v2 = 0;
  v3 = *(void **)(a1 + 224);
  if ( v3 )
  {
    ZwCancelIoFile(v3, &IoStatusBlock);
    v5 = ZwClose(*(HANDLE *)(a1 + 224));
    v6 = *(void **)(a1 + 232);
    v2 = v5;
    if ( v6 )
    {
      ObfDereferenceObject(v6);
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    *(_QWORD *)(a1 + 224) = 0LL;
    *(_DWORD *)(a1 + 184) &= ~0x40u;
  }
  return v2;
}
