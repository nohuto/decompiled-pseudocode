/*
 * XREFs of ??0?$DoublyLinkedList@VDMMVIDPNTARGET@@@@QEAA@AEBV0@@Z @ 0x1C00046E4
 * Callers:
 *     ??0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z @ 0x1C00040C8 (--0DMMVIDPNTARGETSET@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ??0DMMVIDPNTARGET@@IEAA@AEBV0@@Z @ 0x1C0003988 (--0DMMVIDPNTARGET@@IEAA@AEBV0@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DoublyLinkedList<DMMVIDPNTARGET>::DoublyLinkedList<DMMVIDPNTARGET>(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // r15
  const struct DMMVIDPNTARGET *v6; // rsi
  DMMVIDPNTARGET *v7; // rax
  DMMVIDPNTARGET *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &DoublyLinkedList<DMMVIDPNTARGET>::`vftable';
  *(_DWORD *)(a1 + 40) = 1;
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
LABEL_21:
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
      v7 = (DMMVIDPNTARGET *)operator new[](0x80uLL, 0x4E506456u, PagedPool);
      v8 = v7 ? DMMVIDPNTARGET::DMMVIDPNTARGET(v7, v6) : 0LL;
      if ( !v8 )
        break;
      if ( (_QWORD *)*v4 == v4 )
        goto LABEL_16;
      v9 = *v4 - 8LL;
      if ( *v4 == 8LL )
        goto LABEL_16;
      do
      {
        if ( (DMMVIDPNTARGET *)v9 == v8 )
          break;
        v10 = *(_QWORD **)(v9 + 8);
        v9 = v10 == v4 ? 0LL : (__int64)(v10 - 1);
      }
      while ( v9 );
      if ( !v9 )
      {
LABEL_16:
        v11 = (_QWORD *)((char *)v8 + 8);
        v12 = *(_QWORD **)(a1 + 24);
        *v11 = v4;
        v11[1] = v12;
        if ( (_QWORD *)*v12 != v4 )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(a1 + 24) = v11;
        ++*(_QWORD *)(a1 + 32);
      }
      v13 = (_QWORD *)*((_QWORD *)v6 + 1);
      if ( v13 == v5 )
        v6 = 0LL;
      else
        v6 = (const struct DMMVIDPNTARGET *)(v13 - 1);
      if ( !v6 )
        goto LABEL_21;
    }
    v16 = WdLogNewEntry5_WdLowResource(0LL);
    WdLogEvent5_WdLowResource(v16);
    *(_DWORD *)(a1 + 8) = -1073741801;
  }
  return a1;
}
