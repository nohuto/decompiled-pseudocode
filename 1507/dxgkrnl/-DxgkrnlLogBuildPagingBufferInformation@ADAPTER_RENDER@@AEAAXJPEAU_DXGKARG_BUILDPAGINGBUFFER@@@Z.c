/*
 * XREFs of ?DxgkrnlLogBuildPagingBufferInformation@ADAPTER_RENDER@@AEAAXJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0092970
 * Callers:
 *     ?DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z @ 0x1C0092BB0 (-DdiBuildPagingBuffer@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_BUILDPAGINGBUFFER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::DxgkrnlLogBuildPagingBufferInformation(
        ADAPTER_RENDER *this,
        __int64 a2,
        struct _DXGKARG_BUILDPAGINGBUFFER *a3,
        __int64 a4)
{
  __int64 Operation; // rcx
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  SIZE_T v10; // rcx
  _QWORD *v11; // rax
  SIZE_T TransferSize; // rcx
  SIZE_T SegmentId; // rcx
  _QWORD *v14; // rax
  SIZE_T QuadPart; // rcx
  _QWORD *v16; // rax
  SIZE_T FillSize; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 NumPageTableEntries; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  _QWORD *v23; // rax
  _QWORD *v24; // rax

  Operation = (unsigned int)a3->Operation;
  v6 = (int)a2;
  if ( (int)Operation <= 7 )
  {
    if ( (_DWORD)Operation != 7 && (_DWORD)Operation )
    {
      v7 = (unsigned int)(Operation - 1);
      if ( (_DWORD)v7 )
      {
        v8 = (unsigned int)(v7 - 1);
        if ( !(_DWORD)v8 )
        {
          v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, a2, a3, a4);
          v11[3] = v6;
          v11[4] = a3->Transfer.hAllocation;
          v11[5] = a3->DiscardContent.SegmentId;
          TransferSize = a3->Transfer.TransferSize;
          goto LABEL_10;
        }
        v9 = (unsigned int)(v8 - 1);
        if ( (_DWORD)v9 )
        {
          v9 = (unsigned int)(v9 - 1);
          if ( (_DWORD)v9 )
          {
            v10 = (unsigned int)(v9 - 1);
            if ( (unsigned int)v10 <= 1 )
            {
              v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, a2, a3, a4);
              v11[3] = v6;
              v11[4] = a3->Transfer.hAllocation;
              v11[5] = a3->Fill.FillSize;
              TransferSize = a3->Fill.FillPattern;
LABEL_10:
              v11[6] = TransferSize;
              return;
            }
            goto LABEL_25;
          }
        }
        v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, a2, a3, a4);
        v16[3] = v6;
        v16[4] = a3->ReadPhysical.SegmentId;
        FillSize = a3->Fill.FillSize;
LABEL_18:
        v16[5] = FillSize;
        return;
      }
      v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, a2, a3, a4);
      v11[3] = v6;
      v11[4] = a3->Transfer.hAllocation;
      SegmentId = a3->Transfer.Source.SegmentId;
LABEL_13:
      v11[5] = SegmentId;
      TransferSize = a3->MapApertureSegment.NumberOfPages;
      goto LABEL_10;
    }
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(Operation, a2, a3, a4);
    v14[3] = v6;
    v14[4] = a3->Transfer.hAllocation;
    v14[5] = a3->Transfer.Source.SegmentAddress.QuadPart;
    v14[6] = a3->Transfer.Destination.SegmentId;
    QuadPart = a3->Transfer.Destination.SegmentAddress.QuadPart;
LABEL_15:
    v14[7] = QuadPart;
    return;
  }
  v18 = (unsigned int)(Operation - 8);
  if ( !(_DWORD)v18 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v18, a2, a3, a4);
    v11[3] = v6;
    v11[4] = a3->Transfer.hAllocation;
    SegmentId = a3->MapApertureSegment.OffsetInPages;
    goto LABEL_13;
  }
  v19 = (unsigned int)(v18 - 1);
  if ( !(_DWORD)v19 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, a2, a3, a4);
    v16[3] = v6;
    v16[4] = a3->Transfer.hAllocation;
    FillSize = a3->MapApertureSegment.NumberOfPages;
    goto LABEL_18;
  }
  NumPageTableEntries = (unsigned int)(v19 - 1);
  if ( !(_DWORD)NumPageTableEntries )
    goto LABEL_28;
  v21 = (unsigned int)(NumPageTableEntries - 1);
  if ( !(_DWORD)v21 )
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdTrace(v21, a2, a3, a4);
    v23[3] = v6;
    v23[4] = a3->Fill.FillSize;
    v23[5] = a3->UpdatePageTable.hProcess;
    v23[6] = a3->Transfer.Destination.SegmentId;
    NumPageTableEntries = a3->UpdatePageTable.NumPageTableEntries;
    v23[7] = NumPageTableEntries;
LABEL_28:
    v24 = (_QWORD *)WdLogNewEntry5_WdTrace(NumPageTableEntries, a2, a3, a4);
    v24[3] = v6;
    v24[4] = a3->Transfer.hAllocation;
    v24[5] = a3->Transfer.TransferOffset;
    v10 = a3->Transfer.TransferSize;
    v24[6] = v10;
LABEL_29:
    v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, a2, a3, a4);
    v14[3] = v6;
    v14[4] = a3->Transfer.hAllocation;
    v14[5] = a3->Transfer.Source.SegmentId & 1;
    v14[6] = a3->Transfer.TransferOffset;
    QuadPart = a3->Transfer.TransferSize;
    goto LABEL_15;
  }
  v10 = (unsigned int)(v21 - 1);
  if ( !(_DWORD)v10 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, a2, a3, a4);
    v11[3] = v6;
    v11[4] = a3->Transfer.TransferSize;
    v11[5] = a3->ReadPhysical.SegmentId;
    TransferSize = a3->Fill.FillSize;
    goto LABEL_10;
  }
  if ( (_DWORD)v10 == 3 )
    goto LABEL_29;
LABEL_25:
  v22 = WdLogNewEntry5_WdTrace(v10, a2, a3, a4);
  *(_QWORD *)(v22 + 24) = v6;
  *(_QWORD *)(v22 + 32) = a3->Operation;
}
