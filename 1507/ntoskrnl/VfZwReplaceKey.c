/*
 * XREFs of VfZwReplaceKey @ 0x140757C24
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140758724 (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
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
