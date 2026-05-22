/*
 * XREFs of ?Insert@PropertyMap@Input@@QEAAJ$$QEAVPropertyNode@2@@Z @ 0x180027DB8
 * Callers:
 *     ?s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180016F50 (-s_HitTestHandler@DWMInputRouter@@SAJPEAUIHitTestRequest@@PEAXPEAV-$vector@V-$ComPtr@UIInputTarg.c)
 *     ?RuntimeClassInitialize@DisplayBinding@@QEAAJIU_GUID@@W4Dimension@@@Z @ 0x18001BE80 (-RuntimeClassInitialize@DisplayBinding@@QEAAJIU_GUID@@W4Dimension@@@Z.c)
 * Callees:
 *     ?Insert@PropertyMap@Input@@IEAAJPEAVPropertyNode@2@@Z @ 0x180027E34 (-Insert@PropertyMap@Input@@IEAAJPEAVPropertyNode@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Input::PropertyMap::Insert(Input::PropertyMap *this, __int64 a2)
{
  int v3; // ebx
  struct Input::PropertyNode *v4; // rax
  struct Input::PropertyNode *v5; // rdi

  v3 = -2147024882;
  v4 = (struct Input::PropertyNode *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 56LL))(a2);
  v5 = v4;
  if ( v4 )
  {
    v3 = Input::PropertyMap::Insert(this, v4);
    if ( v3 < 0 )
      (**(void (__fastcall ***)(struct Input::PropertyNode *, __int64))v5)(v5, 1LL);
    if ( v3 == -2147024713 )
      return 0;
  }
  return (unsigned int)v3;
}
