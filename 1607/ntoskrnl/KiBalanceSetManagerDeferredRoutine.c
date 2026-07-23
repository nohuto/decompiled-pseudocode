/*
 * XREFs of KiBalanceSetManagerDeferredRoutine @ 0x1400A7C10
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     _local_unwind @ 0x14014D720 (_local_unwind.c)
 *     KiCustomAccessRoutine6 @ 0x140169020 (KiCustomAccessRoutine6.c)
 */

LONG __fastcall KiBalanceSetManagerDeferredRoutine(__int64 a1, struct _KEVENT *a2, __int64 a3, unsigned __int64 a4)
{
  _DWORD v6[24]; // [rsp+0h] [rbp-148h] BYREF
  __int64 v7; // [rsp+8Fh] [rbp-B9h]
  __int64 v8; // [rsp+A7h] [rbp-A1h]
  __int64 v9; // [rsp+C7h] [rbp-81h]
  _DWORD *v10; // [rsp+130h] [rbp-18h]

  v10 = v6;
  if ( (__int64)a2 >> 47 != -1 && (__int64)a2 >> 47 != 0 )
  {
    v6[8] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v9 = a3;
    v8 = __ROL8__(a2, a3);
    v7 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine6(a2);
  }
  return KeSetEvent(a2, 10, 0);
}
