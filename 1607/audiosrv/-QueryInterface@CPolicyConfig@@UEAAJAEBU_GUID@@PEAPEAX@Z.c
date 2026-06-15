/*
 * XREFs of ?QueryInterface@CPolicyConfig@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180032D90
 * Callers:
 *     ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x180032D24 (-GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPolicyConfig::QueryInterface(CPolicyConfig *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rax

  v3 = 0;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v6 )
      goto LABEL_8;
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00632a31_4d49_4167_8ae1_27f82ce135b1.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00632a31_4d49_4167_8ae1_27f82ce135b1.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00632a31_4d49_4167_8ae1_27f82ce135b1.Data4;
    if ( v7 )
    {
      *a3 = 0LL;
      return (unsigned int)-2147467262;
    }
    else
    {
LABEL_8:
      (*(void (__fastcall **)(CPolicyConfig *))(*(_QWORD *)this + 8LL))(this);
      *a3 = this;
    }
  }
  else
  {
    return (unsigned int)-2147467261;
  }
  return v3;
}
