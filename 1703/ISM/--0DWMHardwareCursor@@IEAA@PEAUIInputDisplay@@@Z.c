/*
 * XREFs of ??0DWMHardwareCursor@@IEAA@PEAUIInputDisplay@@@Z @ 0x18001FD7C
 * Callers:
 *     ?Create@DWMHardwareCursor@@SAJPEAUIInputDisplay@@PEAPEAV1@@Z @ 0x180020060 (-Create@DWMHardwareCursor@@SAJPEAUIInputDisplay@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBHUCursorGlyphInfo@@@std@@PEAX@2@XZ @ 0x180021D78 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@HUCursorGlyphInfo@@U-$less@H@std@@V-$allocator@.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
DWMHardwareCursor *__fastcall DWMHardwareCursor::DWMHardwareCursor(DWMHardwareCursor *this, struct IInputDisplay *a2)
{
  __int64 v4; // rcx
  volatile signed __int32 *v6; // [rsp+30h] [rbp-28h]

  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 6) = 1;
  *(_QWORD *)this = &DWMHardwareCursor::`vftable'{for `IHardwareCursorServer'};
  *((_QWORD *)this + 1) = &DWMHardwareCursor::`vftable'{for `IHardwareCursor'};
  *((_QWORD *)this + 2) = &DWMHardwareCursor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_QWORD *)this + 10) = std::_Tree_comp_alloc<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::_Buyheadnode(this);
  *((_DWORD *)this + 25) = 4;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_WORD *)this + 20) = 1;
  *((_QWORD *)this + 6) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 7) = 0LL;
  if ( a2 )
    (*(void (__fastcall **)(struct IInputDisplay *))(*(_QWORD *)a2 + 8LL))(a2);
  v4 = *((_QWORD *)this + 13);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  *((_QWORD *)this + 13) = a2;
  v6 = (volatile signed __int32 *)*((_QWORD *)this + 20);
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v6)(v6);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 8LL))(v6);
    }
  }
  *((_BYTE *)this + 72) = 1;
  *((_DWORD *)this + 24) = 32514;
  *((_DWORD *)this + 19) = 1;
  return this;
}
