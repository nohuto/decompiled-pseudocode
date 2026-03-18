/*
 * XREFs of ??0CDisplay@@AEAA@PEAVCDisplaySet@@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERVERSION@@P6AJPEBGPEAUDXGI_MODE_DESC@@@Z@Z @ 0x180057C88
 * Callers:
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x180054F84 (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDisplay::CDisplay(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        _QWORD *a6,
        int a7,
        __int64 a8)
{
  int v9; // eax
  __int64 v10; // r12
  __int64 v11; // rcx
  _WORD *v12; // rax
  __int16 v13; // r8
  int v14; // eax
  __int64 v15; // rdi
  int v16; // eax
  __int64 v17; // rdi
  char v18; // al
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rdi
  bool v24; // zf
  __int64 result; // rax
  _BYTE v26[160]; // [rsp+30h] [rbp-99h] BYREF

  *(_QWORD *)a1 = &CMILRefCountBase::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CDisplay::`vftable';
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 8));
  *(_DWORD *)(a1 + 284) = 0;
  v9 = (*((unsigned __int8 *)a6 + 192) >> 1) & 1;
  *(_BYTE *)(a1 + 288) = (a6[24] & 2) != 0;
  if ( (_BYTE)v9 )
    *(_QWORD *)(a1 + 296) = a8;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 832) = *(_QWORD *)(a5 + 336);
  *(_QWORD *)(a1 + 840) = a6[14];
  *(_DWORD *)(a1 + 848) = *((_DWORD *)a6 + 30);
  *(_DWORD *)(a1 + 852) = *((_DWORD *)a6 + 32);
  *(_DWORD *)(a1 + 24) = a3;
  *(_DWORD *)(a1 + 28) = a4;
  *(_QWORD *)(a1 + 32) = a6[13];
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 40) = a5;
  (**(void (__fastcall ***)(__int64))a5)(a5);
  *(_QWORD *)(a1 + 48) = *a6;
  if ( *a6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a6 + 8LL))(*a6);
  *(_QWORD *)(a1 + 56) = a6[1];
  v10 = a6[1];
  if ( v10 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(a6[1]);
  v11 = 32LL;
  *(_BYTE *)(a1 + 144) = (a6[24] & 4) != 0;
  *(_BYTE *)(a1 + 145) = (a6[24] & 8) != 0;
  v12 = (_WORD *)(a1 + 160);
  do
  {
    v13 = *(_WORD *)((char *)v12 + (_QWORD)((char *)a6 - a1 - 160) + 196);
    if ( !v13 )
      break;
    *v12++ = v13;
    --v11;
  }
  while ( v11 );
  if ( !v11 )
    --v12;
  *v12 = 0;
  *(_DWORD *)(a1 + 280) = *(_DWORD *)(a5 + 312) + *(_DWORD *)(a5 + 320);
  *(_DWORD *)(a1 + 860) = *(_DWORD *)(a5 + 296);
  *(_DWORD *)(a1 + 864) = *(_DWORD *)(a5 + 300);
  *(_DWORD *)(a1 + 828) = 0;
  if ( ((*((_DWORD *)a6 + 38) - 2) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)(a1 + 868) = *((_DWORD *)a6 + 33);
    v14 = *((_DWORD *)a6 + 34);
  }
  else
  {
    *(_DWORD *)(a1 + 868) = *((_DWORD *)a6 + 34);
    v14 = *((_DWORD *)a6 + 33);
  }
  v15 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 872) = v14;
  *(_DWORD *)(a1 + 884) = 87;
  *(_DWORD *)(a1 + 876) = *((_DWORD *)a6 + 36);
  *(_DWORD *)(a1 + 880) = *((_DWORD *)a6 + 37);
  *(_DWORD *)(a1 + 896) = *((_DWORD *)a6 + 38);
  *(_DWORD *)(a1 + 888) = *((_DWORD *)a6 + 39);
  *(_DWORD *)(a1 + 892) = 0;
  v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL))(v15);
  v17 = *(_QWORD *)(a1 + 56);
  *(_BYTE *)(a1 + 148) = v16 != 0;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v17 + 32LL))(v17, v26);
  v18 = v26[80] & 1;
  *(_QWORD *)(a1 + 80) = 0LL;
  *(_BYTE *)(a1 + 149) = v18;
  *(_DWORD *)(a1 + 88) = *((_DWORD *)a6 + 33);
  *(_DWORD *)(a1 + 92) = *((_DWORD *)a6 + 34);
  *(_OWORD *)(a1 + 112) = *((_OWORD *)a6 + 11);
  *(_OWORD *)(a1 + 96) = *((_OWORD *)a6 + 10);
  v19 = *(_DWORD *)(a1 + 120) - *(_DWORD *)(a1 + 112);
  v20 = *(_DWORD *)(a1 + 88);
  if ( v19 < 0 )
    v19 = 0;
  if ( v20 < 0 )
    v20 = 0;
  if ( v19 != v20 )
    goto LABEL_25;
  v21 = *(_DWORD *)(a1 + 124) - *(_DWORD *)(a1 + 116);
  v22 = *(_DWORD *)(a1 + 92);
  if ( v21 < 0 )
    v21 = 0;
  if ( v22 < 0 )
    v22 = 0;
  if ( v21 != v22 )
LABEL_25:
    *(_BYTE *)(a1 + 146) = 1;
  v23 = *(_QWORD *)(a1 + 56);
  *(_DWORD *)(a1 + 856) = a7;
  *(_BYTE *)(a1 + 900) = 0;
  v24 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v23 + 80LL))(v23) == 0;
  result = a1;
  *(_BYTE *)(a1 + 902) = !v24;
  return result;
}
