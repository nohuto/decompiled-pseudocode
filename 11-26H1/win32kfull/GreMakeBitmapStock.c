/*
 * XREFs of GreMakeBitmapStock @ 0x1400A4690
 * Callers:
 *     NtGdiSetBitmapAttributes @ 0x1400A4670 (NtGdiSetBitmapAttributes.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1400A4624 (-bDIBSection@SURFACE@@QEAAHXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400A4CE8 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

unsigned __int64 __fastcall GreMakeBitmapStock(struct HOBJ__ *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rsi
  unsigned __int8 v3; // r8
  struct OBJECT *v4; // rdi
  unsigned int v5; // ebx
  SURFACE *v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // r14
  bool v9; // zf
  __int64 v10; // r8
  __int64 v12; // [rsp+20h] [rbp-20h] BYREF
  int v13; // [rsp+28h] [rbp-18h]
  __int16 v14; // [rsp+2Ch] [rbp-14h]
  struct Gre::Base::SESSION_GLOBALS *v15; // [rsp+30h] [rbp-10h]
  __int64 v16; // [rsp+68h] [rbp+28h] BYREF

  v2 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v16, v2);
  if ( ((unsigned int)a1 & 0x800000) != 0 )
    goto LABEL_17;
  v12 = 0LL;
  v13 = 0;
  v14 = 0;
  v15 = v2;
  if ( !(unsigned int)HANDLELOCK::bLockHobj((HANDLELOCK *)&v12, a1, v3)
    || (v4 = HANDLELOCK::pObj((HANDLELOCK *)&v12), *((_DWORD *)v4 + 2))
    || (v5 = *(_DWORD *)(v12 + 8) & 0xFFFFFFFE, v5 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC))
    || *((_DWORD *)v4 + 42)
    || (unsigned int)SURFACE::bDIBSection(v4)
    || (*((_DWORD *)v4 + 28) & 0x800) != 0
    || SURFACE::GetFirstLSurf(v6)
    || *((int *)v4 + 28) < 0 )
  {
LABEL_16:
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v12);
LABEL_17:
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v16);
    return 0LL;
  }
  if ( _InterlockedDecrement((volatile signed __int32 *)v2 + 1089) < 0
    || (v8 = (unsigned __int64)a1 | 0x800000, !HmgModifyHandleType(v8, v7)) )
  {
    _InterlockedIncrement((volatile signed __int32 *)v2 + 1089);
    goto LABEL_16;
  }
  v9 = (*(_DWORD *)v4 & 0x800000) == 0;
  *((_QWORD *)v4 + 4) = v8;
  if ( !v9 )
    *((_WORD *)v4 + 51) |= 0x200u;
  ++*((_DWORD *)v4 + 2);
  TrackHmgrReferenceIncrement(v2, 5u, v4);
  HANDLELOCK::vUnlock((HANDLELOCK *)&v12);
  LOBYTE(v10) = 5;
  HmgSetOwner(v8, 0LL, v10);
  HmgDecrementShareReferenceCount(v2, v4);
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v12);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v16);
  return v8;
}
