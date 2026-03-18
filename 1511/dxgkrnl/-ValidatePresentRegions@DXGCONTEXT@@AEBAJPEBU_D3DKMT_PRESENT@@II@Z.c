/*
 * XREFs of ?ValidatePresentRegions@DXGCONTEXT@@AEBAJPEBU_D3DKMT_PRESENT@@II@Z @ 0x1C007DA74
 * Callers:
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x1C007F400 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGCONTEXT::ValidatePresentRegions(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT *a2,
        int a3,
        int a4)
{
  D3DKMT_PRESENT_RGNS *pPresentRegions; // rcx
  __int64 v5; // rbx
  UINT v9; // r11d
  UINT MoveRectCount; // r14d
  const D3DKMT_MOVE_RECT *pMoveRects; // r10
  UINT DirtyRectCount; // r11d
  UINT v13; // r10d
  const RECT *i; // rdi
  __int64 right; // rcx
  int left; // edx
  int bottom; // r8d
  int top; // r9d
  __int64 v20; // rax
  _QWORD *v21; // rdx
  int *p_bottom; // rdi
  int v23; // edx
  int v24; // r8d
  int v25; // eax
  int v26; // r9d
  int v27; // ebp
  int v28; // eax
  _QWORD *v29; // rdx
  __int64 v30; // rcx
  _QWORD *v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rcx
  _DWORD v34[2]; // [rsp+20h] [rbp-38h]
  int v35; // [rsp+28h] [rbp-30h]
  int v36; // [rsp+2Ch] [rbp-2Ch]

  pPresentRegions = a2->pPresentRegions;
  v5 = 0LL;
  v9 = 0;
  MoveRectCount = pPresentRegions->MoveRectCount;
  pMoveRects = pPresentRegions->pMoveRects;
  if ( MoveRectCount )
  {
    p_bottom = &pMoveRects->DestRect.bottom;
    while ( 1 )
    {
      v23 = *(p_bottom - 1);
      v24 = *(p_bottom - 3);
      if ( v23 <= v24 )
        break;
      v25 = *p_bottom;
      v26 = *(p_bottom - 2);
      if ( *p_bottom <= v26 || v23 > a3 || v25 > a4 || v24 < 0 || v26 < 0 )
        break;
      v27 = *(p_bottom - 4);
      v34[0] = pMoveRects->SourcePoint.x;
      v28 = v27 + v25 - v26;
      v34[1] = v27;
      v35 = v34[0] + v23 - v24;
      v36 = v28;
      if ( v35 > a3 || v28 > a4 || v34[0] < 0 || v27 < 0 )
      {
        v20 = WdLogNewEntry5_WdError(pPresentRegions);
        *(_QWORD *)(v20 + 24) = -1073741811LL;
        v29 = (_QWORD *)(v20 + 32);
        do
        {
          v30 = (int)v34[v5++];
          *v29++ = v30;
        }
        while ( v5 < 4 );
        goto LABEL_31;
      }
      ++v9;
      ++pMoveRects;
      p_bottom += 6;
      if ( v9 >= MoveRectCount )
        goto LABEL_2;
    }
    v20 = WdLogNewEntry5_WdError(pPresentRegions);
    *(_QWORD *)(v20 + 24) = -1073741811LL;
    v31 = (_QWORD *)(v20 + 32);
    do
    {
      v32 = p_bottom[v5++ - 3];
      *v31++ = v32;
    }
    while ( v5 < 4 );
LABEL_31:
    WdLogEvent5_WdError(v20);
    return 3221225485LL;
  }
  else
  {
LABEL_2:
    DirtyRectCount = pPresentRegions->DirtyRectCount;
    v13 = 0;
    for ( i = pPresentRegions->pDirtyRects; v13 < DirtyRectCount; ++i )
    {
      right = (unsigned int)i->right;
      left = i->left;
      if ( ((a2->Flags.Value >> 28) & 1) != 0 )
      {
        if ( (int)right < left || (bottom = i->bottom, top = i->top, bottom < top) )
        {
LABEL_12:
          v20 = WdLogNewEntry5_WdError(right);
          *(_QWORD *)(v20 + 24) = -1073741811LL;
          v21 = (_QWORD *)(v20 + 32);
          do
          {
            v33 = *(&i->left + v5++);
            *v21++ = v33;
          }
          while ( v5 < 4 );
          goto LABEL_31;
        }
      }
      else
      {
        if ( (int)right <= left )
          goto LABEL_12;
        bottom = i->bottom;
        top = i->top;
        if ( bottom <= top )
          goto LABEL_12;
      }
      if ( (int)right > a3 || bottom > a4 || left < 0 || top < 0 )
        goto LABEL_12;
      ++v13;
    }
    return 0LL;
  }
}
