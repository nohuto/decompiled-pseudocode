/*
 * XREFs of ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C015D5B0
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C015CE30 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     Template_pqppqq @ 0x1C0021220 (Template_pqppqq.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00BBFA0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C014B0AC (-Blt@DXGCONTEXT@@QEAAJIIIPEAPEAV1@IPEBUtagRECT@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2,
        unsigned int a3,
        unsigned int a4,
        struct _D3DKMT_PRESENT_RGNS *a5)
{
  UINT v5; // edi
  __int64 v6; // r13
  UINT MoveRectCount; // eax
  UINT v11; // r12d
  const struct tagRECT *pDirtyRects; // rbp
  UINT v13; // esi
  struct tagRECT *Buffer; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  RECT *v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rdx
  __int64 v24; // r8
  unsigned int v25; // ebx
  struct DXGCONTEXT **v26; // [rsp+20h] [rbp-58h]

  v5 = 0;
  v6 = a4;
  if ( !a5 )
    return 0LL;
  MoveRectCount = a5->MoveRectCount;
  v11 = a5->DirtyRectCount + MoveRectCount;
  if ( MoveRectCount )
  {
    v13 = 16 * a5->DirtyRectCount;
    Buffer = (struct tagRECT *)AUTOEXPANDALLOCATION::GetBuffer(*((void ***)a2 + 4), v13 + 16 * MoveRectCount, 0);
    pDirtyRects = Buffer;
    if ( !Buffer )
    {
      v19 = WdLogNewEntry5_WdLowResource(v16, v15, v17, v18);
      *(_QWORD *)(v19 + 24) = 1875LL;
      WdLogEvent5_WdLowResource(v19);
      return 3221225495LL;
    }
    memmove(Buffer, a5->pDirtyRects, v13);
    v20 = (RECT *)&pDirtyRects[a5->DirtyRectCount];
    if ( a5->MoveRectCount )
    {
      do
      {
        v21 = v5++;
        *v20++ = a5->pMoveRects[v21].DestRect;
      }
      while ( v5 < a5->MoveRectCount );
    }
  }
  else
  {
    pDirtyRects = a5->pDirtyRects;
  }
  v22 = DXGCONTEXT::Blt(
          *((DXGCONTEXT **)a2 + 1),
          a3,
          v6,
          *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL),
          *((struct DXGCONTEXT ***)a2 + 5),
          v11,
          pDirtyRects);
  v25 = v22;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    LODWORD(v26) = *((_DWORD *)this + 11);
    Template_pqppqq((unsigned int)v26, v23, v24, this, v26, a3, v6, v11, v22);
  }
  return v25;
}
