/*
 * XREFs of ?QueryInterface@ExternalResourceSet@ExecutionModel@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003FB40
 * Callers:
 *     ?QueryInterface@ExternalResourceSet@ExecutionModel@@WFFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025110 (-QueryInterface@ExternalResourceSet@ExecutionModel@@WFFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ExternalResourceSet::QueryInterface(
        ExecutionModel::ExternalResourceSet *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rcx
  char *v5; // rax
  __int64 v6; // rcx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_97b402ad_4704_4657_a963_85d39de6975e.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_97b402ad_4704_4657_a963_85d39de6975e.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_97b402ad_4704_4657_a963_85d39de6975e.Data4;
  v5 = 0LL;
  if ( !v4 )
    goto LABEL_7;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v6 )
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
  else
  {
LABEL_7:
    if ( this )
      v5 = (char *)this + 1368;
    *a3 = v5;
    (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(*(_QWORD *)this + 8LL))(this);
    return 0LL;
  }
}
