/*
 * XREFs of NtDCompositionRegisterThumbnailVisual @ 0x1C0004710
 * Callers:
 *     <none>
 * Callees:
 *     DwmAsyncRegisterSharedThumbnailVisualApiExt_0 @ 0x1C0001AB8 (DwmAsyncRegisterSharedThumbnailVisualApiExt_0.c)
 *     GreUnlockDwmState @ 0x1C0037310 (GreUnlockDwmState.c)
 *     GreLockDwmState @ 0x1C0037340 (GreLockDwmState.c)
 *     ?OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z @ 0x1C0045F80 (-OpenDwmHandle@CompositionObject@@QEBAJPEAPEAX@Z.c)
 *     UserReferenceDwmApiPort @ 0x1C0072820 (UserReferenceDwmApiPort.c)
 *     ?ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z @ 0x1C007700C (-ResolveHandle@ResourceObject@DirectComposition@@KAJPEAXKDPEAPEAU12@@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
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
  char v18; // al
  CompositionObject *v19; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  void *v25; // [rsp+40h] [rbp-B8h] BYREF
  PVOID Object[3]; // [rsp+48h] [rbp-B0h] BYREF
  __int128 v27; // [rsp+60h] [rbp-98h]
  __int128 v28; // [rsp+70h] [rbp-88h]
  int v29; // [rsp+80h] [rbp-78h]
  _BYTE v30[41]; // [rsp+84h] [rbp-74h] BYREF

  v11 = (__int16)a2;
  v12 = (__int16)a1;
  Object[2] = a1;
  Object[1] = a2;
  v13 = a8;
  Object[0] = a9;
  v14 = 0;
  v25 = 0LL;
  v29 = 0;
  memset(v30, 0, sizeof(v30));
  if ( v13 + 1 < v13 || (unsigned __int64)(a8 + 1) > MmUserProbeAddress )
    v13 = (void **)MmUserProbeAddress;
  v25 = *v13;
  v29 = a4;
  v15 = (__int128 *)a5;
  if ( a5 + 16 < a5 || a5 + 16 > MmUserProbeAddress )
    v15 = (__int128 *)MmUserProbeAddress;
  v27 = *v15;
  *(_OWORD *)v30 = v27;
  v16 = (__int128 *)a6;
  if ( a6 + 16 < a6 || a6 + 16 > MmUserProbeAddress )
    v16 = (__int128 *)MmUserProbeAddress;
  v28 = *v16;
  *(_OWORD *)&v30[16] = v28;
  v30[32] = a7;
  *(_DWORD *)&v30[33] = (a3 & 4) != 0;
  *(_DWORD *)&v30[37] = (a3 & 8) != 0;
  if ( (v29 & 9) != 9
    || (v29 & 2) != 0
    && (*(int *)&v30[24] < *(int *)&v30[16] || *(int *)&v30[28] < *(int *)&v30[20] ? (v17 = 0) : (v17 = 1), !v17)
    || (*(int *)&v30[8] < *(int *)v30 || *(int *)&v30[12] < *(int *)&v30[4] ? (v18 = 0) : (v18 = 1),
        !v18 || *(_QWORD *)v30 || v12 == v11) )
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
      v19 = (CompositionObject *)Object[0];
      if ( *((_DWORD *)Object[0] + 9) == 31 )
      {
        v25 = 0LL;
        GreLockDwmState();
        v14 = CompositionObject::OpenDwmHandle(v19, &v25);
        if ( v14 >= 0 )
        {
          UserReferenceDwmApiPort();
          v14 = DwmAsyncRegisterSharedThumbnailVisualApiExt_0();
        }
        GreUnlockDwmState(v21, v20, v22, v23);
      }
      else
      {
        v14 = -1073741811;
      }
      ObfDereferenceObject(v19);
    }
  }
  return (unsigned int)v14;
}
