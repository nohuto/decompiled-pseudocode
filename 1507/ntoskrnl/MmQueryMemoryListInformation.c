/*
 * XREFs of MmQueryMemoryListInformation @ 0x140013C30
 * Callers:
 *     PfpMemoryListQuery @ 0x140128D6C (PfpMemoryListQuery.c)
 *     EtwpLogMemInfo @ 0x14025DBCC (EtwpLogMemInfo.c)
 *     PfpPrefetchFilesTrickle @ 0x14042DB8C (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x14042DF28 (PfpUpdateRepurposedByPrefetch.c)
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     PfpVolumePrefetchMetadata @ 0x140455E28 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1404561D8 (PfpPrefetchDirectoryStream.c)
 *     PfpPfnPrioRequest @ 0x1404BEB40 (PfpPfnPrioRequest.c)
 *     PfSnCheckActionsNeeded @ 0x1404FDC54 (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchPrivatePages @ 0x14055C5B0 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall MmQueryMemoryListInformation(_OWORD *a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // r11
  ULONG_PTR v5; // rax
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  __int128 v18; // [rsp+40h] [rbp-E8h]
  __int128 v19; // [rsp+50h] [rbp-D8h]
  __int128 v20; // [rsp+60h] [rbp-C8h]
  __int128 v21; // [rsp+70h] [rbp-B8h]
  __int128 v22; // [rsp+80h] [rbp-A8h]
  __int128 v23; // [rsp+90h] [rbp-98h]
  __int128 v24; // [rsp+A0h] [rbp-88h]
  __int128 v25; // [rsp+B0h] [rbp-78h]
  __int128 v26; // [rsp+C0h] [rbp-68h]
  __int128 v27; // [rsp+D0h] [rbp-58h]
  __int128 v28; // [rsp+E0h] [rbp-48h]

  *a4 = 0;
  if ( a2 < 0xB0 )
  {
    *a4 = 176;
    return 3221225476LL;
  }
  else
  {
    *(_QWORD *)&v18 = qword_140354300;
    *((_QWORD *)&v18 + 1) = qword_140354340;
    v4 = qword_140355300;
    *(_QWORD *)&v19 = qword_140355300;
    *((_QWORD *)&v19 + 1) = qword_140355340;
    *(_QWORD *)&v20 = qword_140354A40;
    *((_QWORD *)&v28 + 1) = qword_140355370;
    *((_QWORD *)&v20 + 1) = qword_1403543C0;
    *((_QWORD *)&v24 + 1) = (unsigned int)dword_140354AA8;
    *(_QWORD *)&v21 = qword_1403543E8;
    *(_QWORD *)&v25 = (unsigned int)dword_140354AAC;
    *((_QWORD *)&v21 + 1) = qword_140354410;
    *((_QWORD *)&v25 + 1) = (unsigned int)dword_140354AB0;
    *(_QWORD *)&v22 = qword_140354438;
    *(_QWORD *)&v26 = (unsigned int)dword_140354AB4;
    *((_QWORD *)&v22 + 1) = qword_140354460;
    *((_QWORD *)&v26 + 1) = (unsigned int)dword_140354AB8;
    *(_QWORD *)&v23 = qword_140354488;
    *(_QWORD *)&v27 = (unsigned int)dword_140354ABC;
    *((_QWORD *)&v23 + 1) = qword_1403544B0;
    *((_QWORD *)&v27 + 1) = (unsigned int)dword_140354AC0;
    *(_QWORD *)&v24 = qword_1403544D8;
    *(_QWORD *)&v28 = (unsigned int)dword_140354AC4;
    if ( qword_140354300 > qword_1403551D0 )
    {
      *(_QWORD *)&v18 = qword_1403551D0;
      v5 = 0LL;
    }
    else
    {
      v5 = qword_1403551D0 - qword_140354300;
    }
    if ( qword_140354340 > v5 )
    {
      *((_QWORD *)&v18 + 1) = v5;
      v6 = 0LL;
    }
    else
    {
      v6 = v5 - qword_140354340;
    }
    if ( qword_140355300 > v6 )
    {
      v4 = v6;
      *(_QWORD *)&v19 = v6;
      v7 = 0LL;
    }
    else
    {
      v7 = v6 - qword_140355300;
    }
    if ( qword_140355340 > v7 )
    {
      *((_QWORD *)&v19 + 1) = v7;
      v8 = 0LL;
    }
    else
    {
      v8 = v7 - qword_140355340;
    }
    if ( qword_140354A40 > v8 )
    {
      *(_QWORD *)&v20 = v8;
      v9 = 0LL;
    }
    else
    {
      v9 = v8 - qword_140354A40;
    }
    if ( qword_140355370 >= v4 )
      *((_QWORD *)&v28 + 1) = v4;
    if ( qword_1403543C0 > v9 )
    {
      *((_QWORD *)&v20 + 1) = v9;
      v10 = 0LL;
    }
    else
    {
      v10 = v9 - qword_1403543C0;
    }
    if ( qword_1403543E8 > v10 )
    {
      *(_QWORD *)&v21 = v10;
      v11 = 0LL;
    }
    else
    {
      v11 = v10 - qword_1403543E8;
    }
    if ( qword_140354410 > v11 )
    {
      *((_QWORD *)&v21 + 1) = v11;
      v12 = 0LL;
    }
    else
    {
      v12 = v11 - qword_140354410;
    }
    if ( qword_140354438 > v12 )
    {
      *(_QWORD *)&v22 = v12;
      v13 = 0LL;
    }
    else
    {
      v13 = v12 - qword_140354438;
    }
    if ( qword_140354460 > v13 )
    {
      *((_QWORD *)&v22 + 1) = v13;
      v14 = 0LL;
    }
    else
    {
      v14 = v13 - qword_140354460;
    }
    if ( qword_140354488 > v14 )
    {
      *(_QWORD *)&v23 = v14;
      v15 = 0LL;
    }
    else
    {
      v15 = v14 - qword_140354488;
    }
    if ( qword_1403544B0 > v15 )
    {
      *((_QWORD *)&v23 + 1) = v15;
      v16 = 0LL;
    }
    else
    {
      v16 = v15 - qword_1403544B0;
    }
    if ( qword_1403544D8 > v16 )
      *(_QWORD *)&v24 = v16;
    *a1 = v18;
    a1[1] = v19;
    a1[2] = v20;
    a1[3] = v21;
    a1[4] = v22;
    a1[5] = v23;
    a1[6] = v24;
    a1[7] = v25;
    a1[8] = v26;
    a1[9] = v27;
    a1[10] = v28;
    *a4 = 176;
    return 0LL;
  }
}
