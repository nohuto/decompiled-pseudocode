/*
 * XREFs of IofCallDriverSpecifyReturn @ 0x140159DD8
 * Callers:
 *     PopRequestPowerIrp @ 0x140136E74 (PopRequestPowerIrp.c)
 *     VerifierIofCallDriver @ 0x1407420B0 (VerifierIofCallDriver.c)
 *     VerifierPoCallDriver @ 0x140742358 (VerifierPoCallDriver.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall IofCallDriverSpecifyReturn(__int64 a1, ULONG_PTR a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned __int8 v4; // r9

  if ( pIofCallDriver )
    return pIofCallDriver(a1, a2, a3);
  if ( (char)--*(_BYTE *)(a2 + 67) <= 0 )
    KeBugCheckEx(0x35u, a2, 0LL, 0LL, 0LL);
  v3 = *(_QWORD *)(a2 + 184) - 72LL;
  *(_QWORD *)(a2 + 184) = v3;
  v4 = *(_BYTE *)v3;
  *(_QWORD *)(v3 + 40) = a1;
  if ( v4 == 22 && (unsigned __int8)(*(_BYTE *)(v3 + 1) - 2) <= 1u )
    return IopPoHandleIrp(a2);
  else
    return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 8) + 8LL * v4 + 112))();
}
