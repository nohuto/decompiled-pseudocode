/*
 * XREFs of ?ndisPublishSleepStudyCustomDataCsTraffic@@YAXEPEBU_GUID@@PEAU_NDIS_MINIPORT_CS_TRAFFIC_STATS@@1@Z @ 0x1C00DCDFC
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006DAA4 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     ?ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z @ 0x1C00DCC3C (-ndisPublishSleepStudyCustomData@@YAXEPEBU_GUID@@PEBG_K@Z.c)
 */

void __fastcall ndisPublishSleepStudyCustomDataCsTraffic(
        char a1,
        const struct _GUID *a2,
        struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *a3,
        struct _NDIS_MINIPORT_CS_TRAFFIC_STATS *a4)
{
  __int64 v4; // rbx
  unsigned __int16 v7; // r10
  __int64 v8; // r11
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  unsigned __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned __int64 v15[12]; // [rsp+20h] [rbp-88h]

  v4 = 0LL;
  v7 = 0;
  v8 = 0LL;
  do
  {
    v9 = *(&a3->IfInUnicastPackets + v8++);
    v10 = v7++;
    v15[v10] = v9;
  }
  while ( v8 < 6 );
  v11 = 0LL;
  do
  {
    v12 = *(&a4->IfInUnicastPackets + v11++);
    v13 = v7++;
    v15[v13] = v12;
  }
  while ( v11 < 4 );
  v14 = 12LL;
  v15[v7] = a4->IfInBroadcastPackets;
  v15[(unsigned __int16)(v7 + 1)] = a4->IfOutBroadcastPackets;
  do
  {
    ndisPublishSleepStudyCustomData(a1, a2, off_1C0076DD0[v4], v15[v4]);
    ++v4;
    --v14;
  }
  while ( v14 );
}
