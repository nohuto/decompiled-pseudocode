/*
 * XREFs of ?ContainsByReference@?$DoublyLinkedList@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEBVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C000D22C
 * Callers:
 *     ?Add@?$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C000D1A4 (-Add@-$Set@VDMMVIDEOPRESENTSOURCE@@@@QEAAEQEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ?ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z @ 0x1C00C492C (-ReleaseDdiEnumerator@DMMVIDEOPRESENTSOURCESET@@QEAAJPEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@@Z.c)
 *     ?AcquireNextSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRESENTSOURCESET__@@PEBU_D3DKMDT_VIDEO_PRESENT_SOURCE@@PEAPEBU3@@Z @ 0x1C0177D50 (-AcquireNextSourceInfo@DXGDMM_VIDEOPRESENTSOURCESET_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDEOPRES.c)
 * Callees:
 *     <none>
 */

char __fastcall DoublyLinkedList<DMMVIDEOPRESENTSOURCE>::ContainsByReference(__int64 a1, __int64 a2)
{
  char v2; // r8
  _QWORD *v3; // rcx
  __int64 v4; // rax
  _QWORD *v6; // rax

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
        v6 = *(_QWORD **)(v4 + 8);
        v4 = v6 == v3 ? 0LL : (__int64)(v6 - 1);
      }
      while ( v4 );
      if ( v4 )
        return 1;
    }
  }
  return v2;
}
