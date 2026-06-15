/*
 * XREFs of ?Release@CAudioSessionStore@@UEAAKXZ @ 0x18006D9F0
 * Callers:
 *     ??1CPolicyConfig@@UEAA@XZ @ 0x180066F68 (--1CPolicyConfig@@UEAA@XZ.c)
 *     ?GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z @ 0x18006B4C8 (-GetAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBGPEAPEAUIPropertyStore@@@Z.c)
 *     ?ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z @ 0x18006DA2C (-ReleaseAudioSessionPropertyStore@CPolicyConfig@@QEAAJPEBG@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioSessionStore@@AEAA@XZ @ 0x180066E4C (--1CAudioSessionStore@@AEAA@XZ.c)
 */

__int64 __fastcall CAudioSessionStore::Release(CAudioSessionStore *this)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !(_DWORD)result )
  {
    if ( this )
    {
      CAudioSessionStore::~CAudioSessionStore(this);
      operator delete(this, (const struct std::nothrow_t *)0x58);
    }
    return 0LL;
  }
  return result;
}
