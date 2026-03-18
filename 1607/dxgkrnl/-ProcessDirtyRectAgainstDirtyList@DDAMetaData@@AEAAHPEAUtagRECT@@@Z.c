/*
 * XREFs of ?ProcessDirtyRectAgainstDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0181934
 * Callers:
 *     ?ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z @ 0x1C0181D88 (-ProcessNewDirtyRects@DDAMetaData@@AEAAHPEAU_D3DKMT_PRESENT_RGNS@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z @ 0x1C0180A80 (-AddToDirtyList@DDAMetaData@@AEAAHPEAUtagRECT@@@Z.c)
 *     ?ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ @ 0x1C0180DF8 (-ConvertExistingDirtryRectsToGDIRegion@DDAMetaData@@AEAAHXZ.c)
 *     ?DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA?AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z @ 0x1C01810A0 (-DoesRectOverlapWithExistingDirty@DDAMetaData@@AEAA-AW4RECT_OVERLAP@@PEAUtagRECT@@0@Z.c)
 */

__int64 __fastcall DDAMetaData::ProcessDirtyRectAgainstDirtyList(DDAMetaData *this, struct tagRECT *a2)
{
  struct tagRECT *v2; // rbx
  int DoesRectOverlapWithExistingDirty; // eax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE v14[16]; // [rsp+30h] [rbp-28h] BYREF

  v2 = a2;
  if ( a2->left == a2->right || a2->top == a2->bottom )
  {
    v13 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v13 + 24) = 738LL;
    WdLogEvent5_WdAssertion(v13);
  }
  else
  {
    while ( !*((_QWORD *)this + 8) )
    {
      DoesRectOverlapWithExistingDirty = DDAMetaData::DoesRectOverlapWithExistingDirty(
                                           (__int64)this,
                                           (unsigned int *)v2,
                                           (__int64)v14);
      switch ( DoesRectOverlapWithExistingDirty )
      {
        case 1:
          return 1LL;
        case 2:
          v2 = (struct tagRECT *)v14;
          break;
        case 3:
          if ( !(unsigned int)DDAMetaData::ConvertExistingDirtryRectsToGDIRegion(this) )
          {
            v6 = WdLogNewEntry5_WdError(v5);
            *(_QWORD *)(v6 + 24) = 775LL;
LABEL_10:
            WdLogEvent5_WdError(v6);
            return 0LL;
          }
          break;
        default:
          if ( !(unsigned int)DDAMetaData::AddToDirtyList(this, v2) )
          {
            v6 = WdLogNewEntry5_WdError(v8);
            *(_QWORD *)(v6 + 24) = 790LL;
            goto LABEL_10;
          }
          return 1LL;
      }
    }
    v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, LONG))(*((_QWORD *)this + 7) + 96LL))(
            *((_QWORD *)this + 9),
            (unsigned int)v2->left,
            (unsigned int)v2->top,
            (unsigned int)v2->right,
            v2->bottom);
    if ( !v10 )
    {
      v6 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v6 + 24) = 801LL;
      goto LABEL_10;
    }
    if ( !(*(unsigned int (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*((_QWORD *)this + 7) + 104LL))(
            *((_QWORD *)this + 8),
            *((_QWORD *)this + 8),
            *((_QWORD *)this + 9),
            2LL) )
    {
      v12 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v12 + 24) = 807LL;
      WdLogEvent5_WdError(v12);
      return v10;
    }
  }
  return 1LL;
}
