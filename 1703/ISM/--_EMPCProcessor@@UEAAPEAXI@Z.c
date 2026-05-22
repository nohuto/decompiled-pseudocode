/*
 * XREFs of ??_EMPCProcessor@@UEAAPEAXI@Z @ 0x180048B30
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$_Tree@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x180048BB0 (--1-$_Tree@V-$_Tmap_traits@IUInputData@MPCProcessor@@U-$less@I@std@@V-$allocator@U-$pair@$$CBIUI.c)
 *     ??1MPCInputProviderBase@@UEAA@XZ @ 0x18004EB18 (--1MPCInputProviderBase@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009E01C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

MPCProcessor *__fastcall MPCProcessor::`vector deleting destructor'(MPCProcessor *this, char a2)
{
  __int64 v4; // rcx

  v4 = *((_QWORD *)this + 23);
  if ( v4 )
  {
    *((_QWORD *)this + 23) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::~_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>((char *)this + 168);
  *((_DWORD *)this + 41) = -1073741823;
  MPCInputProviderBase::~MPCInputProviderBase(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
