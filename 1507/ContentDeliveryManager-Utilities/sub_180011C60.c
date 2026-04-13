/*
 * XREFs of sub_180011C60 @ 0x180011C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180011C60(__int64 a1)
{
  __int16 v2; // ax
  unsigned __int16 v3; // dx
  unsigned __int16 **v4; // rcx
  unsigned __int16 *v5; // rdx

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1);
  v3 = -1;
  if ( v2 != -1 )
  {
    --**(_DWORD **)(a1 + 80);
    v4 = *(unsigned __int16 ***)(a1 + 56);
    v5 = (*v4)++;
    return *v5;
  }
  return v3;
}
