/*
 * XREFs of NdisMWriteConfigBlock @ 0x1C00D2BB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

__int64 __fastcall NdisMWriteConfigBlock(_QWORD *a1, unsigned int a2, __int64 a3, unsigned int a4)
{
  __int64 (__fastcall *v8)(__int64, _QWORD, __int64, _QWORD); // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int v11; // edi

  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_q(0x7Bu, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, (__int64)a1);
  v8 = (__int64 (__fastcall *)(__int64, _QWORD, __int64, _QWORD))a1[614];
  if ( v8 && (v9 = a1[616]) != 0 && (v10 = a1[584]) != 0 && (*(_BYTE *)(v10 + 8) & 5) == 5 )
    v11 = v8(v9, a2, a3, a4);
  else
    v11 = -1073741637;
  if ( (unsigned __int8)byte_1C0083721 >= 4u )
    WPP_SF_q(0x7Cu, &WPP_3dc44b73c4002d6e64e2a4fa1641c080_Traceguids, (__int64)a1);
  return v11;
}
