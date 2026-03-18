/*
 * XREFs of IopPoHandleIrp @ 0x140137894
 * Callers:
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     IoPageRead @ 0x140085D50 (IoPageRead.c)
 *     IofCallDriverSpecifyReturn @ 0x140159DD8 (IofCallDriverSpecifyReturn.c)
 *     IopPerfCallDriver @ 0x1401F7F54 (IopPerfCallDriver.c)
 *     IovCallDriver @ 0x140734C6C (IovCallDriver.c)
 *     IovpCallDriverNoIrpTracking @ 0x140735520 (IovpCallDriverNoIrpTracking.c)
 *     IovpCallDriverWithStackBuffer @ 0x1407355F4 (IovpCallDriverWithStackBuffer.c)
 * Callees:
 *     PoHandleIrp @ 0x1401378D8 (PoHandleIrp.c)
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
