/*
 * XREFs of IopFindLegacyBusDeviceNode @ 0x14055795C
 * Callers:
 *     IoTranslateBusAddress @ 0x1401CD4C0 (IoTranslateBusAddress.c)
 *     IopDuplicateDetection @ 0x140555998 (IopDuplicateDetection.c)
 *     PnpReleaseResourcesInternal @ 0x140555F0C (PnpReleaseResourcesInternal.c)
 *     IopChildToRootTranslation @ 0x140556D90 (IopChildToRootTranslation.c)
 *     IopSetupArbiterAndTranslators @ 0x1405574E8 (IopSetupArbiterAndTranslators.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall IopFindLegacyBusDeviceNode(unsigned int a1, unsigned int a2)
{
  __int64 v2; // r8
  _QWORD **v5; // r10
  _QWORD *i; // rax
  unsigned int v7; // edx

  v2 = IopRootDeviceNode;
  if ( a1 != 15 && a1 <= 0x11 )
  {
    if ( a1 == 2 )
      a1 = 1;
    v5 = (_QWORD **)((char *)&IopLegacyBusInformationTable + 16 * (int)a1);
    for ( i = *v5; i != v5; i = (_QWORD *)*i )
    {
      v7 = *((_DWORD *)i - 43);
      if ( v7 == a2 )
        return i - 78;
      if ( v7 > a2 )
        return (_QWORD *)v2;
    }
  }
  return (_QWORD *)v2;
}
