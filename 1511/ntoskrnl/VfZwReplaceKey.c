/*
 * XREFs of VfZwReplaceKey @ 0x1406D405C
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x1406D4B50 (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x1406D4C58 (ViZwShouldCheck.c)
 */

NTSTATUS __fastcall VfZwReplaceKey(
        POBJECT_ATTRIBUTES ObjectAttributes,
        HANDLE Key,
        POBJECT_ATTRIBUTES ReplacedObjectAttributes)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( (unsigned int)ViZwShouldCheck() )
  {
    ViZwCheckObjectAttributes(ObjectAttributes, retaddr);
    ViZwCheckObjectAttributes(ReplacedObjectAttributes, retaddr);
  }
  return pXdvZwReplaceKey(ObjectAttributes, Key, ReplacedObjectAttributes);
}
