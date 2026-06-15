/*
 * XREFs of ?NDQueryInterface@CAPOExceptionWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008C880
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?QIInternal@CAPOExceptionWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18008CAD0 (-QIInternal@CAPOExceptionWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CAPOExceptionWrapper::NDQueryInterface(void **this, const struct _GUID *a2, void **a3)
{
  char *v3; // rdi
  __int64 v4; // rax
  int v7; // ebp
  __int64 v8; // rax
  char *v9; // rcx
  __int64 v10; // rax
  char *v11; // rax
  char *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  void **v15; // r8
  __int64 v16; // rax

  v3 = 0LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  v7 = 0;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v4 )
  {
    if ( this )
      v3 = (char *)(this + 1);
    *a3 = v3;
    goto LABEL_42;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data4;
  if ( !v8 )
  {
    if ( !this[12] )
    {
      v7 = CAPOExceptionWrapper::QIInternal((CAPOExceptionWrapper *)this, a2, this + 12);
      if ( v7 >= 0 )
        *a3 = this + 1;
      return (unsigned int)v7;
    }
    v9 = (char *)(this + 1);
    *a3 = v9;
    goto LABEL_43;
  }
  v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data1 )
    v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data4;
  if ( !v10 )
  {
    if ( !this[14] )
    {
      v7 = CAPOExceptionWrapper::QIInternal((CAPOExceptionWrapper *)this, a2, this + 14);
      if ( v7 >= 0 )
      {
        v11 = (char *)(this + 2);
LABEL_39:
        *a3 = v11;
        return (unsigned int)v7;
      }
      return (unsigned int)v7;
    }
    v12 = (char *)(this + 2);
    goto LABEL_41;
  }
  v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data1 )
    v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data4;
  if ( !v13 )
  {
    if ( !this[13] )
    {
      v7 = CAPOExceptionWrapper::QIInternal((CAPOExceptionWrapper *)this, a2, this + 13);
      if ( v7 >= 0 )
      {
        v11 = (char *)(this + 3);
        goto LABEL_39;
      }
      return (unsigned int)v7;
    }
    v12 = (char *)(this + 3);
LABEL_41:
    *a3 = v12;
LABEL_42:
    v9 = (char *)(this + 1);
LABEL_43:
    (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 8LL))(v9);
    return (unsigned int)v7;
  }
  v14 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data1 )
    v14 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data4;
  if ( !v14 )
  {
    v15 = this + 15;
LABEL_36:
    if ( !*v15 )
    {
      v7 = CAPOExceptionWrapper::QIInternal((CAPOExceptionWrapper *)this, a2, v15);
      if ( v7 >= 0 )
      {
        v11 = (char *)(this + 4);
        goto LABEL_39;
      }
      return (unsigned int)v7;
    }
    v12 = (char *)(this + 4);
    goto LABEL_41;
  }
  v16 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data1 )
    v16 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data4;
  if ( !v16 )
  {
    v15 = this + 16;
    goto LABEL_36;
  }
  return CAPOExceptionWrapper::QIInternal((CAPOExceptionWrapper *)this, a2, a3);
}
