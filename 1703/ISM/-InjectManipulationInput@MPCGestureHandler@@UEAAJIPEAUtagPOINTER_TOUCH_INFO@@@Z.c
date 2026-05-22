/*
 * XREFs of ?InjectManipulationInput@MPCGestureHandler@@UEAAJIPEAUtagPOINTER_TOUCH_INFO@@@Z @ 0x18004F8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000742C (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCGestureHandler::InjectManipulationInput(
        MPCGestureHandler *this,
        unsigned int a2,
        struct tagPOINTER_TOUCH_INFO *a3)
{
  _DWORD *v6; // r9
  DWORD TickCount; // eax
  int *v8; // rcx
  __int64 v9; // r8
  int *v10; // rdx
  int v11; // eax
  int v12; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+28h] [rbp-E0h] BYREF
  _QWORD v15[236]; // [rsp+38h] [rbp-D0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+7B0h] [rbp+6A8h]

  QueryPerformanceCounter(&PerformanceCount);
  memset(v15, 0, sizeof(v15));
  v6 = (_DWORD *)*((_QWORD *)this + 103);
  HIDWORD(v15[0]) = *v6;
  LODWORD(v15[0]) = v6[1];
  TickCount = GetTickCount();
  LODWORD(v15[5]) = 1888;
  LODWORD(v15[1]) = TickCount;
  v15[2] = PerformanceCount.QuadPart;
  LODWORD(v15[85]) = *((_DWORD *)this + 212);
  LODWORD(v15[70]) = 1065353216;
  HIDWORD(v15[72]) = 1065353216;
  LODWORD(v15[75]) = 1065353216;
  HIDWORD(v15[77]) = 1065353216;
  if ( a2 )
  {
    v8 = (int *)&v15[7];
    v9 = a2;
    v10 = (int *)((char *)a3 + 32);
    do
    {
      *(v8 - 1) = *(v10 - 7) + 2;
      v8[2] = *v10;
      v8[3] = v10[1];
      v11 = 0;
      *v8 = 0;
      if ( (*(_BYTE *)(v10 - 5) & 2) != 0 )
      {
        v11 = 1;
        *v8 = 1;
      }
      if ( (*(v10 - 5) & 0x30000) != 0 )
        *v8 = v11 | 2;
      ++LODWORD(v15[6]);
      v10 += 36;
      v8 += 12;
      --v9;
    }
    while ( v9 );
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**((_QWORD **)this + 104) + 24LL))(*((_QWORD *)this + 104), v15);
  if ( v12 < 0 )
  {
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0xC3,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      (const char *)(unsigned int)v12);
    JUMPOUT(0x18004FA44LL);
  }
  return 0LL;
}
