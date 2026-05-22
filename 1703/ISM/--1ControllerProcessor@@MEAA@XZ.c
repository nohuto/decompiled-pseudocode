/*
 * XREFs of ??1ControllerProcessor@@MEAA@XZ @ 0x180031A84
 * Callers:
 *     ??_GControllerProcessor@@MEAAPEAXI@Z @ 0x180031A40 (--_GControllerProcessor@@MEAAPEAXI@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?GetInstance@ControllerNavigationManager@@SAPEAV1@XZ @ 0x18003088C (-GetInstance@ControllerNavigationManager@@SAPEAV1@XZ.c)
 *     ?UnregisterControllerProcessor@ControllerNavigationManager@@QEAAJK@Z @ 0x180030A90 (-UnregisterControllerProcessor@ControllerNavigationManager@@QEAAJK@Z.c)
 *     ?NavigationDisable@ControllerProcessor@@QEAAJXZ @ 0x180032A40 (-NavigationDisable@ControllerProcessor@@QEAAJXZ.c)
 *     ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1800347E8 (-BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z.c)
 *     ?GetKeys@?$FixedSizeMap@G_N$0BI@@@QEAAJAEAY0BI@GPEAI@Z @ 0x180035C3C (-GetKeys@-$FixedSizeMap@G_N$0BI@@@QEAAJAEAY0BI@GPEAI@Z.c)
 *     ??1NonPointerProcessor@@MEAA@XZ @ 0x18005A4E0 (--1NonPointerProcessor@@MEAA@XZ.c)
 *     ??1ManipulationInjector@@QEAA@XZ @ 0x180096454 (--1ManipulationInjector@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
void __fastcall ControllerProcessor::~ControllerProcessor(int **this)
{
  _WORD *v2; // rsi
  int Keys; // eax
  __int64 v4; // rcx
  int v5; // r9d
  int v6; // edi
  bool v7; // zf
  __int64 v8; // rcx
  ControllerNavigationManager *Instance; // rax
  int *v10; // rcx
  int *v11; // rcx
  int *v12; // rcx
  int *v13; // rcx
  int *v14; // rcx
  int *v15; // rcx
  int *v16; // rcx
  int *v17; // rcx
  int *v18; // rcx
  int *v19; // rcx
  unsigned int v20; // [rsp+30h] [rbp-58h] BYREF
  __int64 v21; // [rsp+38h] [rbp-50h]
  ControllerProcessor *v22; // [rsp+40h] [rbp-48h]
  _WORD v23[24]; // [rsp+48h] [rbp-40h] BYREF

  v21 = -2LL;
  v22 = (ControllerProcessor *)this;
  *this = (int *)&ControllerProcessor::`vftable'{for `IInputProcessor'};
  this[1] = (int *)&ControllerProcessor::`vftable'{for `RefCountedObject'};
  this[6] = (int *)&ControllerProcessor::`vftable'{for `IRawInputProvider'};
  this[7] = (int *)&ControllerProcessor::`vftable'{for `IManipulationInjectorClient'};
  if ( *((_DWORD *)this + 59) != 2 )
    ControllerProcessor::NavigationDisable((ControllerProcessor *)this);
  if ( *((_BYTE *)this + 1272) )
    (*(void (__fastcall **)(int *, char *))(*(_QWORD *)this[3] + 48LL))(this[3], (char *)this + 1216);
  memset(v23, 0, sizeof(v23));
  v20 = 0;
  v2 = this + 8;
  Keys = FixedSizeMap<unsigned short,bool,24>::GetKeys(this + 8, v23, &v20);
  if ( Keys < 0 )
  {
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
      goto LABEL_9;
    v5 = 2346;
    goto LABEL_8;
  }
  v6 = 0;
  v7 = v20 == 0;
  if ( v20 )
  {
    while ( 1 )
    {
      Keys = ControllerProcessor::BuildAndSendKeyboardInputInfo((ControllerProcessor *)this, v23[v6], 0);
      if ( Keys < 0 )
        break;
      if ( ++v6 >= v20 )
      {
        v7 = v20 == 0;
        goto LABEL_18;
      }
    }
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    {
      v5 = 2354;
LABEL_8:
      Template_qqq(v4, &MinInput_Warning_CheckResult, 12, v5, Keys);
      goto LABEL_9;
    }
    goto LABEL_9;
  }
LABEL_18:
  if ( !v7 )
  {
    Keys = (*(__int64 (__fastcall **)(int *))(*(_QWORD *)this[35] + 96LL))(this[35]);
    if ( Keys < 0 )
    {
      if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      {
        v5 = 2359;
        goto LABEL_8;
      }
LABEL_9:
      if ( IsDebuggerPresent() )
        __debugbreak();
      __fastfail(7u);
    }
  }
  v8 = 24LL;
  do
  {
    *v2 = *((_WORD *)this + 80);
    v2 += 2;
    --v8;
  }
  while ( v8 );
  Instance = ControllerNavigationManager::GetInstance();
  if ( Instance )
    ControllerNavigationManager::UnregisterControllerProcessor(Instance, *this[4]);
  v10 = this[188];
  this[188] = 0LL;
  if ( v10 )
    (*(void (__fastcall **)(int *))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = this[181];
  this[181] = 0LL;
  if ( v11 )
    (*(void (__fastcall **)(int *))(*(_QWORD *)v11 + 16LL))(v11);
  v12 = this[180];
  this[180] = 0LL;
  if ( v12 )
    (*(void (__fastcall **)(int *))(*(_QWORD *)v12 + 16LL))(v12);
  ManipulationInjector::~ManipulationInjector((ManipulationInjector *)(this + 49));
  v13 = this[36];
  this[36] = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(int *))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = this[35];
  this[35] = 0LL;
  if ( v14 )
    (*(void (__fastcall **)(int *))(*(_QWORD *)v14 + 16LL))(v14);
  v15 = this[34];
  this[34] = 0LL;
  if ( v15 )
    (*(void (__fastcall **)(int *))(*(_QWORD *)v15 + 16LL))(v15);
  v16 = this[33];
  this[33] = 0LL;
  if ( v16 )
    (*(void (__fastcall **)(int *))(*(_QWORD *)v16 + 16LL))(v16);
  v17 = this[32];
  this[32] = 0LL;
  if ( v17 )
    (*(void (__fastcall **)(int *))(*(_QWORD *)v17 + 16LL))(v17);
  v18 = this[31];
  this[31] = 0LL;
  if ( v18 )
    (*(void (__fastcall **)(int *))(*(_QWORD *)v18 + 16LL))(v18);
  v19 = this[30];
  this[30] = 0LL;
  if ( v19 )
    (*(void (__fastcall **)(int *))(*(_QWORD *)v19 + 16LL))(v19);
  NonPointerProcessor::~NonPointerProcessor((NonPointerProcessor *)this);
}
