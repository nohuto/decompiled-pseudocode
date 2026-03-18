/*
 * XREFs of ?AddMode@DMMVIDPNTARGETMODESET@@QEAAJV?$auto_ptr@VDMMVIDPNTARGETMODE@@@@@Z @ 0x1C007E7D0
 * Callers:
 *     ?AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D3DKMDT_VIDPN_TARGET_MODE@@@Z @ 0x1C007CE40 (-AddMode@DXGK_VIDPNTARGETMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTARGETMODESET__@@QEAU_D.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z @ 0x1C0001E0C (-FindById@-$IndexedSet@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@I@Z.c)
 *     ??9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z @ 0x1C0002524 (--9DMMVIDPNTARGETMODE@@QEBA_NAEBV0@@Z.c)
 *     ?FindByValue@?$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z @ 0x1C00034F4 (-FindByValue@-$Set@VDMMVIDPNTARGETMODE@@@@QEBAPEAVDMMVIDPNTARGETMODE@@QEBV2@@Z.c)
 *     ?InsertTail@?$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z @ 0x1C00046A8 (-InsertTail@-$DoublyLinkedList@VDMMVIDPNTARGETMODE@@@@QEAAEQEAVDMMVIDPNTARGETMODE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDPNTARGETMODESET::AddMode(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rcx
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  _QWORD *v20; // rax
  __int64 v21; // rax

  if ( !*a2 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v15);
  }
  v4 = *a2;
  v5 = IndexedSet<DMMVIDPNTARGETMODE>::FindById(a1 + 24, *(_DWORD *)(*a2 + 24));
  if ( v5 )
  {
    v10 = (DMMVIDPNTARGETMODE::operator!=(v5, v4) != 0) + 1;
  }
  else if ( Set<DMMVIDPNTARGETMODE>::FindByValue(a1 + 24, v4) )
  {
    v10 = 1;
  }
  else
  {
    if ( DoublyLinkedList<DMMVIDPNTARGETMODE>::InsertTail(a1 + 32, v4, v7) != 1 )
    {
      v16 = WdLogNewEntry5_WdAssertion(v9);
      WdLogEvent5_WdAssertion(v16);
    }
    v10 = 3;
  }
  v11 = (unsigned int)(v10 - 1);
  if ( (_DWORD)v11 )
  {
    v12 = (unsigned int)(v11 - 1);
    if ( (_DWORD)v12 )
    {
      if ( (_DWORD)v12 == 1 )
      {
        v13 = *a2 + 32;
        if ( a1 )
        {
          if ( *(_QWORD *)(*a2 + 40) )
          {
            v19 = WdLogNewEntry5_WdAssertion(v12);
            WdLogEvent5_WdAssertion(v19);
          }
          *(_QWORD *)(v13 + 8) = a1;
        }
        else
        {
          v18 = WdLogNewEntry5_WdError(v12);
          *(_QWORD *)(v18 + 24) = v13;
          *(_QWORD *)(v18 + 32) = *(_QWORD *)(v13 + 8);
          WdLogEvent5_WdError(v18);
        }
        *a2 = 0LL;
        return 0LL;
      }
      else
      {
        v17 = WdLogNewEntry5_WdError(v12);
        WdLogEvent5_WdError(v17);
        if ( *a2 )
          (**(void (__fastcall ***)(__int64, __int64))*a2)(*a2, 1LL);
        return 3221225473LL;
      }
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v20[3] = *(unsigned int *)(*a2 + 24);
      v20[4] = *a2;
      v20[5] = a1;
      WdLogEvent5_WdError(v20);
      if ( *a2 )
        (**(void (__fastcall ***)(__int64, __int64))*a2)(*a2, 1LL);
      return 3223192356LL;
    }
  }
  else
  {
    v21 = WdLogNewEntry5_WdTrace(v11, v6, v7, v8);
    *(_QWORD *)(v21 + 24) = *a2;
    *(_QWORD *)(v21 + 32) = a1;
    if ( *a2 )
      (**(void (__fastcall ***)(__int64, __int64))*a2)(*a2, 1LL);
    return 3223192340LL;
  }
}
