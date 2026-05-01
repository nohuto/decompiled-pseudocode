/*
 * XREFs of ?RmpPsmAppFamilyTableRemove@@YAXPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x18001DD10
 * Callers:
 *     RmpPsmAppFamilyTableTryRemoveActivityHost @ 0x1800075E4 (RmpPsmAppFamilyTableTryRemoveActivityHost.c)
 *     RmpPsmAppFamilyTableAddActivityHost @ 0x180008494 (RmpPsmAppFamilyTableAddActivityHost.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpPsmAppFamilyTableRemove(_QWORD *P)
{
  _DWORD *v1; // r11
  _QWORD *v2; // rdx
  __int64 v3; // [rsp+50h] [rbp+8h]

  v1 = RmSvcGlobals;
  v3 = P[1] & (-1LL << (*((_DWORD *)RmSvcGlobals + 443) & 0x1F));
  v2 = (_QWORD *)(*((_QWORD *)RmSvcGlobals + 222)
                + 8LL
                * ((37
                  * (BYTE6(v3)
                   + 37
                   * (BYTE5(v3)
                    + 37
                    * (BYTE4(v3)
                     + 37 * (BYTE3(v3) + 37 * (BYTE2(v3) + 37 * (BYTE1(v3) + 37 * ((unsigned __int8)v3 + 11623883)))))))
                  + HIBYTE(v3)) & (unsigned int)((*((_DWORD *)RmSvcGlobals + 443) >> 5) - 1)));
  if ( (*P & 0x8000000000000002uLL) == 0x8000000000000002uLL )
    v2 = (_QWORD *)(*((_QWORD *)RmSvcGlobals + 222)
                  + 8LL
                  * ((37
                    * (BYTE6(v3)
                     + 37
                     * (BYTE5(v3)
                      + 37
                      * (BYTE4(v3)
                       + 37 * (BYTE3(v3) + 37 * (BYTE2(v3) + 37 * (BYTE1(v3) + 37 * ((unsigned __int8)v3 + 11623883)))))))
                    + HIBYTE(v3)) & (unsigned int)((*((_DWORD *)RmSvcGlobals + 443) >> 5) - 1)));
  while ( (*v2 & 1) == 0 )
  {
    if ( (_QWORD *)*v2 == P )
    {
      *v2 = *P;
      --v1[442];
      *P |= 0x8000000000000002uLL;
      break;
    }
    v2 = (_QWORD *)*v2;
  }
  RmpFreeHeap(P);
}
