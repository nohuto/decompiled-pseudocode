/*
 * XREFs of ?ndisNsiRegisterChangeNotification@@YAJPEAU_NM_REQUEST_REGISTER_CHANGE_NOTIFICATION@@@Z @ 0x1C00B18E0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisNsiRegisterChangeNotification(struct _NM_REQUEST_REGISTER_CHANGE_NOTIFICATION *a1)
{
  char v2; // cl
  unsigned __int64 v3; // rax
  int v4; // eax
  int v5; // eax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm0

  v2 = byte_1C008531D;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
  {
    WPP_SF_q(0x8Au, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, (__int64)a1);
    v2 = byte_1C008531D;
  }
  v3 = *((_QWORD *)a1 + 1);
  if ( v3 <= 7 )
  {
    if ( (_DWORD)v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        v5 = v4 - 5;
        if ( v5 )
        {
          if ( v5 == 1 )
          {
            v17 = *(_OWORD *)a1;
            byte_1C0085040 = 1;
            v18 = *((_OWORD *)a1 + 1);
            ndisNsiSavedCompartmentChangeNotification = v17;
            v19 = *((_OWORD *)a1 + 2);
            xmmword_1C0085000 = v18;
            v20 = *((_OWORD *)a1 + 3);
            xmmword_1C0085010 = v19;
            v21 = *((_OWORD *)a1 + 4);
            xmmword_1C0085020 = v20;
            xmmword_1C0085030 = v21;
          }
        }
        else
        {
          v6 = *(_OWORD *)a1;
          byte_1C0084FE0 = 1;
          v7 = *((_OWORD *)a1 + 1);
          ndisNsiSavedNetworkChangeNotification = v6;
          v8 = *((_OWORD *)a1 + 2);
          xmmword_1C0084FA0 = v7;
          v9 = *((_OWORD *)a1 + 3);
          xmmword_1C0084FB0 = v8;
          v10 = *((_OWORD *)a1 + 4);
          xmmword_1C0084FC0 = v9;
          xmmword_1C0084FD0 = v10;
        }
      }
      else
      {
        v11 = *(_OWORD *)a1;
        byte_1C0084F80 = 1;
        v12 = *((_OWORD *)a1 + 1);
        ndisNsiSavedInterfaceChangeNotification = v11;
        v13 = *((_OWORD *)a1 + 2);
        xmmword_1C0084F40 = v12;
        v14 = *((_OWORD *)a1 + 3);
        xmmword_1C0084F50 = v13;
        v15 = *((_OWORD *)a1 + 4);
        xmmword_1C0084F60 = v14;
        xmmword_1C0084F70 = v15;
      }
    }
    else
    {
      v22 = *(_OWORD *)a1;
      byte_1C00850A0 = 1;
      v23 = *((_OWORD *)a1 + 1);
      ndisNsiSavedInterfaceInfoChangeNotification = v22;
      v24 = *((_OWORD *)a1 + 2);
      xmmword_1C0085060 = v23;
      v25 = *((_OWORD *)a1 + 3);
      xmmword_1C0085070 = v24;
      v26 = *((_OWORD *)a1 + 4);
      xmmword_1C0085080 = v25;
      xmmword_1C0085090 = v26;
    }
  }
  if ( (unsigned __int8)v2 >= 4u )
    WPP_SF_qD(0x8Bu, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, (__int64)a1, 0);
  return 0LL;
}
