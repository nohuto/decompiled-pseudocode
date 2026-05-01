/*
 * XREFs of ?QueryInterface@HostResourceInfo@ExecutionModel@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180044580
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::HostResourceInfo::QueryInterface(
        ExecutionModel::HostResourceInfo *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v3 )
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
  else
  {
    *a3 = this;
    (*(void (__fastcall **)(ExecutionModel::HostResourceInfo *))(*(_QWORD *)this + 8LL))(this);
    return 0LL;
  }
}
