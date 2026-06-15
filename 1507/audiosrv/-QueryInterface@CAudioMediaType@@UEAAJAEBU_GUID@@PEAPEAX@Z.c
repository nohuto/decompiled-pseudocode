/*
 * XREFs of ?QueryInterface@CAudioMediaType@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180066AC0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioMediaType::QueryInterface(CAudioMediaType *this, const struct _GUID *a2, void **a3)
{
  unsigned int v3; // edi
  __int64 v5; // rax
  __int64 v6; // rax

  v3 = 0;
  if ( !a3 )
    return 2147942487LL;
  *a3 = 0LL;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4e997f73_b71f_4798_873b_ed7dfcf15b4d.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4e997f73_b71f_4798_873b_ed7dfcf15b4d.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4e997f73_b71f_4798_873b_ed7dfcf15b4d.Data4;
  if ( !v5 )
    goto LABEL_10;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v6 )
  {
    return (unsigned int)-2147467262;
  }
  else
  {
LABEL_10:
    *a3 = this;
    (*(void (__fastcall **)(CAudioMediaType *))(*(_QWORD *)this + 8LL))(this);
  }
  return v3;
}
