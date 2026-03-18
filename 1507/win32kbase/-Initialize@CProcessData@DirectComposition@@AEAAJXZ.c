/*
 * XREFs of ?Initialize@CProcessData@DirectComposition@@AEAAJXZ @ 0x1C00245C0
 * Callers:
 *     ?OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z @ 0x1C0024564 (-OnProcessCreation@CProcessData@DirectComposition@@SAJPEAU_W32PROCESS@@@Z.c)
 * Callees:
 *     ?OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z @ 0x1C00246AC (-OnProcessCreation@CChannel@DirectComposition@@SAJPEAVCProcessData@2@@Z.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall DirectComposition::CProcessData::Initialize(DirectComposition::CProcessData *this)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rbx
  NTSTATUS v4; // edi

  v2 = (struct _ERESOURCE *)Win32AllocPoolNonPaged(104LL, 1935885124LL);
  v3 = v2;
  if ( v2 )
    memset(v2, 0, sizeof(struct _ERESOURCE));
  else
    v3 = 0LL;
  if ( v3 )
  {
    v4 = ExInitializeResourceLite(v3);
    if ( v4 < 0 )
    {
      Win32FreePool(v3);
      v3 = 0LL;
    }
  }
  else
  {
    v4 = -1073741801;
  }
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = v3;
  if ( v4 >= 0 )
    return (unsigned int)DirectComposition::CChannel::OnProcessCreation(this);
  return (unsigned int)v4;
}
