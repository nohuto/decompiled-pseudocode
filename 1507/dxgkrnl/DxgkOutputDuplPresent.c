/*
 * XREFs of DxgkOutputDuplPresent @ 0x1C01495F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z @ 0x1C0149250 (-TranslateAndCopyDWMMoveRegionToDDAMoveRegions@@YAXKPEBU_D3DKMT_MOVE_RECT@@PEAU1@@Z.c)
 *     OutputDuplPresent @ 0x1C01563D4 (OutputDuplPresent.c)
 */

__int64 __fastcall DxgkOutputDuplPresent(__int64 a1)
{
  _OWORD *v1; // rdi
  __int64 v2; // rcx
  struct DXGPROCESS *Current; // r13
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  struct _D3DKMT_OUTPUTDUPLPRESENT *v12; // rcx
  __int64 v13; // rax
  unsigned __int64 v14; // r14
  unsigned __int64 v15; // rsi
  unsigned int v16; // eax
  RECT *v17; // rdi
  RECT *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  D3DKMT_MOVE_RECT *v21; // r15
  const RECT *pDirtyRects; // rdx
  const RECT *v23; // rcx
  UINT MoveRectCount; // ecx
  const D3DKMT_MOVE_RECT *v25; // r8
  unsigned int v26; // esi
  __int64 v27; // rax
  struct _D3DKMT_OUTPUTDUPLPRESENT v28; // [rsp+40h] [rbp-168h] BYREF

  v1 = (_OWORD *)a1;
  Current = DXGPROCESS::GetCurrent(a1);
  if ( !Current )
  {
    v4 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    *(_QWORD *)(v4 + 32) = PsGetCurrentProcess(v5);
    v6 = v4;
LABEL_3:
    WdLogEvent5_WdError(v6);
    return 3221225485LL;
  }
  if ( !(unsigned int)_guard_dispatch_icall_fptr() )
  {
    v11 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v11 + 24) = 8663LL;
    v6 = v11;
    goto LABEL_3;
  }
  if ( (unsigned __int64)v1 >= MmUserProbeAddress )
    v1 = (_OWORD *)MmUserProbeAddress;
  v12 = &v28;
  v13 = 2LL;
  do
  {
    *(_OWORD *)&v12->hContext = *v1;
    *(_OWORD *)v12->BroadcastContext = v1[1];
    *(_OWORD *)&v12->BroadcastContext[4] = v1[2];
    *(_OWORD *)&v12->BroadcastContext[8] = v1[3];
    *(_OWORD *)&v12->BroadcastContext[12] = v1[4];
    *(_OWORD *)&v12->BroadcastContext[16] = v1[5];
    *(_OWORD *)&v12->BroadcastContext[20] = v1[6];
    v12 = (struct _D3DKMT_OUTPUTDUPLPRESENT *)((char *)v12 + 128);
    *(_OWORD *)&v12[-1].PresentRegions.pMoveRects = v1[7];
    v1 += 8;
    --v13;
  }
  while ( v13 );
  *(_OWORD *)&v12->hContext = *v1;
  *(_OWORD *)v12->BroadcastContext = v1[1];
  *(_OWORD *)&v12->BroadcastContext[4] = v1[2];
  *(_QWORD *)&v12->BroadcastContext[8] = *((_QWORD *)v1 + 6);
  v14 = 16LL * v28.PresentRegions.DirtyRectCount;
  if ( v14 > 0xFFFFFFFF )
  {
    v27 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 128LL, v9, v10);
    *(_QWORD *)(v27 + 24) = 8682LL;
    goto LABEL_36;
  }
  v15 = 24LL * v28.PresentRegions.MoveRectCount;
  if ( v15 > 0xFFFFFFFF )
  {
    v27 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 128LL, v9, v10);
    *(_QWORD *)(v27 + 24) = 8689LL;
    goto LABEL_36;
  }
  v16 = v15 + v14;
  if ( (int)v15 + (int)v14 < (unsigned int)v15 )
  {
    v27 = WdLogNewEntry5_WdWarning(0xFFFFFFFFLL, 128LL, v9, v10);
    *(_QWORD *)(v27 + 24) = 8696LL;
LABEL_36:
    WdLogEvent5_WdWarning(v27);
    return 3221225621LL;
  }
  v17 = 0LL;
  if ( v16 )
  {
    v18 = (RECT *)operator new[](v16, 0x4B677844u, PagedPool);
    v17 = v18;
    if ( !v18 )
    {
      v20 = WdLogNewEntry5_WdLowResource(v19);
      *(_QWORD *)(v20 + 24) = 8707LL;
      WdLogEvent5_WdLowResource(v20);
      return 3221225495LL;
    }
    v21 = (D3DKMT_MOVE_RECT *)&v18[v28.PresentRegions.DirtyRectCount];
    if ( v28.PresentRegions.DirtyRectCount )
    {
      pDirtyRects = v28.PresentRegions.pDirtyRects;
      v23 = (const RECT *)((char *)v28.PresentRegions.pDirtyRects + (unsigned int)v14);
      if ( v23 < v28.PresentRegions.pDirtyRects || (unsigned __int64)v23 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      memmove(v18, pDirtyRects, (unsigned int)v14);
      v28.PresentRegions.pDirtyRects = v17;
    }
    else
    {
      v28.PresentRegions.pDirtyRects = 0LL;
    }
    MoveRectCount = v28.PresentRegions.MoveRectCount;
    if ( v28.PresentRegions.MoveRectCount )
    {
      if ( (_DWORD)v15 )
      {
        v25 = (const D3DKMT_MOVE_RECT *)((char *)v28.PresentRegions.pMoveRects + (unsigned int)v15);
        if ( (unsigned __int64)v25 > MmUserProbeAddress || v25 < v28.PresentRegions.pMoveRects )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
          MoveRectCount = v28.PresentRegions.MoveRectCount;
        }
      }
      TranslateAndCopyDWMMoveRegionToDDAMoveRegions(MoveRectCount, v28.PresentRegions.pMoveRects, v21);
      v28.PresentRegions.pMoveRects = v21;
    }
    else
    {
      v28.PresentRegions.pMoveRects = 0LL;
    }
  }
  else
  {
    v28.PresentRegions.pDirtyRects = 0LL;
    v28.PresentRegions.pMoveRects = 0LL;
  }
  v26 = OutputDuplPresent(&v28, Current);
  if ( v17 )
    operator delete(v17);
  return v26;
}
