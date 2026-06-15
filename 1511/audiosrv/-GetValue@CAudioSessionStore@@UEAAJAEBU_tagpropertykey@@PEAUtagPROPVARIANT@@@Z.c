/*
 * XREFs of ?GetValue@CAudioSessionStore@@UEAAJAEBU_tagpropertykey@@PEAUtagPROPVARIANT@@@Z @ 0x180036B70
 * Callers:
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180035388 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 */

__int64 __fastcall CAudioSessionStore::GetValue(
        CAudioSessionStore *this,
        const struct _tagpropertykey *a2,
        PROPVARIANT *a3)
{
  HRESULT v6; // ebx
  __int64 v8; // rdx

  v6 = 0;
  if ( !a3 )
    return 2147500035LL;
  *(_OWORD *)a3 = 0uLL;
  a3[2] = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v8 = *((_QWORD *)this + 3);
  if ( v8 )
  {
    while ( *(_DWORD *)(v8 + 16) != a2->pid
         || *(_QWORD *)v8 != *(_QWORD *)&a2->fmtid.Data1
         || *(_QWORD *)(v8 + 8) != *(_QWORD *)a2->fmtid.Data4 )
    {
      v8 = *(_QWORD *)(v8 + 48);
      if ( !v8 )
        goto LABEL_11;
    }
    v6 = PropVariantCopy(a3, (const PROPVARIANT *)(v8 + 24));
    if ( v6 >= 0 )
      v6 = 0;
  }
LABEL_11:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  if ( v6 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      79LL,
      &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids,
      (unsigned int)v6);
  }
  return (unsigned int)v6;
}
