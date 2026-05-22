/*
 * XREFs of ??0MPCInputProviderBase@@QEAA@XZ @ 0x18002EE3C
 * Callers:
 *     ??0MPCGamepadProcessor@@QEAA@XZ @ 0x18002D084 (--0MPCGamepadProcessor@@QEAA@XZ.c)
 *     ??0MPCMouseProcessor@@QEAA@XZ @ 0x1800406F8 (--0MPCMouseProcessor@@QEAA@XZ.c)
 *     ??0MPCSixDofProcessor@@QEAA@XZ @ 0x1800469E4 (--0MPCSixDofProcessor@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VMPCProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180048950 (--$MakeAndInitialize@VMPCProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Detail.c)
 *     ??0MPCClickerProcessor@@QEAA@XZ @ 0x18004A590 (--0MPCClickerProcessor@@QEAA@XZ.c)
 * Callees:
 *     memset @ 0x18009D814 (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
MPCInputProviderBase *__fastcall MPCInputProviderBase::MPCInputProviderBase(MPCInputProviderBase *this)
{
  char *v2; // rbx
  _OWORD *v3; // rax
  _OWORD v5[2]; // [rsp+28h] [rbp-30h] BYREF

  *(_QWORD *)this = &MPCInputProviderBase::`vftable';
  *((_QWORD *)this + 1) = &MPCInputProviderBase::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 2) = &MPCInputProviderBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IMPCInputProviderBase,Microsoft::WRL::Details::Nil>,1,0>'};
  *((_QWORD *)this + 5) = 0LL;
  *((_BYTE *)this + 48) = 0;
  v2 = (char *)this + 56;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  v3 = operator new(0x10uLL);
  *(_QWORD *)v2 = v3;
  if ( v3 )
    *v3 = 0LL;
  **(_QWORD **)v2 = v2;
  *((_DWORD *)v2 + 11) = 3;
  memset(v5, 0, sizeof(v5));
  *((_OWORD *)v2 + 3) = v5[0];
  *((_OWORD *)v2 + 4) = v5[1];
  v2[80] = 0;
  *((_DWORD *)v2 + 10) = 90;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  return this;
}
