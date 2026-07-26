/*
 * XREFs of ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C003DE10
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003BE70 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C003C190 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 */

__int64 __fastcall ndisNsiSetAllCompartment(struct _NM_REQUEST_SET_ALL_PARAMETERS *a1)
{
  __int64 v2; // r8
  int v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // ebx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_q(0x82u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) == 4 )
  {
    v3 = *((_DWORD *)a1 + 12);
    if ( ((unsigned int)(v3 - 1) > 1 || *((_QWORD *)a1 + 4) && *((_DWORD *)a1 + 10) == 1624) && v3 > 0 )
    {
      if ( v3 <= 2 )
      {
        v4 = ndisIfCreateCompartment(a1, &v7, v2);
        goto LABEL_12;
      }
      if ( v3 == 3 )
      {
        v4 = ndisIfDeleteCompartment(**((_DWORD **)a1 + 2), **((unsigned int **)a1 + 2));
LABEL_12:
        v5 = v4;
        goto LABEL_14;
      }
    }
  }
  v5 = -1073741811;
LABEL_14:
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qD(0x83u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)a1, v5);
  return v5;
}
