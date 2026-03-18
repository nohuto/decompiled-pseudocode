/*
 * XREFs of xxxDisableImmersiveOwner @ 0x1C01FB834
 * Callers:
 *     NtUserDisableImmersiveOwner @ 0x1C0211870 (NtUserDisableImmersiveOwner.c)
 * Callees:
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 *     ?xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z @ 0x1C011B3C8 (-xxxEnableWindowWorker@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall xxxDisableImmersiveOwner(struct tagWND *a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)xxxEnableWindowWorker(a1, 0) )
  {
    UserSetLastError(5LL);
  }
  else
  {
    v2 = 1;
    SetOrClrWF(1, a1, 0xFA01u, 0);
  }
  return v2;
}
