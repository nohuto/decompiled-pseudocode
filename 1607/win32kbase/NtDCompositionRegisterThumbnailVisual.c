/*
 * XREFs of NtDCompositionRegisterThumbnailVisual @ 0x1C0004970
 * Callers:
 *     <none>
 * Callees:
 *     DwmAsyncRegisterSharedThumbnailVisualApiExt_0 @ 0x1C0001AB8 (DwmAsyncRegisterSharedThumbnailVisualApiExt_0.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C001D660 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     GreLockDwmState @ 0x1C001D890 (GreLockDwmState.c)
 *     UserReferenceDwmApiPort @ 0x1C001F5C0 (UserReferenceDwmApiPort.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C00485A8 (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     GreUnlockDwmState @ 0x1C0071C10 (GreUnlockDwmState.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall NtDCompositionRegisterThumbnailVisual(
        void *a1,
        void *a2,
        char a3,
        int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        char a7,
        void **a8,
        void *a9)
{
  __int16 v11; // r12
  __int16 v12; // r15
  void **v13; // rbx
  int v14; // edi
  __int128 *v15; // rcx
  __int128 *v16; // rcx
  char v17; // al
  CompositionObject *v18; // r14
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  char v24; // al
  void *v25; // [rsp+40h] [rbp-B8h] BYREF
  PVOID Object[3]; // [rsp+48h] [rbp-B0h] BYREF
  __int128 v27; // [rsp+60h] [rbp-98h]
  __int128 v28; // [rsp+70h] [rbp-88h]
  _DWORD v29[12]; // [rsp+80h] [rbp-78h] BYREF

  v11 = (__int16)a2;
  v12 = (__int16)a1;
  Object[1] = a1;
  Object[2] = a2;
  v13 = a8;
  Object[0] = a9;
  v14 = 0;
  v25 = 0LL;
  memset(v29, 0, 0x2DuLL);
  if ( v13 + 1 < v13 || (unsigned __int64)(a8 + 1) > MmUserProbeAddress )
    v13 = (void **)MmUserProbeAddress;
  v25 = *v13;
  v29[0] = a4;
  v15 = (__int128 *)a5;
  if ( a5 + 16 < a5 || a5 + 16 > MmUserProbeAddress )
    v15 = (__int128 *)MmUserProbeAddress;
  v27 = *v15;
  *(_OWORD *)&v29[1] = v27;
  v16 = (__int128 *)a6;
  if ( a6 + 16 < a6 || a6 + 16 > MmUserProbeAddress )
    v16 = (__int128 *)MmUserProbeAddress;
  v28 = *v16;
  *(_OWORD *)&v29[5] = v28;
  LOBYTE(v29[9]) = a7;
  *(_DWORD *)((char *)&v29[9] + 1) = (a3 & 4) != 0;
  *(_DWORD *)((char *)&v29[10] + 1) = (a3 & 8) != 0;
  if ( (v29[0] & 9) != 9
    || (v29[0] & 2) != 0 && (v29[7] < v29[5] || v29[8] < v29[6] ? (v24 = 0) : (v24 = 1), !v24)
    || (v29[3] < v29[1] || v29[4] < v29[2] ? (v17 = 0) : (v17 = 1), !v17 || *(_QWORD *)&v29[1] || v12 == v11) )
  {
    v14 = -1073741811;
  }
  if ( v14 >= 0 )
  {
    v14 = DirectComposition::ResourceObject::ResolveHandle(
            a9,
            1u,
            1,
            (struct DirectComposition::ResourceObject **)Object);
    if ( v14 >= 0 )
    {
      v18 = (CompositionObject *)Object[0];
      if ( *((_DWORD *)Object[0] + 9) == 32 )
      {
        v25 = 0LL;
        GreLockDwmState();
        v14 = CompositionObject::OpenDwmHandle(v18, &v25);
        if ( v14 >= 0 )
        {
          UserReferenceDwmApiPort();
          v14 = DwmAsyncRegisterSharedThumbnailVisualApiExt_0();
        }
        GreUnlockDwmState(v20, v19, v21, v22);
      }
      else
      {
        v14 = -1073741811;
      }
      ObfDereferenceObject(v18);
    }
  }
  return (unsigned int)v14;
}
