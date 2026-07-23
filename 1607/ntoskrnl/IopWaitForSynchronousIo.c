/*
 * XREFs of IopWaitForSynchronousIo @ 0x1400C8360
 * Callers:
 *     NtSetInformationFile @ 0x1400793E0 (NtSetInformationFile.c)
 *     NtQueryInformationFile @ 0x140443C00 (NtQueryInformationFile.c)
 *     IopQueryXxxInformation @ 0x1404ED0B8 (IopQueryXxxInformation.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     IopCancelAlertedRequest @ 0x1404D2CCC (IopCancelAlertedRequest.c)
 */

__int64 __fastcall IopWaitForSynchronousIo(PIRP Irp, __int64 a2, char a3)
{
  void *v3; // rbp
  bool v4; // bl
  KPROCESSOR_MODE v8; // al
  NTSTATUS v9; // eax
  bool v11; // dl
  unsigned __int8 CurrentIrql; // al

  v3 = (void *)(a2 + 152);
  v4 = (*(_BYTE *)(a2 + 80) & 4) != 0;
  while ( 1 )
  {
    v8 = v4 ? a3 : 0;
    v9 = KeWaitForSingleObject(v3, Executive, v8, 1u, 0LL);
    if ( v9 != 257 && v9 != 192 )
      break;
    if ( !v4 && (*(_DWORD *)(&KeGetCurrentThread()[1].SwapListEntry + 1) & 1) == 0 )
    {
      v11 = 0;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      if ( !*(_DWORD *)(a2 + 156) )
        v11 = Irp->Cancel == 1;
      __writecr8(CurrentIrql);
      if ( !v11 )
        continue;
    }
    IopCancelAlertedRequest(v3, Irp);
    return *(unsigned int *)(a2 + 56);
  }
  return *(unsigned int *)(a2 + 56);
}
