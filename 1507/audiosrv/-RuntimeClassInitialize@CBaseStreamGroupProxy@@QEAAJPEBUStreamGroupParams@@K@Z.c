/*
 * XREFs of ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x180026930
 * Callers:
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x180029CE8 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DE.c)
 *     ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18008F9D0 (-RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180028950 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?_Buyheadnode@?$_Tree_alloc@$0A@U?$_Tree_base_types@U?$pair@$$CBKK@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@XZ @ 0x180030250 (-_Buyheadnode@-$_Tree_alloc@$0A@U-$_Tree_base_types@U-$pair@$$CBKK@std@@V-$allocator@U-$pair@$$C.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800439F4 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBaseStreamGroupProxy::RuntimeClassInitialize(
        CBaseStreamGroupProxy *this,
        const struct StreamGroupParams *a2,
        int a3)
{
  const unsigned __int16 *v6; // rsi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r15
  unsigned __int16 *v10; // rax
  int v11; // ebp
  const unsigned __int16 *v12; // rbx
  unsigned __int64 v13; // rsi
  unsigned __int16 *v14; // rax
  __int64 v15; // rsi
  LPVOID v16; // rbp
  size_t v17; // r15
  IMalloc *v18; // rax
  IMalloc *v19; // rdi
  unsigned __int16 **v21; // [rsp+20h] [rbp-68h]
  unsigned __int64 *v22; // [rsp+28h] [rbp-60h]
  unsigned int v23; // [rsp+30h] [rbp-58h]
  LPMALLOC ppMalloc; // [rsp+90h] [rbp+8h] BYREF
  IMalloc *v25; // [rsp+98h] [rbp+10h]

  v6 = *(const unsigned __int16 **)a2;
  v7 = -1LL;
  v8 = -1LL;
  do
    ++v8;
  while ( v6[v8] );
  *((_QWORD *)this + 5) = 0LL;
  v9 = v8 + 1;
  if ( v8 + 1 < v8 )
    return (unsigned int)-2147024362;
  *((_QWORD *)this + 5) = 0LL;
  if ( is_mul_ok(v9, 2uLL) )
  {
    v10 = (unsigned __int16 *)CoTaskMemAlloc(2 * v9);
    *((_QWORD *)this + 5) = v10;
    if ( !v10 )
      return (unsigned int)-2147024882;
    v11 = 0;
    StringCchCopyNExW(v10, v8 + 1, v6, v8, v21, v22, v23);
  }
  else
  {
    v11 = -2147024362;
  }
  if ( v11 >= 0 )
  {
    v12 = (const unsigned __int16 *)*((_QWORD *)a2 + 1);
    do
      ++v7;
    while ( v12[v7] );
    *((_QWORD *)this + 6) = 0LL;
    v13 = v7 + 1;
    if ( v7 + 1 >= v7 )
    {
      *((_QWORD *)this + 6) = 0LL;
      if ( is_mul_ok(v13, 2uLL) )
      {
        v14 = (unsigned __int16 *)CoTaskMemAlloc(2 * v13);
        *((_QWORD *)this + 6) = v14;
        if ( !v14 )
          return (unsigned int)-2147024882;
        v11 = 0;
        StringCchCopyNExW(v14, v7 + 1, v12, v7, v21, v22, v23);
      }
      else
      {
        v11 = -2147024362;
      }
      if ( v11 >= 0 )
      {
        v15 = *(unsigned __int16 *)(*((_QWORD *)a2 + 3) + 16LL);
        v16 = CoTaskMemAlloc(v15 + 18);
        *((_QWORD *)this + 4) = v16;
        if ( v16 )
        {
          v17 = 0LL;
          if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
          {
            v17 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v16);
            ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
          }
          memset_0(*((void **)this + 4), 0, v17);
          memcpy_0(*((void **)this + 4), *((const void **)a2 + 3), v15 + 18);
          *((_OWORD *)this + 1) = *(_OWORD *)((char *)a2 + 40);
          *((_QWORD *)this + 1) = *((_QWORD *)a2 + 4);
          *((_DWORD *)this + 14) = *((_DWORD *)a2 + 4);
          *((_QWORD *)this + 16) = 0LL;
          v18 = (IMalloc *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
          v19 = v18;
          ppMalloc = v18;
          if ( v18 )
          {
            InitializeCriticalSectionEx((LPCRITICAL_SECTION)v18, 0, 0);
            v25 = v19 + 5;
            v19[5].lpVtbl = 0LL;
            v19[6].lpVtbl = 0LL;
            v19[5].lpVtbl = (struct IMallocVtbl *)std::_Tree_alloc<0,std::_Tree_base_types<std::pair<unsigned long const,unsigned long>>>::_Buyheadnode();
            LODWORD(v19[7].lpVtbl) = a3;
          }
          else
          {
            v19 = 0LL;
          }
          *((_QWORD *)this + 8) = v19;
          if ( v19 )
            return 0;
        }
        return (unsigned int)-2147024882;
      }
      return (unsigned int)v11;
    }
    return (unsigned int)-2147024362;
  }
  return (unsigned int)v11;
}
