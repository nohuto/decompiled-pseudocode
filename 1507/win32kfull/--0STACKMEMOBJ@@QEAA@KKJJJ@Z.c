/*
 * XREFs of ??0STACKMEMOBJ@@QEAA@KKJJJ@Z @ 0x1C0104320
 * Callers:
 *     NtGdiExtFloodFill @ 0x1C0103240 (NtGdiExtFloodFill.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 */

STACKMEMOBJ *__fastcall STACKMEMOBJ::STACKMEMOBJ(STACKMEMOBJ *this, unsigned int a2, int a3, int a4, int a5, int a6)
{
  _DWORD *v10; // rax
  _DWORD *v11; // rax
  _DWORD *v12; // rax

  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  v10 = PALLOCMEM2(0xB8uLL, 1684817479LL, 0);
  *((_QWORD *)this + 2) = v10;
  if ( v10 )
  {
    v10[2] = 184;
    *(_DWORD *)(*((_QWORD *)this + 2) + 4LL) = 0;
    if ( a3 == 1 )
    {
      v11 = PALLOCMEM2(0xB8uLL, 1684817479LL, 0);
      *((_QWORD *)this + 3) = v11;
      if ( !v11 )
        return this;
      v11[2] = 184;
      *(_DWORD *)(*((_QWORD *)this + 3) + 4LL) = 0;
    }
    *(_DWORD *)this = a2;
    *((_DWORD *)this + 1) = 32;
    v12 = PALLOCMEM2(a2, 1684817479LL, 0);
    *((_QWORD *)this + 4) = v12;
    if ( v12 )
    {
      *((_QWORD *)this + 1) = v12;
      *v12 = a4;
      *(_DWORD *)(*((_QWORD *)this + 1) + 4LL) = 1;
      *(_DWORD *)(*((_QWORD *)this + 1) + 8LL) = 32;
      *(_QWORD *)(*((_QWORD *)this + 1) + 16LL) = *((_QWORD *)this + 1);
      *(_DWORD *)(*((_QWORD *)this + 1) + 24LL) = a5;
      *(_DWORD *)(*((_QWORD *)this + 1) + 28LL) = a6;
    }
  }
  return this;
}
