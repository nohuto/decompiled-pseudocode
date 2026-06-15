/*
 * XREFs of ?GetAt@CAudioSessionStore@@UEAAJKPEAU_tagpropertykey@@@Z @ 0x180082680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
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
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x4Eu, (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, v9);
  }
  return (unsigned int)v9;
}
