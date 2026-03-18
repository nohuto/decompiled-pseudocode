/*
 * XREFs of ?MiracastProcessPendingDPCChunks@@YAEPEAX@Z @ 0x1C0023F70
 * Callers:
 *     <none>
 * Callees:
 *     ?AddChunkListToTail@MIRACAST_CHUNK_LIST@@QEAAXPEAV1@@Z @ 0x1C0023C40 (-AddChunkListToTail@MIRACAST_CHUNK_LIST@@QEAAXPEAV1@@Z.c)
 */

unsigned __int8 __fastcall MiracastProcessPendingDPCChunks(_WORD *a1)
{
  int v1; // r11d
  _WORD *v2; // r10
  __int64 v3; // rcx
  unsigned __int8 result; // al
  __int64 v5; // r10
  struct MIRACAST_CHUNK_LIST **v6; // r10
  struct MIRACAST_CHUNK_LIST *v7; // rdx
  struct MIRACAST_CHUNK_LIST *v8; // rdx

  v1 = 0;
  v2 = a1;
  a1[8] = 0;
  *((_BYTE *)a1 + 18) = 0;
  *((_DWORD *)a1 + 5) = 0;
  v3 = *(_QWORD *)a1;
  if ( *(_BYTE *)(v3 + 1873) )
  {
    *((_BYTE *)v2 + 17) = 1;
    return 0;
  }
  else
  {
    if ( *(_BYTE *)(v3 + 1872) )
    {
      MIRACAST_CHUNK_LIST::AddChunkListToTail(
        *(MIRACAST_CHUNK_LIST **)(v3 + 1880),
        *(struct MIRACAST_CHUNK_LIST **)(v3 + 1896));
      MIRACAST_CHUNK_LIST::AddChunkListToTail(
        *(MIRACAST_CHUNK_LIST **)(*(_QWORD *)v5 + 1880LL),
        *(struct MIRACAST_CHUNK_LIST **)(*(_QWORD *)v5 + 1888LL));
      MIRACAST_CHUNK_LIST::AddChunkListToTail(*((MIRACAST_CHUNK_LIST **)*v6 + 235), v6[1]);
      *(_BYTE *)(*(_QWORD *)v2 + 1872LL) = v1;
      *((_BYTE *)v2 + 16) = 1;
    }
    v7 = *(struct MIRACAST_CHUNK_LIST **)(*(_QWORD *)v2 + 1888LL);
    if ( *((_DWORD *)v7 + 4) != v1 )
    {
      MIRACAST_CHUNK_LIST::AddChunkListToTail(*((MIRACAST_CHUNK_LIST **)v2 + 1), v7);
      *((_BYTE *)v2 + 18) = 1;
    }
    v8 = *(struct MIRACAST_CHUNK_LIST **)(*(_QWORD *)v2 + 1896LL);
    if ( *((_DWORD *)v8 + 4) != v1 )
      MIRACAST_CHUNK_LIST::AddChunkListToTail(*(MIRACAST_CHUNK_LIST **)(*(_QWORD *)v2 + 1880LL), v8);
    result = 1;
    *((_DWORD *)v2 + 5) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v2 + 1880LL) + 16LL);
  }
  return result;
}
