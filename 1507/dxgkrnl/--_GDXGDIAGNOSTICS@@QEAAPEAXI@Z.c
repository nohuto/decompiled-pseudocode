/*
 * XREFs of ??_GDXGDIAGNOSTICS@@QEAAPEAXI@Z @ 0x1C001E6F0
 * Callers:
 *     ??1VIDPN_MGR@@UEAA@XZ @ 0x1C002B238 (--1VIDPN_MGR@@UEAA@XZ.c)
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C013EAAC (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 */

DXGDIAGNOSTICS *__fastcall DXGDIAGNOSTICS::`scalar deleting destructor'(DXGDIAGNOSTICS *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 2);
  if ( v2 )
    operator delete(v2);
  operator delete(this);
  return this;
}
