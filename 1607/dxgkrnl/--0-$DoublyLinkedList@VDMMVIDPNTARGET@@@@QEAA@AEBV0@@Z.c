/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@@@QEAA@AEBV0@@Z @ 0x1C0002F60
 * Callers:
 *     ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x1C0002DE8 (--0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C0003660 (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNTARGET>::DoublyLinkedList<DMMVIDPNTARGET>(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rbx
  _QWORD *v5; // r14
  const struct DMMVIDPNTARGET *v6; // rdi
  DMMVIDPNTARGET *v7; // rax
  DMMVIDPNTARGET *v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  *(_DWORD *)(a1 + 40) = 1;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNTARGET>::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  if ( !(**(unsigned __int8 (__fastcall ***)(__int64))a2)(a2) || !*(_QWORD *)(a2 + 16) || !*(_QWORD *)(a2 + 24) )
  {
    v15 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v15);
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
      v17 = WdLogNewEntry5_WdAssertion();
      WdLogEvent5_WdAssertion(v17);
    }
    *(_DWORD *)(a1 + 40) = 2;
  }
  else
  {
    while ( 1 )
    {
      v7 = (DMMVIDPNTARGET *)operator new(0x80uLL, 0x4E506456u, PagedPool);
      if ( !v7 )
        break;
      v8 = DMMVIDPNTARGET::DMMVIDPNTARGET(v7, v6);
      if ( !v8 )
        break;
      if ( (_QWORD *)*v4 == v4 )
        goto LABEL_13;
      v9 = *v4 - 8LL;
      if ( *v4 == 8LL )
        goto LABEL_13;
      while ( (DMMVIDPNTARGET *)v9 != v8 )
      {
        v10 = *(_QWORD **)(v9 + 8);
        if ( v10 != v4 )
        {
          v9 = (__int64)(v10 - 1);
          if ( v9 )
            continue;
        }
        goto LABEL_13;
      }
      if ( !v9 )
      {
LABEL_13:
        v11 = *(_QWORD **)(a1 + 24);
        v12 = (_QWORD *)((char *)v8 + 8);
        if ( (_QWORD *)*v11 != v4 )
          __fastfail(3u);
        *v12 = v4;
        v12[1] = v11;
        *v11 = v12;
        *(_QWORD *)(a1 + 24) = v12;
        ++*(_QWORD *)(a1 + 32);
      }
      v13 = (_QWORD *)*((_QWORD *)v6 + 1);
      if ( v13 != v5 )
      {
        v6 = (const struct DMMVIDPNTARGET *)(v13 - 1);
        if ( v13 != (_QWORD *)8 )
          continue;
      }
      goto LABEL_17;
    }
    v16 = WdLogNewEntry5_WdLowResource();
    WdLogEvent5_WdLowResource(v16);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  return a1;
}
