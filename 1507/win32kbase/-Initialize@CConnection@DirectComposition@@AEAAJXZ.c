/*
 * XREFs of ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0080A2C
 * Callers:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C0080624 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C0080BAC (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall DirectComposition::CConnection::Initialize(DirectComposition::CConnection *this)
{
  struct DirectComposition::CConnection *v1; // rsi
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rdi
  NTSTATUS v4; // ebx
  struct _ERESOURCE *v5; // rax
  struct _ERESOURCE *v6; // rdi
  int v7; // eax

  v1 = DirectComposition::CConnection::s_pSessionConnection;
  v2 = (struct _ERESOURCE *)Win32AllocPoolNonPaged();
  v3 = v2;
  if ( v2 )
    memset(v2, 0, sizeof(struct _ERESOURCE));
  else
    v3 = 0LL;
  if ( !v3 )
    return (unsigned int)-1073741801;
  v4 = ExInitializeResourceLite(v3);
  if ( v4 < 0 )
    goto LABEL_16;
  *((_QWORD *)v1 + 1) = v3;
  v5 = (struct _ERESOURCE *)Win32AllocPoolNonPaged();
  v6 = v5;
  if ( v5 )
    memset(v5, 0, sizeof(struct _ERESOURCE));
  else
    v6 = 0LL;
  v7 = v4;
  if ( !v6 )
    v7 = -1073741801;
  v4 = v7;
  if ( v7 >= 0 )
  {
    v4 = ExInitializeResourceLite(v6);
    if ( v4 >= 0 )
    {
      *((_QWORD *)v1 + 2) = v6;
      return (unsigned int)DirectComposition::CSystemChannel::Create(
                             v1,
                             (struct DirectComposition::CSystemChannel **)v1 + 19);
    }
LABEL_16:
    Win32FreePool();
  }
  return (unsigned int)v4;
}
