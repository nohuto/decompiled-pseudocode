/*
 * XREFs of TtmpDispatchCreateTerminal @ 0x140679910
 * Callers:
 *     TtmDispatchApi @ 0x14067937C (TtmDispatchApi.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     TtmiLogError @ 0x140546BCC (TtmiLogError.c)
 *     TtmiCreateTerminal @ 0x140677760 (TtmiCreateTerminal.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1406795CC (TtmpAcquireSessionFromTerminalHandle.c)
 */

__int64 __fastcall TtmpDispatchCreateTerminal(__int64 a1, HANDLE *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v6; // rdi
  ACCESS_MASK v7; // edx
  int Terminal; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v13; // [rsp+40h] [rbp+8h] BYREF
  PVOID Object; // [rsp+50h] [rbp+18h] BYREF

  v4 = TtmpAcquireSessionFromTerminalHandle(*(void **)(a1 + 16), 1, 0, &v13, (__int64)&Object);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v7 = *(_DWORD *)(a1 + 8);
    v6 = v13;
    Terminal = TtmiCreateTerminal(v13, v7, KeGetCurrentThread()->PreviousMode, a2, a2 + 1, 0LL);
    v5 = Terminal;
    if ( Terminal >= 0 )
      v5 = 0;
    else
      TtmiLogError("TtmpDispatchCreateTerminal", 239, Terminal, Terminal);
  }
  else
  {
    TtmiLogError("TtmpDispatchCreateTerminal", 227, v4, v4);
    v6 = v13;
  }
  if ( v6 )
  {
    ExReleaseResourceLite(&TtmpSessionLock);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v9, v10, v11);
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return v5;
}
