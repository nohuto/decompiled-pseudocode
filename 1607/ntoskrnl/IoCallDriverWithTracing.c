/*
 * XREFs of IoCallDriverWithTracing @ 0x1400E9A6C
 * Callers:
 *     IopCallDriverReference @ 0x1400E98EC (IopCallDriverReference.c)
 * Callees:
 *     IofCallDriver @ 0x14002DBE0 (IofCallDriver.c)
 *     EtwActivityIdControlKernel @ 0x140086AF0 (EtwActivityIdControlKernel.c)
 *     IopfCallDriver @ 0x1400E9AD0 (IopfCallDriver.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall IoCallDriverWithTracing(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax
  __int64 v4; // r10
  __int64 v5; // r9
  PIRP v6; // r10
  PDEVICE_OBJECT v7; // r11
  unsigned int v8; // r9d
  PVOID v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 *v10; // [rsp+28h] [rbp-30h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( *(char *)(a2 + 71) >= 0 && (v2 = *(_BYTE **)(a2 + 200)) != 0LL && (*v2 & 2) != 0 )
  {
    EtwActivityIdControlKernel(1, &v9);
    v5 = *(_QWORD *)(v4 + 200);
    v10 = &v11;
    v11 = *(_OWORD *)(v5 + 24);
    EtwActivityIdControlKernel(2, (PVOID *)&v10);
    IofCallDriver(v7, v6);
    EtwActivityIdControlKernel(2, &v9);
    return v8;
  }
  else if ( pIofCallDriver )
  {
    return pIofCallDriver(a1, a2, retaddr);
  }
  else
  {
    return IopfCallDriver(a1, a2);
  }
}
