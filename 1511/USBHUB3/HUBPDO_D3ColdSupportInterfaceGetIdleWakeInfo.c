/*
 * XREFs of HUBPDO_D3ColdSupportInterfaceGetIdleWakeInfo @ 0x1C0067430
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0034FF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPDO_D3ColdSupportInterfaceGetIdleWakeInfo(_QWORD *a1, int a2, _DWORD *a3)
{
  __int64 (__fastcall *v3)(_QWORD); // rax
  __int64 result; // rax

  v3 = (__int64 (__fastcall *)(_QWORD))a1[44];
  if ( !v3 || (result = v3(a1[40]), (int)result < 0) )
  {
    if ( *(_DWORD *)(a1[2] + 700LL) >= a2 && (*(_DWORD *)(a1[3] + 1616LL) & 0x102) != 0 )
      *a3 = 3;
    else
      *a3 = 0;
    return 0LL;
  }
  return result;
}
