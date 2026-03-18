/*
 * XREFs of ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXXZ @ 0x1C008BB20
 * Callers:
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C006D8D0 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??1DXGPAGINGQUEUE@@IEAA@XZ @ 0x1C008BD50 (--1DXGPAGINGQUEUE@@IEAA@XZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0004214 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0089C50 (-DestroyCoreState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0094580 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 */

void __fastcall DXGPAGINGQUEUE::DestroyCoreState(DXGPAGINGQUEUE *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  DXGDEVICESYNCOBJECT *v5; // rcx
  struct DXGPROCESS *Current; // rdi
  unsigned int v7; // edx
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_DWORD *)this + 6) )
  {
    Current = DXGPROCESS::GetCurrent();
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v8, Current);
    v7 = *((_DWORD *)this + 6);
    if ( v7 )
    {
      HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)Current + 216), v7);
      *((_DWORD *)this + 6) = 0;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
  }
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 424LL) + 8LL)
                                   + 880LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 536LL));
    *((_QWORD *)this + 4) = 0LL;
  }
  v5 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 5);
  if ( v5 )
    DXGDEVICESYNCOBJECT::DestroyCoreState(v5, v4, a3);
}
