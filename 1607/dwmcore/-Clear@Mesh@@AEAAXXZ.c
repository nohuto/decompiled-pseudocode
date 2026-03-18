/*
 * XREFs of ?Clear@Mesh@@AEAAXXZ @ 0x1800906E0
 * Callers:
 *     ?Init@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@@Z @ 0x180001B10 (-Init@Mesh@@AEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@@Z.c)
 *     ??0CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x180097500 (--0CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 *     ??1CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x1800975DC (--1CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Mesh::Clear(Mesh *this)
{
  _DWORD *v1; // r8
  int v2; // edx
  __int64 v3; // rax

  v1 = (_DWORD *)((char *)this + 104);
  *((_QWORD *)this + 3) = 0LL;
  v2 = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 12) = 0;
  do
  {
    ++v2;
    *v1 = 0;
    v1 += 14;
  }
  while ( (unsigned __int64)v2 < 2 );
  v3 = *((_QWORD *)this + 2);
  *(_QWORD *)((char *)this + 164) = 0LL;
  *((_DWORD *)this + 43) = 0;
  if ( v3 )
  {
    *(_QWORD *)(v3 + 64) = 0LL;
    *(_DWORD *)(v3 + 32) = 0;
    *(_DWORD *)(v3 + 56) = 0;
    *(_QWORD *)(v3 + 88) = 0LL;
    *(_QWORD *)(v3 + 96) = 0LL;
    *(_DWORD *)(v3 + 104) = 0;
    *(_DWORD *)(v3 + 128) = 0;
  }
  *((_DWORD *)this + 48) = *((_DWORD *)this + 48) & 0xFFFFFF04 | 1;
}
