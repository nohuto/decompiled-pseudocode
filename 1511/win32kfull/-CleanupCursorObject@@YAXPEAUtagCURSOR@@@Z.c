/*
 * XREFs of ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C0123F20
 * Callers:
 *     _DestroyCursor @ 0x1C0123CD0 (_DestroyCursor.c)
 * Callees:
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C0123BE0 (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 */

void __fastcall CleanupCursorObject(struct tagCURSOR *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( *((_WORD *)a1 + 28) )
  {
    Win32FreePool(*((_QWORD *)a1 + 8));
    *((_DWORD *)a1 + 14) = 0;
    *((_QWORD *)a1 + 8) = 0LL;
  }
  v2 = *((unsigned __int16 *)a1 + 36);
  if ( (_WORD)v2 )
  {
    UserDeleteAtom(v2);
    *((_WORD *)a1 + 36) = 0;
  }
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
  {
    DestroyAniIcon(a1);
  }
  else
  {
    v3 = *((_QWORD *)a1 + 11);
    if ( v3 )
    {
      GreDeleteObject(v3);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
    }
    v4 = *((_QWORD *)a1 + 12);
    if ( v4 )
    {
      GreDeleteObject(v4);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
    }
    v5 = *((_QWORD *)a1 + 16);
    if ( v5 )
    {
      GreDeleteObject(v5);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
    }
    v6 = *((_QWORD *)a1 + 13);
    if ( v6 )
      GreDeleteObject(v6);
  }
}
