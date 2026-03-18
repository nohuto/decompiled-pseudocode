/*
 * XREFs of KiBalanceSetManagerDeferredRoutine @ 0x1400E9D60
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     _local_unwind @ 0x140143D90 (_local_unwind.c)
 *     KiCustomAccessRoutine6 @ 0x14015DE50 (KiCustomAccessRoutine6.c)
 */

LONG __fastcall KiBalanceSetManagerDeferredRoutine(__int64 a1, struct _KEVENT *a2, __int64 a3, unsigned __int64 a4)
{
  struct _KEVENT *v4; // r10
  __int64 v6; // rdx
  _DWORD v7[22]; // [rsp+0h] [rbp-148h] BYREF
  __int64 v8; // [rsp+8Fh] [rbp-B9h]
  __int64 v9; // [rsp+A7h] [rbp-A1h]
  __int64 v10; // [rsp+C7h] [rbp-81h]
  _DWORD *v11; // [rsp+108h] [rbp-40h]

  v11 = v7;
  v4 = a2;
  if ( (__int64)v4 >> 47 != -1 && (__int64)v4 >> 47 != 0 )
  {
    v7[8] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v10 = a3;
    v9 = __ROL8__(a2, a3);
    v8 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine6(a2);
    v6 = __ROL8__(v8, v10);
    v4 = (struct _KEVENT *)__ROR8__(v9, v10);
    *(_QWORD *)(v6 + 32) = v4;
    *(_BYTE *)v6 = 19;
  }
  return KeSetEvent(v4, 10, 0);
}
