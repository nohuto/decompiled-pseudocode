/*
 * XREFs of ?AddTarget@DMMVIDEOPRESENTTARGETSET@@QEAAJV?$auto_ptr@VDMMVIDEOPRESENTTARGET@@@@@Z @ 0x1C00DC0FC
 * Callers:
 *     ?AddTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C00DBF30 (-AddTarget@DXGPORTDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGE.c)
 * Callees:
 *     ?FindById@?$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C00070B8 (-FindById@-$IndexedSet@VDMMVIDEOPRESENTTARGET@@@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Add@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000E29C (-Add@-$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDEOPRESENTTARGETSET::AddTarget(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rax

  if ( !*a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v9);
  }
  v4 = IndexedSet<DMMVIDEOPRESENTTARGET>::FindById(a1, *(_DWORD *)(*a2 + 24LL));
  if ( v4 )
    LODWORD(v6) = v4 != v5;
  else
    LODWORD(v6) = Set<DMMVIDEOPRESENTTARGET>::Add(a1, v5) != 0 ? 2 : 0;
  v6 = (unsigned int)v6;
  if ( (_DWORD)v6 )
  {
    v7 = (unsigned int)(v6 - 1);
    if ( (_DWORD)v7 )
    {
      if ( (_DWORD)v7 == 1 )
      {
        *a2 = 0LL;
        return 0LL;
      }
      else
      {
        v10 = WdLogNewEntry5_WdError(v7);
        WdLogEvent5_WdError(v10);
        if ( *a2 )
          (**(void (__fastcall ***)(_QWORD, __int64))*a2)(*a2, 1LL);
        return 3221225473LL;
      }
    }
    else
    {
      v11 = (_QWORD *)WdLogNewEntry5_WdError(v7);
      v11[3] = *(unsigned int *)(*a2 + 24LL);
      v11[4] = *a2;
      v11[5] = a1;
      WdLogEvent5_WdError(v11);
      if ( *a2 )
        (**(void (__fastcall ***)(_QWORD, __int64))*a2)(*a2, 1LL);
      return 3223192370LL;
    }
  }
  else
  {
    v12 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v12 + 24) = *a2;
    *(_QWORD *)(v12 + 32) = a1;
    WdLogEvent5_WdError(v12);
    if ( *a2 )
      (**(void (__fastcall ***)(_QWORD, __int64))*a2)(*a2, 1LL);
    return 3223192344LL;
  }
}
