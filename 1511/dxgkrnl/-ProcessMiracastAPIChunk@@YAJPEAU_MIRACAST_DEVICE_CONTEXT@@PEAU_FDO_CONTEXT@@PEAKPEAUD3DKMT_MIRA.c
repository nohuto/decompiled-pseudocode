/*
 * XREFs of ?ProcessMiracastAPIChunk@@YAJPEAU_MIRACAST_DEVICE_CONTEXT@@PEAU_FDO_CONTEXT@@PEAKPEAUD3DKMT_MIRACAST_CHUNK_DATA@@2@Z @ 0x1C0023B78
 * Callers:
 *     DxgkMiracastGetNextChunkInfo @ 0x1C0026310 (DxgkMiracastGetNextChunkInfo.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ?RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ @ 0x1C0023CAC (-RemoveHead@MIRACAST_CHUNK_LIST@@QEAAPEAUMIRACAST_CHUNK@@XZ.c)
 */

__int64 __fastcall ProcessMiracastAPIChunk(
        struct _MIRACAST_DEVICE_CONTEXT *a1,
        struct _FDO_CONTEXT *a2,
        unsigned int *a3,
        struct D3DKMT_MIRACAST_CHUNK_DATA *a4,
        unsigned int *a5)
{
  struct D3DKMT_MIRACAST_CHUNK_DATA *v5; // r12
  __int64 v6; // rbp
  __int64 v10; // rax
  MIRACAST_CHUNK_LIST *v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // rax
  struct MIRACAST_CHUNK *v16; // r15
  __int64 v17; // rcx
  struct MIRACAST_CHUNK **v18; // rax
  __int64 v19; // rcx

  v5 = a4;
  v6 = *a3;
  if ( *((_BYTE *)a1 + 469) )
  {
    *((_BYTE *)a1 + 469) = 0;
    v10 = WdLogNewEntry5_WdWarning(a1, a2, a3, a4);
    WdLogEvent5_WdWarning(v10);
    return 3221225997LL;
  }
  else
  {
    v12 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)a1 + 46);
    v13 = *(_QWORD *)v12;
    if ( *(MIRACAST_CHUNK_LIST **)v12 == v12 || !v13 )
    {
      return 3221225534LL;
    }
    else
    {
      v14 = *(_DWORD *)(v13 + 40) + 28;
      if ( (unsigned int)v6 >= v14 )
      {
        do
        {
          v16 = MIRACAST_CHUNK_LIST::RemoveHead(v12);
          memmove(v5, (char *)v16 + 16, v14);
          v17 = *((_QWORD *)a2 + 242);
          LODWORD(v6) = v6 - v14;
          v5 = (struct D3DKMT_MIRACAST_CHUNK_DATA *)((char *)v5 + v14);
          v18 = *(struct MIRACAST_CHUNK ***)(v17 + 8);
          *(_QWORD *)v16 = v17;
          *((_QWORD *)v16 + 1) = v18;
          if ( *v18 != (struct MIRACAST_CHUNK *)v17 )
            __fastfail(3u);
          *v18 = v16;
          *(_QWORD *)(v17 + 8) = v16;
          ++*(_DWORD *)(v17 + 16);
          v12 = (MIRACAST_CHUNK_LIST *)*((_QWORD *)a1 + 46);
          v19 = *(_QWORD *)v12;
          if ( *(MIRACAST_CHUNK_LIST **)v12 == v12 )
            break;
          if ( !v19 )
            break;
          v14 = *(_DWORD *)(v19 + 40) + 28;
        }
        while ( v14 <= (unsigned int)v6 );
        *a5 = *((_DWORD *)v12 + 4);
        *a3 -= v6;
        return 0LL;
      }
      else
      {
        v15 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v15 + 32) = v14;
        *(_QWORD *)(v15 + 24) = v6;
        WdLogEvent5_WdError(v15);
        return 3221225507LL;
      }
    }
  }
}
