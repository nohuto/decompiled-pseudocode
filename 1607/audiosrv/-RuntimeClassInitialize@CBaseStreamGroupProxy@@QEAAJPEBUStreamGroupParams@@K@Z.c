/*
 * XREFs of ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x180023190
 * Callers:
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x1800245D4 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DE.c)
 *     ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18007581C (-RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@XZ @ 0x180023738 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@st.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002545C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180025520 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180036700 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBaseStreamGroupProxy::RuntimeClassInitialize(
        void **this,
        const struct StreamGroupParams *a2,
        int a3)
{
  const unsigned __int16 *v6; // r12
  void **v7; // r14
  unsigned __int64 v8; // rdi
  void *v9; // rcx
  unsigned __int64 v10; // rbp
  int v11; // ebx
  __int64 v12; // rdi
  struct _RTL_CRITICAL_SECTION *v13; // rax
  struct _RTL_CRITICAL_SECTION *v14; // rdi
  unsigned __int16 **v16; // [rsp+20h] [rbp-68h]
  unsigned __int64 *v17; // [rsp+28h] [rbp-60h]
  unsigned int v18; // [rsp+30h] [rbp-58h]

  v6 = *(const unsigned __int16 **)a2;
  v7 = this + 5;
  v8 = -1LL;
  v9 = 0LL;
  do
    ++v8;
  while ( v6[v8] );
  *v7 = 0LL;
  v10 = v8 + 1;
  if ( v8 + 1 < v8 )
  {
    return (unsigned int)-2147024362;
  }
  else
  {
    *v7 = 0LL;
    if ( is_mul_ok(v10, 2uLL) )
    {
      v11 = CTCoAllocPolicy::Alloc(0LL, (v10 * (unsigned __int128)2uLL) >> 64, 2 * v10, v7);
      if ( v11 >= 0 )
        StringCchCopyNExW((unsigned __int16 *)*v7, v8 + 1, v6, v8, v16, v17, v18);
    }
    else
    {
      v11 = -2147024362;
    }
    if ( v11 >= 0 )
    {
      v12 = *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL);
      v11 = CTCoAllocPolicy::Alloc(v9, 1u, v12 + 18, this + 4);
      if ( v11 >= 0 )
      {
        memcpy_0(this[4], *((const void **)a2 + 2), v12 + 18);
        *((_OWORD *)this + 1) = *((_OWORD *)a2 + 2);
        this[1] = (void *)*((_QWORD *)a2 + 3);
        *((_DWORD *)this + 13) = *((_DWORD *)a2 + 2);
        this[15] = 0LL;
        *((_DWORD *)this + 32) = 0;
        *((_BYTE *)this + 48) = *((_BYTE *)a2 + 49);
        *((_BYTE *)this + 49) = *((_BYTE *)a2 + 50);
        v13 = (struct _RTL_CRITICAL_SECTION *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
        v14 = v13;
        if ( v13 )
        {
          InitializeCriticalSectionEx(v13, 0, 0);
          v14[1].DebugInfo = 0LL;
          *(_QWORD *)&v14[1].LockCount = 0LL;
          v14[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Buyheadnode();
          LODWORD(v14[1].OwningThread) = a3;
        }
        else
        {
          v14 = 0LL;
        }
        this[7] = v14;
        return v14 == 0LL ? 0x8007000E : 0;
      }
    }
  }
  return (unsigned int)v11;
}
