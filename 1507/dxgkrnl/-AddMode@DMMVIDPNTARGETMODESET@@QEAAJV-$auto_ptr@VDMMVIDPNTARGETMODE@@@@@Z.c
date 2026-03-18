/*
 * XREFs of ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C008841C
 * Callers:
 *     ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C00977C0 (-AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D.c)
 * Callees:
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C00045DC (-InsertTail@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z.c)
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004BA8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C00081CC (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ??9@YA_NAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0@Z @ 0x1C000A270 (--9@YA_NAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AddMode(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r11
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r11
  __int64 v12; // rcx
  int v13; // ecx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  __int64 v24; // rax

  if ( !*a2 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  v6 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(a1 + 24, *(_DWORD *)(*a2 + 24LL));
  if ( v6 )
  {
    v13 = operator!=(v6 + 72, v7 + 72) + 1;
  }
  else if ( Set<DMMVIDPNTARGETMODE>::FindByValue(a1 + 24, v7) )
  {
    v13 = 1;
  }
  else
  {
    if ( DoublyLinkedList<DMMVIDPNTARGETMODE>::InsertTail(a1 + 32, v11, v9) != 1 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v12, v8, v9, v10);
      WdLogEvent5_WdAssertion(v19);
    }
    v13 = 3;
  }
  v14 = (unsigned int)(v13 - 1);
  if ( (_DWORD)v14 )
  {
    v15 = (unsigned int)(v14 - 1);
    if ( (_DWORD)v15 )
    {
      if ( (_DWORD)v15 == 1 )
      {
        v16 = *a2 + 32LL;
        if ( a1 )
        {
          if ( *(_QWORD *)(*a2 + 40LL) )
          {
            v22 = WdLogNewEntry5_WdAssertion(v15, v8, v9, v10);
            WdLogEvent5_WdAssertion(v22);
          }
          *(_QWORD *)(v16 + 8) = a1;
        }
        else
        {
          v21 = WdLogNewEntry5_WdError(v15);
          *(_QWORD *)(v21 + 24) = v16;
          *(_QWORD *)(v21 + 32) = *(_QWORD *)(v16 + 8);
          WdLogEvent5_WdError(v21);
        }
        *a2 = 0LL;
        return 0LL;
      }
      else
      {
        v20 = WdLogNewEntry5_WdError(v15);
        WdLogEvent5_WdError(v20);
        if ( *a2 )
          (**(void (__fastcall ***)(_QWORD, __int64))*a2)(*a2, 1LL);
        return 3221225473LL;
      }
    }
    else
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v15);
      v23[3] = *(unsigned int *)(*a2 + 24LL);
      v23[4] = *a2;
      v23[5] = a1;
      WdLogEvent5_WdError(v23);
      if ( *a2 )
        (**(void (__fastcall ***)(_QWORD, __int64))*a2)(*a2, 1LL);
      return 3223192356LL;
    }
  }
  else
  {
    v24 = WdLogNewEntry5_WdTrace(v14, v8, v9, v10);
    *(_QWORD *)(v24 + 24) = *a2;
    *(_QWORD *)(v24 + 32) = a1;
    if ( *a2 )
      (**(void (__fastcall ***)(_QWORD, __int64))*a2)(*a2, 1LL);
    return 3223192340LL;
  }
}
