/*
 * XREFs of ?RecordPagingOperation@VIDMM_GLOBAL@@QEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@J_KHPEAX@Z @ 0x1C005A4CC
 * Callers:
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C004E63C (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BU.c)
 * Callees:
 *     Template_pptpqqx @ 0x1C0013A8C (Template_pptpqqx.c)
 *     Template_pptpqxpx @ 0x1C0013B58 (Template_pptpqxpx.c)
 *     Template_pptpqxpxx @ 0x1C0013C1C (Template_pptpqxpxx.c)
 *     Template_pptpqxq @ 0x1C0013D0C (Template_pptpqxq.c)
 *     Template_pptpqxqqppqqxxpqx @ 0x1C0013DD8 (Template_pptpqxqqppqqxxpqx.c)
 *     Template_pptpqxqxqxq @ 0x1C0013F80 (Template_pptpqxqxqxq.c)
 *     Template_pptpqxqxqxqqq @ 0x1C0014094 (Template_pptpqxqxqxqqq.c)
 *     Template_pptpqxxqt @ 0x1C00141D8 (Template_pptpqxxqt.c)
 *     Template_pptpqxxt @ 0x1C00142C8 (Template_pptpqxxt.c)
 *     Template_pptpxqqx @ 0x1C0014390 (Template_pptpxqqx.c)
 *     Template_pptpxxpq @ 0x1C0014458 (Template_pptpxxpq.c)
 *     Template_pptpxxqqx @ 0x1C001451C (Template_pptpxxqqx.c)
 *     Template_pptpxxqqxxxqqx @ 0x1C001460C (Template_pptpxxqqxxxqqx.c)
 *     Template_pptqx @ 0x1C0014768 (Template_pptqx.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  _OWORD *v15; // rdx
  __int128 v16; // xmm1
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 Operation; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  const EVENT_DESCRIPTOR *v24; // rdx
  int v25; // ecx
  int v26; // ecx
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  UINT FillPattern; // r11d
  SIZE_T TransferSize; // rcx

  v10 = a2;
  v12 = 2LL;
  if ( !bTracingEnabled )
    goto LABEL_2;
  v17 = *((_QWORD *)this + (unsigned int)a2 + 143);
  v18 = *((_QWORD *)this + 3);
  Operation = (unsigned int)a4->Operation;
  if ( (int)Operation > 7 )
  {
    v25 = Operation - 8;
    if ( v25 )
    {
      v26 = v25 - 1;
      if ( v26 )
      {
        v27 = (unsigned int)(v26 - 1);
        if ( (_DWORD)v27 )
        {
          v28 = v27 - 1;
          if ( v28 )
          {
            v29 = (unsigned int)(v28 - 1);
            if ( (_DWORD)v29 )
            {
              v30 = (unsigned int)(v29 - 1);
              if ( (_DWORD)v30 )
              {
                if ( (_DWORD)v30 == 2 && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
                  Template_pptpqxq(
                    v30,
                    a2,
                    v17,
                    v18,
                    v17,
                    a5 == -1071775743,
                    a3,
                    a4->Transfer.TransferOffset,
                    a4->Transfer.TransferSize,
                    a4->Transfer.Source.SegmentId);
              }
              else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              {
                Template_pptpxxpq(
                  v30,
                  a2,
                  v17,
                  v18,
                  v17,
                  a5 == -1071775743,
                  a3,
                  a4->UpdateContextAllocation.ContextAllocation,
                  a4->Fill.FillSize,
                  a4->Transfer.TransferSize,
                  a4->Transfer.Source.SegmentId);
              }
            }
            else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              Template_pptpqxpxx(
                v29,
                a2,
                v17,
                v18,
                v17,
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
            v31 = a4->Reserved.Reserved[20];
            FillPattern = 0;
            if ( (unsigned int)v31 < 2 )
            {
              TransferSize = a4->Transfer.TransferSize;
            }
            else if ( (_DWORD)v31 == 2 )
            {
              TransferSize = a4->MapApertureSegment.OffsetInPages;
              FillPattern = a4->Fill.FillPattern;
            }
            else
            {
              TransferSize = 0LL;
            }
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
              Template_pptpqxqqppqqxxpqx(
                TransferSize,
                v31,
                v17,
                v18,
                v17,
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
                v31,
                a4->UpdatePageTable.FirstPteVirtualAddress);
          }
        }
        else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        {
          Template_pptpqxpx(
            v27,
            a2,
            v17,
            v18,
            v17,
            a5 == -1071775743,
            a3,
            a4->Transfer.TransferOffset,
            a4->Transfer.TransferSize,
            a4->MapApertureSegment.OffsetInPages,
            a4->Transfer.Source.SegmentAddress.QuadPart);
        }
      }
      else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      {
        Template_pptpxxqqx(
          (unsigned int)*a8,
          a2,
          v17,
          v18,
          v17,
          a5 == -1071775743,
          a3,
          a4->Fill.FillSize,
          a4->Transfer.TransferSize,
          a4->Transfer.Source.SegmentId,
          *a8,
          a4->Transfer.Source.SegmentAddress.QuadPart);
      }
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
      Template_pptpxxqqxxxqqx(
        (__int64)a8,
        a2,
        v17,
        v18,
        v17,
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
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      Template_pptpqxqxqxqqq(
        Operation,
        a2,
        v17,
        v18,
        v17,
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
    v20 = (unsigned int)(Operation - 1);
    if ( (_DWORD)v20 )
    {
      v21 = (unsigned int)(v20 - 1);
      if ( (_DWORD)v21 )
      {
        v22 = (unsigned int)(v21 - 1);
        if ( (_DWORD)v22 )
        {
          v22 = (unsigned int)(v22 - 1);
          if ( (_DWORD)v22 )
          {
            v23 = (unsigned int)(v22 - 1);
            if ( (_DWORD)v23 )
            {
              if ( (_DWORD)v23 == 1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
                Template_pptpqxxt(
                  v23,
                  a2,
                  v17,
                  v18,
                  v17,
                  a5 == -1071775743,
                  a3,
                  a4->Fill.FillPattern,
                  a4->MapApertureSegment.OffsetInPages,
                  a4->Transfer.Source.SegmentAddress.QuadPart,
                  a7);
            }
            else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
            {
              Template_pptpqxxqt(
                v23,
                a2,
                v17,
                v18,
                v17,
                a5 == -1071775743,
                a3,
                a4->Fill.FillPattern,
                a4->MapApertureSegment.OffsetInPages,
                a4->Transfer.Source.SegmentAddress.QuadPart,
                a4->Transfer.Destination.SegmentAddress.LowPart,
                a7);
            }
            goto LABEL_2;
          }
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) == 0 )
            goto LABEL_2;
          v24 = &EventPagingOpWritePhysical;
        }
        else
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) == 0 )
            goto LABEL_2;
          v24 = &EventPagingOpReadPhysical;
        }
        Template_pptqx(v22, v24, v17, v18, v17, a5 == -1071775743, a4->ReadPhysical.SegmentId, a4->Fill.FillSize);
        goto LABEL_2;
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
        Template_pptpqqx(
          v21,
          a2,
          v17,
          v18,
          v17,
          a5 == -1071775743,
          a3,
          a4->Transfer.TransferOffset,
          a4->DiscardContent.SegmentId,
          a4->Transfer.TransferSize);
    }
    else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    {
      Template_pptpxqqx(
        v20,
        a2,
        v17,
        v18,
        v17,
        a5 == -1071775743,
        a3,
        a4->Fill.FillSize,
        a4->Fill.FillPattern,
        a4->Transfer.Source.SegmentId,
        a4->Transfer.Source.SegmentAddress.QuadPart);
    }
  }
  else if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
  {
    Template_pptpqxqxqxq(
      Operation,
      a2,
      v17,
      v18,
      v17,
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
LABEL_2:
  v13 = *((_QWORD *)this + 978);
  if ( v13 )
  {
    v14 = 360LL * *((unsigned int *)this + 1958);
    if ( a3 )
    {
      *(_QWORD *)(v14 + v13 + 8) = a3;
      *(_QWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 16) = *((_QWORD *)a3 + 5);
    }
    else
    {
      *(_QWORD *)(v14 + v13 + 8) = 0LL;
      *(_QWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 16) = 0LL;
    }
    *(_DWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978)) = v10;
    v15 = (_OWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 24LL);
    do
    {
      *v15 = *(_OWORD *)&a4->pDmaBuffer;
      v15[1] = *(_OWORD *)&a4->pDmaBufferPrivateData;
      v15[2] = *(_OWORD *)&a4->MultipassOffset;
      v15[3] = *(_OWORD *)&a4->SpecialLockTransfer.TransferOffset;
      v15[4] = *(_OWORD *)&a4->Reserved.Reserved[6];
      v15[5] = *(_OWORD *)&a4->Reserved.Reserved[10];
      v15[6] = *(_OWORD *)&a4->Reserved.Reserved[14];
      v15 += 8;
      v16 = *(_OWORD *)&a4->Reserved.Reserved[18];
      a4 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)a4 + 128);
      *(v15 - 1) = v16;
      --v12;
    }
    while ( v12 );
    *v15 = *(_OWORD *)&a4->pDmaBuffer;
    v15[1] = *(_OWORD *)&a4->pDmaBufferPrivateData;
    v15[2] = *(_OWORD *)&a4->MultipassOffset;
    v15[3] = *(_OWORD *)&a4->SpecialLockTransfer.TransferOffset;
    *(_DWORD *)(360LL * *((unsigned int *)this + 1958) + *((_QWORD *)this + 978) + 344) = a5;
    *(_QWORD *)(360LL * (unsigned int)(*((_DWORD *)this + 1958))++ + *((_QWORD *)this + 978) + 352) = a6;
    if ( *((_DWORD *)this + 1958) >= *((_DWORD *)this + 1954) )
    {
      *((_DWORD *)this + 1958) = 0;
      ++*((_DWORD *)this + 1959);
    }
  }
}
