/*
 * XREFs of MmQueryMemoryListInformation @ 0x1400FCAC0
 * Callers:
 *     PfpMemoryListQuery @ 0x1400EECF4 (PfpMemoryListQuery.c)
 *     EtwpLogMemInfo @ 0x14020E8A4 (EtwpLogMemInfo.c)
 *     PfpPfnPrioRequest @ 0x140415750 (PfpPfnPrioRequest.c)
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     PfSnCheckActionsNeeded @ 0x1404D78A0 (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchFilesTrickle @ 0x1404D95B0 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1404D9904 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpVolumePrefetchMetadata @ 0x1404DC308 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1404DC6A4 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchPrivatePages @ 0x1404EAEF0 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
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
    *(_QWORD *)&v18 = qword_1403003C0;
    *((_QWORD *)&v18 + 1) = qword_140300400;
    v4 = qword_1403014C0;
    *(_QWORD *)&v19 = qword_1403014C0;
    *((_QWORD *)&v19 + 1) = qword_140301500;
    *(_QWORD *)&v20 = qword_140300B00;
    *((_QWORD *)&v28 + 1) = qword_140301530;
    *((_QWORD *)&v20 + 1) = qword_140300480;
    *((_QWORD *)&v24 + 1) = (unsigned int)dword_140300BA8;
    *(_QWORD *)&v21 = qword_1403004A8;
    *(_QWORD *)&v25 = (unsigned int)dword_140300BAC;
    *((_QWORD *)&v21 + 1) = qword_1403004D0;
    *((_QWORD *)&v25 + 1) = (unsigned int)dword_140300BB0;
    *(_QWORD *)&v22 = qword_1403004F8;
    *(_QWORD *)&v26 = (unsigned int)dword_140300BB4;
    *((_QWORD *)&v22 + 1) = qword_140300520;
    *((_QWORD *)&v26 + 1) = (unsigned int)dword_140300BB8;
    *(_QWORD *)&v23 = qword_140300548;
    *(_QWORD *)&v27 = (unsigned int)dword_140300BBC;
    *((_QWORD *)&v23 + 1) = qword_140300570;
    *((_QWORD *)&v27 + 1) = (unsigned int)dword_140300BC0;
    *(_QWORD *)&v24 = qword_140300598;
    *(_QWORD *)&v28 = (unsigned int)dword_140300BC4;
    if ( qword_1403003C0 > qword_140301390 )
    {
      *(_QWORD *)&v18 = qword_140301390;
      v5 = 0LL;
    }
    else
    {
      v5 = qword_140301390 - qword_1403003C0;
    }
    if ( qword_140300400 > v5 )
    {
      *((_QWORD *)&v18 + 1) = v5;
      v6 = 0LL;
    }
    else
    {
      v6 = v5 - qword_140300400;
    }
    if ( qword_1403014C0 > v6 )
    {
      v4 = v6;
      *(_QWORD *)&v19 = v6;
      v7 = 0LL;
    }
    else
    {
      v7 = v6 - qword_1403014C0;
    }
    if ( qword_140301500 > v7 )
    {
      *((_QWORD *)&v19 + 1) = v7;
      v8 = 0LL;
    }
    else
    {
      v8 = v7 - qword_140301500;
    }
    if ( qword_140300B00 > v8 )
    {
      *(_QWORD *)&v20 = v8;
      v9 = 0LL;
    }
    else
    {
      v9 = v8 - qword_140300B00;
    }
    if ( qword_140301530 >= v4 )
      *((_QWORD *)&v28 + 1) = v4;
    if ( qword_140300480 > v9 )
    {
      *((_QWORD *)&v20 + 1) = v9;
      v10 = 0LL;
    }
    else
    {
      v10 = v9 - qword_140300480;
    }
    if ( qword_1403004A8 > v10 )
    {
      *(_QWORD *)&v21 = v10;
      v11 = 0LL;
    }
    else
    {
      v11 = v10 - qword_1403004A8;
    }
    if ( qword_1403004D0 > v11 )
    {
      *((_QWORD *)&v21 + 1) = v11;
      v12 = 0LL;
    }
    else
    {
      v12 = v11 - qword_1403004D0;
    }
    if ( qword_1403004F8 > v12 )
    {
      *(_QWORD *)&v22 = v12;
      v13 = 0LL;
    }
    else
    {
      v13 = v12 - qword_1403004F8;
    }
    if ( qword_140300520 > v13 )
    {
      *((_QWORD *)&v22 + 1) = v13;
      v14 = 0LL;
    }
    else
    {
      v14 = v13 - qword_140300520;
    }
    if ( qword_140300548 > v14 )
    {
      *(_QWORD *)&v23 = v14;
      v15 = 0LL;
    }
    else
    {
      v15 = v14 - qword_140300548;
    }
    if ( qword_140300570 > v15 )
    {
      *((_QWORD *)&v23 + 1) = v15;
      v16 = 0LL;
    }
    else
    {
      v16 = v15 - qword_140300570;
    }
    if ( qword_140300598 > v16 )
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
