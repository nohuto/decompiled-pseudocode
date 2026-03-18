/*
 * XREFs of UsbhGetExceptionDispatch @ 0x1C004F398
 * Callers:
 *     UsbhEtwLogHubPastExceptions @ 0x1C001E054 (UsbhEtwLogHubPastExceptions.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 *     UsbhExceptionWorker @ 0x1C004F2B0 (UsbhExceptionWorker.c)
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

char *__fastcall UsbhGetExceptionDispatch(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rdi
  __int64 v6; // r8
  __int64 v7; // rax
  _DWORD *i; // rcx

  v4 = (int)a2;
  FdoExt(a1, a2, a3, a4);
  Log(a1, 128, 1702380607, 0LL, v4);
  v6 = 0LL;
  v7 = 0LL;
  for ( i = &HubExceptionTable; (_DWORD)v4 != *i; i += 6 )
  {
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= 0x8E )
      return (char *)v6;
  }
  return (char *)&HubExceptionTable + 24 * v7;
}
