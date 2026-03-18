/*
 * XREFs of ListInsertTail @ 0x1C0017CB4
 * Callers:
 *     InsertReadyQueue @ 0x1C0003260 (InsertReadyQueue.c)
 *     ProcessEvalObj @ 0x1C0004210 (ProcessEvalObj.c)
 *     NewObjOwner @ 0x1C0005AC0 (NewObjOwner.c)
 *     NewContext @ 0x1C00062E8 (NewContext.c)
 *     CreateNameSpaceObject @ 0x1C000F9D0 (CreateNameSpaceObject.c)
 *     FreeObjData @ 0x1C0010360 (FreeObjData.c)
 *     ParseCall @ 0x1C0010E80 (ParseCall.c)
 *     ReadFieldObj @ 0x1C0014A40 (ReadFieldObj.c)
 *     AccFieldUnit @ 0x1C0015AE0 (AccFieldUnit.c)
 *     ParseScope @ 0x1C0017240 (ParseScope.c)
 *     AMLIResumeInterpreter @ 0x1C0042804 (AMLIResumeInterpreter.c)
 *     QueueContext @ 0x1C00471D8 (QueueContext.c)
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
