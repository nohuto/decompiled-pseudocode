/*
 * XREFs of ?Initialize@CAudioSessionStore@@QEAAJPEBG@Z @ 0x18006BF08
 * Callers:
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x18006B4C8 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180027B6C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     ?LoadPropertyStore@CAudioSessionStore@@AEAAJXZ @ 0x18006C340 (-LoadPropertyStore@CAudioSessionStore@@AEAAJXZ.c)
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
    goto LABEL_12;
  if ( !InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)((char *)this + 48), 0xFA0u) )
  {
    LastError = GetLastError();
    PropertyStore = LastError;
    if ( LastError > 0 )
      PropertyStore = (unsigned __int16)LastError | 0x80070000;
  }
  if ( PropertyStore < 0 || (PropertyStore = CAudioSessionStore::LoadPropertyStore(this), PropertyStore < 0) )
LABEL_12:
    AudSrvTraceLoggingErrorHelper("CAudioSessionStore::Initialize", 4616, PropertyStore);
  return (unsigned int)PropertyStore;
}
