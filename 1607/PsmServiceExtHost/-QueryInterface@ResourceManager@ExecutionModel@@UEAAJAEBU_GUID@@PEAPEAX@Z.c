/*
 * XREFs of ?QueryInterface@ResourceManager@ExecutionModel@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18002CDE0
 * Callers:
 *     ?QueryInterface@ResourceManager@ExecutionModel@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180020AE0 (-QueryInterface@ResourceManager@ExecutionModel@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ResourceManager@ExecutionModel@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180020AF0 (-QueryInterface@ResourceManager@ExecutionModel@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::QueryInterface(
        ExecutionModel::ResourceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // r9
  char *v4; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  v4 = 0LL;
  if ( v3 )
  {
    *a3 = 0LL;
    return 2147500034LL;
  }
  else
  {
    if ( this )
      v4 = (char *)this + 8;
    *a3 = v4;
    (*(void (__fastcall **)(ExecutionModel::ResourceManager *))(*(_QWORD *)this + 8LL))(this);
    return 0LL;
  }
}
