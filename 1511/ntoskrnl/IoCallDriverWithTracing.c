/*
 * XREFs of IoCallDriverWithTracing @ 0x140077C20
 * Callers:
 *     IopCallDriverReference @ 0x140077AB0 (IopCallDriverReference.c)
 * Callees:
 *     IopfCallDriver @ 0x140077C84 (IopfCallDriver.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     EtwActivityIdControlKernel @ 0x1400FF658 (EtwActivityIdControlKernel.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall IoCallDriverWithTracing(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax
  __int64 v4; // r10
  __int64 v5; // r9
  PIRP v6; // r10
  PDEVICE_OBJECT v7; // r11
  unsigned int v8; // r9d
  __int64 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 *v10; // [rsp+28h] [rbp-30h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]

  if ( *(char *)(a2 + 71) >= 0 && (v2 = *(_BYTE **)(a2 + 200)) != 0LL && (*v2 & 2) != 0 )
  {
    EtwActivityIdControlKernel(1LL, &v9);
    v5 = *(_QWORD *)(v4 + 200);
    v10 = &v11;
    v11 = *(_OWORD *)(v5 + 16);
    EtwActivityIdControlKernel(2LL, &v10);
    IofCallDriver(v7, v6);
    EtwActivityIdControlKernel(2LL, &v9);
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
