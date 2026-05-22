/*
 * XREFs of ??1?$DynamicSizeMap@U_GUID@@V?$function@$$A6AJPEAUIHitTestRequest@@PEAXPEAV?$vector@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@std@@@Z@std@@$00@@QEAA@XZ @ 0x180017E58
 * Callers:
 *     _DWMInputRouter::_DWMInputRouter_::_1_::dtor$20 @ 0x18009F93D (_DWMInputRouter--_DWMInputRouter_--_1_--dtor$20.c)
 * Callees:
 *     ??_V@YAXPEAX_K@Z @ 0x18009DF08 (--_V@YAXPEAX_K@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x18009DF10 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall DynamicSizeMap<_GUID,std::function<long (IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *)>,1>::~DynamicSizeMap<_GUID,std::function<long (IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *)>,1>(
        void **a1)
{
  char *v1; // rcx
  char *v2; // rbx

  v1 = (char *)*a1;
  if ( v1 )
  {
    v2 = v1 - 8;
    `eh vector destructor iterator'(
      v1,
      0x50uLL,
      *((_QWORD *)v1 - 1),
      DynamicSizeMap<_GUID,std::function<long (IHitTestRequest *,void *,std::vector<Microsoft::WRL::ComPtr<IInputTarget>> *)>,1>::MapEntry::~MapEntry);
    operator delete[](v2, 80LL * *(_QWORD *)v2 + 8);
  }
}
