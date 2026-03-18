/*
 * XREFs of GreMakeBitmapNonStock @ 0x1400A4B20
 * Callers:
 *     NtGdiClearBitmapAttributes @ 0x1400A4B00 (NtGdiClearBitmapAttributes.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1400A4CE8 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

unsigned __int64 __fastcall GreMakeBitmapNonStock(struct HOBJ__ *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  unsigned __int8 v3; // r8
  unsigned __int64 v4; // rbx
  struct OBJECT *v5; // rsi
  unsigned int v6; // r15d
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v11; // [rsp+20h] [rbp-20h] BYREF
  int v12; // [rsp+28h] [rbp-18h]
  __int16 v13; // [rsp+2Ch] [rbp-14h]
  struct Gre::Base::SESSION_GLOBALS *v14; // [rsp+30h] [rbp-10h]
  __int64 v15; // [rsp+60h] [rbp+20h] BYREF

  v2 = Gre::Base::Globals(a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>(&v15, v2);
  if ( ((unsigned int)a1 & 0x800000) == 0 || *(struct HOBJ__ **)(*((_QWORD *)v2 + 386) + 168LL) == a1 )
    goto LABEL_12;
  v4 = 0LL;
  v14 = v2;
  v11 = 0LL;
  v12 = 0;
  v13 = 0;
  if ( !(unsigned int)HANDLELOCK::bLockHobj((HANDLELOCK *)&v11, a1, v3)
    || (v5 = HANDLELOCK::pObj((HANDLELOCK *)&v11), v5 == *((struct OBJECT **)v2 + 547))
    || (*(_DWORD *)(v11 + 8) & 0xFFFFFFFE) != 0
    && (v6 = *(_DWORD *)(v11 + 8) & 0xFFFFFFFE, v6 != ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC)) )
  {
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v11);
LABEL_12:
    GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
      v15);
    return 0LL;
  }
  ++*((_DWORD *)v5 + 2);
  TrackHmgrReferenceIncrement(v2, 5u, v5);
  v7 = (unsigned __int64)a1 & 0xFFFFFFFFFF7FFFFFuLL;
  if ( HmgModifyHandleType(v7, v8) )
  {
    *((_QWORD *)v5 + 4) = v7;
    _InterlockedIncrement((volatile signed __int32 *)v2 + 1089);
    *((_WORD *)v5 + 51) &= ~0x200u;
    HANDLELOCK::vUnlock((HANDLELOCK *)&v11);
    LOBYTE(v9) = 5;
    HmgSetOwner(v7, 2147483650LL, v9);
    HmgDecrementShareReferenceCount(v2, v5);
    v4 = v7;
  }
  else
  {
    --*((_DWORD *)v5 + 2);
    TrackHmgrReferenceDecrement(v2, 5u, v5);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v11);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v15);
  return v4;
}
