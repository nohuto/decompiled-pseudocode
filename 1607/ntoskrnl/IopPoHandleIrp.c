/*
 * XREFs of IopPoHandleIrp @ 0x14012C460
 * Callers:
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     IopfCallDriver @ 0x1400E9AD0 (IopfCallDriver.c)
 * Callees:
 *     PoHandleIrp @ 0x14012C4A4 (PoHandleIrp.c)
 */

__int64 __fastcall IopPoHandleIrp(__int64 a1)
{
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  if ( (unsigned __int8)PoHandleIrp(a1, &v3) )
    return v3;
  else
    return (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 184) + 40LL) + 8LL)
                                                      + 8LL * **(unsigned __int8 **)(a1 + 184)
                                                      + 112))(
             *(_QWORD *)(*(_QWORD *)(a1 + 184) + 40LL),
             a1);
}
