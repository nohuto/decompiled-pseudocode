/*
 * XREFs of PdcpProcessMessageInternal @ 0x1800A7E6C
 * Callers:
 *     PdcpAlpcProcessMessage @ 0x1800A7C90 (PdcpAlpcProcessMessage.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     PdcAcquireRwLockExclusive @ 0x1800A7AFC (PdcAcquireRwLockExclusive.c)
 *     PdcPrint @ 0x1800A7F94 (PdcPrint.c)
 */

__int64 __fastcall PdcpProcessMessageInternal(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  ULONG v6; // ecx
  const CHAR *v7; // rdx
  void *v8; // rcx

  v4 = 0;
  v6 = 2;
  if ( (unsigned __int8)*(_WORD *)(a2 + 4) != 1 )
  {
    if ( (unsigned __int8)*(_WORD *)(a2 + 4) != 3 )
    {
      if ( (unsigned __int8)*(_WORD *)(a2 + 4) != 5 )
      {
        v7 = "%s: Unexpected ALPC message type - %x\n";
LABEL_14:
        PdcPrint(v6, v7);
        return v4;
      }
      PdcAcquireRwLockExclusive(a1 + 16);
      v8 = *(void **)(a1 + 8);
      if ( v8 )
      {
        ZwClose(v8);
        *(_QWORD *)(a1 + 8) = 0LL;
        v4 = -1073741758;
      }
      *(_DWORD *)(a1 + 24) = 0;
      ReleaseSRWLockExclusive((PSRWLOCK)(a1 + 16));
      return v4;
    }
    if ( (*(_WORD *)(a2 + 4) & 0x2000) == 0 )
    {
      if ( (unsigned __int64)*(__int16 *)(a2 + 2) >= 0xF0 )
      {
        (*(void (__fastcall **)(_QWORD, __int64))(a1 + 64))(*(_QWORD *)(a1 + 56), a2);
        return 0;
      }
      else
      {
        return (unsigned int)-1073741811;
      }
    }
  }
  PdcPrint(2u, "%s: ALPC message id=%x required continuation unexpectedly.Cancelling it.\n");
  v4 = ZwAlpcCancelMessage(*(_QWORD *)(a1 + 8), 0LL, a3);
  if ( (v4 & 0x80000000) != 0 )
  {
    v7 = "%s: Unable to cancel ALPC message id=%x\n";
    v6 = 1;
    goto LABEL_14;
  }
  return v4;
}
