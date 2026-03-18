/*
 * XREFs of _InitThreadCoreMessagingIocp2 @ 0x14020359C
 * Callers:
 *     NtUserInitThreadCoreMessagingIocp2 @ 0x1402034A0 (NtUserInitThreadCoreMessagingIocp2.c)
 *     NtUserInitThreadCoreMessagingIocp @ 0x1402B6610 (NtUserInitThreadCoreMessagingIocp.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall InitThreadCoreMessagingIocp2(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rbp
  struct tagTHREADINFO *v5; // rsi
  __int64 i; // rbx
  int v7; // ecx
  __int64 v8; // rax
  _QWORD v10[2]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v11[4]; // [rsp+30h] [rbp-48h] BYREF
  __int128 v12; // [rsp+50h] [rbp-28h]

  v4 = 0LL;
  v5 = PtiCurrent(a1);
  if ( v5 != *(struct tagTHREADINFO **)(a1 + 16) )
  {
    v7 = 5;
LABEL_6:
    UserSetLastError(v7);
    return v4;
  }
  if ( !a2 )
  {
LABEL_16:
    v7 = 87;
    goto LABEL_6;
  }
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= 2 )
    {
      v7 = 1247;
      goto LABEL_6;
    }
    v8 = *((_QWORD *)v5 + i + 207);
    if ( !v8 )
      break;
    if ( a1 == v8 )
      goto LABEL_16;
  }
  if ( *((_QWORD *)v5 + 206)
    || (v11[0] = 48LL,
        v11[3] = 512LL,
        v11[1] = 0LL,
        v12 = 0LL,
        v11[2] = 0LL,
        (int)ZwAllocateReserveObject((char *)v5 + 1648, v11, 1LL) >= 0) )
  {
    v4 = *((_QWORD *)v5 + 203);
    if ( v4 )
    {
      v10[1] = a1;
      v10[0] = (char *)v5 + 8 * i + 1656;
      HMAssignmentLock(v10, 0LL);
      *(_DWORD *)(a1 + 384) |= 0x40u;
      *a2 = i;
    }
  }
  else
  {
    UserSetLastError(14);
    *((_QWORD *)v5 + 206) = 0LL;
  }
  return v4;
}
