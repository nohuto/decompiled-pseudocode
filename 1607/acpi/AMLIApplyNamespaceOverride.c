/*
 * XREFs of AMLIApplyNamespaceOverride @ 0x1C00067A0
 * Callers:
 *     ParseLoad @ 0x1C0006330 (ParseLoad.c)
 *     ParseUnload @ 0x1C00618A0 (ParseUnload.c)
 * Callees:
 *     GetNameSpaceObject @ 0x1C00140F8 (GetNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C005BA04 (AMLIApplyNextNamespaceOverride.c)
 */

__int64 AMLIApplyNamespaceOverride()
{
  int NameSpaceObject; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h]

  if ( (gOverrideFlags & 0x20) != 0 && gpnsNameSpaceOverrideRoot )
  {
    NameSpaceObject = GetNameSpaceObject((void *)"\\");
    if ( NameSpaceObject >= 0 )
    {
      NameSpaceObject = AMLIApplyNextNamespaceOverride(gpnsNameSpaceOverrideRoot, v2);
      DereferenceObjectEx(v2, 0LL);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)NameSpaceObject;
}
