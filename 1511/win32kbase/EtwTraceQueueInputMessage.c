/*
 * XREFs of EtwTraceQueueInputMessage @ 0x1C006E3F4
 * Callers:
 *     EtwTraceQueueMessage @ 0x1C006E3C0 (EtwTraceQueueMessage.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 *     Template_cppqp @ 0x1C00AD358 (Template_cppqp.c)
 *     Template_cpttttttpppqq @ 0x1C00AD480 (Template_cpttttttpppqq.c)
 */

_UNKNOWN **__fastcall EtwTraceQueueInputMessage(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  char v7; // r10
  int v8; // r9d
  int v9; // r8d
  int v10; // ecx
  int v11; // r9d
  __int64 v12; // rdx
  int v13; // ecx
  __int64 v14; // r8
  int v15; // r9d
  char v16; // r10
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = &retaddr;
  if ( *(_DWORD *)(a1 + 88) )
  {
    if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    {
      if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) )
        v16 = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v14) + 1084);
      else
        v16 = -1;
      LOBYTE(v15) = v16;
      return (_UNKNOWN **)Template_cppqp(
                            v13,
                            (unsigned int)&QueueEventMessage,
                            v14,
                            v15,
                            a1,
                            *(_QWORD *)(a1 + 96),
                            *(_DWORD *)(a1 + 88),
                            *(_QWORD *)(a1 + 16));
    }
  }
  else if ( (Microsoft_Windows_Win32kEnableBits & 0x1000) != 0 )
  {
    if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3) )
      v7 = *(_BYTE *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v5, v6) + 1084);
    else
      v7 = -1;
    v8 = *(_DWORD *)(a1 + 92);
    v9 = -__CFSHR__(v8, 8);
    v10 = -__CFSHR__(v8, 7);
    v11 = -__CFSHR__(v8, 6);
    LOBYTE(v11) = v7;
    return (_UNKNOWN **)Template_cpttttttpppqq(v10, (unsigned int)&QueueInputMessage, v9, v11, a1);
  }
  return result;
}
