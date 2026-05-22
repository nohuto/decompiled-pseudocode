/*
 * XREFs of ??4?$shared_ptr@E@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800215A0
 * Callers:
 *     ?UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ @ 0x180020CE4 (-UpdateBitmapSource@DWMHardwareCursor@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::shared_ptr<unsigned char>::operator=(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  volatile signed __int32 *v5; // rdx
  volatile signed __int32 *v7; // [rsp+28h] [rbp-10h]

  v2 = *a2;
  v4 = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  v5 = (volatile signed __int32 *)a1[1];
  a1[1] = v4;
  v7 = v5;
  *a1 = v2;
  if ( v5 )
  {
    if ( _InterlockedExchangeAdd(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v7 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return a1;
}
