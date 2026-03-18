/*
 * XREFs of ?Clear@Mesh@@AEAAXXZ @ 0x18001E020
 * Callers:
 *     ?Init@Mesh@@AEAAJPEBUContentInfo@1@@Z @ 0x1800179FC (-Init@Mesh@@AEAAJPEBUContentInfo@1@@Z.c)
 *     ??1Mesh@@QEAA@XZ @ 0x18001FCCC (--1Mesh@@QEAA@XZ.c)
 *     ?CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x18001FD70 (-CreateRectangleMesh@Mesh@@QEAAJPEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ??0CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x1800332B4 (--0CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Mesh::Clear(Mesh *this)
{
  _DWORD *v1; // r8
  int v2; // edx
  __int64 v3; // rax

  v1 = (_DWORD *)((char *)this + 68);
  *((_QWORD *)this + 3) = 0LL;
  v2 = 0;
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 16) = 0;
  do
  {
    ++v2;
    *v1++ = 0;
  }
  while ( (unsigned __int64)v2 < 2 );
  v3 = *((_QWORD *)this + 2);
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_DWORD *)this + 21) = 0;
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
  *((_DWORD *)this + 26) = *((_DWORD *)this + 26) & 0xFFFFFF84 | 1;
}
