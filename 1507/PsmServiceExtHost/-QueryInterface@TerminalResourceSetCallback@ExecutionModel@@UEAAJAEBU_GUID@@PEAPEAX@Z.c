/*
 * XREFs of ?QueryInterface@TerminalResourceSetCallback@ExecutionModel@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180048030
 * Callers:
 *     ?QueryInterface@TerminalResourceSetCallback@ExecutionModel@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800250B0 (-QueryInterface@TerminalResourceSetCallback@ExecutionModel@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ExecutionModel::TerminalResourceSetCallback::QueryInterface(
        ExecutionModel::TerminalResourceSetCallback *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v3; // rax
  __int64 v4; // rax

  v3 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_3c2b3928_ef07_4431_a60c_2cf464e0fe22.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_3c2b3928_ef07_4431_a60c_2cf464e0fe22.Data1 )
    v3 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_3c2b3928_ef07_4431_a60c_2cf464e0fe22.Data4;
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
    (*(void (__fastcall **)(ExecutionModel::TerminalResourceSetCallback *))(*(_QWORD *)this + 8LL))(this);
    return 0LL;
  }
}
