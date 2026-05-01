/*
 * XREFs of ?QueryInterface@ResourceSetImpl@ExecutionModel@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180047D70
 * Callers:
 *     ?QueryInterface@ResourceSetImpl@ExecutionModel@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025200 (-QueryInterface@ResourceSetImpl@ExecutionModel@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ResourceSetImpl@ExecutionModel@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025210 (-QueryInterface@ResourceSetImpl@ExecutionModel@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceSetImpl::QueryInterface(
        ExecutionModel::ResourceSetImpl *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rcx
  char *v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7a92be6a_c7a5_4d43_931d_3c6c36d092d6.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7a92be6a_c7a5_4d43_931d_3c6c36d092d6.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7a92be6a_c7a5_4d43_931d_3c6c36d092d6.Data4;
  v5 = 0LL;
  if ( !v4 )
    goto LABEL_13;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_97b402ad_4704_4657_a963_85d39de6975e.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_97b402ad_4704_4657_a963_85d39de6975e.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_97b402ad_4704_4657_a963_85d39de6975e.Data4;
  if ( !v6 )
  {
    if ( this )
      v5 = (char *)this + 16;
    *a3 = v5;
    goto LABEL_14;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v7 )
  {
LABEL_13:
    *a3 = this;
LABEL_14:
    (*(void (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 8LL))(this);
    return 0LL;
  }
  *a3 = 0LL;
  return 2147500034LL;
}
