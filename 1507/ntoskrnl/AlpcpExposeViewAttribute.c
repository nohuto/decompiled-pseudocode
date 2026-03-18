/*
 * XREFs of AlpcpExposeViewAttribute @ 0x14053DA04
 * Callers:
 *     AlpcpExposeAttributes @ 0x140480310 (AlpcpExposeAttributes.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     AlpcpReceiveView @ 0x140474CA0 (AlpcpReceiveView.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 */

__int64 __fastcall AlpcpExposeViewAttribute(void *a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v4; // rbx
  ULONG_PTR v9; // rbx
  signed __int64 BugCheckParameter4; // rax
  signed __int64 v11; // rdx
  int v12; // esi
  signed __int64 v13; // rcx
  bool v14; // cc
  ULONG_PTR v15; // rcx
  __int64 v16; // rbx
  bool v17; // zf
  char v18; // [rsp+58h] [rbp+10h] BYREF

  v4 = *(_QWORD *)(a2 + 144);
  if ( !v4 )
    return 0LL;
  v9 = *(_QWORD *)(v4 + 16);
  _m_prefetchw((const void *)(v9 - 24));
  BugCheckParameter4 = *(_QWORD *)(v9 - 24);
  while ( BugCheckParameter4 > 0 )
  {
    v11 = BugCheckParameter4;
    BugCheckParameter4 = _InterlockedCompareExchange64(
                           (volatile signed __int64 *)(v9 - 24),
                           BugCheckParameter4 + 1,
                           BugCheckParameter4);
    if ( BugCheckParameter4 == v11 )
      goto LABEL_6;
  }
  if ( BugCheckParameter4 )
    KeBugCheckEx(0x18u, 0LL, v9, 0x20uLL, BugCheckParameter4);
LABEL_6:
  v12 = AlpcpReceiveView(a1, a2, &v18, (__int64)a1);
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v9 - 24), 0xFFFFFFFFFFFFFFFFuLL);
  v14 = v13 <= 1;
  v15 = v13 - 1;
  if ( v14 )
  {
    if ( v15 )
      KeBugCheckEx(0x18u, 0LL, v9, 0x21uLL, v15);
    AlpcpDestroyBlob(v9);
  }
  if ( v12 >= 0 )
  {
    v16 = *(_QWORD *)(a2 + 144);
    memset(a3, 0, 0x20uLL);
    v17 = v18 == 0;
    a3[2] = *(_QWORD *)(v16 + 40);
    a3[3] = *(_QWORD *)(v16 + 48);
    if ( !v17 )
      *(_DWORD *)a3 = 0x40000;
    *a4 |= 0x40000000u;
    return 0LL;
  }
  return (unsigned int)v12;
}
