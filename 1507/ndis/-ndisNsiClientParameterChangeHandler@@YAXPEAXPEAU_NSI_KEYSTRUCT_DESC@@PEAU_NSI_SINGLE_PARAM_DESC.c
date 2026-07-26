/*
 * XREFs of ?ndisNsiClientParameterChangeHandler@@YAXPEAXPEAU_NSI_KEYSTRUCT_DESC@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00B0170
 * Callers:
 *     <none>
 * Callees:
 *     Template_j @ 0x1C003D8D4 (Template_j.c)
 *     Template_q @ 0x1C003D938 (Template_q.c)
 *     Template_qx @ 0x1C003DA10 (Template_qx.c)
 *     Template_qxqqq @ 0x1C003DA90 (Template_qxqqq.c)
 *     WPP_SF_DDDDDDDDDDD @ 0x1C003DB40 (WPP_SF_DDDDDDDDDDD.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     WPP_SF_ddLLL @ 0x1C003E1BC (WPP_SF_ddLLL.c)
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     WPP_SF_qqqL @ 0x1C003F558 (WPP_SF_qqqL.c)
 */

void __fastcall ndisNsiClientParameterChangeHandler(unsigned __int64 a1, int **a2, _DWORD *a3, int a4)
{
  int *v8; // r14
  __int64 v9; // [rsp+28h] [rbp-70h]

  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_qqqL(0x68u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1, a2, a3, a4);
  v8 = *a2;
  if ( *a2 && a1 <= 7 )
  {
    if ( (_DWORD)a1 )
    {
      switch ( (_DWORD)a1 )
      {
        case 1:
          if ( (unsigned __int8)byte_1C008531D >= 4u )
            WPP_SF_dd(
              0x6Au,
              &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids,
              *((unsigned __int16 *)v8 + 3),
              (*(_QWORD *)v8 >> 24) & 0xFFFFFF);
          if ( (Microsoft_Windows_NDISEnableBits & 0x2000) != 0 )
            Template_qx(
              (*(_QWORD *)*a2 >> 24) & 0xFFFFFFLL,
              (__int64)a2,
              (__int64)a3,
              *((unsigned __int16 *)*a2 + 3),
              (*(_QWORD *)*a2 >> 24) & 0xFFFFFFLL);
          break;
        case 6:
          if ( (unsigned __int8)byte_1C008531D >= 4u )
            WPP_SF_DDDDDDDDDDD(
              *((unsigned __int8 *)v8 + 14),
              *((unsigned __int8 *)v8 + 13),
              *v8,
              *((unsigned __int16 *)v8 + 2));
          if ( (Microsoft_Windows_NDISEnableBits & 0x2000) != 0 )
            Template_j(a1, (__int64)a2, (__int64)a3, (unsigned __int64)v8);
          break;
        case 7:
          if ( (unsigned __int8)byte_1C008531D >= 4u )
            WPP_SF_d(0x6Cu, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, *v8);
          if ( (Microsoft_Windows_NDISEnableBits & 0x2000) != 0 )
            Template_q(a1, &ChangeNotificationCompartment, &NDIS_PROVIDER_ID, **a2);
          break;
      }
    }
    else
    {
      if ( (unsigned __int8)byte_1C008531D >= 4u )
        WPP_SF_ddLLL(a1, (__int64)a2, *((unsigned __int16 *)v8 + 3), (*(_QWORD *)v8 >> 24) & 0xFFFFFF);
      if ( (Microsoft_Windows_NDISEnableBits & 0x2000) != 0 )
        Template_qxqqq(
          (*(_QWORD *)*a2 >> 24) & 0xFFFFFFLL,
          (__int64)a2,
          (__int64)a3,
          *((unsigned __int16 *)*a2 + 3),
          BYTE3(*(_QWORD *)*a2),
          *a3,
          a3[4],
          a3[5]);
    }
  }
  if ( (unsigned __int8)byte_1C008531D >= 4u )
  {
    LODWORD(v9) = a4;
    WPP_SF_qqqL(0x6Du, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1, a2, a3, v9);
  }
}
