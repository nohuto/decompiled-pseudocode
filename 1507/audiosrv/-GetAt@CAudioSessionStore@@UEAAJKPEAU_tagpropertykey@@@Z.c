/*
 * XREFs of ?GetAt@CAudioSessionStore@@UEAAJKPEAU_tagpropertykey@@@Z @ 0x180086870
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioSessionStore::GetAt(CAudioSessionStore *this, int a2, struct _tagpropertykey *a3)
{
  __int64 v7; // rax
  int v8; // ecx
  int v9; // ebx

  if ( !a3 )
    return 2147500035LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v7 = *((_QWORD *)this + 3);
  v8 = 0;
  if ( !v7 )
    goto LABEL_10;
  do
  {
    if ( *(_WORD *)(v7 + 24) )
    {
      if ( v8 == a2 )
        break;
      ++v8;
    }
    v7 = *(_QWORD *)(v7 + 48);
  }
  while ( v7 );
  if ( v7 )
  {
    a3->fmtid = *(GUID *)v7;
    a3->pid = *(_DWORD *)(v7 + 16);
    v9 = 0;
  }
  else
  {
LABEL_10:
    *(_QWORD *)&a3->fmtid.Data1 = 0LL;
    *(_QWORD *)a3->fmtid.Data4 = 0LL;
    a3->pid = 0;
    v9 = -2147024809;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v9 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x4Fu,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      v9);
  }
  return (unsigned int)v9;
}
