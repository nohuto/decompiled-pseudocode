/*
 * XREFs of xxxDisableImmersiveOwner @ 0x1C02044E4
 * Callers:
 *     NtUserDisableImmersiveOwner @ 0x1C0218BB0 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C0090D48 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
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
