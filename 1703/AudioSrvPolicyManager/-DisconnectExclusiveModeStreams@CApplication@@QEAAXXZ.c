/*
 * XREFs of ?DisconnectExclusiveModeStreams@CApplication@@QEAAXXZ @ 0x18000C660
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180013578 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CApplication::DisconnectExclusiveModeStreams(CApplication *this)
{
  _QWORD *v2; // rbx
  __int64 v3; // rdi
  _QWORD *v4; // rdi
  __int64 v5; // rsi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+28h] [rbp-38h] BYREF
  char v7; // [rsp+30h] [rbp-30h]
  LPCRITICAL_SECTION v8; // [rsp+38h] [rbp-28h] BYREF
  char v9; // [rsp+40h] [rbp-20h]
  LPCRITICAL_SECTION v10; // [rsp+48h] [rbp-18h] BYREF
  char v11; // [rsp+50h] [rbp-10h]
  __int64 v12; // [rsp+70h] [rbp+10h] BYREF

  v10 = (LPCRITICAL_SECTION)((char *)this + 32);
  v11 = 0;
  ATL::CCritSecLock::Lock(&v10);
  v2 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v2 )
  {
    v3 = v2[2];
    v2 = (_QWORD *)*v2;
    if ( !*(_DWORD *)(v3 + 416) )
    {
      v8 = (LPCRITICAL_SECTION)(v3 + 32);
      v9 = 0;
      ATL::CCritSecLock::Lock(&v8);
      lpCriticalSection = (LPCRITICAL_SECTION)(v3 + 120);
      v7 = 0;
      ATL::CCritSecLock::Lock(&lpCriticalSection);
      v4 = *(_QWORD **)(v3 + 72);
      while ( v4 )
      {
        v5 = v4[2];
        v4 = (_QWORD *)*v4;
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v5 + 32LL))(v5) != 2 )
        {
          v12 = 0LL;
          if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))v5)(
                 v5,
                 &GUID_ec081b02_27c6_4867_9203_959f1731a3e5,
                 &v12) >= 0 )
            (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 40LL))(v12, 1LL);
          if ( v12 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
        }
      }
      if ( v7 )
      {
        LeaveCriticalSection(lpCriticalSection);
        v7 = 0;
      }
      if ( v9 )
      {
        LeaveCriticalSection(v8);
        v9 = 0;
      }
    }
  }
  if ( v11 )
    LeaveCriticalSection(v10);
}
