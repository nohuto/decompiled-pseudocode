/*
 * XREFs of ?CreateAndInitialize@InputProviderManager@@QEAAJPEAUIRawInputClient@@@Z @ 0x18002C3EC
 * Callers:
 *     ?Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z @ 0x180004214 (-Initialize@OneCoreUAPInputHost@@IEAAJPEAX@Z.c)
 * Callees:
 *     ??$emplace_back@UInputProvider@@@?$vector@UInputProvider@@V?$allocator@UInputProvider@@@std@@@std@@QEAAX$$QEAUInputProvider@@@Z @ 0x18002C5A4 (--$emplace_back@UInputProvider@@@-$vector@UInputProvider@@V-$allocator@UInputProvider@@@std@@@st.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     IsGetMPCInputPostProcessorPresent @ 0x18009E614 (IsGetMPCInputPostProcessorPresent.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputProviderManager::CreateAndInitialize(InputProviderManager *this, struct IRawInputClient *a2)
{
  int v4; // ebx
  __int64 v5; // rcx
  int v6; // edi
  unsigned int v7; // esi
  _QWORD *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int128 v12; // [rsp+30h] [rbp-71h] BYREF
  __int64 v13; // [rsp+40h] [rbp-61h] BYREF
  _QWORD v14[2]; // [rsp+48h] [rbp-59h] BYREF
  char v15; // [rsp+58h] [rbp-49h]
  int v16; // [rsp+60h] [rbp-41h]
  __int64 (__fastcall *v17)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+68h] [rbp-39h]
  __int64 v18; // [rsp+70h] [rbp-31h]
  char v19; // [rsp+78h] [rbp-29h]
  int v20; // [rsp+80h] [rbp-21h]
  __int64 (__fastcall *v21)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+88h] [rbp-19h]
  __int64 v22; // [rsp+90h] [rbp-11h]
  bool v23; // [rsp+98h] [rbp-9h]
  int v24; // [rsp+A0h] [rbp-1h]
  __int64 (__fastcall *v25)(struct IRawInputClient *, unsigned int, struct IRawInputProvider **); // [rsp+A8h] [rbp+7h]
  __int64 v26; // [rsp+B0h] [rbp+Fh]
  char v27; // [rsp+B8h] [rbp+17h]
  int v28; // [rsp+C0h] [rbp+1Fh]

  v14[0] = LegacyInjectionRawInputProvider::Create;
  v14[1] = 7605LL;
  v15 = 1;
  v16 = 0;
  v17 = WGIRawInputProvider::Create;
  v18 = 0x3FFFLL;
  v19 = 1;
  v20 = 0;
  v21 = MPCRawInputProvider::Create;
  v22 = 0x3FFFLL;
  v23 = (unsigned __int8)IsGetMPCInputPostProcessorPresent(this) != 0;
  v24 = 0;
  v25 = RIMRawInputProvider::Create;
  v26 = 0x3FFFLL;
  v27 = 1;
  v4 = 0;
  v5 = gdwDeviceFamily;
  if ( ((1LL << gdwDeviceFamily) & 0x1DB5) != 0 )
  {
    v5 = gdwMitConfig >> 2;
    LOBYTE(v5) = -((gdwMitConfig & 4) != 0);
    v4 = ((gdwMitConfig & 1) == 0 ? 2 : 0) | ((gdwMitConfig & 2) == 0 ? 4 : 0) | ((gdwMitConfig & 4) == 0 ? 0x30 : 0) | ((gdwMitConfig & 4) != 0 ? 192 : 200);
  }
  v28 = v4 | ((unsigned __int8)IsGetMPCInputPostProcessorPresent(v5) != 0 ? 0x2400 : 0) | 0x800;
  v6 = 0;
  v7 = 0;
  v8 = v14;
  do
  {
    if ( v6 < 0 )
      break;
    v13 = 0LL;
    v9 = v8[1];
    if ( _bittest64(&v9, gdwDeviceFamily) )
    {
      if ( *((_BYTE *)v8 + 16) )
      {
        v6 = ((__int64 (__fastcall *)(struct IRawInputClient *, _QWORD, __int64 *))*v8)(
               a2,
               *((unsigned int *)v8 + 6),
               &v13);
        if ( v6 >= 0 )
        {
          v12 = *(_OWORD *)(v8 + 1);
          std::vector<InputProvider>::emplace_back<InputProvider>(this, &v12);
        }
      }
    }
    v10 = v13;
    v13 = 0LL;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    ++v7;
    v8 += 4;
  }
  while ( v7 < 4 );
  return (unsigned int)v6;
}
