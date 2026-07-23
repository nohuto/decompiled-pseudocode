/*
 * XREFs of EtwpRegisterGuidsApiCallback @ 0x18008250C
 * Callers:
 *     EtwpUpdateEnableInfoAndCallback @ 0x18002A94C (EtwpUpdateEnableInfoAndCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall EtwpRegisterGuidsApiCallback(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int128 v9; // xmm0
  unsigned int (__fastcall *v10)(__int64, __int64, int *, _QWORD *); // r10
  __int64 v11; // rdx
  int v13; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v14[6]; // [rsp+38h] [rbp-40h] BYREF

  v4 = 0;
  memset(v14, 0, sizeof(v14));
  v5 = *(_DWORD *)(a1 + 112);
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      if ( v6 != 1 )
        return 0LL;
      v7 = 10LL;
    }
    else
    {
      v7 = 4LL;
    }
  }
  else
  {
    v7 = 5LL;
    *(_BYTE *)(a1 + 106) = 0;
    *(_DWORD *)(a1 + 108) = 0;
  }
  v8 = *(_QWORD *)(a2 + 56);
  v9 = *(_OWORD *)(a1 + 40);
  v10 = *(unsigned int (__fastcall **)(__int64, __int64, int *, _QWORD *))v8;
  v11 = *(_QWORD *)(v8 + 8);
  v14[1] = *(_QWORD *)(a1 + 104);
  LODWORD(v14[0]) = 48;
  HIDWORD(v14[0]) = v7;
  v13 = 48;
  *(_OWORD *)&v14[3] = v9;
  if ( v10 )
    return v10(v7, v11, &v13, v14);
  return v4;
}
