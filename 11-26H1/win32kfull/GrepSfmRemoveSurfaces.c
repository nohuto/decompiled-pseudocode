/*
 * XREFs of GrepSfmRemoveSurfaces @ 0x140328430
 * Callers:
 *     <none>
 * Callees:
 *     ?StopSfmStateTrackingCommon@SFMLOGICALSURFACE@@AEAAJPEAUHDEV__@@@Z @ 0x14009E0B0 (-StopSfmStateTrackingCommon@SFMLOGICALSURFACE@@AEAAJPEAUHDEV__@@@Z.c)
 *     ?DestroyLogicalSurface@@YA_NPEAVSFMLOGICALSURFACE@@W4DestroyLogicalSurfaceOptions@@@Z @ 0x14009EEE8 (-DestroyLogicalSurface@@YA_NPEAVSFMLOGICALSURFACE@@W4DestroyLogicalSurfaceOptions@@@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z @ 0x1400A2484 (--0SFMLOGICALSURFACEREF@@QEAA@PEAUHLSURF__@@W4DestructorDisposition@0@@Z.c)
 *     ?vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z @ 0x1401AB8AC (-vUnlock@PUSHLOCKEX@Gre@@QEAAXH@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1401EA0C0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 */

void __fastcall GrepSfmRemoveSurfaces(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rsi
  __int64 v2; // rcx
  bool v3; // zf
  struct W32_PUSH_LOCK *v4; // rcx
  _QWORD **v5; // rax
  _QWORD *v6; // rbx
  SFMLOGICALSURFACE *v7; // rdi
  _QWORD *v8; // r14
  HLSURF v9; // rdx
  int v10; // eax
  __int64 v11; // rcx
  _QWORD *v12; // rax
  Gre::Base *v13; // rcx
  _BYTE v14[32]; // [rsp+20h] [rbp-38h] BYREF
  volatile signed __int16 *v15; // [rsp+40h] [rbp-18h]
  struct W32_PUSH_LOCK *v16; // [rsp+60h] [rbp+8h] BYREF

  v1 = Gre::Base::Globals(a1);
  v2 = *((_QWORD *)v1 + 543);
  v3 = v2 == -40;
  v4 = (struct W32_PUSH_LOCK *)(v2 + 40);
  v16 = v4;
  if ( !v3 )
    GreAcquirePushLockExclusive(v4);
  v5 = (_QWORD **)(*((_QWORD *)v1 + 543) + 48LL);
  v6 = *v5;
  while ( v6 != v5 )
  {
    v7 = (SFMLOGICALSURFACE *)(v6 - 4);
    v8 = v6;
    v9 = (HLSURF)*(v6 - 4);
    v6 = (_QWORD *)*v6;
    SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((__int64)v14, v9);
    if ( v15 )
    {
      v10 = *((_DWORD *)v7 + 61);
      if ( (v10 & 0x10) != 0 )
        *((_DWORD *)v7 + 61) = v10 & 0xFFFFFFEF;
      else
        *((_DWORD *)v7 + 62) = 0;
      --*(_DWORD *)(*((_QWORD *)v1 + 543) + 64LL);
      v11 = *v8;
      if ( *(_QWORD **)(*v8 + 8LL) != v8 || (v12 = (_QWORD *)v8[1], (_QWORD *)*v12 != v8) )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      SFMLOGICALSURFACE::StopSfmStateTrackingCommon(v7, 0LL);
      v13 = (Gre::Base *)v15;
      if ( v15 )
        _InterlockedDecrement16(v15 + 6);
      v15 = 0LL;
      DestroyLogicalSurface(v13, 3);
    }
    SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v14);
    v5 = (_QWORD **)(*((_QWORD *)v1 + 543) + 48LL);
  }
  Gre::PUSHLOCKEX::vUnlock(&v16, 0);
}
