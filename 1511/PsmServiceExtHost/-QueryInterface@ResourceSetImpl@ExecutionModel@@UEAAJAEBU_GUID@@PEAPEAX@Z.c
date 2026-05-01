/*
 * XREFs of ?QueryInterface@ResourceSetImpl@ExecutionModel@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004ECF0
 * Callers:
 *     ?QueryInterface@ResourceSetImpl@ExecutionModel@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BFB0 (-QueryInterface@ResourceSetImpl@ExecutionModel@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ResourceSetImpl@ExecutionModel@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BFC0 (-QueryInterface@ResourceSetImpl@ExecutionModel@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
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
  __int64 v8; // rcx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7a92be6a_c7a5_4d43_931d_3c6c36d092d6.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7a92be6a_c7a5_4d43_931d_3c6c36d092d6.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7a92be6a_c7a5_4d43_931d_3c6c36d092d6.Data4;
  v5 = 0LL;
  if ( !v4 )
    goto LABEL_18;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_97b402ad_4704_4657_a963_85d39de6975e.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_97b402ad_4704_4657_a963_85d39de6975e.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_97b402ad_4704_4657_a963_85d39de6975e.Data4;
  if ( !v6 )
  {
    if ( this )
      v5 = (char *)this + 16;
LABEL_14:
    *a3 = v5;
LABEL_19:
    (*(void (__fastcall **)(ExecutionModel::ResourceSetImpl *))(*(_QWORD *)this + 8LL))(this);
    return 0LL;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_3c2b3928_ef07_4431_a60c_2cf464e0fe22.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3c2b3928_ef07_4431_a60c_2cf464e0fe22.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_3c2b3928_ef07_4431_a60c_2cf464e0fe22.Data4;
  if ( !v7 )
  {
    if ( this )
      v5 = (char *)this + 8;
    goto LABEL_14;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v8 )
  {
LABEL_18:
    *a3 = this;
    goto LABEL_19;
  }
  *a3 = 0LL;
  return 2147500034LL;
}
