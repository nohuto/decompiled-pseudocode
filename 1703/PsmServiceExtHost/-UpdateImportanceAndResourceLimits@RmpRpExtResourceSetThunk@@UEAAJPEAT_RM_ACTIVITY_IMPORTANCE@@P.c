/*
 * XREFs of ?UpdateImportanceAndResourceLimits@RmpRpExtResourceSetThunk@@UEAAJPEAT_RM_ACTIVITY_IMPORTANCE@@PEAU_RM_RESOURCE_LIMITS@@@Z @ 0x1800145E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall RmpRpExtResourceSetThunk::UpdateImportanceAndResourceLimits(
        RmpRpExtResourceSetThunk *this,
        union _RM_ACTIVITY_IMPORTANCE *a2,
        struct _RM_RESOURCE_LIMITS *a3)
{
  return RmSrvResourceSetUpdateProperties(*((struct _RM_SERVICE_GLOBALS **)this + 1), *((_QWORD *)this + 2), a2, a3);
}
