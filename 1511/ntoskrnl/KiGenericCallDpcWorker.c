/*
 * XREFs of KiGenericCallDpcWorker @ 0x1400D7FC4
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x140043D50 (KiInsertQueueDpc.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x14009DBD0 (KeQueryActiveProcessorCountEx.c)
 */

__int64 __fastcall KiGenericCallDpcWorker(__int64 a1, _QWORD *a2)
{
  unsigned __int8 CurrentIrql; // si
  ULONG ActiveProcessorCount; // eax
  __int64 *v6; // rdi
  __int64 v7; // rbp
  ULONG_PTR v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 result; // rax
  ULONG v12; // [rsp+60h] [rbp+8h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF
  ULONG v14; // [rsp+70h] [rbp+18h] BYREF
  ULONG v15; // [rsp+74h] [rbp+1Ch]

  v13 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v12 = ActiveProcessorCount;
  v15 = ActiveProcessorCount;
  v14 = ActiveProcessorCount;
  if ( ActiveProcessorCount > 1 )
  {
    v6 = &qword_1403834C8;
    v7 = ActiveProcessorCount - 1;
    do
    {
      v8 = *v6 + 22560;
      *(_QWORD *)(v8 + 24) = *a2;
      *(_QWORD *)(v8 + 32) = a2[1];
      KiInsertQueueDpc(v8, (__int64)&v12, (__int64)&v14, 0LL, 0);
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  ((void (__fastcall *)(__int64, _QWORD, ULONG *, ULONG *))*a2)(a1 + 22560, a2[1], &v12, &v14);
  while ( v12 )
    KeYieldProcessorEx(&v13, v9, v10);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
