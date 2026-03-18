/*
 * XREFs of ?Initialize@CChannel@DirectComposition@@MEAAJXZ @ 0x1C00424F0
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C0041DA0 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C000DDF0 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall DirectComposition::CChannel::Initialize(DirectComposition::CChannel *this)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rbx
  NTSTATUS v4; // edi

  v2 = (struct _ERESOURCE *)Win32AllocPoolNonPaged();
  v3 = v2;
  if ( v2 )
    memset(v2, 0, sizeof(struct _ERESOURCE));
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = ExInitializeResourceLite(v3);
    if ( v4 < 0 )
      Win32FreePool();
    else
      *((_QWORD *)this + 4) = v3;
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
