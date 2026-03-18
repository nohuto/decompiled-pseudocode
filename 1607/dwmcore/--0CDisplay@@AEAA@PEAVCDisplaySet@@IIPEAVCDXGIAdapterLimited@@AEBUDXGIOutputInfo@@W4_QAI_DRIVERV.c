/*
 * XREFs of ??0CDisplay@@AEAA@PEAVCDisplaySet@@IIPEAVCDXGIAdapterLimited@@AEBUDXGIOutputInfo@@W4_QAI_DRIVERVERSION@@P6AJPEBGPEAUDXGI_MODE_DESC@@@Z@Z @ 0x18003482C
 * Callers:
 *     ?EnumerateOutputs@CDisplaySet@@AEAAJXZ @ 0x180035F84 (-EnumerateOutputs@CDisplaySet@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDisplay::CDisplay(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        int a7,
        __int64 a8)
{
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rcx
  _WORD *v13; // rax
  __int16 v14; // r8
  int v15; // eax
  __int64 v16; // rcx
  char v17; // al
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  bool v22; // zf
  __int64 result; // rax
  _BYTE v24[160]; // [rsp+38h] [rbp-89h] BYREF

  *(_QWORD *)a1 = &CMILRefCountBase::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = &CDisplay::`vftable';
  *(_DWORD *)(a1 + 244) = 0;
  (**(void (__fastcall ***)(__int64))a1)(a1);
  *(_DWORD *)(a1 + 216) = 0;
  v10 = (*((unsigned __int8 *)a6 + 192) >> 1) & 1;
  *(_BYTE *)(a1 + 220) = (a6[24] & 2) != 0;
  if ( (_BYTE)v10 )
    *(_QWORD *)(a1 + 224) = a8;
  *(_QWORD *)(a1 + 16) = a2;
  *(_QWORD *)(a1 + 232) = *(_QWORD *)(a5 + 336);
  *(_DWORD *)(a1 + 240) = *((_DWORD *)a6 + 30);
  *(_DWORD *)(a1 + 248) = *((_DWORD *)a6 + 32);
  *(_DWORD *)(a1 + 244) = *((_DWORD *)a6 + 26);
  *(_QWORD *)(a1 + 24) = a6[13];
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 32) = a5;
  (**(void (__fastcall ***)(__int64))a5)(a5);
  *(_QWORD *)(a1 + 40) = *a6;
  if ( *a6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a6 + 8LL))(*a6);
  *(_QWORD *)(a1 + 48) = a6[1];
  v11 = a6[1];
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
  v12 = 32LL;
  *(_BYTE *)(a1 + 299) = (a6[24] & 4) != 0;
  *(_BYTE *)(a1 + 300) = (a6[24] & 8) != 0;
  v13 = (_WORD *)(a1 + 144);
  do
  {
    v14 = *(_WORD *)((char *)v13 + (_QWORD)((char *)a6 - a1 - 144) + 196);
    if ( !v14 )
      break;
    *v13++ = v14;
    --v12;
  }
  while ( v12 );
  if ( !v12 )
    --v13;
  *v13 = 0;
  *(_DWORD *)(a1 + 212) = *(_DWORD *)(a5 + 312) + *(_DWORD *)(a5 + 320);
  *(_DWORD *)(a1 + 256) = *(_DWORD *)(a5 + 296);
  *(_DWORD *)(a1 + 260) = *(_DWORD *)(a5 + 300);
  if ( ((*((_DWORD *)a6 + 38) - 2) & 0xFFFFFFFD) != 0 )
  {
    *(_DWORD *)(a1 + 264) = *((_DWORD *)a6 + 33);
    v15 = *((_DWORD *)a6 + 34);
  }
  else
  {
    *(_DWORD *)(a1 + 264) = *((_DWORD *)a6 + 34);
    v15 = *((_DWORD *)a6 + 33);
  }
  v16 = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(a1 + 268) = v15;
  *(_DWORD *)(a1 + 280) = 87;
  *(_DWORD *)(a1 + 272) = *((_DWORD *)a6 + 36);
  *(_DWORD *)(a1 + 276) = *((_DWORD *)a6 + 37);
  *(_DWORD *)(a1 + 292) = *((_DWORD *)a6 + 38);
  *(_DWORD *)(a1 + 284) = *((_DWORD *)a6 + 39);
  *(_DWORD *)(a1 + 288) = 0;
  *(_BYTE *)(a1 + 303) = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v16 + 24LL))(v16) != 0;
  (*(void (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)(a1 + 48) + 32LL))(*(_QWORD *)(a1 + 48), v24);
  v17 = v24[80] & 1;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_BYTE *)(a1 + 304) = v17;
  *(_DWORD *)(a1 + 80) = *((_DWORD *)a6 + 33);
  *(_DWORD *)(a1 + 84) = *((_DWORD *)a6 + 34);
  *(_OWORD *)(a1 + 104) = *((_OWORD *)a6 + 11);
  *(_OWORD *)(a1 + 88) = *((_OWORD *)a6 + 10);
  v18 = *(_DWORD *)(a1 + 112) - *(_DWORD *)(a1 + 104);
  v19 = *(_DWORD *)(a1 + 80);
  if ( v18 < 0 )
    v18 = 0;
  if ( v19 < 0 )
    v19 = 0;
  if ( v18 != v19 )
    goto LABEL_25;
  v20 = *(_DWORD *)(a1 + 116) - *(_DWORD *)(a1 + 108);
  v21 = *(_DWORD *)(a1 + 84);
  if ( v20 < 0 )
    v20 = 0;
  if ( v21 < 0 )
    v21 = 0;
  if ( v20 != v21 )
LABEL_25:
    *(_BYTE *)(a1 + 301) = 1;
  *(_DWORD *)(a1 + 252) = a7;
  *(_BYTE *)(a1 + 296) = *((_DWORD *)a6 + 66) != 0;
  v22 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 80LL))(*(_QWORD *)(a1 + 48)) == 0;
  result = a1;
  *(_BYTE *)(a1 + 298) = !v22;
  return result;
}
