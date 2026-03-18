/*
 * XREFs of ?ExpandTable@HMGRTABLE@@QEAAEXZ @ 0x1C009423C
 * Callers:
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z @ 0x1C0094450 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@I@Z.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C00D4630 (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 * Callees:
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

unsigned __int8 __fastcall HMGRTABLE::ExpandTable(HMGRTABLE *this)
{
  unsigned int v2; // ecx
  unsigned int v3; // edi
  SIZE_T v4; // rax
  PVOID v5; // rax
  PVOID v6; // rsi
  unsigned int v7; // r8d
  unsigned int v8; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int8 result; // al
  __int64 v12; // rax
  __int64 v13; // rax

  if ( *((_DWORD *)this + 5) && *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) != -16777216 )
  {
    v12 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v12 + 24) = 63LL;
    WdLogEvent5_WdAssertion(v12);
  }
  v2 = *((_DWORD *)this + 4);
  v3 = g_HmgrTableSizeIncrement + v2;
  if ( g_HmgrTableSizeIncrement + v2 < v2 || v3 > 0xFFFFFF )
    return 0;
  v4 = 16LL * v3;
  if ( !is_mul_ok(v3, 0x10uLL) )
    v4 = -1LL;
  v5 = operator new[](v4, 0x4B677844u, PagedPool);
  v6 = v5;
  if ( !v5 )
  {
    operator delete(0LL);
    return 0;
  }
  memmove(v5, *(const void **)this, 16LL * *((unsigned int *)this + 4));
  operator delete(*(void **)this);
  v7 = *((_DWORD *)this + 4);
  *(_QWORD *)this = v6;
  v8 = *((_DWORD *)this + 5) + g_HmgrTableSizeIncrement;
  if ( v7 < v3 )
  {
    v9 = 16LL * v7;
    do
    {
      *(_DWORD *)(v9 + *(_QWORD *)this) = ++v7;
      v9 += 16LL;
      *(_DWORD *)(v9 + *(_QWORD *)this - 8) &= 0xFFFFFFF0;
      *(_DWORD *)(v9 + *(_QWORD *)this - 8) = *(_DWORD *)(v9 + *(_QWORD *)this - 8) & 0xFFFFFFCF | 0x10;
      *(_DWORD *)(v9 + *(_QWORD *)this - 8) &= 0xFFFFF03F;
    }
    while ( v7 < v3 );
  }
  v10 = 2LL * (v7 - 1);
  *(_DWORD *)(*(_QWORD *)this + 16LL * (v7 - 1)) = -16777216;
  if ( *((_DWORD *)this + 5) )
  {
    v10 = *(_QWORD *)this;
    *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) = *((_DWORD *)this + 4);
  }
  else
  {
    *((_DWORD *)this + 3) = 127;
  }
  if ( v7 != v3 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v13 + 24) = 124LL;
    WdLogEvent5_WdAssertion(v13);
  }
  *((_DWORD *)this + 4) = v3;
  result = 1;
  *((_DWORD *)this + 5) = v8;
  return result;
}
