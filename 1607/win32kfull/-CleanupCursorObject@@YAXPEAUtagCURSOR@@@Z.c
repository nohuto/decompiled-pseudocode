/*
 * XREFs of ?CleanupCursorObject@@YAXPEAUtagCURSOR@@@Z @ 0x1C00900A0
 * Callers:
 *     _DestroyCursor @ 0x1C008FEA4 (_DestroyCursor.c)
 * Callees:
 *     ?DestroyAniIcon@@YAHPEAUtagACON@@@Z @ 0x1C008FA80 (-DestroyAniIcon@@YAHPEAUtagACON@@@Z.c)
 *     GreDereferenceObject @ 0x1C00D7D48 (GreDereferenceObject.c)
 */

void __fastcall CleanupCursorObject(struct tagCURSOR *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  HSURF v5; // rcx
  HSURF v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx

  if ( *((_WORD *)a1 + 28) )
  {
    Win32FreePool(*((_QWORD *)a1 + 8), a2, a3);
    *((_DWORD *)a1 + 14) = 0;
    *((_QWORD *)a1 + 8) = 0LL;
  }
  v4 = *((unsigned __int16 *)a1 + 36);
  if ( (_WORD)v4 )
  {
    UserDeleteAtom(v4);
    *((_WORD *)a1 + 36) = 0;
  }
  if ( (*((_DWORD *)a1 + 20) & 8) != 0 )
  {
    DestroyAniIcon(a1, a2, a3);
  }
  else
  {
    v5 = (HSURF)*((_QWORD *)a1 + 11);
    if ( v5 )
    {
      GreDereferenceObject(v5);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
      *((_QWORD *)a1 + 11) = 0LL;
    }
    v6 = (HSURF)*((_QWORD *)a1 + 12);
    if ( v6 )
    {
      GreDereferenceObject(v6);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
      *((_QWORD *)a1 + 12) = 0LL;
    }
    v7 = *((_QWORD *)a1 + 16);
    if ( v7 )
    {
      GreDeleteObject(v7);
      GreDecQuotaCount(*((_QWORD *)a1 + 3));
      *((_QWORD *)a1 + 16) = 0LL;
    }
    v8 = *((_QWORD *)a1 + 13);
    if ( v8 )
    {
      GreDeleteObject(v8);
      *((_QWORD *)a1 + 13) = 0LL;
    }
  }
}
