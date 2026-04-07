/*
 * XREFs of ?_UpdateClipRegion@CAccent@@IEAAXXZ @ 0x180036434
 * Callers:
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x1800366E0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAccent::_UpdateClipRegion(CAccent *this)
{
  __int64 v1; // rax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rax

  if ( (*((_DWORD *)this + 67) & 0x210) != 0 )
  {
    v1 = *((_QWORD *)this + 46);
    v2 = 0LL;
    if ( v1 )
      v3 = *(unsigned int *)(v1 + 24);
    else
      v3 = 0LL;
    v4 = *((_QWORD *)this + 2);
    if ( v4 )
      v2 = *(unsigned int *)(v4 + 24);
    (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 4)
                                                     + 368LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 4),
      v2,
      v3);
  }
}
