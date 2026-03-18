/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@@@QEAA@AEBV0@@Z @ 0x1C00056E0
 * Callers:
 *     ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x1C0005168 (--0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C0005E20 (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNTARGET>::DoublyLinkedList<DMMVIDPNTARGET>(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r14
  const struct DMMVIDPNTARGET *v6; // rdi
  DMMVIDPNTARGET *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  DMMVIDPNTARGET *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNTARGET>::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v19 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v19);
  }
  v4 = (_QWORD *)(a1 + 16);
  *(_QWORD *)(a1 + 24) = a1 + 16;
  v5 = (_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 16) = a1 + 16;
  *(_QWORD *)(a1 + 32) = 0LL;
  if ( (_QWORD *)*v5 == v5 || (v6 = (const struct DMMVIDPNTARGET *)(*v5 - 8LL), *v5 == 8LL) )
  {
LABEL_17:
    if ( *(_QWORD *)(a1 + 32) != *(_QWORD *)(a2 + 32) )
    {
      v21 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v21);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  else
  {
    while ( 1 )
    {
      v7 = (DMMVIDPNTARGET *)operator new[](0x80uLL, 0x4E506456u, PagedPool);
      if ( !v7 )
        break;
      v12 = DMMVIDPNTARGET::DMMVIDPNTARGET(v7, v6);
      if ( !v12 )
        break;
      if ( (_QWORD *)*v4 == v4 )
        goto LABEL_13;
      v13 = *v4 - 8LL;
      if ( *v4 == 8LL )
        goto LABEL_13;
      while ( (DMMVIDPNTARGET *)v13 != v12 )
      {
        v14 = *(_QWORD **)(v13 + 8);
        if ( v14 != v4 )
        {
          v13 = (__int64)(v14 - 1);
          if ( v13 )
            continue;
        }
        goto LABEL_13;
      }
      if ( !v13 )
      {
LABEL_13:
        v15 = *(_QWORD **)(a1 + 24);
        v16 = (_QWORD *)((char *)v12 + 8);
        *v16 = v4;
        v16[1] = v15;
        if ( (_QWORD *)*v15 != v4 )
          __fastfail(3u);
        *v15 = v16;
        *(_QWORD *)(a1 + 24) = v16;
        ++*(_QWORD *)(a1 + 32);
      }
      v17 = (_QWORD *)*((_QWORD *)v6 + 1);
      if ( v17 != v5 )
      {
        v6 = (const struct DMMVIDPNTARGET *)(v17 - 1);
        if ( v17 != (_QWORD *)8 )
          continue;
      }
      goto LABEL_17;
    }
    v20 = WdLogNewEntry5_WdLowResource(v9, v8, v10, v11);
    WdLogEvent5_WdLowResource(v20);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  return a1;
}
