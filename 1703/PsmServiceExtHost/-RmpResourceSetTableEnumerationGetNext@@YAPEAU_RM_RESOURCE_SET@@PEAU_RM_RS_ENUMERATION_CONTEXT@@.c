/*
 * XREFs of ?RmpResourceSetTableEnumerationGetNext@@YAPEAU_RM_RESOURCE_SET@@PEAU_RM_RS_ENUMERATION_CONTEXT@@@Z @ 0x18002D8E0
 * Callers:
 *     ?Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z @ 0x18002A018 (-Handle_RM_DisconnectFromServer@ResourceManagerServerProxy@@QEAAJPEAPEAX@Z.c)
 * Callees:
 *     ?RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CONTEXT@@@Z @ 0x180033A60 (-RmpObjectTableEnumerationGetNext@@YAPEAU_RM_OBJECT_HEADER@@PEAU_RM_OBJECT_TABLE_ENUMERATION_CON.c)
 */

struct _RM_RESOURCE_SET *__fastcall RmpResourceSetTableEnumerationGetNext(struct _RM_RS_ENUMERATION_CONTEXT *a1)
{
  return RmpObjectTableEnumerationGetNext(a1);
}
