/*
 * XREFs of GreSaveScreenBits @ 0x140325FC8
 * Callers:
 *     ?SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z @ 0x1402F0338 (-SaveScreen@@YA_KPEAUtagWND@@K_KHHHH@Z.c)
 * Callees:
 *     ??$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x14001C78C (--$GreReleaseSemaphoreCommon@$05P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ??0?$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140072EE8 (--0-$SEMOBJ@$05@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x140078060 (--$GreReleaseSemaphoreCommon@$00P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ??0?$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14009FA80 (--0-$SEMOBJ@$01@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0?$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400A6694 (--0-$SEMOBJSHARED@$00@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400A6D10 (--$GreReleaseSemaphoreCommon@$01P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GreSaveScreenBits(__int64 a1, unsigned int a2, __int64 a3, __int128 *a4)
{
  __int64 v8; // rdi
  struct Gre::Base::SESSION_GLOBALS *v9; // rsi
  __int64 (__fastcall *v10)(__int64, _QWORD, __int64, __int128 *); // rbp
  __int64 v11; // rax
  __int128 *v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rdi
  int v15; // eax
  __int64 v17; // [rsp+30h] [rbp-68h] BYREF
  __int64 v18; // [rsp+38h] [rbp-60h] BYREF
  __int64 v19; // [rsp+40h] [rbp-58h] BYREF
  __int128 v20; // [rsp+48h] [rbp-50h] BYREF

  v20 = 0LL;
  v8 = 0LL;
  v9 = Gre::Base::Globals((Gre::Base *)a1);
  SEMOBJSHARED<1>::SEMOBJSHARED<1>((HSEMAPHORE *)&v19, v9);
  SEMOBJ<2>::SEMOBJ<2>((HSEMAPHORE *)&v18, v9);
  if ( (*(_DWORD *)(a1 + 40) & 0x400) == 0 )
  {
    SEMOBJ<6>::SEMOBJ<6>((HSEMAPHORE *)&v17, v9);
    v10 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int128 *))(a1 + 3000);
    if ( v10 )
    {
      v11 = *(_QWORD *)(a1 + 2544);
      v12 = &v20;
      if ( a2 != 2 )
        v12 = a4;
      v13 = 0LL;
      v14 = (v11 + 24) & -(__int64)(v11 != 0);
      if ( v14 )
      {
        v15 = *(_DWORD *)(((v11 + 24) & -(__int64)(v11 != 0)) + 0x58);
        if ( ((v15 & 0x4000) != 0 || v15 < 0) && (v15 & 0x200) == 0 )
        {
          v13 = v14 - 24;
          GreAcquireSemaphore<8,PDEVOBJ>(*(_QWORD *)(v14 + 24));
        }
      }
      v8 = v10(v14, a2, a3, v12);
      if ( v13 )
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(*(_QWORD *)(v13 + 48));
    }
    if ( v17 )
      GreReleaseSemaphoreCommon<6,void (*)(HSEMAPHORE__ *)>(
        (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
        v17);
  }
  if ( v18 )
    GreReleaseSemaphoreCommon<2,void (*)(HSEMAPHORE__ *)>(
      (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreExclusiveInternal,
      v18);
  GreReleaseSemaphoreCommon<1,void (*)(HSEMAPHORE__ *)>(
    (__int64 (__fastcall *)(__int64))GreReleaseSemaphoreSharedInternal,
    v19);
  return v8;
}
