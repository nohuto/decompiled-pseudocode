/*
 * XREFs of DxgkEngAcquireStableSprite @ 0x1401AB340
 * Callers:
 *     <none>
 * Callees:
 *     ?vLockExclusive@SPRITERANGELOCK@@QEAAXXZ @ 0x14001BDBC (-vLockExclusive@SPRITERANGELOCK@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401AB3CC (--$GreAcquireSemaphoreShared@$05$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall DxgkEngAcquireStableSprite(Gre::Base *a1, int a2)
{
  struct Gre::Base::SESSION_GLOBALS *v3; // rax
  unsigned int v4; // edi
  __int64 HDEV; // rax
  __int64 v6; // rbx

  v3 = Gre::Base::Globals(a1);
  GreAcquireSemaphoreShared<6,>(v3);
  v4 = 0;
  if ( a2 )
  {
    HDEV = UserGetHDEV();
    v6 = HDEV;
    if ( HDEV )
    {
      if ( *(_DWORD *)(HDEV + 140) )
      {
        do
          SPRITERANGELOCK::vLockExclusive((HSEMAPHORE *)(*(_QWORD *)(*(_QWORD *)(v6 + 144) + 8LL * v4++) + 200LL));
        while ( v4 < *(_DWORD *)(v6 + 140) );
      }
      else
      {
        SPRITERANGELOCK::vLockExclusive((HSEMAPHORE *)(HDEV + 200));
      }
    }
  }
}
