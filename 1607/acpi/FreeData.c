/*
 * XREFs of FreeData @ 0x1C00036A4
 * Callers:
 *     RunContext @ 0x1C0002440 (RunContext.c)
 *     ACPIGetWorkerForString @ 0x1C00034A0 (ACPIGetWorkerForString.c)
 *     FreeData @ 0x1C00036A4 (FreeData.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4 @ 0x1C00103C0 (ACPIDevicePowerProcessPhase1DeviceSubPhase4.c)
 *     ValidateTarget @ 0x1C001476C (ValidateTarget.c)
 *     Store @ 0x1C0014E00 (Store.c)
 *     ParseTerm @ 0x1C0015B30 (ParseTerm.c)
 *     ExprOp2_64 @ 0x1C0018F80 (ExprOp2_64.c)
 *     FreeNameSpaceObjects @ 0x1C0019DC0 (FreeNameSpaceObjects.c)
 *     ParseCall @ 0x1C0019F80 (ParseCall.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     ACPIGetWorkerForInteger @ 0x1C001C030 (ACPIGetWorkerForInteger.c)
 *     ParseScope @ 0x1C001F120 (ParseScope.c)
 * Callees:
 *     FreeData @ 0x1C00036A4 (FreeData.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C001B600 (FreeObjData.c)
 */

void *__fastcall FreeData(_QWORD *a1)
{
  __int64 v3; // rcx

  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    v3 = a1[1];
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 8), 0xFFFFFFFF) == 1 && (*(_BYTE *)v3 & 8) != 0 )
      FreeData(v3);
  }
  else if ( a1[4] )
  {
    if ( *((int *)a1 + 2) > 0 )
    {
      *(_WORD *)a1 |= 8u;
    }
    else
    {
      if ( *((_WORD *)a1 + 1) == 4 )
        FreeDataBuffs(a1[4] + 8LL, *(unsigned int *)a1[4]);
      FreeObjData(a1);
    }
  }
  return memset(a1, 0, 0x28uLL);
}
