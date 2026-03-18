/*
 * XREFs of NtGdiDdDDIDestroyDCFromMemory @ 0x14021A6A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x1400158B4 (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1400181B8 (--0SURFREF@@QEAA@XZ.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall NtGdiDdDDIDestroyDCFromMemory(void *Src)
{
  Gre::Base *v1; // rcx
  int v2; // ebx
  struct Gre::Base::SESSION_GLOBALS *v3; // rsi
  __int64 v4; // r8
  __int64 v5; // rax
  __int128 v7; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v8[32]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+50h] [rbp-18h]
  __int64 v10; // [rsp+78h] [rbp+10h] BYREF

  v7 = 0LL;
  RtlCopyFromUser(&v7, Src, 0x10uLL);
  if ( !*((_QWORD *)&v7 + 1) || !(_QWORD)v7 )
    return 3221225485LL;
  v2 = -1073741811;
  v3 = Gre::Base::Globals(v1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v10, v3);
  SURFREF::SURFREF((SURFREF *)v8);
  LOBYTE(v4) = 5;
  v5 = HmgShareLock(v3, *((_QWORD *)&v7 + 1), v4, 16LL);
  v9 = v5;
  if ( v5 && *(_QWORD *)(v5 + 224) )
    v2 = 0;
  SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v8);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v10);
  if ( v2 >= 0 )
  {
    if ( !(unsigned int)GrepDeleteDC(v7, 0x1000000LL) )
      v2 = -1073741811;
    if ( v2 >= 0 && !bDeleteSurface(v3, *((HSURF *)&v7 + 1)) )
      return (unsigned int)-1073741811;
  }
  return (unsigned int)v2;
}
