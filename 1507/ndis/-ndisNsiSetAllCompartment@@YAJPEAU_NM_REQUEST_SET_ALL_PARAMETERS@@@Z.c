/*
 * XREFs of ?ndisNsiSetAllCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@@Z @ 0x1C003CD80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ?ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@@Z @ 0x1C003B130 (-ndisIfCreateCompartment@@YAJPEAU_NM_REQUEST_SET_ALL_PARAMETERS@@PEAPEAU_NDIS_IF_COMPARTMENT_BLO.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C003B450 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiSetAllCompartment(struct _NM_REQUEST_SET_ALL_PARAMETERS *a1)
{
  int v2; // ecx
  unsigned int v3; // eax
  unsigned int v4; // ebx
  struct _NDIS_IF_COMPARTMENT_BLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_q(0x82u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, (__int64)a1);
  KeEnterCriticalRegion();
  if ( *((_DWORD *)a1 + 6) == 4 )
  {
    v2 = *((_DWORD *)a1 + 12);
    if ( ((unsigned int)(v2 - 1) > 1 || *((_QWORD *)a1 + 4) && *((_DWORD *)a1 + 10) == 1624) && v2 > 0 )
    {
      if ( v2 <= 2 )
      {
        v3 = ndisIfCreateCompartment(a1, &v6);
        goto LABEL_12;
      }
      if ( v2 == 3 )
      {
        v3 = ndisIfDeleteCompartment(**((_DWORD **)a1 + 2), **((unsigned int **)a1 + 2));
LABEL_12:
        v4 = v3;
        goto LABEL_14;
      }
    }
  }
  v4 = -1073741811;
LABEL_14:
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_qD(131LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1, v4);
  return v4;
}
