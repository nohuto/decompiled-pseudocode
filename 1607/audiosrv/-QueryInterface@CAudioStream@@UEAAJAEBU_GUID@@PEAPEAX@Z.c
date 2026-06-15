/*
 * XREFs of ?QueryInterface@CAudioStream@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180019820
 * Callers:
 *     ?QueryInterface@CAudioStream@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039340 (-QueryInterface@CAudioStream@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAudioStream@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180039350 (-QueryInterface@CAudioStream@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioStream::QueryInterface(CAudioStream *this, const struct _GUID *a2, char **a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rax
  __int64 v7; // rax
  char *v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax

  v3 = 0;
  if ( !a3 )
    return 2147500035LL;
  v6 = *(_QWORD *)&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data1 - *(_QWORD *)&a2->Data1;
  if ( *(_QWORD *)&GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data1 == *(_QWORD *)&a2->Data1 )
    v6 = *(_QWORD *)GUID_2f732065_eff0_4c7c_8fc1_363851b1f1d7.Data4 - *(_QWORD *)a2->Data4;
  if ( v6 )
  {
    v7 = *(_QWORD *)&GUID_6b8960e3_cd73_496b_8e54_7b963e86ca83.Data1 - *(_QWORD *)&a2->Data1;
    if ( *(_QWORD *)&GUID_6b8960e3_cd73_496b_8e54_7b963e86ca83.Data1 == *(_QWORD *)&a2->Data1 )
      v7 = *(_QWORD *)GUID_6b8960e3_cd73_496b_8e54_7b963e86ca83.Data4 - *(_QWORD *)a2->Data4;
    if ( !v7 )
    {
      (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 8LL))(this);
      *a3 = (char *)this + 8;
      return v3;
    }
    v8 = (char *)this + 16;
    v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v9 )
    {
      *a3 = 0LL;
      return (unsigned int)-2147467262;
    }
    *a3 = v8;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v8 + 8LL))(v8);
    return 0LL;
  }
  else
  {
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 8LL))(this);
    result = 0LL;
    *a3 = (char *)this;
  }
  return result;
}
