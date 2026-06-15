/*
 * XREFs of ?AERTZoneAllocate@@YAPEAX_KPEAX@Z @ 0x140015480
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z @ 0x140014E50 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z.c)
 * Callees:
 *     ?AERTAddMemoryToHeap@@YAXPEAX_K@Z @ 0x14003C35C (-AERTAddMemoryToHeap@@YAXPEAX_K@Z.c)
 *     WPP_SF_Pq @ 0x14003CAB8 (WPP_SF_Pq.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z @ 0x14003E008 (-AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z.c)
 */

__int64 __fastcall AERTZoneAllocate(unsigned __int64 a1, void *a2)
{
  void *v4; // rdx
  unsigned int v5; // ecx
  int v6; // esi
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // [rsp+38h] [rbp-20h]
  unsigned __int64 v11; // [rsp+40h] [rbp-18h]
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = 0LL;
  v6 = RtlAllocateMemoryZone(a2, a1, &v12);
  if ( !v12 )
  {
    v8 = 0x100000LL;
    if ( a1 > 0x100000 )
      v8 = (a1 + 0x2000) & 0xFFFFFFFFFFFFE000uLL;
    AERTAddMemoryToHeap(a2, v8);
    v6 = RtlAllocateMemoryZone(a2, a1, &v12);
    if ( !v12 )
    {
      v5 = (unsigned int)WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
      {
        WPP_SF_Pq(*((_QWORD *)WPP_GLOBAL_Control + 2), 54LL, v9, a1, a2);
      }
    }
  }
  AEWMILOG_MEMORY(v5, v4, 6u, a2, a1, 0LL, 0LL, v10, v11, v6);
  return v12;
}
