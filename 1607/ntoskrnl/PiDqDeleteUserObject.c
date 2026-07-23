/*
 * XREFs of PiDqDeleteUserObject @ 0x140631648
 * Callers:
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x14063171C (PiDqDeleteUserObjectFromLoadedHives.c)
 * Callees:
 *     wcsrchr @ 0x14014F694 (wcsrchr.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     _PnpCtxRegDeleteTree @ 0x140550B58 (_PnpCtxRegDeleteTree.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140631854 (PiDqGetRelativeObjectRegPath.c)
 *     _PnpCtxRegDeleteKey @ 0x1406D71B8 (_PnpCtxRegDeleteKey.c)
 */

__int64 __fastcall PiDqDeleteUserObject(__int64 a1, int a2, int a3)
{
  unsigned int RelativeObjectRegPath; // ebp
  unsigned int v6; // ebx
  int v7; // edi
  unsigned int i; // edi
  wchar_t *v9; // rax

  RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(a2);
  if ( (RelativeObjectRegPath & 0x80000000) != 0 )
    return RelativeObjectRegPath;
  v6 = 2;
  RelativeObjectRegPath = PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, a1, 0LL);
  v7 = a3 - 1;
  if ( !v7 )
    goto LABEL_5;
  if ( v7 != 2 )
  {
    v6 = 0;
LABEL_5:
    i = 0;
    if ( !v6 )
      return RelativeObjectRegPath;
    goto LABEL_6;
  }
  v6 = 1;
  for ( i = 0; i < v6; ++i )
  {
LABEL_6:
    v9 = wcsrchr(0LL, 0x5Cu);
    if ( v9 )
    {
      *v9 = 0;
      if ( (int)PnpCtxRegDeleteKey(*(_QWORD *)&PiPnpRtlCtx, a1, 0LL) < 0 )
        break;
    }
  }
  return RelativeObjectRegPath;
}
