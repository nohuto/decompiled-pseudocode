/*
 * XREFs of VfZwLoadKey @ 0x140756258
 * Callers:
 *     <none>
 * Callees:
 *     ViZwCheckObjectAttributes @ 0x140758724 (ViZwCheckObjectAttributes.c)
 *     ViZwShouldCheck @ 0x14075882C (ViZwShouldCheck.c)
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
