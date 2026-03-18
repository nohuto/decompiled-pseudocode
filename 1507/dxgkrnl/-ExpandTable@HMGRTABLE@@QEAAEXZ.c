/*
 * XREFs of ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C00D3F20
 * Callers:
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C00C33D4 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01406A8 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 * Callees:
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

unsigned __int8 __fastcall HMGRTABLE::ExpandTable(HMGRTABLE *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ecx
  unsigned int v6; // edi
  SIZE_T v7; // rax
  PVOID v8; // rax
  PVOID v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // r8
  unsigned int v13; // esi
  __int64 v14; // rcx
  unsigned __int8 result; // al
  __int64 v16; // rax
  __int64 v17; // rax

  if ( *((_DWORD *)this + 5) && *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) != -16777216 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, 2LL * *((unsigned int *)this + 3), a3, a4);
    *(_QWORD *)(v16 + 24) = 63LL;
    WdLogEvent5_WdAssertion(v16);
  }
  v5 = *((_DWORD *)this + 4);
  v6 = g_HmgrTableSizeIncrement + v5;
  if ( g_HmgrTableSizeIncrement + v5 < v5 || v6 > 0xFFFFFF )
    return 0;
  v7 = 16LL * v6;
  if ( !is_mul_ok(v6, 0x10uLL) )
    v7 = -1LL;
  v8 = operator new[](v7, 0x4B677844u, PagedPool);
  v9 = v8;
  if ( !v8 )
  {
    operator delete(0LL);
    return 0;
  }
  memmove(v8, *(const void **)this, 16LL * *((unsigned int *)this + 4));
  operator delete(*(void **)this);
  v12 = *((unsigned int *)this + 4);
  *(_QWORD *)this = v9;
  v13 = *((_DWORD *)this + 5) + g_HmgrTableSizeIncrement;
  if ( (unsigned int)v12 < v6 )
  {
    v10 = 16LL * (unsigned int)v12;
    do
    {
      v12 = (unsigned int)(v12 + 1);
      *(_DWORD *)(v10 + *(_QWORD *)this) = v12;
      v10 += 16LL;
      *(_DWORD *)(v10 + *(_QWORD *)this - 8) &= 0xFFFFFFF0;
      *(_DWORD *)(v10 + *(_QWORD *)this - 8) = *(_DWORD *)(v10 + *(_QWORD *)this - 8) & 0xFFFFFFCF | 0x10;
      *(_DWORD *)(v10 + *(_QWORD *)this - 8) &= 0xFFFFF03F;
    }
    while ( (unsigned int)v12 < v6 );
  }
  v14 = 2LL * (unsigned int)(v12 - 1);
  *(_DWORD *)(*(_QWORD *)this + 16LL * (unsigned int)(v12 - 1)) = -16777216;
  if ( *((_DWORD *)this + 5) )
  {
    v14 = *(_QWORD *)this;
    v10 = 2LL * *((unsigned int *)this + 3);
    *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) = *((_DWORD *)this + 4);
  }
  else
  {
    *((_DWORD *)this + 3) = 127;
  }
  if ( (_DWORD)v12 != v6 )
  {
    v17 = WdLogNewEntry5_WdAssertion(v14, v10, v12, v11);
    *(_QWORD *)(v17 + 24) = 124LL;
    WdLogEvent5_WdAssertion(v17);
  }
  *((_DWORD *)this + 4) = v6;
  result = 1;
  *((_DWORD *)this + 5) = v13;
  return result;
}
