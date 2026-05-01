/*
 * XREFs of ?QueryInterface@ResourceManager@ExecutionModel@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003D8C0
 * Callers:
 *     ?QueryInterface@ResourceManager@ExecutionModel@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BD90 (-QueryInterface@ResourceManager@ExecutionModel@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ResourceManager@ExecutionModel@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BDA0 (-QueryInterface@ResourceManager@ExecutionModel@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ResourceManager@ExecutionModel@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BDB0 (-QueryInterface@ResourceManager@ExecutionModel@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::QueryInterface(
        ExecutionModel::ResourceManager *this,
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
    goto LABEL_16;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_3f4db548_7bcb_452f_a32c_ae17c60b1cff.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3f4db548_7bcb_452f_a32c_ae17c60b1cff.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_3f4db548_7bcb_452f_a32c_ae17c60b1cff.Data4;
  if ( !v6 )
    goto LABEL_16;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b24a15e8_bf8c_4337_95a9_d477f9ae39a0.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b24a15e8_bf8c_4337_95a9_d477f9ae39a0.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b24a15e8_bf8c_4337_95a9_d477f9ae39a0.Data4;
  if ( !v7 )
  {
    if ( this )
      v5 = (char *)this + 8;
    *a3 = v5;
    goto LABEL_17;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v8 )
  {
LABEL_16:
    *a3 = this;
LABEL_17:
    (*(void (__fastcall **)(ExecutionModel::ResourceManager *))(*(_QWORD *)this + 8LL))(this);
    return 0LL;
  }
  *a3 = 0LL;
  return 2147500034LL;
}
