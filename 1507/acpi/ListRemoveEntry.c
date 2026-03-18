/*
 * XREFs of ListRemoveEntry @ 0x1C0010770
 * Callers:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     RunContext @ 0x1C0002900 (RunContext.c)
 *     ProcessEvalObj @ 0x1C0004210 (ProcessEvalObj.c)
 *     ParseField @ 0x1C000DD70 (ParseField.c)
 *     ParseTerm @ 0x1C000E250 (ParseTerm.c)
 *     CreateNameSpaceObject @ 0x1C000F9D0 (CreateNameSpaceObject.c)
 *     FreeObjData @ 0x1C0010360 (FreeObjData.c)
 *     ParseCall @ 0x1C0010E80 (ParseCall.c)
 *     ParseRelease @ 0x1C0013A10 (ParseRelease.c)
 *     ReadFieldObj @ 0x1C0014A40 (ReadFieldObj.c)
 *     AccFieldUnit @ 0x1C0015AE0 (AccFieldUnit.c)
 *     ReadField @ 0x1C0015DD0 (ReadField.c)
 *     ParseScope @ 0x1C0017240 (ParseScope.c)
 *     ListRemoveHead @ 0x1C001F638 (ListRemoveHead.c)
 *     FreeOwnedObjects @ 0x1C0044F44 (FreeOwnedObjects.c)
 *     NotifyObjectDestruction @ 0x1C0045140 (NotifyObjectDestruction.c)
 *     FreeContext @ 0x1C0046CB4 (FreeContext.c)
 *     TimeoutCallback @ 0x1C00472B0 (TimeoutCallback.c)
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
