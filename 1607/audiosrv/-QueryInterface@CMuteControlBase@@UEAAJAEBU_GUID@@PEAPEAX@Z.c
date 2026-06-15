/*
 * XREFs of ?QueryInterface@CMuteControlBase@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180056160
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMuteControlBase::QueryInterface(CMuteControlBase *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = 0;
  if ( !a3 )
  {
    v3 = -2147467261;
    goto LABEL_11;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v6 )
  {
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a09513ed_c709_4d21_bd7b_5f34c47f3947.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a09513ed_c709_4d21_bd7b_5f34c47f3947.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a09513ed_c709_4d21_bd7b_5f34c47f3947.Data4;
    if ( v7 )
    {
      *a3 = 0LL;
      v3 = -2147467262;
LABEL_11:
      AudSrvTraceLoggingErrorHelper("CMuteControlBase::QueryInterface", 142, v3);
      return v3;
    }
  }
  (*(void (__fastcall **)(CMuteControlBase *))(*(_QWORD *)this + 8LL))(this);
  *a3 = this;
  return v3;
}
