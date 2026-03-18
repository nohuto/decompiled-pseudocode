/*
 * XREFs of xxxDisableImmersiveOwner @ 0x1C0204174
 * Callers:
 *     NtUserDisableImmersiveOwner @ 0x1C0218D30 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C0045988 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C0061F18 (UserSetLastError.c)
 */

__int64 __fastcall xxxDisableImmersiveOwner(struct tagWND *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)xxxEnableWindowWorker(a1, 0) )
  {
    UserSetLastError(5);
  }
  else
  {
    v2 = 1;
    SetOrClrWF(1, a1, 0xFA01u, 0);
  }
  return v2;
}
