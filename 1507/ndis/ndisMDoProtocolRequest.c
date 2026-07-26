/*
 * XREFs of ndisMDoProtocolRequest @ 0x1C00D070C
 * Callers:
 *     ndisCleanUpForProtocol @ 0x1C009BEB0 (ndisCleanUpForProtocol.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C00036AC (ndisQuerySetMiniport.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0018F9C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMDoProtocolRequest(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, unsigned int a6)
{
  unsigned int v9; // edi
  void *v10; // rbx
  __int64 v11; // r9
  int SetMiniport; // eax
  __int64 v14; // [rsp+20h] [rbp-E0h]
  _BYTE v15[248]; // [rsp+30h] [rbp-D0h] BYREF

  v9 = 0;
  if ( (unsigned __int8)byte_1C008530D >= 4u )
    WPP_SF_qD(0x39u, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a1, a3);
  v10 = *(void **)(a1 + 16);
  memset(v15, 0, sizeof(v15));
  *(_DWORD *)&v15[88] |= 8u;
  *(_DWORD *)v15 = 16253334;
  *(_QWORD *)&v15[104] = a1;
  ndisMReferenceOpen(a1, 6u);
  *(_DWORD *)&v15[4] = 1;
  *(_DWORD *)&v15[88] |= 0x220u;
  LOBYTE(v11) = 1;
  *(_DWORD *)v15 = 16253334;
  *(_DWORD *)&v15[32] = a3;
  *(_QWORD *)&v15[40] = a4;
  *(_DWORD *)&v15[48] = a5;
  SetMiniport = ndisQuerySetMiniport(v10, 0LL, (struct _NDIS_OID_REQUEST *)v15, v11, 0LL);
  if ( SetMiniport )
  {
    v9 = a6;
    if ( SetMiniport != -1 )
      v9 = a6 + 1;
  }
  if ( (unsigned __int8)byte_1C008530D >= 4u )
  {
    LODWORD(v14) = v9;
    WPP_SF_qdD(0x3Au, &WPP_0009299248ba37495192320194ebfcad_Traceguids, a1, a3, v14);
  }
  return v9;
}
