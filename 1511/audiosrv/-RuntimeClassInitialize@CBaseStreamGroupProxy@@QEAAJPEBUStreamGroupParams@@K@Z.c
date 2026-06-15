/*
 * XREFs of ?RuntimeClassInitialize@CBaseStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@K@Z @ 0x18000C0C0
 * Callers:
 *     ?RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x1800075E8 (-RuntimeClassInitialize@CSharedStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DE.c)
 *     ?RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP_DESCRIPTOR@@K@Z @ 0x18008D298 (-RuntimeClassInitialize@CExclusiveStreamGroupProxy@@QEAAJPEBUStreamGroupParams@@PEAUSTREAM_GROUP.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_alloc@$0A@U?$_Tree_base_types@U?$pair@$$CBKK@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@XZ @ 0x18000E3A0 (-_Buyheadnode@-$_Tree_alloc@$0A@U-$_Tree_base_types@U-$pair@$$CBKK@std@@V-$allocator@U-$pair@$$C.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180047938 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CBaseStreamGroupProxy::RuntimeClassInitialize(
        CBaseStreamGroupProxy *this,
        const struct StreamGroupParams *a2,
        int a3)
{
  __int16 *v6; // rdi
  unsigned __int64 v7; // rbx
  size_t v8; // r14
  unsigned __int64 v9; // rsi
  _WORD *v10; // rax
  _WORD *v11; // r9
  int v12; // ebp
  unsigned __int64 v13; // rax
  _WORD *v14; // rdx
  int v15; // r10d
  __int64 v16; // r8
  unsigned __int64 v17; // rbx
  char *v18; // rdi
  __int16 v19; // cx
  unsigned __int64 v20; // rsi
  __int64 v21; // rsi
  LPVOID v22; // rbp
  IMalloc *v23; // rax
  IMalloc *v24; // rdi
  __int64 v25; // rcx
  LPMALLOC ppMalloc; // [rsp+70h] [rbp+8h] BYREF
  IMalloc *v28; // [rsp+78h] [rbp+10h]

  v6 = *(__int16 **)a2;
  v7 = -1LL;
  do
    ++v7;
  while ( v6[v7] );
  v8 = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  v9 = v7 + 1;
  if ( v7 + 1 < v7 )
    return 2147942934LL;
  *((_QWORD *)this + 5) = 0LL;
  if ( is_mul_ok(v9, 2uLL) )
  {
    v10 = CoTaskMemAlloc(2 * v9);
    v11 = v10;
    *((_QWORD *)this + 5) = v10;
    if ( !v10 )
      return 2147942414LL;
    v12 = 0;
    if ( v9 > 0x7FFFFFFF )
    {
      if ( v7 != -1LL )
LABEL_35:
        *v10 = 0;
    }
    else
    {
      if ( v7 < 0x7FFFFFFF )
      {
        if ( !v6 )
        {
          v6 = &word_1800AFAB8;
          v7 = 0LL;
        }
        if ( v9 )
        {
          v13 = v9;
          v14 = v11;
          v15 = 0;
          v16 = 0LL;
          v17 = v7 - v9;
          v18 = (char *)((char *)v6 - (char *)v11);
          while ( v17 + v13 )
          {
            v19 = *(_WORD *)((char *)v14 + (_QWORD)v18);
            if ( !v19 )
              break;
            *v14++ = v19;
            ++v16;
            if ( !--v13 )
            {
              --v14;
              --v16;
              v15 = -2147024774;
              break;
            }
          }
          *v14 = 0;
          v20 = v9 - v16;
          if ( v15 >= 0 && v20 > 1 && 2 * v20 > 2 )
            memset_0(&v11[v16 + 1], 0, 2 * v20 - 2);
        }
        goto LABEL_18;
      }
      if ( v7 != -1LL )
        goto LABEL_35;
    }
  }
  else
  {
    v12 = -2147024362;
  }
LABEL_18:
  if ( v12 >= 0 )
  {
    v21 = *(unsigned __int16 *)(*((_QWORD *)a2 + 2) + 16LL);
    v22 = CoTaskMemAlloc(v21 + 18);
    *((_QWORD *)this + 4) = v22;
    if ( v22 )
    {
      if ( CoGetMalloc(1u, &ppMalloc) >= 0 )
      {
        v8 = ((__int64 (__fastcall *)(LPMALLOC, LPVOID))ppMalloc->lpVtbl->GetSize)(ppMalloc, v22);
        ((void (__fastcall *)(LPMALLOC))ppMalloc->lpVtbl->Release)(ppMalloc);
      }
      memset_0(*((void **)this + 4), 0, v8);
      memcpy_0(*((void **)this + 4), *((const void **)a2 + 2), v21 + 18);
      *((_OWORD *)this + 1) = *((_OWORD *)a2 + 2);
      *((_QWORD *)this + 1) = *((_QWORD *)a2 + 3);
      *((_DWORD *)this + 13) = *((_DWORD *)a2 + 2);
      *((_QWORD *)this + 15) = 0LL;
      *((_BYTE *)this + 48) = *((_BYTE *)a2 + 49);
      *((_BYTE *)this + 49) = *((_BYTE *)a2 + 50);
      v23 = (IMalloc *)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
      v24 = v23;
      ppMalloc = v23;
      if ( v23 )
      {
        InitializeCriticalSectionEx((LPCRITICAL_SECTION)v23, 0, 0);
        v28 = v24 + 5;
        v24[5].lpVtbl = 0LL;
        v24[6].lpVtbl = 0LL;
        v24[5].lpVtbl = (struct IMallocVtbl *)std::_Tree_alloc<0,std::_Tree_base_types<std::pair<unsigned long const,unsigned long>>>::_Buyheadnode(v25);
        LODWORD(v24[7].lpVtbl) = a3;
      }
      else
      {
        v24 = 0LL;
      }
      *((_QWORD *)this + 7) = v24;
      if ( v24 )
        return 0LL;
    }
    return 2147942414LL;
  }
  return (unsigned int)v12;
}
