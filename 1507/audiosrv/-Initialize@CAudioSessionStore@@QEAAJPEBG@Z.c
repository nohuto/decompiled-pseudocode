/*
 * XREFs of ?Initialize@CAudioSessionStore@@QEAAJPEBG@Z @ 0x180035CF8
 * Callers:
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x180033440 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002E51C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x180035788 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
 */

__int64 __fastcall CAudioSessionStore::Initialize(CAudioSessionStore *this, size_t *a2)
{
  __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  unsigned __int16 *v6; // rax
  int PropertyStore; // ebx
  signed int LastError; // eax

  v4 = -1LL;
  do
    ++v4;
  while ( *((_WORD *)a2 + v4) );
  v5 = v4 + 1;
  v6 = (unsigned __int16 *)operator new(saturated_mul(v5, 2uLL));
  *((_QWORD *)this + 2) = v6;
  if ( v6 )
    PropertyStore = StringCchCopyW(v6, v5, a2);
  else
    PropertyStore = -2147024882;
  if ( PropertyStore < 0 )
    goto LABEL_15;
  if ( !InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)((char *)this + 48), 0xFA0u) )
  {
    LastError = GetLastError();
    PropertyStore = LastError;
    if ( LastError > 0 )
      PropertyStore = (unsigned __int16)LastError | 0x80070000;
  }
  if ( PropertyStore < 0 || (PropertyStore = CAudioSessionStore::LoadPropertyStore(this), PropertyStore < 0) )
  {
LABEL_15:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x4Cu,
        (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
        PropertyStore);
    }
  }
  return (unsigned int)PropertyStore;
}
