/*
 * XREFs of ResFwBackgroundTransition @ 0x1406D9C2C
 * Callers:
 *     BgpFwLibraryEnable @ 0x14011BDB8 (BgpFwLibraryEnable.c)
 *     ResFwFreeContext @ 0x1406D9204 (ResFwFreeContext.c)
 *     BgpFwLibraryDestroy @ 0x1406DC6A0 (BgpFwLibraryDestroy.c)
 *     BgpFwLibraryDisable @ 0x1406DC74C (BgpFwLibraryDisable.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14011BFCC (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14011C010 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x14011E4C8 (BgpFwFreeMemory.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ResFwpPageInBackground @ 0x1406D9C6C (ResFwpPageInBackground.c)
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
      if ( v1 == 1 && (dword_1402D4BB0 & 0xC00) != 0xC00 )
      {
        v2 = qword_1402D4BF8;
        if ( qword_1402D4BF8 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_1402D4BF8, 0LL);
          BgpFwFreeMemory((__int64)v2);
        }
        v3 = qword_1402D4C00;
        if ( qword_1402D4C00 )
        {
          _InterlockedExchange64((volatile __int64 *)&qword_1402D4C00, 0LL);
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
