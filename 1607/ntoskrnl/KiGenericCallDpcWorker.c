/*
 * XREFs of KiGenericCallDpcWorker @ 0x14009515C
 * Callers:
 *     <none>
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x1400D1ED0 (KeQueryActiveProcessorCountEx.c)
 *     KiInsertQueueDpc @ 0x1400D6160 (KiInsertQueueDpc.c)
 */

__int64 __fastcall KiGenericCallDpcWorker(__int64 a1, _QWORD *a2)
{
  unsigned __int8 CurrentIrql; // si
  ULONG ActiveProcessorCount; // eax
  __int64 *v6; // rdi
  __int64 v7; // rbp
  ULONG_PTR v8; // rcx
  __int64 result; // rax
  ULONG v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF
  ULONG v12; // [rsp+70h] [rbp+18h] BYREF
  ULONG v13; // [rsp+74h] [rbp+1Ch]

  v11 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v10 = ActiveProcessorCount;
  v13 = ActiveProcessorCount;
  v12 = ActiveProcessorCount;
  if ( ActiveProcessorCount > 1 )
  {
    v6 = &qword_1403AB3C8;
    v7 = ActiveProcessorCount - 1;
    do
    {
      v8 = *v6 + 22560;
      *(_QWORD *)(v8 + 24) = *a2;
      *(_QWORD *)(v8 + 32) = a2[1];
      KiInsertQueueDpc(v8, 0);
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  ((void (__fastcall *)(__int64, _QWORD, ULONG *, ULONG *))*a2)(a1 + 22560, a2[1], &v10, &v12);
  while ( v10 )
    KeYieldProcessorEx(&v11);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
