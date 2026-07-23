/*
 * XREFs of KiTraceSetTimer2 @ 0x1401DABF4
 * Callers:
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     KiUpdateTimer2Flags @ 0x1400EA620 (KiUpdateTimer2Flags.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiTimer2TypeFlagsToEtwFlags @ 0x1401DAA3C (KiTimer2TypeFlagsToEtwFlags.c)
 *     KiTraceCancelTimer2 @ 0x1401DAA5C (KiTraceCancelTimer2.c)
 */

__int64 __fastcall KiTraceSetTimer2(__int64 a1, char a2, int a3)
{
  __int64 v4; // rsi
  __int64 v6; // r15
  char v7; // r12
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rbx
  char v14; // al
  _QWORD *v16; // [rsp+30h] [rbp-50h] BYREF
  int v17; // [rsp+38h] [rbp-48h]
  int v18; // [rsp+3Ch] [rbp-44h]
  _QWORD v19[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-28h]
  unsigned __int64 v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+68h] [rbp-18h]
  char v24; // [rsp+70h] [rbp-10h]

  v4 = *(_QWORD *)(a1 + 96);
  v6 = *(_QWORD *)(a1 + 104);
  v7 = *(_BYTE *)(a1 + 129);
  v19[0] = *(_QWORD *)(a1 + 72);
  v19[1] = *(_QWORD *)(a1 + 80);
  v20 = *(_QWORD *)(a1 + 88);
  KiUpdateTimer2Flags((volatile signed __int32 *)a1, a3, 0);
  if ( a3 == 1 )
    KxReleaseSpinLock(&KiTimer2CollectionLock);
  v9 = KiWaitNever;
  v10 = KiWaitAlways;
  v11 = __ROL8__(v4 ^ KiWaitNever, KiWaitNever);
  v12 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(v6 ^ KiWaitNever, KiWaitNever));
  v13 = KiWaitAlways ^ _byteswap_uint64(a1 ^ v11);
  if ( a2 )
  {
    KiTraceCancelTimer2(a1, v13);
    v9 = KiWaitNever;
    v10 = KiWaitAlways;
  }
  v22 = v13;
  v21 = 0x7E35C6C7F3DD7277LL * (v9 ^ __ROR8__(v13 ^ _byteswap_uint64(a1 ^ v10), v9));
  v23 = 0x7E35C6C7F3DD7277LL * (v9 ^ __ROR8__(a1 ^ _byteswap_uint64(v12 ^ v10), v9));
  v14 = KiTimer2TypeFlagsToEtwFlags(v7);
  v24 = v14;
  if ( v13 )
  {
    v14 |= 1u;
    v24 = v14;
  }
  if ( v20 )
    v24 = v14 | 2;
  v18 = 0;
  v16 = v19;
  v17 = 56;
  return EtwTraceKernelEvent((int)&v16, 1, 0x40020000u, 3944, 8395522);
}
