/*
 * XREFs of ReportExceptionInternal @ 0x180008880
 * Callers:
 *     RtlWerpReportException @ 0x1800069B0 (RtlWerpReportException.c)
 *     RtlReportExceptionHelper @ 0x18000786C (RtlReportExceptionHelper.c)
 *     RtlReportExceptionEx @ 0x1800D8780 (RtlReportExceptionEx.c)
 * Callees:
 *     SendMessageToWERService @ 0x180008BA0 (SendMessageToWERService.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall ReportExceptionInternal(
        unsigned int a1,
        void *a2,
        __int64 a3,
        unsigned int a4,
        unsigned int a5,
        void **a6)
{
  __int64 v10; // rdx
  __int64 result; // rax
  _PORT_MESSAGE ReceiveMessage[35]; // [rsp+20h] [rbp-E0h] BYREF
  _PORT_MESSAGE SendMessageA[35]; // [rsp+5A0h] [rbp+4A0h] BYREF

  *a6 = 0LL;
  if ( a4 > 5 )
    return 3221226539LL;
  memset(SendMessageA, 0, sizeof(SendMessageA));
  v10 = 0LL;
  SendMessageA[0].u1.Length = 91751760;
  SendMessageA[1].u1.Length = 0x20000000;
  SendMessageA[1].ClientId.UniqueThread = a2;
  SendMessageA[1].ClientId.UniqueProcess = (void *)__PAIR64__(a1, a5);
  if ( a3 )
  {
    while ( (unsigned int)v10 < a4 && (unsigned int)v10 < 5 )
    {
      *((_QWORD *)&SendMessageA[1].MessageId + v10) = *(_QWORD *)(a3 + 8 * v10);
      v10 = (unsigned int)(v10 + 1);
    }
  }
  memset(ReceiveMessage, 0, sizeof(ReceiveMessage));
  ReceiveMessage[0].u1.Length = 91751760;
  result = SendMessageToWERService(SendMessageA, ReceiveMessage);
  if ( (int)result >= 0 )
  {
    if ( (_DWORD)result == 258 )
    {
      return 3221226048LL;
    }
    else
    {
      *a6 = ReceiveMessage[1].ClientId.UniqueProcess;
      return 0LL;
    }
  }
  return result;
}
