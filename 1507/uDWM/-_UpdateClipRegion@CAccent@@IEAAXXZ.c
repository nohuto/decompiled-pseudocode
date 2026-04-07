/*
 * XREFs of ?_UpdateClipRegion@CAccent@@IEAAXXZ @ 0x180035908
 * Callers:
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x180035BE0 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

void __fastcall CAccent::_UpdateClipRegion(CAccent *this)
{
  __int64 v1; // rdx
  int v2; // eax
  int v3; // edx
  __int64 v4; // rdx
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  int v6; // [rsp+28h] [rbp-20h]

  if ( (*((_DWORD *)this + 67) & 0x210) != 0 )
  {
    v1 = *((_QWORD *)this + 2);
    v2 = 0;
    v5 = 46LL;
    v6 = 0;
    if ( v1 )
      v3 = *(_DWORD *)(v1 + 24);
    else
      v3 = 0;
    HIDWORD(v5) = v3;
    v4 = *((_QWORD *)this + 46);
    if ( v4 )
      v2 = *(_DWORD *)(v4 + 24);
    v6 = v2;
    MilResource_SendCommand(&v5, 0xCu, *((struct MIL_CHANNEL__ **)CDesktopManager::s_pDesktopManagerInstance + 4));
  }
}
