/*
 * XREFs of AMLIApplyNamespaceOverride @ 0x1C0005F58
 * Callers:
 *     ParseLoad @ 0x1C0005A50 (ParseLoad.c)
 *     ParseUnload @ 0x1C0049D10 (ParseUnload.c)
 * Callees:
 *     GetNameSpaceObject @ 0x1C000DDCC (GetNameSpaceObject.c)
 *     DereferenceObjectEx @ 0x1C00138E4 (DereferenceObjectEx.c)
 *     AMLIApplyNextNamespaceOverride @ 0x1C004426C (AMLIApplyNextNamespaceOverride.c)
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
      DereferenceObjectEx(v2);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)NameSpaceObject;
}
