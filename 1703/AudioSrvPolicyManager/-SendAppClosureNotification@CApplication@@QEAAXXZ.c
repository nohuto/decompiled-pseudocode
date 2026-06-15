/*
 * XREFs of ?SendAppClosureNotification@CApplication@@QEAAXXZ @ 0x18000C534
 * Callers:
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z @ 0x180013578 (-OnApplicationClosed@CApplicationManager@@QEAAJPEAGK@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18000A394 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     WPP_SF_Sd @ 0x18000A56C (WPP_SF_Sd.c)
 *     __security_check_cookie @ 0x180020A40 (__security_check_cookie.c)
 */

void __fastcall CApplication::SendAppClosureNotification(CApplication *this)
{
  _QWORD *v2; // rbx
  _DWORD *v3; // rdi
  DWORD CurrentProcessId; // eax
  __int64 v5; // rdx
  __int64 v6; // [rsp+20h] [rbp-50h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-40h] BYREF
  char v8; // [rsp+38h] [rbp-38h]
  int v9; // [rsp+40h] [rbp-30h] BYREF
  __int128 v10; // [rsp+44h] [rbp-2Ch]
  __int64 v11; // [rsp+54h] [rbp-1Ch]
  int v12; // [rsp+5Ch] [rbp-14h]
  char v13; // [rsp+60h] [rbp-10h]

  v8 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v2 = (_QWORD *)*((_QWORD *)this + 9);
  while ( v2 )
  {
    v3 = (_DWORD *)v2[2];
    v2 = (_QWORD *)*v2;
    if ( v3[112] && !v3[104] )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        LODWORD(v6) = v3[42];
        WPP_SF_Sd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Du,
          &WPP_17d50ef9044b326f9caf58457a9d5dd6_Traceguids,
          *((const wchar_t **)this + 3),
          v6);
      }
      v9 = 33;
      v10 = 0x10000uLL;
      v11 = 0LL;
      v12 = 0;
      v13 = 0;
      CurrentProcessId = GetCurrentProcessId();
      v5 = (unsigned int)v3[42];
      *(_QWORD *)((char *)&v10 + 4) = CurrentProcessId;
      HIDWORD(v11) = 1;
      GenerateMediaEvent(&v9, v5);
    }
  }
  if ( v8 )
    LeaveCriticalSection(lpCriticalSection);
}
