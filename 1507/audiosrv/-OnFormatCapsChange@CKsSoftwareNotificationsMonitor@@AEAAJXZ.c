/*
 * XREFs of ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x18008DCD8
 * Callers:
 *     ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x18008E100 (-OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x1800386C8 (-GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z.c)
 *     ?Release@CPolicyConfig@@UEAAKXZ @ 0x180038990 (-Release@CPolicyConfig@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CKsSoftwareNotificationsMonitor::OnFormatCapsChange(CKsSoftwareNotificationsMonitor *this)
{
  BOOL v2; // r14d
  unsigned int i; // esi
  unsigned __int16 *v4; // rax
  int v5; // r8d
  int v6; // ecx
  __int64 (__fastcall *v7)(CPolicyConfig *); // rdi
  unsigned int v9; // [rsp+28h] [rbp-59h] BYREF
  __int64 v10; // [rsp+30h] [rbp-51h] BYREF
  LPVOID v11; // [rsp+38h] [rbp-49h] BYREF
  __int64 v12; // [rsp+40h] [rbp-41h] BYREF
  __int64 v13; // [rsp+48h] [rbp-39h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-31h] BYREF
  CPolicyConfig *v15; // [rsp+58h] [rbp-29h] BYREF
  __int64 v16; // [rsp+60h] [rbp-21h] BYREF
  PROPVARIANT pvar; // [rsp+68h] [rbp-19h] BYREF
  unsigned __int16 *v18; // [rsp+70h] [rbp-11h]
  __int64 v19; // [rsp+78h] [rbp-9h]
  int v20; // [rsp+80h] [rbp-1h] BYREF
  __int64 v21; // [rsp+88h] [rbp+7h]
  _DWORD v22[6]; // [rsp+90h] [rbp+Fh] BYREF
  _DWORD v23[6]; // [rsp+A8h] [rbp+27h] BYREF

  v21 = -2LL;
  v16 = 0LL;
  v11 = 0LL;
  v2 = *((_DWORD *)this + 2) != 0;
  v13 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 4) + 96LL))(*((_QWORD *)this + 4), &v16) >= 0
    && (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v16 + 64LL))(v16, &v11) >= 0
    && (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), &v20) >= 0
    && (*(int (__fastcall **)(_QWORD, BOOL, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v2,
         1879048207LL,
         &v13) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 24LL))(v13, &v9) >= 0 )
  {
    for ( i = 0; i < v9; ++i )
    {
      v10 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 32LL))(v13, i, &v10) >= 0 )
      {
        v12 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v10 + 32LL))(v10, 0LL, &v12) >= 0 )
        {
          v23[0] = 590439624;
          v23[1] = 1283267372;
          v23[2] = 1907779772;
          v23[3] = 1730509416;
          v23[4] = 1;
          pvar = 0LL;
          v18 = 0LL;
          v19 = 0LL;
          if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v12 + 40LL))(v12, v23, &pvar) >= 0
            && (_WORD)pvar == 31 )
          {
            v4 = v18;
            do
            {
              v5 = *(unsigned __int16 *)((char *)v4 + (_BYTE *)v11 - (_BYTE *)v18);
              v6 = *v4 - v5;
              if ( v6 )
                break;
              ++v4;
            }
            while ( v5 );
            if ( !v6 )
            {
              v22[0] = -1702713381;
              v22[1] = 1102331579;
              v22[2] = -1223116157;
              v22[3] = -65530063;
              v22[4] = 1;
              PropVariantClear(&pvar);
              if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v12 + 40LL))(v12, v22, &pvar) >= 0
                && (_WORD)pvar == 19
                && (_DWORD)v18 == v20 )
              {
                v15 = 0LL;
                if ( (int)GetPolicyConfig(&v15) >= 0 )
                {
                  pv = 0LL;
                  if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v10 + 40LL))(v10, &pv) >= 0 )
                  {
                    (*(void (__fastcall **)(CPolicyConfig *, LPVOID))(*(_QWORD *)v15 + 40LL))(v15, pv);
                    CoTaskMemFree(pv);
                  }
                }
                PropVariantClear(&pvar);
                if ( v15 )
                {
                  v7 = *(__int64 (__fastcall **)(CPolicyConfig *))(*(_QWORD *)v15 + 16LL);
                  if ( v7 == CPolicyConfig::Release )
                    CPolicyConfig::Release(v15);
                  else
                    v7(v15);
                }
              }
            }
          }
          PropVariantClear(&pvar);
        }
        if ( v12 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  if ( v11 )
  {
    CoTaskMemFree(v11);
    v11 = 0LL;
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  return 0LL;
}
