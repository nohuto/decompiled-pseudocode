/*
 * XREFs of ListInsertTail @ 0x1C0018288
 * Callers:
 *     InsertReadyQueue @ 0x1C0003250 (InsertReadyQueue.c)
 *     ProcessEvalObj @ 0x1C00041B0 (ProcessEvalObj.c)
 *     NewObjOwner @ 0x1C0005EB8 (NewObjOwner.c)
 *     NewContext @ 0x1C0006698 (NewContext.c)
 *     CreateNameSpaceObject @ 0x1C0010A20 (CreateNameSpaceObject.c)
 *     FreeObjData @ 0x1C00113B0 (FreeObjData.c)
 *     ParseScope @ 0x1C0012370 (ParseScope.c)
 *     ParseCall @ 0x1C0013900 (ParseCall.c)
 *     ReadFieldObj @ 0x1C0015970 (ReadFieldObj.c)
 *     AccFieldUnit @ 0x1C0016BC0 (AccFieldUnit.c)
 *     AMLIResumeInterpreter @ 0x1C0042224 (AMLIResumeInterpreter.c)
 *     QueueContext @ 0x1C0046AF8 (QueueContext.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ListInsertTail(_QWORD *a1, _QWORD **a2)
{
  _QWORD *result; // rax

  result = *a2;
  if ( *a2 )
  {
    a1[1] = result;
    *a1 = **a2;
    *(_QWORD *)(**a2 + 8LL) = a1;
    result = *a2;
    **a2 = a1;
  }
  else
  {
    *a2 = a1;
    a1[1] = a1;
    *a1 = a1;
  }
  return result;
}
