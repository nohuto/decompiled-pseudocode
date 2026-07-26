/*
 * XREFs of ?ndisOidPostMiniportSetEncapsulation@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1C0023AE8
 * Callers:
 *     ndisOidPostOffloadEncapsulation @ 0x1C0023980 (ndisOidPostOffloadEncapsulation.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisOidPostMiniportSetEncapsulation(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // r9
  __int64 v2; // r8
  __int64 v3; // rdx
  int v4; // eax
  __int64 v5; // xmm1_8

  v1 = *(_QWORD *)a1;
  v2 = *((_QWORD *)a1 + 4);
  v3 = *(_QWORD *)(*(_QWORD *)a1 + 4152LL);
  if ( v3 && *(_DWORD *)(v3 + 1184) )
  {
    *(_DWORD *)(v2 + 32) = *(_DWORD *)(v3 + 1184);
    *(_DWORD *)(v3 + 1184) = 0;
    *(_QWORD *)(v2 + 40) = *(_QWORD *)(*(_QWORD *)(v1 + 4152) + 1176LL);
    *(_QWORD *)(v3 + 1176) = 0LL;
    if ( !*((_DWORD *)a1 + 10) || *(_DWORD *)(v2 + 52) == *(_DWORD *)(v2 + 48) )
      *(_DWORD *)(v2 + 52) = *(_DWORD *)(*(_QWORD *)(v1 + 4152) + 1188LL);
    *(_DWORD *)(v2 + 48) = *(_DWORD *)(*(_QWORD *)(v1 + 4152) + 1188LL);
    *(_DWORD *)(v3 + 1188) = 0;
    if ( !*((_DWORD *)a1 + 10) )
    {
      v4 = *(_DWORD *)(v3 + 836);
      v5 = *(_QWORD *)(v3 + 828);
      *(_OWORD *)(v3 + 728) = *(_OWORD *)(v3 + 812);
      *(_QWORD *)(v3 + 744) = v5;
      *(_DWORD *)(v3 + 752) = v4;
    }
  }
}
