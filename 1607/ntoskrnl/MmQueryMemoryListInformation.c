/*
 * XREFs of MmQueryMemoryListInformation @ 0x14001FA60
 * Callers:
 *     PfpMemoryListQuery @ 0x1400AC28C (PfpMemoryListQuery.c)
 *     EtwpLogMemInfo @ 0x140226584 (EtwpLogMemInfo.c)
 *     PfSnCheckActionsNeeded @ 0x1403E8FC4 (PfSnCheckActionsNeeded.c)
 *     PfpVolumePrefetchMetadata @ 0x1403EE924 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1403EECA0 (PfpPrefetchDirectoryStream.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     PfpPfnPrioRequest @ 0x14041A310 (PfpPfnPrioRequest.c)
 *     PfpPrefetchFilesTrickle @ 0x14042A684 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14042A9D8 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpPrefetchPrivatePages @ 0x14053392C (PfpPrefetchPrivatePages.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MmQueryMemoryListInformation(_OWORD *a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v5; // r9
  __int64 v6; // r11
  ULONG_PTR v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  __int128 v20; // [rsp+40h] [rbp-E8h]
  __int128 v21; // [rsp+50h] [rbp-D8h]
  __int128 v22; // [rsp+60h] [rbp-C8h]
  __int128 v23; // [rsp+70h] [rbp-B8h]
  __int128 v24; // [rsp+80h] [rbp-A8h]
  __int128 v25; // [rsp+90h] [rbp-98h]
  __int128 v26; // [rsp+A0h] [rbp-88h]
  __int128 v27; // [rsp+B0h] [rbp-78h]
  __int128 v28; // [rsp+C0h] [rbp-68h]
  __int128 v29; // [rsp+D0h] [rbp-58h]
  __int128 v30; // [rsp+E0h] [rbp-48h]

  *a4 = 0;
  if ( a2 < 0xB0 )
  {
    *a4 = 176;
    return 3221225476LL;
  }
  else
  {
    *(_QWORD *)&v20 = qword_140323C80;
    *((_QWORD *)&v20 + 1) = qword_140323CC0;
    v5 = qword_1403251C0;
    *(_QWORD *)&v21 = qword_1403251C0;
    *((_QWORD *)&v21 + 1) = qword_140325200;
    *(_QWORD *)&v22 = qword_1403243C0;
    v6 = qword_140325230;
    *((_QWORD *)&v22 + 1) = qword_140323D40;
    *((_QWORD *)&v26 + 1) = (unsigned int)dword_140324468;
    *(_QWORD *)&v23 = qword_140323D68;
    *(_QWORD *)&v27 = (unsigned int)dword_14032446C;
    *((_QWORD *)&v23 + 1) = qword_140323D90;
    *((_QWORD *)&v27 + 1) = (unsigned int)dword_140324470;
    *(_QWORD *)&v24 = qword_140323DB8;
    *(_QWORD *)&v28 = (unsigned int)dword_140324474;
    *((_QWORD *)&v24 + 1) = qword_140323DE0;
    *((_QWORD *)&v28 + 1) = (unsigned int)dword_140324478;
    *(_QWORD *)&v25 = qword_140323E08;
    *(_QWORD *)&v29 = (unsigned int)dword_14032447C;
    *((_QWORD *)&v25 + 1) = qword_140323E30;
    *((_QWORD *)&v29 + 1) = (unsigned int)dword_140324480;
    *(_QWORD *)&v26 = qword_140323E58;
    *(_QWORD *)&v30 = (unsigned int)dword_140324484;
    if ( qword_140323C80 > qword_140324E10 )
    {
      *(_QWORD *)&v20 = qword_140324E10;
      v7 = 0LL;
    }
    else
    {
      v7 = qword_140324E10 - qword_140323C80;
    }
    if ( qword_140323CC0 > v7 )
    {
      *((_QWORD *)&v20 + 1) = v7;
      v8 = 0LL;
    }
    else
    {
      v8 = v7 - qword_140323CC0;
    }
    if ( qword_1403251C0 > v8 )
    {
      v5 = v8;
      *(_QWORD *)&v21 = v8;
      v9 = 0LL;
    }
    else
    {
      v9 = v8 - qword_1403251C0;
    }
    if ( qword_140325200 > v9 )
    {
      *((_QWORD *)&v21 + 1) = v9;
      v10 = 0LL;
    }
    else
    {
      v10 = v9 - qword_140325200;
    }
    if ( qword_1403243C0 > v10 )
    {
      *(_QWORD *)&v22 = v10;
      v11 = 0LL;
    }
    else
    {
      v11 = v10 - qword_1403243C0;
    }
    if ( qword_140325230 >= v5 )
      v6 = v5;
    *((_QWORD *)&v30 + 1) = v6;
    if ( qword_140323D40 > v11 )
    {
      *((_QWORD *)&v22 + 1) = v11;
      v12 = 0LL;
    }
    else
    {
      v12 = v11 - qword_140323D40;
    }
    if ( qword_140323D68 > v12 )
    {
      *(_QWORD *)&v23 = v12;
      v13 = 0LL;
    }
    else
    {
      v13 = v12 - qword_140323D68;
    }
    if ( qword_140323D90 > v13 )
    {
      *((_QWORD *)&v23 + 1) = v13;
      v14 = 0LL;
    }
    else
    {
      v14 = v13 - qword_140323D90;
    }
    if ( qword_140323DB8 > v14 )
    {
      *(_QWORD *)&v24 = v14;
      v15 = 0LL;
    }
    else
    {
      v15 = v14 - qword_140323DB8;
    }
    if ( qword_140323DE0 > v15 )
    {
      *((_QWORD *)&v24 + 1) = v15;
      v16 = 0LL;
    }
    else
    {
      v16 = v15 - qword_140323DE0;
    }
    if ( qword_140323E08 > v16 )
    {
      *(_QWORD *)&v25 = v16;
      v17 = 0LL;
    }
    else
    {
      v17 = v16 - qword_140323E08;
    }
    if ( qword_140323E30 > v17 )
    {
      *((_QWORD *)&v25 + 1) = v17;
      v18 = 0LL;
    }
    else
    {
      v18 = v17 - qword_140323E30;
    }
    if ( qword_140323E58 > v18 )
      *(_QWORD *)&v26 = v18;
    *a1 = v20;
    a1[1] = v21;
    a1[2] = v22;
    a1[3] = v23;
    a1[4] = v24;
    a1[5] = v25;
    a1[6] = v26;
    a1[7] = v27;
    a1[8] = v28;
    a1[9] = v29;
    a1[10] = v30;
    *a4 = 176;
    return 0LL;
  }
}
