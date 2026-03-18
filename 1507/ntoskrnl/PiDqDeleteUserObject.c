/*
 * XREFs of PiDqDeleteUserObject @ 0x140681EA0
 * Callers:
 *     PiDqDeleteUserObjectFromLoadedHives @ 0x140681F74 (PiDqDeleteUserObjectFromLoadedHives.c)
 * Callees:
 *     wcsrchr @ 0x140173D28 (wcsrchr.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140416040 (PiDqGetRelativeObjectRegPath.c)
 *     _PnpCtxRegDeleteTree @ 0x14058F9B0 (_PnpCtxRegDeleteTree.c)
 *     _PnpCtxRegDeleteKey @ 0x1407123A4 (_PnpCtxRegDeleteKey.c)
 */

__int64 __fastcall PiDqDeleteUserObject(__int64 a1, int a2, int a3)
{
  int RelativeObjectRegPath; // ebp
  unsigned int v6; // ebx
  int v7; // edi
  unsigned int i; // edi
  wchar_t *v9; // rax
  wchar_t *v10; // r8
  wchar_t *Str; // [rsp+58h] [rbp+20h] BYREF

  Str = 0LL;
  RelativeObjectRegPath = PiDqGetRelativeObjectRegPath(a2, a3, (PVOID *)&Str);
  if ( RelativeObjectRegPath < 0 )
    goto LABEL_9;
  v6 = 2;
  RelativeObjectRegPath = PnpCtxRegDeleteTree(*(__int64 *)&PiPnpRtlCtx, a1, (__int64)Str);
  v7 = a3 - 1;
  if ( !v7 )
    goto LABEL_5;
  if ( v7 != 2 )
  {
    v6 = 0;
LABEL_5:
    i = 0;
    if ( !v6 )
      goto LABEL_9;
    goto LABEL_6;
  }
  v6 = 1;
  for ( i = 0; i < v6; ++i )
  {
LABEL_6:
    v9 = wcsrchr(Str, 0x5Cu);
    if ( v9 )
    {
      v10 = Str;
      *v9 = 0;
      if ( (int)PnpCtxRegDeleteKey(*(_QWORD *)&PiPnpRtlCtx, a1, v10) < 0 )
        break;
    }
  }
LABEL_9:
  if ( Str )
    ExFreePoolWithTag(Str, 0x58706E50u);
  return (unsigned int)RelativeObjectRegPath;
}
