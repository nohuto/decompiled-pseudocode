/*
 * XREFs of ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0157D48
 * Callers:
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C015819C (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0156E40 (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x1C01571B8 (-ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ.c)
 *     ?DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA?AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z @ 0x1C0157460 (-DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA-AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessDirtyRectAgainstDirtyList(
        DDAMetaData *this,
        struct tagRECT *a2,
        __int64 a3,
        __int64 a4)
{
  struct tagRECT *v4; // rbx
  int DoesRectOverlapWithExistingDirty; // eax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // ebx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE v16[16]; // [rsp+30h] [rbp-28h] BYREF

  v4 = a2;
  if ( a2->left == a2->right || a2->top == a2->bottom )
  {
    v15 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v15 + 24) = 734LL;
    WdLogEvent5_WdAssertion(v15);
  }
  else
  {
    while ( !*((_QWORD *)this + 8) )
    {
      DoesRectOverlapWithExistingDirty = DDAMetaData::DoesRectOverlapWithExistingDirty(
                                           (__int64)this,
                                           (unsigned int *)v4,
                                           (__int64)v16);
      switch ( DoesRectOverlapWithExistingDirty )
      {
        case 1:
          return 1LL;
        case 2:
          v4 = (struct tagRECT *)v16;
          break;
        case 3:
          if ( !(unsigned int)DDAMetaData::ConvertExistingDirtryRectsToGDIRegion(this) )
          {
            v8 = WdLogNewEntry5_WdError(v7);
            *(_QWORD *)(v8 + 24) = 771LL;
LABEL_10:
            WdLogEvent5_WdError(v8);
            return 0LL;
          }
          break;
        default:
          if ( !(unsigned int)DDAMetaData::AddToDirtyList(this, v4) )
          {
            v8 = WdLogNewEntry5_WdError(v10);
            *(_QWORD *)(v8 + 24) = 786LL;
            goto LABEL_10;
          }
          return 1LL;
      }
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, LONG))(*((_QWORD *)this + 7) + 96LL))(
            *((_QWORD *)this + 9),
            (unsigned int)v4->left,
            (unsigned int)v4->top,
            (unsigned int)v4->right,
            v4->bottom);
    if ( !v12 )
    {
      v8 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v8 + 24) = 797LL;
      goto LABEL_10;
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
            *((_QWORD *)this + 8),
            *((_QWORD *)this + 8),
            *((_QWORD *)this + 9),
            2LL) )
    {
      v14 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v14 + 24) = 803LL;
      WdLogEvent5_WdError(v14);
      return v12;
    }
  }
  return 1LL;
}
