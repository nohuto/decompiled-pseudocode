/*
 * XREFs of ??0DXGDODPRESENT@@QEAA@PEAVADAPTER_DISPLAY@@PEAEE@Z @ 0x1C00E4DF4
 * Callers:
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C00E4D24 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 *     ??0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z @ 0x1C00E4EC4 (--0BLTQUEUE@@QEAA@PEAVDXGDODPRESENT@@IPEAU_KEVENT@@E@Z.c)
 */

DXGDODPRESENT *__fastcall DXGDODPRESENT::DXGDODPRESENT(
        DXGDODPRESENT *this,
        struct ADAPTER_DISPLAY *a2,
        BLTQUEUE *a3,
        char a4)
{
  int v4; // eax
  unsigned int v9; // edi

  v4 = *((_DWORD *)a2 + 26);
  *((_QWORD *)this + 11) = a2;
  *(_DWORD *)this = v4;
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 96) = a4;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 30) = -1;
  *((_DWORD *)this + 32) = 0;
  *((_DWORD *)this + 33) = 0;
  memset((char *)this + 16, 0, 0x40uLL);
  v9 = 0;
  for ( *((_QWORD *)this + 1) = a3; v9 < *(_DWORD *)this; a3 = (BLTQUEUE *)((char *)a3 + 2408) )
  {
    if ( a3 )
      BLTQUEUE::BLTQUEUE(a3, this, v9, (struct _KEVENT *)(1016LL * v9 + *((_QWORD *)a2 + 17) + 800LL), a4);
    ++v9;
  }
  return this;
}
