/*
 * XREFs of ?QueryInterface@ResourcePolicyEngine@ExecutionModel@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180025210
 * Callers:
 *     ?QueryInterface@ResourcePolicyEngine@ExecutionModel@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002BF20 (-QueryInterface@ResourcePolicyEngine@ExecutionModel@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyEngine::QueryInterface(
        ExecutionModel::ResourcePolicyEngine *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rcx
  char *v5; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2fef24b9_1ab9_4527_9b3f_f617508ff1eb.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2fef24b9_1ab9_4527_9b3f_f617508ff1eb.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2fef24b9_1ab9_4527_9b3f_f617508ff1eb.Data4;
  v5 = 0LL;
  if ( !v4 )
    goto LABEL_4;
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9a126b80_b99e_42f7_906b_38c1d41fd8a8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9a126b80_b99e_42f7_906b_38c1d41fd8a8.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9a126b80_b99e_42f7_906b_38c1d41fd8a8.Data4;
  if ( !v7 )
  {
    if ( this )
      v5 = (char *)this + 8;
    *a3 = v5;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v8 )
  {
LABEL_4:
    *a3 = this;
LABEL_5:
    (*(void (__fastcall **)(ExecutionModel::ResourcePolicyEngine *))(*(_QWORD *)this + 8LL))(this);
    return 0LL;
  }
  *a3 = 0LL;
  return 2147500034LL;
}
