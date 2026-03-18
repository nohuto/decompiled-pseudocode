/*
 * XREFs of CitDesktopSwitch @ 0x1C004F670
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C0011A24 (-CitpStatIncrement@@YAXPEAGG@Z.c)
 *     ?CitpIsOnDefaultDesktop@@YAEXZ @ 0x1C004F704 (-CitpIsOnDefaultDesktop@@YAEXZ.c)
 *     ?UpdateActive@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXEI@Z @ 0x1C004F75C (-UpdateActive@CIT_DESKTOP_ACTIVE_TRACKER@@QEAAXEI@Z.c)
 *     ?CitpIsUserDesktopActive@@YAEPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C004F7CC (-CitpIsUserDesktopActive@@YAEPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void CitDesktopSwitch()
{
  struct _CIT_IMPACT_CONTEXT *v0; // rbx
  unsigned __int8 v1; // r9
  unsigned __int8 IsUserDesktopActive; // al
  unsigned int v3; // r8d

  v0 = qword_1C011E5D0;
  if ( qword_1C011E5D0 )
  {
    v1 = CitpIsOnDefaultDesktop();
    if ( ((*((_BYTE *)v0 + 432) & 0x10) != 0) != v1 )
    {
      if ( (*((_BYTE *)v0 + 432) & 0x10) != 0 )
        CitpStatIncrement((unsigned __int16 *)v0 + 101, 1);
      *((_BYTE *)v0 + 432) ^= (*((_BYTE *)v0 + 432) ^ (16 * v1)) & 0x10;
      IsUserDesktopActive = CitpIsUserDesktopActive(v0);
      CIT_DESKTOP_ACTIVE_TRACKER::UpdateActive(
        (struct _CIT_IMPACT_CONTEXT *)((char *)v0 + 592),
        IsUserDesktopActive,
        v3);
    }
  }
}
