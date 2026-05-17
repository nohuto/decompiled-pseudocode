/*
 * XREFs of RtlpTpWorkUnposted @ 0x180008900
 * Callers:
 *     RtlpTpWorkCallback @ 0x180008E40 (RtlpTpWorkCallback.c)
 *     RtlQueueWorkItem @ 0x18000BBE0 (RtlQueueWorkItem.c)
 * Callees:
 *     RtlTpETWCallbackDequeue @ 0x1800025A8 (RtlTpETWCallbackDequeue.c)
 *     RtlpTpDeleteData @ 0x1800089F8 (RtlpTpDeleteData.c)
 *     TpUnreserveTaskPost @ 0x180008A0C (TpUnreserveTaskPost.c)
 *     LdrUnloadDll @ 0x180008CA0 (LdrUnloadDll.c)
 *     RtlReleaseActivationContext @ 0x18000CC70 (RtlReleaseActivationContext.c)
 */

__int64 __fastcall RtlpTpWorkUnposted(__int64 a1, __int64 a2)
{
  int v4; // ecx
  int v6; // [rsp+30h] [rbp-58h] BYREF
  __int64 v7; // [rsp+38h] [rbp-50h]
  __int64 v8; // [rsp+40h] [rbp-48h]
  __int64 v9; // [rsp+48h] [rbp-40h]
  __int128 v10; // [rsp+50h] [rbp-38h]
  __int64 v11; // [rsp+60h] [rbp-28h]
  int v12; // [rsp+68h] [rbp-20h]
  int v13; // [rsp+6Ch] [rbp-1Ch]
  int v14; // [rsp+70h] [rbp-18h]

  if ( MEMORY[0x7FFE0386] )
    RtlTpETWCallbackDequeue(a1, a1, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 96));
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v6 = 3;
  v10 = 0LL;
  v13 = 1;
  v14 = 72;
  if ( !a2 )
  {
    v4 = 0;
    if ( (*(_BYTE *)(a1 + 48) & 0xC0) != 0 )
      v4 = 2;
    v12 = v4;
  }
  TpUnreserveTaskPost(*(_QWORD *)(a1 + 32), &v6);
  RtlpTpDeleteData(a1 + 40);
  if ( *(_QWORD *)(a1 + 72) != -1LL )
    RtlReleaseActivationContext();
  if ( *(_QWORD *)(a1 + 80) )
    LdrUnloadDll();
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
}
