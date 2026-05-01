/*
 * XREFs of ?RaiseToastNotification@AppEnergyInformation@@IEAAJH@Z @ 0x18004B73C
 * Callers:
 *     ?FireChangeEventsIfRequired@AppEnergyInformation@@IEAAXHKK@Z @ 0x18004935C (-FireChangeEventsIfRequired@AppEnergyInformation@@IEAAXHKK@Z.c)
 * Callees:
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x180016628 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x180016900 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180024D7C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?clear@?$list@KV?$allocator@K@utl@@@utl@@QEAAXXZ @ 0x18002F324 (-clear@-$list@KV-$allocator@K@utl@@@utl@@QEAAXXZ.c)
 *     ??1EnergyToastMessage@@QEAA@XZ @ 0x180048D44 (--1EnergyToastMessage@@QEAA@XZ.c)
 *     ?Init@EnergyToastMessage@@QEAAJPEBG0@Z @ 0x18004ABDC (-Init@EnergyToastMessage@@QEAAJPEBG0@Z.c)
 *     ?PostToast@AppEnergyInformation@@IEAAJKAEBVEnergyToastMessage@@@Z @ 0x18004B2CC (-PostToast@AppEnergyInformation@@IEAAJKAEBVEnergyToastMessage@@@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004C420 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AppEnergyInformation::RaiseToastNotification(AppEnergyInformation *this, int a2)
{
  __int64 v3; // rax
  __int64 v4; // rdx
  unsigned int v5; // edi
  _QWORD *i; // rbx
  __int64 *v7; // rax
  int v8; // r8d
  __int64 v9; // rdi
  _DWORD *v10; // rax
  __int64 v11; // r9
  __int64 **v12; // rcx
  int v13; // eax
  AppEnergyInformation *v14; // rcx
  int v15; // eax
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 *v19; // [rsp+28h] [rbp-79h] BYREF
  __int64 **v20; // [rsp+30h] [rbp-71h]
  __int64 v21; // [rsp+38h] [rbp-69h]
  unsigned __int16 *v22[2]; // [rsp+40h] [rbp-61h] BYREF
  _WORD v23[12]; // [rsp+50h] [rbp-51h] BYREF
  void *v24[2]; // [rsp+68h] [rbp-39h] BYREF
  _WORD v25[8]; // [rsp+78h] [rbp-29h] BYREF
  _WORD *v26; // [rsp+88h] [rbp-19h]
  _WORD *v27; // [rsp+90h] [rbp-11h]
  _WORD v28[8]; // [rsp+98h] [rbp-9h] BYREF
  _WORD *v29; // [rsp+A8h] [rbp+7h]
  _WORD *v30; // [rsp+B0h] [rbp+Fh]
  _WORD v31[8]; // [rsp+B8h] [rbp+17h] BYREF
  _WORD *v32; // [rsp+C8h] [rbp+27h]
  _WORD *v33; // [rsp+D0h] [rbp+2Fh]
  _WORD v34[8]; // [rsp+D8h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+100h] [rbp+5Fh]

  if ( a2 )
    v3 = qword_18006A130 - AppEnergyUsageManager::s_strNearTerminationUsageMessage;
  else
    v3 = qword_18006A110 - AppEnergyUsageManager::s_strExcessiveUsageMessage;
  if ( !(v3 >> 1) )
    return 0LL;
  v23[0] = 0;
  v22[0] = v23;
  v22[1] = v23;
  v19 = (__int64 *)&v19;
  v20 = &v19;
  v21 = 0LL;
  if ( a2 )
  {
    if ( !utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
            (__int64)v22,
            (__int64 *)AppEnergyUsageManager::s_strNearTerminationUsageMessage,
            (qword_18006A130 - AppEnergyUsageManager::s_strNearTerminationUsageMessage) >> 1,
            (qword_18006A130 - AppEnergyUsageManager::s_strNearTerminationUsageMessage) >> 1) )
    {
      v4 = 1378LL;
      goto LABEL_10;
    }
    goto LABEL_11;
  }
  if ( utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::assign(
         (__int64)v22,
         (__int64 *)AppEnergyUsageManager::s_strExcessiveUsageMessage,
         (qword_18006A110 - AppEnergyUsageManager::s_strExcessiveUsageMessage) >> 1,
         qword_18006A130) )
  {
LABEL_11:
    for ( i = (_QWORD *)*((_QWORD *)this + 3); i != (_QWORD *)((char *)this + 24); i = (_QWORD *)*i )
    {
      v7 = v19;
      v8 = 0;
      while ( v7 != (__int64 *)&v19 )
      {
        if ( *(_DWORD *)(i[2] + 16LL) == *((_DWORD *)v7 + 4) )
        {
          v8 = 1;
          break;
        }
        v7 = (__int64 *)*v7;
      }
      if ( !v8 )
      {
        v9 = i[2];
        v24[0] = v25;
        v25[0] = 0;
        v24[1] = v25;
        v28[0] = 0;
        v26 = v28;
        v27 = v28;
        v29 = v31;
        v30 = v31;
        v32 = v34;
        v33 = v34;
        v31[0] = 0;
        v34[0] = 0;
        v10 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v10 )
        {
          v10[4] = *(_DWORD *)(v9 + 16);
          v12 = v20;
          *((_QWORD *)v10 + 1) = v20;
          *(_QWORD *)v10 = &v19;
          *v12 = (__int64 *)v10;
          ++v21;
          v20 = (__int64 **)v10;
        }
        else
        {
          v10 = 0LL;
        }
        if ( !v10 )
        {
          v5 = -2147024882;
          v17 = 1401LL;
          v16 = 2147942414LL;
          goto LABEL_30;
        }
        v13 = EnergyToastMessage::Init((EnergyToastMessage *)v24, *((unsigned __int16 **)this + 30), v22[0], v11);
        v5 = v13;
        if ( v13 < 0 )
        {
          v16 = (unsigned int)v13;
          v17 = 1403LL;
          goto LABEL_30;
        }
        v15 = AppEnergyInformation::PostToast(v14, *(_DWORD *)(i[2] + 16LL), (__int64 **)v24);
        v5 = v15;
        if ( v15 < 0 )
        {
          v16 = (unsigned int)v15;
          v17 = 1405LL;
LABEL_30:
          wil::details::in1diag3::Return_HrPreRelease(
            retaddr,
            (void *)v17,
            (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
            (const char *)v16,
            (int)v19);
          EnergyToastMessage::~EnergyToastMessage(v24);
          goto LABEL_31;
        }
        EnergyToastMessage::~EnergyToastMessage(v24);
      }
    }
    utl::list<unsigned long,utl::allocator<unsigned long>>::clear((__int64)&v19);
    utl::list<unsigned long,utl::allocator<unsigned long>>::clear((__int64)&v19);
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit((void **)v22);
    return 0LL;
  }
  v4 = 1382LL;
LABEL_10:
  v5 = -2147024882;
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    (void *)v4,
    (unsigned int)"base\\appmodel\\resourcepolicy\\appenergymanager\\lib\\appenergymanager.cpp",
    (const char *)0x8007000ELL,
    (int)v19);
LABEL_31:
  utl::list<unsigned long,utl::allocator<unsigned long>>::clear((__int64)&v19);
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit((void **)v22);
  return v5;
}
