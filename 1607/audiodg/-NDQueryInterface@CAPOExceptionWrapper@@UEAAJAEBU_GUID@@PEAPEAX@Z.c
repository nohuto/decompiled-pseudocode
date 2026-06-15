/*
 * XREFs of ?NDQueryInterface@CAPOExceptionWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400106E0
 * Callers:
 *     ?QueryInterface@CAPOExceptionWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140010870 (-QueryInterface@CAPOExceptionWrapper@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?QIInternal@CAPOExceptionWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400108A4 (-QIInternal@CAPOExceptionWrapper@@AEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOExceptionWrapper::NDQueryInterface(
        CAPOExceptionWrapper *this,
        const struct _GUID *a2,
        void **a3)
{
  int v3; // ebx
  __int64 v4; // rax
  void **v5; // rsi
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rax
  char *v13; // rax
  char *v14; // rcx
  char *v15; // rax

  v3 = 0;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  v5 = a3;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( !v4 )
  {
    v13 = (char *)this + 8;
    if ( !this )
      v13 = 0LL;
    *a3 = v13;
    goto LABEL_43;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data4;
  if ( !v7 )
  {
    a3 = (void **)((char *)this + 96);
    if ( *((_QWORD *)this + 12) )
    {
      v14 = (char *)this + 8;
      *v5 = v14;
LABEL_44:
      (*(void (__fastcall **)(char *, const struct _GUID *, void **))(*(_QWORD *)v14 + 8LL))(v14, a2, a3);
      return (unsigned int)v3;
    }
    result = CAPOExceptionWrapper::QIInternal(this, a2, a3);
    v3 = result;
    if ( (int)result < 0 )
      return (unsigned int)v3;
    *v5 = (char *)this + 8;
    return result;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_0e5ed805_aba6_49c3_8f9a_2b8c889c4fa8.Data4;
  if ( !v8 )
  {
    a3 = (void **)((char *)this + 112);
    if ( !*((_QWORD *)this + 14) )
    {
      v3 = CAPOExceptionWrapper::QIInternal(this, a2, a3);
      if ( v3 >= 0 )
        *v5 = (char *)this + 16;
      return (unsigned int)v3;
    }
    v15 = (char *)this + 16;
LABEL_42:
    *v5 = v15;
LABEL_43:
    v14 = (char *)this + 8;
    goto LABEL_44;
  }
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_9e1d6a6d_ddbc_4e95_a4c7_ad64ba37846c.Data4;
  if ( !v9 )
  {
    a3 = (void **)((char *)this + 104);
    if ( !*((_QWORD *)this + 13) )
    {
      v3 = CAPOExceptionWrapper::QIInternal(this, a2, a3);
      if ( v3 >= 0 )
        *v5 = (char *)this + 24;
      return (unsigned int)v3;
    }
    v15 = (char *)this + 24;
    goto LABEL_42;
  }
  v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data1 )
    v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b.Data4;
  if ( !v10 )
  {
    a3 = (void **)((char *)this + 120);
LABEL_17:
    if ( !*a3 )
    {
      v3 = CAPOExceptionWrapper::QIInternal(this, a2, a3);
      if ( v3 >= 0 )
        *v5 = (char *)this + 32;
      return (unsigned int)v3;
    }
    v15 = (char *)this + 32;
    goto LABEL_42;
  }
  v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data1 )
    v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data4;
  if ( !v12 )
  {
    a3 = (void **)((char *)this + 128);
    goto LABEL_17;
  }
  return CAPOExceptionWrapper::QIInternal(this, a2, a3);
}
