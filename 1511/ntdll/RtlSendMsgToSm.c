/*
 * XREFs of RtlSendMsgToSm @ 0x180088E10
 * Callers:
 *     <none>
 * Callees:
 *     ZwAlpcSendWaitReceivePort @ 0x1800A61B0 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

NTSTATUS __fastcall RtlSendMsgToSm(HANDLE PortHandle, _PORT_MESSAGE *a2)
{
  __int64 v4; // rdi
  ULONG v5; // esi
  _PORT_MESSAGE *ReceiveMessage; // rbp
  CSHORT v7; // ax
  NTSTATUS result; // eax
  ULONG_PTR BufferLength; // [rsp+78h] [rbp+10h] BYREF

  if ( a2[1].u1.Length > 7 )
    return -1073741822;
  v4 = 2LL * (int)a2[1].u1.Length;
  if ( (*((_BYTE *)&RtlpSmMessageInfo + 16 * (int)a2[1].u1.Length + 8) & 1) != 0 )
  {
    v5 = 0;
    ReceiveMessage = 0LL;
  }
  else
  {
    v5 = 0x20000;
    ReceiveMessage = a2;
  }
  memset(a2, 0, sizeof(_PORT_MESSAGE));
  v7 = *((_WORD *)&RtlpSmMessageInfo + 4 * v4) + 8;
  a2->u1.s1.DataLength = v7;
  BufferLength = 328LL;
  a2->u1.s1.TotalLength = v7 + 40;
  result = ZwAlpcSendWaitReceivePort(PortHandle, v5, a2, 0LL, ReceiveMessage, &BufferLength, 0LL, 0LL);
  if ( result >= 0 )
    return a2[1].u2.ZeroInit;
  return result;
}
