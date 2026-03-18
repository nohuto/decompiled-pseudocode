/*
 * XREFs of ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000FE88
 * Callers:
 *     ?Add@?$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C000FCF8 (-Add@-$Set@VDMMVIDEOPRESENTTARGET@@@@QEAAEQEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z @ 0x1C00F5E8C (-ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@@Z.c)
 *     ?AcquireNextTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTTARGETSET__@@PEBU_D3DKMDT_VIDEO_PRESENT_TARGET@@PEAPEBU3@@Z @ 0x1C01A5960 (-AcquireNextTargetInfo@DXGDMM_VIDEOPRESENTTARGETSET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRES.c)
 * Callees:
 *     <none>
 */

char __fastcall DoublyLinkedList<DMMVIDEOPRESENTTARGET>::ContainsByReference(__int64 a1, __int64 a2)
{
  char v2; // r8
  _QWORD *v3; // rcx
  __int64 v4; // rax
  _QWORD *v5; // rax

  v2 = 0;
  if ( !a2 )
    return 0;
  v3 = (_QWORD *)(a1 + 16);
  if ( (_QWORD *)*v3 != v3 )
  {
    v4 = *v3 - 8LL;
    if ( *v3 != 8LL )
    {
      do
      {
        if ( v4 == a2 )
          break;
        v5 = *(_QWORD **)(v4 + 8);
        v4 = v5 == v3 ? 0LL : (__int64)(v5 - 1);
      }
      while ( v4 );
      if ( v4 )
        return 1;
    }
  }
  return v2;
}
