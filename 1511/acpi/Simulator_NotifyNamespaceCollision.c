/*
 * XREFs of Simulator_NotifyNamespaceCollision @ 0x1C0042778
 * Callers:
 *     CreateNameSpaceObject @ 0x1C0010A20 (CreateNameSpaceObject.c)
 * Callees:
 *     GetObjectPath @ 0x1C00057B4 (GetObjectPath.c)
 *     Simulator_AllocAndInitTestData @ 0x1C0042344 (Simulator_AllocAndInitTestData.c)
 *     Simulator_TestNotify @ 0x1C0042D30 (Simulator_TestNotify.c)
 */

__int64 __fastcall Simulator_NotifyNamespaceCollision(__int64 a1, __int64 a2)
{
  void *ObjectPath; // rsi
  _DWORD *inited; // rbx
  unsigned int v6; // edi
  __int64 v7; // rcx
  char v9; // [rsp+40h] [rbp+18h] BYREF

  ObjectPath = 0LL;
  inited = Simulator_AllocAndInitTestData();
  if ( inited )
  {
    if ( a2 )
      ObjectPath = (void *)GetObjectPath(a2);
    v7 = gpnsNameSpaceRoot;
    v9 = 0;
    *inited = 1;
    inited[2] = 1;
    *((_QWORD *)inited + 4) = v7;
    *((_QWORD *)inited + 5) = &v9;
    inited[1] = 17;
    *((_QWORD *)inited + 2) = a1;
    *((_QWORD *)inited + 3) = ObjectPath;
    if ( (int)Simulator_TestNotify(inited) >= 0 && v9 )
      v6 = 0;
    else
      v6 = -1073741823;
    if ( ObjectPath )
      ExFreePoolWithTag(ObjectPath, 0);
    ExFreePoolWithTag(inited, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
