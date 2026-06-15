/*
 * XREFs of ?QueryInterface@CPolicyConfig@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800388F0
 * Callers:
 *     ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x1800386C8 (-GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z.c)
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CPolicyConfig::QueryInterface(CPolicyConfig *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // edi
  __int64 v6; // rax
  __int64 v8; // rax

  v3 = 0;
  if ( a3 )
  {
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v6 )
      goto LABEL_5;
    v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ca286fc3_91fd_42c3_8e9b_caafa66242e3.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ca286fc3_91fd_42c3_8e9b_caafa66242e3.Data1 )
      v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ca286fc3_91fd_42c3_8e9b_caafa66242e3.Data4;
    if ( v8 )
    {
      *a3 = 0LL;
      return (unsigned int)-2147467262;
    }
    else
    {
LABEL_5:
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
