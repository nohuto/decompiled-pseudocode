/*
 * XREFs of IopSetFileObjectExtensionFlag @ 0x140079FF0
 * Callers:
 *     IopCheckInitiatorHint @ 0x14009C74C (IopCheckInitiatorHint.c)
 *     IopRevokeFileObjectForProcess @ 0x1401CA00C (IopRevokeFileObjectForProcess.c)
 *     IopAllocateFoExtensionsOnCreate @ 0x14046A30C (IopAllocateFoExtensionsOnCreate.c)
 *     IoRegisterContainerNotification @ 0x14057C5D0 (IoRegisterContainerNotification.c)
 *     IoSetFileObjectIgnoreSharing @ 0x140623AAC (IoSetFileObjectIgnoreSharing.c)
 * Callees:
 *     IopAllocateFileObjectExtension @ 0x1400E9400 (IopAllocateFileObjectExtension.c)
 */

__int64 __fastcall IopSetFileObjectExtensionFlag(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  _DWORD *v6; // rcx
  _DWORD *v7; // [rsp+48h] [rbp+20h] BYREF

  if ( (_BYTE)a3 )
  {
    result = IopAllocateFileObjectExtension(a1, &v7, a3, a4);
    v6 = v7;
    goto LABEL_3;
  }
  v6 = *(_DWORD **)(a1 + 208);
  if ( !v6 )
  {
    result = 3221226021LL;
LABEL_3:
    if ( (int)result < 0 )
      return result;
  }
  *v6 |= a2;
  return 0LL;
}
