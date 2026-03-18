/*
 * XREFs of ??0DXGPRESENT@@QEAA@I@Z @ 0x1C00B3AE0
 * Callers:
 *     ?PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAPEAV1@@Z @ 0x1C008593C (-PresentFromCdd@DXGCONTEXT@@QEAAJPEAU_D3DKMT_PRESENT@@IPEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPR.c)
 *     DxgkPresent @ 0x1C00B2160 (DxgkPresent.c)
 * Callees:
 *     <none>
 */

DXGPRESENT *__fastcall DXGPRESENT::DXGPRESENT(DXGPRESENT *this, int a2)
{
  unsigned int v3; // edx
  unsigned int v4; // ecx
  __int64 v5; // rax

  *((_DWORD *)this + 17) = a2;
  *(_QWORD *)((char *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  v3 = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 16) = 0;
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_DWORD *)this + 29) = 0;
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_DWORD *)this + 106) = 0;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 91) = 0LL;
  *((_DWORD *)this + 184) = 0;
  *((_QWORD *)this + 105) = 0LL;
  *((_DWORD *)this + 212) = 0;
  *((_QWORD *)this + 139) = 0LL;
  *((_DWORD *)this + 280) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *(_QWORD *)((char *)this + 84) = 0LL;
  *(_QWORD *)((char *)this + 92) = 0LL;
  *(_QWORD *)((char *)this + 100) = 0LL;
  *(_QWORD *)((char *)this + 108) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  while ( 1 )
  {
    v4 = 1;
    if ( *((_DWORD *)this + 17) )
      v4 = *((_DWORD *)this + 17);
    if ( v3 >= v4 )
      break;
    v5 = v3++;
    *((_QWORD *)this + v5 + 28) = 0LL;
    *((_DWORD *)this + v5 + 88) = 0;
    *((_DWORD *)this + v5 + 40) = 0;
  }
  return this;
}
