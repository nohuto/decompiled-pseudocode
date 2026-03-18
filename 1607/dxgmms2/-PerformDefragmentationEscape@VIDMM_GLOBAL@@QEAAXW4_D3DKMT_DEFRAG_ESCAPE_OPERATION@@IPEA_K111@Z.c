/*
 * XREFs of ?PerformDefragmentationEscape@VIDMM_GLOBAL@@QEAAXW4_D3DKMT_DEFRAG_ESCAPE_OPERATION@@IPEA_K111@Z @ 0x1C008A468
 * Callers:
 *     ?Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z @ 0x1C0088B64 (-Escape@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_D3DKMT_VIDMM_ESCAPE@@H@Z.c)
 * Callees:
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1C00547B0 (-QueueSystemCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

void __fastcall VIDMM_GLOBAL::PerformDefragmentationEscape(
        VIDMM_GLOBAL *this,
        enum _D3DKMT_DEFRAG_ESCAPE_OPERATION a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  __int64 i; // rsi
  __int64 v7; // rax
  unsigned int v8; // edi
  unsigned int v9; // edx
  __int64 v10; // r14
  __int64 v11; // rcx
  _QWORD v12[12]; // [rsp+20h] [rbp-60h] BYREF

  if ( (unsigned int)(a2 - 1) <= 1 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1604); i = (unsigned int)(i + 1) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 3) + 2040LL) + 48 * i + 16) & 4) == 0 )
        continue;
      v7 = *((_QWORD *)this + 5017) + 456LL * (unsigned int)i;
      v8 = *(_DWORD *)(v7 + 4);
      v9 = v8 + *(_DWORD *)(v7 + 8);
      if ( v8 >= v9 )
        continue;
      v10 = *((_QWORD *)this + 464);
      while ( (*(_DWORD *)(*(_QWORD *)(v10 + 8LL * v8) + 56LL) & 0x1001) != 0 )
      {
        if ( ++v8 >= v9 )
          goto LABEL_16;
      }
      if ( v8 == -1 )
        continue;
      memset(v12, 0, 0x58uLL);
      LODWORD(v12[5]) = 0;
      LODWORD(v12[0]) = 126;
      HIDWORD(v12[0]) = i;
      HIDWORD(v12[5]) = v8;
      v12[8] = 0LL;
      LODWORD(v12[10]) = a2 != D3DKMT_DEFRAG_ESCAPE_DEFRAG_UPWARD;
      v11 = *(_QWORD *)(v10 + 8LL * v8);
      if ( (*(_BYTE *)(v11 + 58) & 1) != 0 )
      {
        v12[9] = 0LL;
        LODWORD(v12[7]) = 1;
        if ( (int)VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v12) < 0 )
          continue;
        LODWORD(v12[7]) = 2;
        if ( (int)VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v12) < 0 )
          continue;
        LODWORD(v12[7]) = 3;
      }
      else
      {
        v12[9] = *(_QWORD *)(v11 + 40);
      }
      VIDMM_GLOBAL::QueueSystemCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v12);
LABEL_16:
      ;
    }
  }
}
