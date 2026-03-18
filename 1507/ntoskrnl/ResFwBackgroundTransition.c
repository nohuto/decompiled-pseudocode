/*
 * XREFs of ResFwBackgroundTransition @ 0x14075CC74
 * Callers:
 *     BgpFwLibraryEnable @ 0x14015003C (BgpFwLibraryEnable.c)
 *     ResFwFreeContext @ 0x14075C040 (ResFwFreeContext.c)
 *     BgpFwLibraryDestroy @ 0x14075F6E8 (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x14075F794 (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140150250 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140150298 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x140152748 (BgpFwFreeMemory.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ResFwpPageInBackground @ 0x14075CCB4 (ResFwpPageInBackground.c)
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
      if ( v1 == 1 && (dword_140323CF0 & 0xC00) != 0xC00 )
      {
        v2 = Src;
        if ( Src )
        {
          _InterlockedExchange64((volatile __int64 *)&Src, 0LL);
          BgpFwFreeMemory((__int64)v2);
        }
        v3 = qword_140323D40;
        if ( qword_140323D40 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_140323D40, 0LL);
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
