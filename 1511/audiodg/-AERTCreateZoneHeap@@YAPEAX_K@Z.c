/*
 * XREFs of ?AERTCreateZoneHeap@@YAPEAX_K@Z @ 0x1400154F8
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z @ 0x140014E50 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z.c)
 *     ?Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K00I@Z @ 0x140039F40 (-Initialize@CCrossProcessBaseClientEndpoint@@UEAAJ_K00I@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x140027D74 (WPP_SF_.c)
 *     ?AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z @ 0x14003E008 (-AEWMILOG_MEMORY@@YAXKPEAXE0_K11111@Z.c)
 */

void *__fastcall AERTCreateZoneHeap(unsigned __int64 a1)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned __int64 v4; // rdi
  void *v5; // rdx
  unsigned __int64 v7; // [rsp+38h] [rbp-20h]
  unsigned __int64 v8; // [rsp+40h] [rbp-18h]
  void *v9; // [rsp+68h] [rbp+10h] BYREF

  v9 = 0LL;
  v2 = RtlCreateMemoryZone(&v9, a1, 0LL);
  v4 = v2;
  v5 = (void *)(v2 & 0xC0000000);
  if ( (_DWORD)v5 == -1073741824 )
  {
    v3 = (unsigned int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 49LL, &WPP_f57117be53b4cbf9f41dc81f4995e76c_Traceguids);
    }
  }
  AEWMILOG_MEMORY(v3, v5, 3u, v9, a1, 0LL, 0LL, v7, v8, v4);
  return v9;
}
