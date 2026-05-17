/*
 * XREFs of RtlpTpWorkUnposted @ 0x18003A050
 * Callers:
 *     RtlQueueWorkItem @ 0x180039CF0 (RtlQueueWorkItem.c)
 *     RtlpTpWorkCallback @ 0x18003A1C0 (RtlpTpWorkCallback.c)
 * Callees:
 *     RtlTpETWCallbackDequeue @ 0x1800024E0 (RtlTpETWCallbackDequeue.c)
 *     LdrUnloadDll @ 0x18002EF70 (LdrUnloadDll.c)
 *     RtlpTpDeleteData @ 0x18003A148 (RtlpTpDeleteData.c)
 *     TpUnreserveTaskPost @ 0x18003A15C (TpUnreserveTaskPost.c)
 *     RtlReleaseActivationContext @ 0x18003B790 (RtlReleaseActivationContext.c)
 */

__int64 __fastcall RtlpTpWorkUnposted(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v8; // [rsp+30h] [rbp-58h] BYREF
  __int64 v9; // [rsp+38h] [rbp-50h]
  __int64 v10; // [rsp+40h] [rbp-48h]
  __int64 v11; // [rsp+48h] [rbp-40h]
  __int128 v12; // [rsp+50h] [rbp-38h]
  __int64 v13; // [rsp+60h] [rbp-28h]
  int v14; // [rsp+68h] [rbp-20h]
  int v15; // [rsp+6Ch] [rbp-1Ch]
  int v16; // [rsp+70h] [rbp-18h]

  if ( MEMORY[0x7FFE0386] )
    RtlTpETWCallbackDequeue(a1, a1, *(_QWORD *)(a1 + 56), *(_QWORD *)(a1 + 64), *(_QWORD *)(a1 + 96));
  v9 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v8 = 3;
  v12 = 0LL;
  v15 = 1;
  v16 = 72;
  if ( !a2 )
  {
    v4 = 0;
    if ( (*(_BYTE *)(a1 + 48) & 0xC0) != 0 )
      v4 = 2;
    v14 = v4;
  }
  TpUnreserveTaskPost(*(_QWORD *)(a1 + 32), &v8);
  RtlpTpDeleteData(a1 + 40);
  v5 = *(_QWORD *)(a1 + 72);
  if ( v5 != -1 )
    RtlReleaseActivationContext(v5);
  v6 = *(_QWORD *)(a1 + 80);
  if ( v6 )
    LdrUnloadDll(v6);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, a1);
}
