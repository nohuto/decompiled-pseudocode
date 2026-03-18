/*
 * XREFs of ?RecordPagingOperation@VIDMM_GLOBAL@@QEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@J_KHPEAX@Z @ 0x1C0064128
 * Callers:
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004C2A0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 * Callees:
 *     Template_pptpqqx @ 0x1C00071F0 (Template_pptpqqx.c)
 *     Template_pptpqxpx @ 0x1C00072BC (Template_pptpqxpx.c)
 *     Template_pptpqxpxx @ 0x1C0007380 (Template_pptpqxpxx.c)
 *     Template_pptpqxq @ 0x1C0007470 (Template_pptpqxq.c)
 *     Template_pptpqxqqppqqxxpqx @ 0x1C000753C (Template_pptpqxqqppqqxxpqx.c)
 *     Template_pptpqxqxqxq @ 0x1C00076E4 (Template_pptpqxqxqxq.c)
 *     Template_pptpqxqxqxqqq @ 0x1C00077F8 (Template_pptpqxqxqxqqq.c)
 *     Template_pptpqxxqt @ 0x1C000793C (Template_pptpqxxqt.c)
 *     Template_pptpqxxt @ 0x1C0007A2C (Template_pptpqxxt.c)
 *     Template_pptpxqqx @ 0x1C0007AF4 (Template_pptpxqqx.c)
 *     Template_pptpxxpq @ 0x1C0007BBC (Template_pptpxxpq.c)
 *     Template_pptpxxqqx @ 0x1C0007C80 (Template_pptpxxqqx.c)
 *     Template_pptpxxqqxxxqqx @ 0x1C0007D70 (Template_pptpxxqqxxxqqx.c)
 *     Template_pptqx @ 0x1C0007ECC (Template_pptqx.c)
 */

void __fastcall VIDMM_GLOBAL::RecordPagingOperation(
        VIDMM_GLOBAL *this,
        __int64 a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        struct _DXGKARG_BUILDPAGINGBUFFER *a4,
        int a5,
        unsigned __int64 a6,
        int a7,
        _DWORD *a8)
{
  int v10; // r14d
  __int64 v12; // rbp
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 Operation; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  const EVENT_DESCRIPTOR *v20; // rdx
  int v21; // ecx
  int v22; // ecx
  __int64 v23; // rcx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  UINT FillPattern; // r11d
  SIZE_T TransferSize; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  _OWORD *v32; // rdx
  __int128 v33; // xmm1

  v10 = a2;
  v12 = 2LL;
  if ( !bTracingEnabled )
    goto LABEL_54;
  v13 = *((_QWORD *)this + (unsigned int)a2 + 143);
  v14 = *((_QWORD *)this + 3);
  Operation = (unsigned int)a4->Operation;
  if ( (int)Operation > 7 )
  {
    v21 = Operation - 8;
    if ( v21 )
    {
      v22 = v21 - 1;
      if ( v22 )
      {
        v23 = (unsigned int)(v22 - 1);
        if ( (_DWORD)v23 )
        {
          v24 = v23 - 1;
          if ( v24 )
          {
            v25 = (unsigned int)(v24 - 1);
            if ( (_DWORD)v25 )
            {
              v26 = (unsigned int)(v25 - 1);
              if ( (_DWORD)v26 )
              {
                if ( (_DWORD)v26 == 2 && (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
                  Template_pptpqxq(
                    v26,
                    a2,
                    v13,
                    v14,
                    v13,
                    a5 == -1071775743,
                    a3,
                    a4->Transfer.TransferOffset,
                    a4->Transfer.TransferSize,
                    a4->Transfer.Source.SegmentId);
              }
              else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
              {
                Template_pptpxxpq(
                  v26,
                  a2,
                  v13,
                  v14,
                  v13,
                  a5 == -1071775743,
                  a3,
                  a4->UpdateContextAllocation.ContextAllocation,
                  a4->Fill.FillSize,
                  a4->Transfer.TransferSize,
                  a4->Transfer.Source.SegmentId);
              }
            }
            else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              Template_pptpqxpxx(
                v25,
                a2,
                v13,
                v14,
                v13,
                a5 == -1071775743,
                a3,
                a4->ReadPhysical.SegmentId,
                a4->Fill.FillSize,
                a4->Transfer.TransferSize,
                a4->MapApertureSegment.OffsetInPages,
                a4->Transfer.Source.SegmentAddress.QuadPart);
            }
          }
          else
          {
            v27 = a4->Reserved.Reserved[20];
            FillPattern = 0;
            if ( (unsigned int)v27 < 2 )
            {
              TransferSize = a4->Transfer.TransferSize;
            }
            else if ( (_DWORD)v27 == 2 )
            {
              TransferSize = a4->MapApertureSegment.OffsetInPages;
              FillPattern = a4->Fill.FillPattern;
            }
            else
            {
              TransferSize = 0LL;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
              Template_pptpqxqqppqqxxpqx(
                TransferSize,
                v27,
                v13,
                v14,
                v13,
                a5 == -1071775743,
                a3,
                a4->ReadPhysical.SegmentId,
                TransferSize,
                FillPattern,
                a4->UnmapApertureSegment.DummyPage.HighPart,
                a4->Transfer.Source.SegmentAddress.QuadPart,
                a4->UpdatePageTable.pPageTableEntries64KB,
                a4->Transfer.Destination.SegmentId,
                a4->Transfer.Destination.SegmentAddress.HighPart,
                a4->TransferVirtual.DestinationPageTable,
                a4->UpdatePageTable.AllocationOffsetInBytes,
                a4->UpdatePageTable.hProcess,
                v27,
                a4->UpdatePageTable.FirstPteVirtualAddress);
          }
        }
        else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        {
          Template_pptpqxpx(
            v23,
            a2,
            v13,
            v14,
            v13,
            a5 == -1071775743,
            a3,
            a4->Transfer.TransferOffset,
            a4->Transfer.TransferSize,
            a4->MapApertureSegment.OffsetInPages,
            a4->Transfer.Source.SegmentAddress.QuadPart);
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      {
        Template_pptpxxqqx(
          (unsigned int)*a8,
          a2,
          v13,
          v14,
          v13,
          a5 == -1071775743,
          a3,
          a4->Fill.FillSize,
          a4->Transfer.TransferSize,
          a4->Transfer.Source.SegmentId,
          *a8,
          a4->Transfer.Source.SegmentAddress.QuadPart);
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    {
      Template_pptpxxqqxxxqqx(
        (__int64)a8,
        a2,
        v13,
        v14,
        v13,
        a5 == -1071775743,
        a3,
        a4->Fill.FillSize,
        a4->Transfer.TransferSize,
        *a8,
        a8[1],
        a4->MapApertureSegment.OffsetInPages,
        a4->Transfer.Source.SegmentAddress.QuadPart,
        a4->UnmapApertureSegment.DummyPage.QuadPart,
        a4->Transfer.Destination.SegmentAddress.LowPart,
        a4->Transfer.Destination.SegmentAddress.HighPart,
        a4->TransferVirtual.DestinationPageTable);
    }
  }
  else if ( (_DWORD)Operation == 7 )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      Template_pptpqxqxqxqqq(
        Operation,
        a2,
        v13,
        v14,
        v13,
        a5 == -1071775743,
        a3,
        a4->Transfer.TransferOffset,
        a4->Transfer.TransferSize,
        a4->Transfer.Source.SegmentId,
        a4->Transfer.Source.SegmentAddress.QuadPart,
        a4->Transfer.Destination.SegmentId,
        a4->Transfer.Destination.SegmentAddress.QuadPart,
        a4->Transfer.Flags.Value,
        a4->Transfer.MdlOffset,
        a4->SpecialLockTransfer.SwizzlingRangeData);
  }
  else if ( (_DWORD)Operation )
  {
    v16 = (unsigned int)(Operation - 1);
    if ( (_DWORD)v16 )
    {
      v17 = (unsigned int)(v16 - 1);
      if ( (_DWORD)v17 )
      {
        v18 = (unsigned int)(v17 - 1);
        if ( (_DWORD)v18 )
        {
          v18 = (unsigned int)(v18 - 1);
          if ( (_DWORD)v18 )
          {
            v19 = (unsigned int)(v18 - 1);
            if ( (_DWORD)v19 )
            {
              if ( (_DWORD)v19 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
                Template_pptpqxxt(
                  v19,
                  a2,
                  v13,
                  v14,
                  v13,
                  a5 == -1071775743,
                  a3,
                  a4->Fill.FillPattern,
                  a4->MapApertureSegment.OffsetInPages,
                  a4->Transfer.Source.SegmentAddress.QuadPart,
                  a7);
            }
            else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
            {
              Template_pptpqxxqt(
                v19,
                a2,
                v13,
                v14,
                v13,
                a5 == -1071775743,
                a3,
                a4->Fill.FillPattern,
                a4->MapApertureSegment.OffsetInPages,
                a4->Transfer.Source.SegmentAddress.QuadPart,
                a4->Transfer.Destination.SegmentAddress.LowPart,
                a7);
            }
            goto LABEL_54;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) == 0 )
            goto LABEL_54;
          v20 = (const EVENT_DESCRIPTOR *)&EventPagingOpWritePhysical;
        }
        else
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) == 0 )
            goto LABEL_54;
          v20 = (const EVENT_DESCRIPTOR *)&EventPagingOpReadPhysical;
        }
        Template_pptqx(v18, v20, v13, v14, v13, a5 == -1071775743, a4->ReadPhysical.SegmentId, a4->Fill.FillSize);
        goto LABEL_54;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
        Template_pptpqqx(
          v17,
          a2,
          v13,
          v14,
          v13,
          a5 == -1071775743,
          a3,
          a4->Transfer.TransferOffset,
          a4->DiscardContent.SegmentId,
          a4->Transfer.TransferSize);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
    {
      Template_pptpxqqx(
        v16,
        a2,
        v13,
        v14,
        v13,
        a5 == -1071775743,
        a3,
        a4->Fill.FillSize,
        a4->Fill.FillPattern,
        a4->Transfer.Source.SegmentId,
        a4->Transfer.Source.SegmentAddress.QuadPart);
    }
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
  {
    Template_pptpqxqxqxq(
      Operation,
      a2,
      v13,
      v14,
      v13,
      a5 == -1071775743,
      a3,
      a4->Transfer.TransferOffset,
      a4->Transfer.TransferSize,
      a4->Transfer.Source.SegmentId,
      a4->Transfer.Source.SegmentAddress.QuadPart,
      a4->Transfer.Destination.SegmentId,
      a4->Transfer.Destination.SegmentAddress.QuadPart,
      a4->Transfer.Flags.Value);
  }
LABEL_54:
  v30 = *((_QWORD *)this + 972);
  if ( v30 )
  {
    v31 = 360LL * *((unsigned int *)this + 1946);
    if ( a3 )
    {
      *(_QWORD *)(v31 + v30 + 8) = a3;
      *(_QWORD *)(360LL * *((unsigned int *)this + 1946) + *((_QWORD *)this + 972) + 16) = *((_QWORD *)a3 + 5);
    }
    else
    {
      *(_QWORD *)(v31 + v30 + 8) = 0LL;
      *(_QWORD *)(360LL * *((unsigned int *)this + 1946) + *((_QWORD *)this + 972) + 16) = 0LL;
    }
    *(_DWORD *)(360LL * *((unsigned int *)this + 1946) + *((_QWORD *)this + 972)) = v10;
    v32 = (_OWORD *)(360LL * *((unsigned int *)this + 1946) + *((_QWORD *)this + 972) + 24LL);
    do
    {
      *v32 = *(_OWORD *)&a4->pDmaBuffer;
      v32[1] = *(_OWORD *)&a4->pDmaBufferPrivateData;
      v32[2] = *(_OWORD *)&a4->MultipassOffset;
      v32[3] = *(_OWORD *)&a4->SpecialLockTransfer.TransferOffset;
      v32[4] = *(_OWORD *)&a4->Reserved.Reserved[6];
      v32[5] = *(_OWORD *)&a4->Reserved.Reserved[10];
      v32[6] = *(_OWORD *)&a4->Reserved.Reserved[14];
      v32 += 8;
      v33 = *(_OWORD *)&a4->Reserved.Reserved[18];
      a4 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)a4 + 128);
      *(v32 - 1) = v33;
      --v12;
    }
    while ( v12 );
    *v32 = *(_OWORD *)&a4->pDmaBuffer;
    v32[1] = *(_OWORD *)&a4->pDmaBufferPrivateData;
    v32[2] = *(_OWORD *)&a4->MultipassOffset;
    v32[3] = *(_OWORD *)&a4->SpecialLockTransfer.TransferOffset;
    *(_DWORD *)(360LL * *((unsigned int *)this + 1946) + *((_QWORD *)this + 972) + 344) = a5;
    *(_QWORD *)(360LL * (unsigned int)(*((_DWORD *)this + 1946))++ + *((_QWORD *)this + 972) + 352) = a6;
    if ( *((_DWORD *)this + 1946) >= *((_DWORD *)this + 1942) )
    {
      *((_DWORD *)this + 1946) = 0;
      ++*((_DWORD *)this + 1947);
    }
  }
}
