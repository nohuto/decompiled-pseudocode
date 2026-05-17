/*
 * XREFs of EtwpNotificationThread @ 0x180053D60
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     TpSetWaitEx @ 0x18003BD60 (TpSetWaitEx.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     EtwDeliverDataBlock @ 0x180054010 (EtwDeliverDataBlock.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtTraceControl @ 0x1800A99F0 (NtTraceControl.c)
 */

_BYTE *__fastcall EtwpNotificationThread(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE *Heap; // rbx
  int v6; // esi
  int v7; // eax
  int v8; // edi
  __int64 *v9; // r8
  _BYTE *result; // rax
  unsigned int v11; // [rsp+30h] [rbp-138h] BYREF
  __int64 v12; // [rsp+38h] [rbp-130h] BYREF
  _BYTE v13[256]; // [rsp+40h] [rbp-128h] BYREF

  v12 = -600000000LL;
  Heap = v13;
  v6 = 256;
  while ( 1 )
  {
    v7 = NtTraceControl(16LL, 0LL, 0LL, Heap, v6, &v11);
    v8 = v7;
    if ( v7 < 0 )
      break;
    EtwDeliverDataBlock(Heap);
LABEL_4:
    if ( v8 != 261 )
    {
      v9 = 0LL;
      goto LABEL_6;
    }
  }
  if ( v7 != -1073741789 )
    goto LABEL_4;
  if ( Heap != v13 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  v6 = v11;
  Heap = (_BYTE *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, v11);
  if ( Heap )
  {
    v8 = 261;
    goto LABEL_4;
  }
  v9 = &v12;
LABEL_6:
  TpSetWaitEx(a3, a2, v9, 0LL);
  result = v13;
  if ( Heap != v13 )
  {
    if ( Heap )
      return (_BYTE *)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Heap);
  }
  return result;
}
