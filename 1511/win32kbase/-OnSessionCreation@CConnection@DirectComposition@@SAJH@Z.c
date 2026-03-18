/*
 * XREFs of ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C007D114
 * Callers:
 *     DCompositionSessionInitialize @ 0x1C007D030 (DCompositionSessionInitialize.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0012700 (Win32AllocPoolNonPaged.c)
 *     ??0CConnection@DirectComposition@@AEAA@XZ @ 0x1C0012FC4 (--0CConnection@DirectComposition@@AEAA@XZ.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0013B0C (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall DirectComposition::CConnection::OnSessionCreation(int a1)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rdi
  NTSTATUS v4; // ebx
  __int64 v5; // rcx
  union _SLIST_HEADER *v6; // rax

  DirectComposition::CConnection::s_pSessionConnectionLock = 0LL;
  v2 = (struct _ERESOURCE *)Win32AllocPoolNonPaged();
  v3 = v2;
  if ( v2 )
    memset(v2, 0, sizeof(struct _ERESOURCE));
  else
    v3 = 0LL;
  if ( !v3 )
  {
    v4 = -1073741801;
LABEL_19:
    if ( v4 < 0 )
      return (unsigned int)v4;
    goto LABEL_5;
  }
  v4 = ExInitializeResourceLite(v3);
  if ( v4 < 0 )
  {
    Win32FreePool();
    v3 = 0LL;
    goto LABEL_19;
  }
LABEL_5:
  DirectComposition::CConnection::s_pSessionConnectionLock = v3;
  if ( v4 >= 0 )
  {
    KeQueryPerformanceCounter(&DirectComposition::CConnection::s_qpcFrequency);
    if ( a1 || (unsigned int)PsGetCurrentProcessSessionId(v5) )
    {
      v6 = (union _SLIST_HEADER *)Win32AllocPoolZInit(0x100uLL);
      if ( v6 )
        v6 = DirectComposition::CConnection::CConnection(v6);
      DirectComposition::CConnection::s_pSessionConnection = (DirectComposition::CConnection *)v6;
      if ( !v6 )
        v4 = -1073741801;
      if ( v4 >= 0 )
        return (unsigned int)DirectComposition::CConnection::Initialize((DirectComposition::CConnection *)v6);
    }
  }
  return (unsigned int)v4;
}
