/*
 * XREFs of ndisOidPreOffloadEncapsulation @ 0x1C00AA4F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z @ 0x1C002263C (-ndisOidPreMiniportSetEncapsulation@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAH@Z.c)
 *     ndisOidPreOpenSetEncapsulation @ 0x1C002281C (ndisOidPreOpenSetEncapsulation.c)
 *     WPP_SF_qqDD @ 0x1C0038468 (WPP_SF_qqDD.c)
 *     WPP_SF_qqq @ 0x1C00384C4 (WPP_SF_qqq.c)
 *     ndisOidPreQueryOffloadEncapsulation @ 0x1C0043F5C (ndisOidPreQueryOffloadEncapsulation.c)
 */

unsigned __int8 __fastcall ndisOidPreOffloadEncapsulation(__int64 a1)
{
  struct _NDIS_MINIPORT_BLOCK *v1; // r14
  __int64 v3; // rdi
  __int64 v4; // r15
  _DWORD *v5; // rsi
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rbp
  char OffloadEncapsulation; // al
  unsigned __int8 v10; // di
  __int64 v12; // [rsp+20h] [rbp-28h]

  v1 = *(struct _NDIS_MINIPORT_BLOCK **)a1;
  v3 = *(_QWORD *)(a1 + 32);
  v4 = *(_QWORD *)(a1 + 24);
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
    WPP_SF_qqq(0xC3u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v1, v4, v3);
  v5 = (_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 40) = -1073741637;
  v6 = *(_DWORD *)(v3 + 4);
  if ( !v6 )
    goto LABEL_17;
  v7 = v6 - 1;
  if ( !v7 )
  {
    v8 = *(_QWORD *)(a1 + 32);
    if ( (*(_DWORD *)(v8 + 88) & 0x20) == 0
      || (OffloadEncapsulation = ndisOidPreOpenSetEncapsulation(
                                   *(_QWORD *)(a1 + 24),
                                   *(_QWORD *)(a1 + 32),
                                   (_DWORD *)(a1 + 40)),
          OffloadEncapsulation != 1) )
    {
      if ( *(_QWORD *)a1 )
        OffloadEncapsulation = ndisOidPreMiniportSetEncapsulation(
                                 *(struct _NDIS_MINIPORT_BLOCK **)a1,
                                 (struct _NDIS_OID_REQUEST *)v8,
                                 (int *)(a1 + 40));
      else
        OffloadEncapsulation = 0;
    }
    goto LABEL_8;
  }
  if ( v7 == 1 )
  {
LABEL_17:
    OffloadEncapsulation = ndisOidPreQueryOffloadEncapsulation((__int64 *)a1);
LABEL_8:
    v10 = OffloadEncapsulation;
    goto LABEL_9;
  }
  *v5 = -1073741637;
  v10 = 1;
LABEL_9:
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
  {
    LODWORD(v12) = v10;
    WPP_SF_qqDD(0xC4u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, v1, v4, v12, *v5);
  }
  return v10;
}
