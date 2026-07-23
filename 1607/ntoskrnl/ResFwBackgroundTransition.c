/*
 * XREFs of ResFwBackgroundTransition @ 0x140725ACC
 * Callers:
 *     BgpFwLibraryEnable @ 0x14012754C (BgpFwLibraryEnable.c)
 *     ResFwFreeContext @ 0x140725050 (ResFwFreeContext.c)
 *     BgpFwLibraryDestroy @ 0x140728770 (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x140728834 (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140127764 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1401277A0 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ResFwpPageInBackground @ 0x140725B0C (ResFwpPageInBackground.c)
 */

void __fastcall ResFwBackgroundTransition(int a1)
{
  int v1; // ecx
  void *v2; // rcx
  PVOID v3; // rbx

  if ( a1 )
  {
    v1 = a1 - 1;
    if ( v1 )
    {
      if ( v1 == 1 && (dword_1402F9F90 & 0xC00) != 0xC00 )
      {
        v2 = Src;
        if ( Src )
        {
          _InterlockedExchange64((volatile __int64 *)&Src, 0LL);
          BgpFwFreeMemory((__int64)v2);
        }
        v3 = qword_1402F9FE0;
        if ( qword_1402F9FE0 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_1402F9FE0, 0LL);
          BgpFwReleaseLock();
          ExFreePoolWithTag(v3, 0x4B494742u);
          BgpFwAcquireLock();
        }
        LODWORD(Size) = 0;
      }
    }
    else
    {
      ResFwpPageOutBackground();
    }
  }
  else
  {
    ResFwpPageInBackground();
  }
}
