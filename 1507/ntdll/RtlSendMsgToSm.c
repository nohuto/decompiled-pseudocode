/*
 * XREFs of RtlSendMsgToSm @ 0x180080AA0
 * Callers:
 *     <none>
 * Callees:
 *     ZwAlpcSendWaitReceivePort @ 0x180094180 (ZwAlpcSendWaitReceivePort.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlSendMsgToSm(__int64 a1, _WORD *a2)
{
  __int64 v4; // rdi
  unsigned int v5; // esi
  _WORD *v6; // rbp
  __int16 v7; // ax
  __int64 result; // rax
  __int64 v9; // [rsp+78h] [rbp+10h] BYREF

  if ( *((_DWORD *)a2 + 10) > 7u )
    return 3221225474LL;
  v4 = 2LL * *((int *)a2 + 10);
  if ( (*((_BYTE *)&RtlpSmMessageInfo + 16 * *((int *)a2 + 10) + 8) & 1) != 0 )
  {
    v5 = 0;
    v6 = 0LL;
  }
  else
  {
    v5 = 0x20000;
    v6 = a2;
  }
  memset(a2, 0, 0x28uLL);
  v7 = *((_WORD *)&RtlpSmMessageInfo + 4 * v4) + 8;
  *a2 = v7;
  v9 = 328LL;
  a2[1] = v7 + 40;
  result = ZwAlpcSendWaitReceivePort(a1, v5, a2, 0LL, v6, &v9, 0LL, 0LL);
  if ( (int)result >= 0 )
    return *((unsigned int *)a2 + 11);
  return result;
}
