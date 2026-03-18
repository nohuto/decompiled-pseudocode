/*
 * XREFs of ?Release@DXGMMS_EXPORT@@QEAAJXZ @ 0x1C016BD90
 * Callers:
 *     ??1DXGGLOBAL@@AEAA@XZ @ 0x1C0168A04 (--1DXGGLOBAL@@AEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

__int64 __fastcall DXGMMS_EXPORT::Release(DXGMMS_EXPORT *this)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = (void *)*((_QWORD *)this + 9);
  if ( v2 )
  {
    operator delete(v2);
    *((_QWORD *)this + 9) = 0LL;
  }
  v3 = (void *)*((_QWORD *)this + 8);
  if ( v3 )
  {
    operator delete(v3);
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *(_BYTE *)this )
  {
    ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (char *)this + 32, 8uLL);
    *(_BYTE *)this = 0;
  }
  return 0LL;
}
