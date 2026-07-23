/*
 * XREFs of CcAllocateVacbLevel @ 0x14006CF18
 * Callers:
 *     CcSetVacbLargeOffset @ 0x14006C770 (CcSetVacbLargeOffset.c)
 *     CcExtendVacbArray @ 0x14006CA98 (CcExtendVacbArray.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

_QWORD *__fastcall CcAllocateVacbLevel(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  __int64 v4; // rdx
  _QWORD *v5; // rax

  if ( a2 )
  {
    v2 = *(_QWORD **)(a1 + 16);
    *(_QWORD *)(a1 + 16) = 0LL;
    memset(v2, 0, 0x400uLL);
    v2[256] = 0LL;
  }
  else
  {
    v2 = *(_QWORD **)a1;
    if ( *(_QWORD *)a1 == a1 )
      KeBugCheckEx(0x34u, 0x10F5uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    v4 = *v2;
    v5 = (_QWORD *)v2[1];
    if ( *(_QWORD **)(*v2 + 8LL) != v2 || (_QWORD *)*v5 != v2 )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    --*(_DWORD *)(a1 + 24);
    memset(v2, 0, 0x408uLL);
  }
  *v2 = 0LL;
  return v2;
}
