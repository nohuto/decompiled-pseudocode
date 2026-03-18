/*
 * XREFs of VfZwLoadKey @ 0x1406D2690
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x1406D4B50 (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwLoadKey(POBJECT_ATTRIBUTES KeyObjectAttributes, POBJECT_ATTRIBUTES FileObjectAttributes)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckObjectAttributes(KeyObjectAttributes, retaddr);
    ViZwCheckObjectAttributes(FileObjectAttributes, retaddr);
  }
  return pXdvZwLoadKey(KeyObjectAttributes, FileObjectAttributes);
}
