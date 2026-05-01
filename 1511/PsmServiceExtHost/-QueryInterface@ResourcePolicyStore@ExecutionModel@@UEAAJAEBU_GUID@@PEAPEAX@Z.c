/*
 * XREFs of ?QueryInterface@ResourcePolicyStore@ExecutionModel@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004C760
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyStore::QueryInterface(
        ExecutionModel::ResourcePolicyStore *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_f85a16a8_51e0_48e3_a8b9_9e4c98156226.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_f85a16a8_51e0_48e3_a8b9_9e4c98156226.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_f85a16a8_51e0_48e3_a8b9_9e4c98156226.Data4;
  if ( !v3 )
    goto LABEL_7;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v4 )
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
  else
  {
LABEL_7:
    *a3 = this;
    (*(void (__fastcall **)(ExecutionModel::ResourcePolicyStore *))(*(_QWORD *)this + 8LL))(this);
    return 0LL;
  }
}
