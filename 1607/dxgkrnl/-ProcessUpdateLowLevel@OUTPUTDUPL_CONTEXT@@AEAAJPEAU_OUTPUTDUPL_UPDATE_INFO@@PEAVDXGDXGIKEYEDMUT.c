/*
 * XREFs of ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C01826F0
 * Callers:
 *     ?ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z @ 0x1C0182190 (-ProcessUpdateHighLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00DB4F8 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C017BE34 (-GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z.c)
 *     ?CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z @ 0x1C0180CB8 (-CombineNewMetaData@DDAMetaData@@QEAAHPEAU_D3DKMT_PRESENT_RGNS@@PEAT_LARGE_INTEGER@@HPEAH@Z.c)
 *     ?GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z @ 0x1C0181178 (-GetDirtyRectData@DDAMetaData@@AEAAPEAUtagRECT@@I@Z.c)
 *     ?SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C0182F10 (-SubmitBltForRegions@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@IIPEAU_D3DKMT_PRESENT.c)
 */

__int64 __fastcall OUTPUTDUPL_CONTEXT::ProcessUpdateLowLevel(
        OUTPUTDUPL_CONTEXT *this,
        struct _OUTPUTDUPL_UPDATE_INFO *a2,
        struct DXGDXGIKEYEDMUTEX *a3,
        struct _PRODUCER_INFO *a4,
        int *a5,
        int *a6)
{
  int v6; // r13d
  __int64 v10; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v12; // rcx
  __int64 v13; // r12
  struct _D3DKMT_PRESENT_RGNS *v14; // r12
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct tagRECT *DirtyRectData; // rax
  __int64 v22; // r8
  __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int128 v29; // xmm0
  unsigned int v30; // r14d
  void *Buffer; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rax
  union _LARGE_INTEGER v35; // [rsp+38h] [rbp-48h] BYREF
  struct _D3DKMT_PRESENT_RGNS v36; // [rsp+40h] [rbp-40h] BYREF
  struct DXGDXGIKEYEDMUTEX *v37; // [rsp+60h] [rbp-20h]
  struct tagRECT v38; // [rsp+68h] [rbp-18h] BYREF

  v6 = 0;
  v37 = a3;
  LODWORD(v10) = 0;
  if ( a5 )
    *a5 = 1;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v12 = *(unsigned int *)a2;
  v35 = PerformanceCounter;
  if ( (_DWORD)v12 )
  {
    if ( (unsigned int)(v12 - 1) <= 1 )
    {
      *(LARGE_INTEGER *)a4 = PerformanceCounter;
      v29 = *(_OWORD *)*((_QWORD *)a2 + 4);
      *((_DWORD *)a4 + 5) = 1;
      *(_OWORD *)((char *)a4 + 24) = v29;
      if ( *(_DWORD *)a2 == 2 )
      {
        v30 = *(_DWORD *)(*((_QWORD *)a2 + 3) + 8LL) * *(_DWORD *)(*((_QWORD *)a2 + 3) + 12LL);
        Buffer = AUTOEXPANDALLOCATION::GetBuffer(*((void ***)a4 + 11), v30, 0);
        if ( Buffer )
        {
          memmove(Buffer, *(const void **)(*((_QWORD *)a2 + 3) + 24LL), v30);
          v33 = *((_QWORD *)a2 + 3);
          *((_OWORD *)a4 + 3) = *(_OWORD *)v33;
          *((_OWORD *)a4 + 4) = *(_OWORD *)(v33 + 16);
          *((_QWORD *)a4 + 10) = *(_QWORD *)(v33 + 32);
          *((_QWORD *)a4 + 9) = 0LL;
          *((_DWORD *)a4 + 10) = 1;
        }
        else
        {
          v34 = WdLogNewEntry5_WdLowResource(v32);
          *(_QWORD *)(v34 + 24) = v30;
          *(_QWORD *)(v34 + 32) = *(unsigned int *)(*((_QWORD *)a2 + 3) + 16LL);
          WdLogEvent5_WdLowResource(v34);
          LODWORD(v10) = -1073741801;
        }
      }
    }
    return (unsigned int)v10;
  }
  if ( *((_DWORD *)this + 10) != 1
    || *((_DWORD *)this + 70) == 1
    || (v13 = *((_QWORD *)a2 + 3), (*(_DWORD *)(v13 + 304) & 4) != 0) )
  {
    v15 = WdLogNewEntry5_WdEvent(v12);
    *(_QWORD *)(v15 + 24) = *((int *)this + 70);
    *(_QWORD *)(v15 + 32) = *((unsigned int *)this + 10);
    WdLogEvent5_WdEvent(v15);
    LODWORD(v10) = GetAllocationSize(
                     *(struct DXGDEVICE **)(*((_QWORD *)a2 + 1) + 16LL),
                     *(_DWORD *)(*((_QWORD *)a2 + 3) + 4LL),
                     &v38);
    if ( (int)v10 < 0 )
    {
      v17 = WdLogNewEntry5_WdError(v16);
      *(_QWORD *)(v17 + 24) = 1676LL;
LABEL_10:
      WdLogEvent5_WdError(v17);
      return 3221225473LL;
    }
    memset(&v36, 0, sizeof(v36));
    v36.DirtyRectCount = 1;
    v36.pDirtyRects = &v38;
    v14 = &v36;
    *((_DWORD *)this + 70) = 0;
  }
  else
  {
    v14 = (struct _D3DKMT_PRESENT_RGNS *)(v13 + 272);
  }
  if ( !v14->DirtyRectCount && !v14->MoveRectCount )
    v6 = 1;
  if ( !v37 )
  {
    if ( *((_DWORD *)a4 + 4) == 2 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v27 + 24) = 1765LL;
      WdLogEvent5_WdAssertion(v27);
    }
    if ( !v6 )
    {
      if ( !(unsigned int)DDAMetaData::CombineNewMetaData(
                            *((DDAMetaData **)a4 + 1),
                            v14,
                            &v35,
                            *(_DWORD *)(*((_QWORD *)a2 + 3) + 304LL) & 1,
                            a6) )
      {
        v17 = WdLogNewEntry5_WdError(v28);
        *(_QWORD *)(v17 + 24) = 1777LL;
        goto LABEL_10;
      }
      *((_DWORD *)a4 + 4) = 1;
    }
    if ( *((_DWORD *)a4 + 4) == 1 )
      LODWORD(v10) = 259;
    goto LABEL_34;
  }
  if ( !v6
    && !(unsigned int)DDAMetaData::CombineNewMetaData(
                        *((DDAMetaData **)a4 + 1),
                        v14,
                        &v35,
                        *(_DWORD *)(*((_QWORD *)a2 + 3) + 304LL) & 1,
                        a6) )
  {
    v17 = WdLogNewEntry5_WdError(v19);
    *(_QWORD *)(v17 + 24) = 1709LL;
    goto LABEL_10;
  }
  if ( *((_DWORD *)a4 + 4) == 1 )
  {
    v20 = *((_QWORD *)a4 + 1);
    v36.DirtyRectCount = *(_DWORD *)(v20 + 24);
    DirtyRectData = DDAMetaData::GetDirtyRectData((void ***)v20, v36.DirtyRectCount);
    v22 = *((_QWORD *)a4 + 1);
    v36.pDirtyRects = DirtyRectData;
    v36.MoveRectCount = *(_DWORD *)(v22 + 44);
    v23 = *((unsigned int *)this + 11);
    v36.pMoveRects = **(const D3DKMT_MOVE_RECT ***)(v22 + 48);
    v24 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
            this,
            a2,
            *(_DWORD *)(*((_QWORD *)a2 + 3) + 4LL),
            *(_DWORD *)(*((_QWORD *)this + v23 + 6) + 100LL),
            &v36);
    goto LABEL_21;
  }
  if ( v6 )
  {
LABEL_34:
    if ( a5 )
      *a5 = 0;
    return (unsigned int)v10;
  }
  v24 = OUTPUTDUPL_CONTEXT::SubmitBltForRegions(
          this,
          a2,
          *(_DWORD *)(*((_QWORD *)a2 + 3) + 4LL),
          *(_DWORD *)(*((_QWORD *)this + *((unsigned int *)this + 11) + 6) + 100LL),
          v14);
LABEL_21:
  v10 = v24;
  if ( v24 >= 0 )
  {
    *((_DWORD *)a4 + 4) = 2;
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v25);
    *(_QWORD *)(v26 + 24) = v10;
    WdLogEvent5_WdError(v26);
  }
  return (unsigned int)v10;
}
