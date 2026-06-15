/*
 * XREFs of ?GetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180035B30
 * Callers:
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180035148 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioSessionStore::GetValue(
        CAudioSessionStore *this,
        const struct _tagpropertykey *a2,
        PROPVARIANT *a3)
{
  HRESULT v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // rax

  v6 = 0;
  if ( !a3 )
    return 2147500035LL;
  *(_OWORD *)a3 = 0uLL;
  a3[2] = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v7 = *((_QWORD *)this + 3);
  if ( v7 )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(v7 + 16) == a2->pid )
      {
        v9 = *(_QWORD *)v7 - *(_QWORD *)&a2->fmtid.Data1;
        if ( *(_QWORD *)v7 == *(_QWORD *)&a2->fmtid.Data1 )
          v9 = *(_QWORD *)(v7 + 8) - *(_QWORD *)a2->fmtid.Data4;
        if ( !v9 )
          break;
      }
      v7 = *(_QWORD *)(v7 + 48);
      if ( !v7 )
        goto LABEL_3;
    }
    v6 = PropVariantCopy(a3, (const PROPVARIANT *)(v7 + 24));
    if ( v6 >= 0 )
      v6 = 0;
  }
LABEL_3:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v6 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x50u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      v6);
  }
  return (unsigned int)v6;
}
