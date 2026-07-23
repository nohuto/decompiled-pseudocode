/*
 * XREFs of LdrpResolveDelayloadAddress @ 0x18007B514
 * Callers:
 *     LdrpHandleUnprotectedDelayLoad @ 0x18007B424 (LdrpHandleUnprotectedDelayLoad.c)
 * Callees:
 *     LdrpResolveProcedureAddress @ 0x18007B5DC (LdrpResolveProcedureAddress.c)
 *     LdrpGetDelayloadAPIInfo @ 0x18007B7EC (LdrpGetDelayloadAPIInfo.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     AVrfCallAPILookupCallback @ 0x1800D5E80 (AVrfCallAPILookupCallback.c)
 */

__int64 __fastcall LdrpResolveDelayloadAddress(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        void (__fastcall *a5)(__int64 *, __int64, __int64, __int64, _QWORD),
        int *a6)
{
  int v8; // eax
  __int64 v9; // rbx
  __int64 v11; // r9
  int v12; // [rsp+30h] [rbp-20h] BYREF
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  __int64 v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 v15; // [rsp+48h] [rbp-8h] BYREF

  v13 = 0LL;
  LdrpGetDelayloadAPIInfo(a1, a3, a4, (unsigned int)&v15, (__int64)&v12);
  v8 = LdrpResolveProcedureAddress(a2, v15, v12, 0, (__int64)&v13);
  *a6 = v8;
  if ( v8 < 0 )
    return v13;
  if ( AvrfpAPILookupCallbacksEnabled )
    AVrfCallAPILookupCallback(*(_QWORD *)(a1 + 48), *(_QWORD *)(a2 + 48), v13, 1, (__int64)&v13);
  if ( !a5 )
    return v13;
  v11 = *(_QWORD *)(a1 + 48);
  v9 = v13;
  v14 = 0LL;
  a5(&v14, a2, v13, v11, 0LL);
  if ( v14 )
    return v14;
  return v9;
}
