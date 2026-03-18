/*
 * XREFs of IopfCallDriver @ 0x140077C84
 * Callers:
 *     IoPageRead @ 0x140077720 (IoPageRead.c)
 *     IoCallDriverWithTracing @ 0x140077C20 (IoCallDriverWithTracing.c)
 *     IofCallDriverSpecifyReturn @ 0x14012250C (IofCallDriverSpecifyReturn.c)
 *     IopPerfCallDriver @ 0x1401BC6F0 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x1406B4C6C (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x1406B5390 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x1406B5404 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

__int64 __fastcall IopfCallDriver(__int64 a1, ULONG_PTR a2)
{
  __int64 v2; // rax
  unsigned __int8 v3; // r9

  if ( (char)--*(_BYTE *)(a2 + 67) <= 0 )
    KeBugCheckEx(0x35u, a2, 0LL, 0LL, 0LL);
  v2 = *(_QWORD *)(a2 + 184) - 72LL;
  *(_QWORD *)(a2 + 184) = v2;
  v3 = *(_BYTE *)v2;
  *(_QWORD *)(v2 + 40) = a1;
  if ( v3 == 22 && (unsigned __int8)(*(_BYTE *)(v2 + 1) - 2) <= 1u )
    return IopPoHandleIrp(a2);
  else
    return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 8) + 8LL * v3 + 112))();
}
