/*
 * XREFs of ?OnFormatCapsChange@CKsSoftwareNotificationsMonitor@@AEAAJXZ @ 0x180073A0C
 * Callers:
 *     ?OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z @ 0x180073DA0 (-OnNotify@CKsSoftwareNotificationsMonitor@@UEAAJKPEBU_GUID@@@Z.c)
 * Callees:
 *     ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x180032D24 (-GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z.c)
 *     ?Release@CPolicyConfig@@UEAAKXZ @ 0x180032D80 (-Release@CPolicyConfig@@UEAAKXZ.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CKsSoftwareNotificationsMonitor::OnFormatCapsChange(CKsSoftwareNotificationsMonitor *this)
{
  BOOL v2; // edi
  unsigned int i; // ebx
  unsigned __int16 *v4; // rax
  int v5; // r8d
  int v6; // ecx
  void (*v7)(void); // rax
  unsigned int v9; // [rsp+38h] [rbp-49h] BYREF
  __int64 v10; // [rsp+40h] [rbp-41h] BYREF
  __int64 v11; // [rsp+48h] [rbp-39h] BYREF
  LPVOID v12; // [rsp+50h] [rbp-31h] BYREF
  __int64 v13; // [rsp+58h] [rbp-29h] BYREF
  int v14; // [rsp+60h] [rbp-21h] BYREF
  LPVOID pv; // [rsp+68h] [rbp-19h] BYREF
  struct IPolicyConfig *v16; // [rsp+70h] [rbp-11h] BYREF
  __int64 v17; // [rsp+78h] [rbp-9h] BYREF
  PROPVARIANT pvar; // [rsp+80h] [rbp-1h] BYREF
  unsigned __int16 *v19; // [rsp+88h] [rbp+7h]
  __int64 v20; // [rsp+90h] [rbp+Fh]
  __int64 v21; // [rsp+98h] [rbp+17h]
  _DWORD v22[6]; // [rsp+A0h] [rbp+1Fh] BYREF
  _DWORD v23[6]; // [rsp+B8h] [rbp+37h] BYREF

  v21 = -2LL;
  v17 = 0LL;
  v12 = 0LL;
  v2 = *((_DWORD *)this + 2) != 0;
  v13 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 4) + 96LL))(*((_QWORD *)this + 4), &v17) >= 0
    && (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v17 + 64LL))(v17, &v12) >= 0
    && (*(int (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 4) + 32LL))(*((_QWORD *)this + 4), &v14) >= 0
    && (*(int (__fastcall **)(_QWORD, BOOL, __int64, __int64 *))(**(_QWORD **)&g_DeviceEnumerator + 24LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v2,
         1879048207LL,
         &v13) >= 0
    && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 24LL))(v13, &v9) >= 0 )
  {
    for ( i = 0; i < v9; ++i )
    {
      v11 = 0LL;
      if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v13 + 32LL))(v13, i, &v11) >= 0 )
      {
        v10 = 0LL;
        if ( (*(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 32LL))(v11, 0LL, &v10) >= 0 )
        {
          v22[0] = 590439624;
          v22[1] = 1283267372;
          v22[2] = 1907779772;
          v22[3] = 1730509416;
          v22[4] = 1;
          pvar = 0LL;
          v19 = 0LL;
          v20 = 0LL;
          if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v10 + 40LL))(v10, v22, &pvar) >= 0
            && (_WORD)pvar == 31 )
          {
            v4 = v19;
            do
            {
              v5 = *(unsigned __int16 *)((char *)v4 + (_BYTE *)v12 - (_BYTE *)v19);
              v6 = *v4 - v5;
              if ( v6 )
                break;
              ++v4;
            }
            while ( v5 );
            if ( !v6 )
            {
              v23[0] = -1702713381;
              v23[1] = 1102331579;
              v23[2] = -1223116157;
              v23[3] = -65530063;
              v23[4] = 1;
              PropVariantClear(&pvar);
              if ( (*(int (__fastcall **)(__int64, _DWORD *, PROPVARIANT *))(*(_QWORD *)v10 + 40LL))(v10, v23, &pvar) >= 0
                && (_WORD)pvar == 19
                && (_DWORD)v19 == v14 )
              {
                v16 = 0LL;
                if ( (int)GetPolicyConfig(&v16) >= 0 )
                {
                  pv = 0LL;
                  if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v11 + 40LL))(v11, &pv) >= 0 )
                  {
                    (*(void (__fastcall **)(struct IPolicyConfig *, LPVOID))(*(_QWORD *)v16 + 40LL))(v16, pv);
                    CoTaskMemFree(pv);
                  }
                }
                PropVariantClear(&pvar);
                if ( v16 )
                {
                  v7 = *(void (**)(void))(*(_QWORD *)v16 + 16LL);
                  if ( (char *)v7 == (char *)CPolicyConfig::Release )
                    CPolicyConfig::Release(v16);
                  else
                    v7();
                }
              }
            }
          }
          PropVariantClear(&pvar);
        }
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  if ( v12 )
  {
    CoTaskMemFree(v12);
    v12 = 0LL;
  }
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  return 0LL;
}
