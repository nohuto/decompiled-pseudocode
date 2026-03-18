/*
 * XREFs of ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x1C00CB95C
 * Callers:
 *     ?AddTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C00CB790 (-AddTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGE.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004BA8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Add@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000DA5C (-Add@-$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::AddTarget(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rax

  if ( !*a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  v6 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(a1, *(_DWORD *)(*a2 + 24LL));
  if ( v6 )
    LODWORD(v8) = v6 != v7;
  else
    LODWORD(v8) = Set<DMMVIDEOPRESENTTARGET>::Add(a1, v7) != 0 ? 2 : 0;
  v8 = (unsigned int)v8;
  if ( (_DWORD)v8 )
  {
    v9 = (unsigned int)(v8 - 1);
    if ( (_DWORD)v9 )
    {
      if ( (_DWORD)v9 == 1 )
      {
        *a2 = 0LL;
        return 0LL;
      }
      else
      {
        v12 = WdLogNewEntry5_WdError(v9);
        WdLogEvent5_WdError(v12);
        if ( *a2 )
          (**(void (__fastcall ***)(_QWORD, __int64))*a2)(*a2, 1LL);
        return 3221225473LL;
      }
    }
    else
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(v9);
      v13[3] = *(unsigned int *)(*a2 + 24LL);
      v13[4] = *a2;
      v13[5] = a1;
      WdLogEvent5_WdError(v13);
      if ( *a2 )
        (**(void (__fastcall ***)(_QWORD, __int64))*a2)(*a2, 1LL);
      return 3223192370LL;
    }
  }
  else
  {
    v14 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v14 + 24) = *a2;
    *(_QWORD *)(v14 + 32) = a1;
    WdLogEvent5_WdError(v14);
    if ( *a2 )
      (**(void (__fastcall ***)(_QWORD, __int64))*a2)(*a2, 1LL);
    return 3223192344LL;
  }
}
