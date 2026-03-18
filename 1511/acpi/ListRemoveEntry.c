/*
 * XREFs of ListRemoveEntry @ 0x1C0011778
 * Callers:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     RunContext @ 0x1C00028F0 (RunContext.c)
 *     ProcessEvalObj @ 0x1C00041B0 (ProcessEvalObj.c)
 *     ParseField @ 0x1C000EF50 (ParseField.c)
 *     ParseTerm @ 0x1C000F430 (ParseTerm.c)
 *     CreateNameSpaceObject @ 0x1C0010A20 (CreateNameSpaceObject.c)
 *     FreeObjData @ 0x1C00113B0 (FreeObjData.c)
 *     ParseScope @ 0x1C0012370 (ParseScope.c)
 *     ParseCall @ 0x1C0013900 (ParseCall.c)
 *     ParseRelease @ 0x1C0014940 (ParseRelease.c)
 *     ReadFieldObj @ 0x1C0015970 (ReadFieldObj.c)
 *     AccFieldUnit @ 0x1C0016BC0 (AccFieldUnit.c)
 *     ReadField @ 0x1C0016EB0 (ReadField.c)
 *     ListRemoveHead @ 0x1C00201C8 (ListRemoveHead.c)
 *     FreeOwnedObjects @ 0x1C0044974 (FreeOwnedObjects.c)
 *     NotifyObjectDestruction @ 0x1C0044B70 (NotifyObjectDestruction.c)
 *     FreeContext @ 0x1C00465D4 (FreeContext.c)
 *     TimeoutCallback @ 0x1C0046BD0 (TimeoutCallback.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ListRemoveEntry(_QWORD **a1, __int64 a2)
{
  _QWORD *result; // rax

  if ( a1[1] == a1 )
  {
    *(_QWORD *)a2 = 0LL;
  }
  else
  {
    if ( a1 == *(_QWORD ***)a2 )
      *(_QWORD *)a2 = *(_QWORD *)(*(_QWORD *)a2 + 8LL);
    *a1[1] = *a1;
    result = a1[1];
    (*a1)[1] = result;
  }
  return result;
}
