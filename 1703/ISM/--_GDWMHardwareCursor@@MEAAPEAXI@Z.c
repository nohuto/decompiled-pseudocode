/*
 * XREFs of ??_GDWMHardwareCursor@@MEAAPEAXI@Z @ 0x18001FEE8
 * Callers:
 *     ??_EDWMHardwareCursor@@OBA@EAAPEAXI@Z @ 0x1800227D0 (--_EDWMHardwareCursor@@OBA@EAAPEAXI@Z.c)
 * Callees:
 *     ?Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ @ 0x180001830 (-Initialize3DComponents@MPCMouseProcessor@@UEAAXXZ.c)
 *     ??1?$_Tree@V?$_Tmap_traits@HUCursorGlyphInfo@@U?$less@H@std@@V?$allocator@U?$pair@$$CBHUCursorGlyphInfo@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x180021628 (--1-$_Tree@V-$_Tmap_traits@HUCursorGlyphInfo@@U-$less@H@std@@V-$allocator@U-$pair@$$CBHUCursorGl.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
DWMHardwareCursor *__fastcall DWMHardwareCursor::`scalar deleting destructor'(DWMHardwareCursor *this, char a2)
{
  volatile signed __int32 *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)this = &DWMHardwareCursor::`vftable'{for `IHardwareCursorServer'};
  *((_QWORD *)this + 1) = &DWMHardwareCursor::`vftable'{for `IHardwareCursor'};
  *((_QWORD *)this + 2) = &DWMHardwareCursor::`vftable'{for `RefCountedObject'};
  v4 = (volatile signed __int32 *)*((_QWORD *)this + 20);
  if ( v4 )
  {
    if ( _InterlockedExchangeAdd(v4 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v4)(v4);
      if ( _InterlockedExchangeAdd(v4 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 8LL))(v4);
    }
  }
  v5 = *((_QWORD *)this + 18);
  *((_QWORD *)this + 18) = 0LL;
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 17);
  *((_QWORD *)this + 17) = 0LL;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  v7 = *((_QWORD *)this + 16);
  *((_QWORD *)this + 16) = 0LL;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 15);
  *((_QWORD *)this + 15) = 0LL;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 13);
  *((_QWORD *)this + 13) = 0LL;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  std::_Tree<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>::~_Tree<std::_Tmap_traits<int,CursorGlyphInfo,std::less<int>,std::allocator<std::pair<int const,CursorGlyphInfo>>,0>>((char *)this + 80);
  *((_QWORD *)this + 2) = &RefCountedObject::`vftable';
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      MPCMouseProcessor::Initialize3DComponents(this);
    else
      free(this);
  }
  return this;
}
