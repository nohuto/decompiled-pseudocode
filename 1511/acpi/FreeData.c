/*
 * XREFs of FreeData @ 0x1C0003B14
 * Callers:
 *     RunContext @ 0x1C00028F0 (RunContext.c)
 *     ACPIGetWorkerForString @ 0x1C0003910 (ACPIGetWorkerForString.c)
 *     FreeData @ 0x1C0003B14 (FreeData.c)
 *     ValidateTarget @ 0x1C000E694 (ValidateTarget.c)
 *     ExprOp2_64 @ 0x1C000E9D0 (ExprOp2_64.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     ParseTerm @ 0x1C000F430 (ParseTerm.c)
 *     ParseScope @ 0x1C0012370 (ParseScope.c)
 *     FreeNameSpaceObjects @ 0x1C0013710 (FreeNameSpaceObjects.c)
 *     ParseCall @ 0x1C0013900 (ParseCall.c)
 *     ACPIGetWorkerForInteger @ 0x1C001CBB0 (ACPIGetWorkerForInteger.c)
 * Callees:
 *     FreeData @ 0x1C0003B14 (FreeData.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C00113B0 (FreeObjData.c)
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
