/*
 * XREFs of ??1DXGPRESENT@@QEAA@XZ @ 0x1C00CA6A4
 * Callers:
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00B0C30 (--1DXGCONTEXT@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

void __fastcall DXGPRESENT::~DXGPRESENT(void **this)
{
  void *v2; // rcx
  __int64 i; // rsi
  unsigned int v4; // ecx

  operator delete(this[2]);
  v2 = this[15];
  this[2] = 0LL;
  operator delete(v2);
  this[15] = 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    v4 = 1;
    if ( *((_DWORD *)this + 17) )
      v4 = *((_DWORD *)this + 17);
    if ( (unsigned int)i >= v4 )
      break;
    operator delete(this[i + 28]);
    this[i + 28] = 0LL;
  }
  operator delete(this[139]);
  operator delete(this[105]);
  operator delete(this[91]);
}
