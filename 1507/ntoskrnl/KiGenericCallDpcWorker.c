/*
 * XREFs of KiGenericCallDpcWorker @ 0x1400D61D0
 * Callers:
 *     <none>
 * Callees:
 *     KiInsertQueueDpc @ 0x1400A48A0 (KiInsertQueueDpc.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiGenericCallDpcWorker(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // ebx
  unsigned __int8 CurrentIrql; // bp
  __int64 *v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rcx
  __int64 result; // rax
  int v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF
  int v12; // [rsp+6Ch] [rbp+14h]

  v4 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v10 = KeNumberProcessors_0;
  v12 = KeNumberProcessors_0;
  v11 = KeNumberProcessors_0;
  if ( (unsigned int)KeNumberProcessors_0 > 1 )
  {
    v6 = &qword_1403D2588;
    v7 = (unsigned int)(KeNumberProcessors_0 - 1);
    do
    {
      v8 = *v6 + 22560;
      *(_QWORD *)(v8 + 24) = *a2;
      *(_QWORD *)(v8 + 32) = a2[1];
      KiInsertQueueDpc(v8, (__int64)&v10, (__int64)&v11, 0LL, 0);
      ++v6;
      --v7;
    }
    while ( v7 );
  }
  ((void (__fastcall *)(__int64, _QWORD, int *, int *))*a2)(a1 + 22560, a2[1], &v10, &v11);
  while ( v10 )
  {
    if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      _mm_pause();
    else
      HvlNotifyLongSpinWait(v4);
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
