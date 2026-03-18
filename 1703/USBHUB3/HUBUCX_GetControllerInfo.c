/*
 * XREFs of HUBUCX_GetControllerInfo @ 0x1C0020B74
 * Callers:
 *     HUBHSM_Configuring @ 0x1C0007580 (HUBHSM_Configuring.c)
 *     HUBHSM_GettingRootHubInfo @ 0x1C00089D0 (HUBHSM_GettingRootHubInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_GetControllerInfo(__int64 a1)
{
  _DWORD *v1; // rbx
  bool v3; // zf
  __int64 result; // rax

  v1 = (_DWORD *)(a1 + 160);
  (*(void (__fastcall **)(_QWORD, __int64))(a1 + 568))(*(_QWORD *)(a1 + 240), a1 + 160);
  v3 = *v1 == 3;
  *(_BYTE *)(a1 + 192) = 0;
  result = *(unsigned __int8 *)(a1 + 192);
  if ( v3 )
    result = 1LL;
  *(_BYTE *)(a1 + 192) = result;
  return result;
}
