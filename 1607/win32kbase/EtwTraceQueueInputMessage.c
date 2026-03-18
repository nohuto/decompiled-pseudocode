/*
 * XREFs of EtwTraceQueueInputMessage @ 0x1C0073E2C
 * Callers:
 *     EtwTraceQueueMessage @ 0x1C0073D50 (EtwTraceQueueMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0036CBC (W32GetThreadWin32Thread.c)
 *     Template_cppqp @ 0x1C00B6B70 (Template_cppqp.c)
 *     Template_cpttttttpppqq @ 0x1C00B6C98 (Template_cpttttttpppqq.c)
 */

_UNKNOWN **__fastcall EtwTraceQueueInputMessage(__int64 a1)
{
  _UNKNOWN **result; // rax
  char v3; // r10
  int v4; // r9d
  int v5; // r8d
  int v6; // ecx
  int v7; // r9d
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  char v11; // r10
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = &retaddr;
  if ( *(_DWORD *)(a1 + 96) )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    {
      if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
        v11 = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1108);
      else
        v11 = -1;
      LOBYTE(v10) = v11;
      return (_UNKNOWN **)Template_cppqp(
                            v8,
                            (unsigned int)&QueueEventMessage,
                            v9,
                            v10,
                            a1,
                            *(_QWORD *)(a1 + 104),
                            *(_DWORD *)(a1 + 96),
                            *(_QWORD *)(a1 + 16));
    }
  }
  else if ( (Microsoft_Windows_Win32kEnableBits & 0x1000) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
      v3 = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 1108);
    else
      v3 = -1;
    v4 = *(_DWORD *)(a1 + 100);
    v5 = -__CFSHR__(v4, 8);
    v6 = -__CFSHR__(v4, 7);
    v7 = -__CFSHR__(v4, 6);
    LOBYTE(v7) = v3;
    return (_UNKNOWN **)Template_cpttttttpppqq(v6, (unsigned int)&QueueInputMessage, v5, v7, a1);
  }
  return result;
}
