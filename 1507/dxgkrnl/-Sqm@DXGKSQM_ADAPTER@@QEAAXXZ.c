/*
 * XREFs of ?Sqm@DXGKSQM_ADAPTER@@QEAAXXZ @ 0x1C014B37C
 * Callers:
 *     ?SqmUpdate@DXGGLOBAL@@QEAAXXZ @ 0x1C014B788 (-SqmUpdate@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     DxgkSqmGenericDword @ 0x1C000EFF0 (DxgkSqmGenericDword.c)
 *     DxgkSqmCreateDwordStreamEntry @ 0x1C000F300 (DxgkSqmCreateDwordStreamEntry.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkSqmCreateStringStreamEntry @ 0x1C001FAC0 (DxgkSqmCreateStringStreamEntry.c)
 *     DxgkSqmAddToStream @ 0x1C00DA220 (DxgkSqmAddToStream.c)
 */

void __fastcall DXGKSQM_ADAPTER::Sqm(DXGKSQM_ADAPTER *this)
{
  int v1; // r8d
  int v3; // r8d
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  unsigned __int64 v7; // rcx
  int v8; // r8d
  unsigned __int64 v9; // rdx
  int v10; // r8d
  int v11; // r8d
  int *v12; // rbx
  _QWORD *v13; // rdi
  __int64 v14; // r14
  __int64 v15; // rbp
  int v16; // r8d
  __int64 v17; // rbp
  int *v18; // rdi
  _DWORD *v19; // rbx
  __int64 v20; // r9
  _DWORD v21[88]; // [rsp+30h] [rbp-198h] BYREF

  v1 = *((_QWORD *)this + 2);
  if ( HIDWORD(*((_QWORD *)this + 2)) )
    v1 = -1;
  DxgkSqmGenericDword(&Dxgk_SqmAddToAverageDwordEvt, 4732, v1);
  v3 = *((_QWORD *)this + 3);
  if ( HIDWORD(*((_QWORD *)this + 3)) )
    v3 = -1;
  DxgkSqmGenericDword(&Dxgk_SqmAddToAverageDwordEvt, 4733, v3);
  v4 = *((_QWORD *)this + 4);
  if ( HIDWORD(*((_QWORD *)this + 4)) )
    v4 = -1;
  DxgkSqmGenericDword(&Dxgk_SqmAddToAverageDwordEvt, 4734, v4);
  v5 = *((_DWORD *)this + 10) + *((_DWORD *)this + 12);
  if ( (*((_QWORD *)this + 5) + *((_QWORD *)this + 6)) >> 32 )
    v5 = -1;
  DxgkSqmGenericDword(&Dxgk_SqmAddToAverageDwordEvt, 4735, v5);
  v6 = *((_DWORD *)this + 14) + *((_DWORD *)this + 16) + *((_DWORD *)this + 18);
  if ( (*((_QWORD *)this + 7) + *((_QWORD *)this + 8) + *((_QWORD *)this + 9)) >> 32 )
    v6 = -1;
  DxgkSqmGenericDword(&Dxgk_SqmAddToAverageDwordEvt, 4736, v6);
  memset((char *)this + 8, 0, 0x48uLL);
  DxgkSqmGenericDword(&Dxgk_SqmSetIfMaxDwordEvt, 4737, *((_DWORD *)this + 1));
  v7 = *((_QWORD *)this + 39);
  *((_DWORD *)this + 1) = 0;
  DxgkSqmGenericDword(&Dxgk_SqmSetIfMaxDwordEvt, 4739, ((v7 & 0xFFF) != 0) + (unsigned int)(v7 >> 12));
  v8 = *((_DWORD *)this + 80);
  *((_QWORD *)this + 39) = 0LL;
  DxgkSqmGenericDword(&Dxgk_SqmSetIfMaxDwordEvt, 4738, v8);
  v9 = *((_QWORD *)this + 41);
  *((_QWORD *)this + 40) = 0LL;
  DxgkSqmGenericDword(&Dxgk_SqmSetIfMaxDwordEvt, 4741, ((v9 & 0xFFF) != 0) + (unsigned int)(v9 >> 12));
  v10 = *((_DWORD *)this + 84);
  *((_QWORD *)this + 41) = 0LL;
  DxgkSqmGenericDword(&Dxgk_SqmSetIfMaxDwordEvt, 4740, v10);
  v11 = *(_DWORD *)this;
  *((_QWORD *)this + 42) = 0LL;
  DxgkSqmGenericDword(&Dxgk_SqmSetIfMaxDwordEvt, 4742, v11);
  *(_DWORD *)this = 0;
  v12 = (int *)&unk_1C00313C0;
  v13 = (_QWORD *)((char *)this + 80);
  v14 = 4LL;
  do
  {
    v15 = 7LL;
    do
    {
      v16 = *v13;
      if ( HIDWORD(*v13) )
        v16 = -1;
      DxgkSqmGenericDword(&Dxgk_SqmAddToAverageDwordEvt, *v12, v16);
      ++v13;
      ++v12;
      --v15;
    }
    while ( v15 );
    --v14;
  }
  while ( v14 );
  memset((char *)this + 80, 0, 0xE0uLL);
  memset(v21, 0, sizeof(v21));
  v17 = 20LL;
  v18 = (int *)((char *)this + 344);
  v19 = v21;
  do
  {
    DxgkSqmCreateDwordStreamEntry(v19, *v18);
    v19 += 4;
    ++v18;
    --v17;
  }
  while ( v17 );
  memset((char *)this + 344, 0, 0x50uLL);
  DxgkSqmCreateDwordStreamEntry(&v21[80], *((_DWORD *)this + 106));
  DxgkSqmCreateStringStreamEntry((__int64)&v21[84], *((const wchar_t **)this + 54));
  DxgkSqmAddToStream(12171LL, 22LL, (__int64)v21, v20);
}
