/*
 * XREFs of ??1CDWMDisplay@@AEAA@XZ @ 0x18003F3A4
 * Callers:
 *     ?IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z @ 0x18003EA98 (-IsEquivalentRotated@CDWMDisplaySet@@QEBA_NPEBV1@@Z.c)
 *     ?Release@CDWMDisplay@@QEBAKXZ @ 0x18003F354 (-Release@CDWMDisplay@@QEBAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CDWMDisplay::~CDWMDisplay(CDWMDisplay *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
    *((_QWORD *)this + 1) = 0LL;
  }
}
