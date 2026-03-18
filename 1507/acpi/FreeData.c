/*
 * XREFs of FreeData @ 0x1C0003AE4
 * Callers:
 *     RunContext @ 0x1C0002900 (RunContext.c)
 *     ACPIGetWorkerForString @ 0x1C00038E0 (ACPIGetWorkerForString.c)
 *     FreeData @ 0x1C0003AE4 (FreeData.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     ParseTerm @ 0x1C000E250 (ParseTerm.c)
 *     ParseCall @ 0x1C0010E80 (ParseCall.c)
 *     FreeNameSpaceObjects @ 0x1C0011A80 (FreeNameSpaceObjects.c)
 *     Store @ 0x1C00122A0 (Store.c)
 *     ExprOp2_64 @ 0x1C00128C0 (ExprOp2_64.c)
 *     ValidateTarget @ 0x1C0015618 (ValidateTarget.c)
 *     ParseScope @ 0x1C0017240 (ParseScope.c)
 *     ACPIGetWorkerForInteger @ 0x1C001C990 (ACPIGetWorkerForInteger.c)
 * Callees:
 *     FreeData @ 0x1C0003AE4 (FreeData.c)
 *     FreeDataBuffs @ 0x1C000E1D0 (FreeDataBuffs.c)
 *     FreeObjData @ 0x1C0010360 (FreeObjData.c)
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
