/*
 * XREFs of ?Initialize@CConnection@DirectComposition@@AEAAJXZ @ 0x1C0013B0C
 * Callers:
 *     ?OnSessionCreation@CConnection@DirectComposition@@SAJH@Z @ 0x1C007D114 (-OnSessionCreation@CConnection@DirectComposition@@SAJH@Z.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C007D970 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0012700 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1C007EB18 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall DirectComposition::CConnection::Initialize(DirectComposition::CConnection *this)
{
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rdi
  NTSTATUS v4; // ebx
  struct _ERESOURCE *v5; // rax
  int v6; // eax

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
  *((_QWORD *)this + 1) = v3;
  v5 = (struct _ERESOURCE *)Win32AllocPoolNonPaged();
  v3 = v5;
  if ( v5 )
    memset(v5, 0, sizeof(struct _ERESOURCE));
  else
    v3 = 0LL;
  v6 = v4;
  if ( !v3 )
    v6 = -1073741801;
  v4 = v6;
  if ( v6 >= 0 )
  {
    v4 = ExInitializeResourceLite(v3);
    if ( v4 >= 0 )
    {
      *((_QWORD *)this + 2) = v3;
      return (unsigned int)DirectComposition::CSystemChannel::Create(
                             this,
                             (struct DirectComposition::CSystemChannel **)this + 19);
    }
LABEL_16:
    Win32FreePool(v3);
  }
  return (unsigned int)v4;
}
