/*
 * XREFs of ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C0080624
 * Callers:
 *     DCompositionSessionInitialize @ 0x1C0080540 (DCompositionSessionInitialize.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     ??0CConnection@DirectComposition@@AEAA@XZ @ 0x1C008084C (--0CConnection@DirectComposition@@AEAA@XZ.c)
 *     ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0080A2C (-Initialize@CConnection@DirectComposition@@AEAAJXZ.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall DirectComposition::CConnection::OnSessionCreation(int a1)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rdi
  NTSTATUS v4; // ebx
  __int64 v5; // rcx
  DirectComposition::CConnection *v6; // rax
  DirectComposition::CConnection *v7; // rcx

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
      v6 = (DirectComposition::CConnection *)Win32AllocPoolZInit(0x100uLL);
      if ( v6 )
        v6 = (DirectComposition::CConnection *)DirectComposition::CConnection::CConnection(v6);
      DirectComposition::CConnection::s_pSessionConnection = v6;
      if ( !v6 )
        v4 = -1073741801;
      if ( v4 >= 0 )
        return (unsigned int)DirectComposition::CConnection::Initialize(v7);
    }
  }
  return (unsigned int)v4;
}
