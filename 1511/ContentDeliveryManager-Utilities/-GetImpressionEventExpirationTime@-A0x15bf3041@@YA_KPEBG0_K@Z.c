/*
 * XREFs of ?GetImpressionEventExpirationTime@?A0x15bf3041@@YA_KPEBG0_K@Z @ 0x18000DE38
 * Callers:
 *     _lambda_31b30073c32c2d01143855768ac2b990_::operator() @ 0x18000E860 (_lambda_31b30073c32c2d01143855768ac2b990_--operator().c)
 *     ?IsReportedEventExpired@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@PEAE@Z @ 0x180011B40 (-IsReportedEventExpired@AppContainerCreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRI.c)
 * Callees:
 *     ?SplitString@?A0x15bf3041@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@PEBG@Z @ 0x18000DB70 (-SplitString@-A0x15bf3041@@YA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z @ 0x1800124D8 (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEAI@Z.c)
 *     ??5?$basic_istream@GU?$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z @ 0x180012698 (--5-$basic_istream@GU-$char_traits@G@std@@@std@@QEAAAEAV01@AEA_K@Z.c)
 *     ??1?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@QEAA@XZ @ 0x180013CFC (--1-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$allocator@V-$basic_.c)
 *     ??0?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@H@Z @ 0x180013D7C (--0-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV-$basic_string@G.c)
 *     ??1?$basic_istringstream@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UEAA@XZ @ 0x1800140A8 (--1-$basic_istringstream@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@UEAA@XZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z @ 0x1800163F4 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@PEBG_K@Z.c)
 *     ??$HandleEvent@$09I_K@PlacementHealth@?A0x15bf3041@@YAXPEBGI_K@Z @ 0x1800189FC (--$HandleEvent@$09I_K@PlacementHealth@-A0x15bf3041@@YAXPEBGI_K@Z.c)
 *     ?_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z @ 0x1800233DC (-_Ios_base_dtor@ios_base@std@@CAXPEAV12@@Z.c)
 *     __security_check_cookie @ 0x180027BD0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
const unsigned __int16 *__fastcall `anonymous namespace'::GetImpressionEventExpirationTime(
        const WCHAR *this,
        unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rbx
  const unsigned __int16 *v9; // rbx
  unsigned int v10; // ebx
  int v11; // eax
  int v13; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v15; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v16; // [rsp+38h] [rbp-C8h]
  __int64 v17; // [rsp+48h] [rbp-B8h]
  _BYTE v18[144]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v19[12]; // [rsp+E0h] [rbp-20h] BYREF
  void *v20[2]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v21; // [rsp+150h] [rbp+50h]
  unsigned __int64 v22; // [rsp+158h] [rbp+58h]

  v17 = -2LL;
  v14 = 0LL;
  v22 = 7LL;
  v21 = 0LL;
  LOWORD(v20[0]) = 0;
  if ( *a2 )
  {
    v5 = -1LL;
    do
      ++v5;
    while ( a2[v5] );
  }
  std::wstring::assign(v20, a2);
  `anonymous namespace'::SplitString(&v15, v20);
  if ( v22 >= 8 )
    operator delete(v20[0]);
  v22 = 7LL;
  v21 = 0LL;
  LOWORD(v20[0]) = 0;
  v6 = v16;
  v7 = v15;
  if ( (unsigned __int64)((v16 - v15) >> 5) > 6 )
  {
    std::basic_istringstream<unsigned short>::basic_istringstream<unsigned short>(v18, v15 + 192);
    std::basic_istream<unsigned short>::operator>>(v18, &v14);
    v8 = v14;
    std::basic_istringstream<unsigned short>::~basic_istringstream<unsigned short>(v19);
    v19[0] = &std::ios_base::`vftable';
    std::ios_base::_Ios_base_dtor((struct std::ios_base *)v19);
    if ( v8 )
    {
      v9 = (const unsigned __int16 *)(v8 + 600000000);
      goto LABEL_15;
    }
    v6 = v16;
    v7 = v15;
  }
  v10 = 86400;
  v13 = 86400;
  if ( (unsigned __int64)((v6 - v7) >> 5) > 4 )
  {
    std::basic_istringstream<unsigned short>::basic_istringstream<unsigned short>(v18, v7 + 128);
    std::basic_istream<unsigned short>::operator>>(v18, &v13);
    v11 = v13;
    if ( !v13 )
      v11 = 86400;
    v13 = v11;
    std::basic_istringstream<unsigned short>::~basic_istringstream<unsigned short>(v19);
    v19[0] = &std::ios_base::`vftable';
    std::ios_base::_Ios_base_dtor((struct std::ios_base *)v19);
    v10 = v13;
  }
  v9 = &a3[5000000 * v10 + 3000000000LL];
LABEL_15:
  if ( this )
    `anonymous namespace'::PlacementHealth::HandleEvent<10,unsigned int,unsigned __int64>(this);
  std::vector<std::wstring>::~vector<std::wstring>(&v15);
  return v9;
}
