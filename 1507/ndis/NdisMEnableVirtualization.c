/*
 * XREFs of NdisMEnableVirtualization @ 0x1C00D9130
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall NdisMEnableVirtualization(__int64 a1, unsigned __int16 a2, __int64 a3, __int64 a4, char a5)
{
  char v5; // si
  char v6; // bp
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64, __int64, char); // rax
  __int64 v10; // rcx
  unsigned int v11; // ebx

  v5 = a4;
  v6 = a3;
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_q(0x6Eu, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, a1);
  v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, char))(a1 + 4856);
  if ( v9 && (v10 = *(_QWORD *)(a1 + 4880)) != 0 )
  {
    if ( a5 || !a2 )
    {
      LOBYTE(a4) = v5;
      LOBYTE(a3) = v6;
      v11 = v9(v10, a2, a3, a4, a5);
    }
    else
    {
      v11 = -1073741811;
    }
  }
  else
  {
    v11 = -1073741637;
  }
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_qD(0x6Fu, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, a1, v11);
  return v11;
}
