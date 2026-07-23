/*
 * XREFs of EtwpTraceIoInit @ 0x140227034
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x140013D10 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceIoInit(__int64 a1)
{
  char v1; // dl
  __int16 v2; // ax
  __int64 v3; // rdx
  int v4; // ecx
  __int64 v6; // [rsp+30h] [rbp-38h] BYREF
  int v7; // [rsp+38h] [rbp-30h]
  __int64 *v8; // [rsp+40h] [rbp-28h] BYREF
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  v1 = **(_BYTE **)(a1 + 184);
  if ( v1 == 3 )
  {
    v2 = 268;
  }
  else
  {
    v2 = 271;
    if ( v1 != 9 )
      v2 = 269;
  }
  v3 = *(_QWORD *)(a1 + 152);
  v6 = a1;
  if ( v3 )
    v4 = *(_DWORD *)(v3 + 1592);
  else
    v4 = -1;
  v10 = 0;
  v7 = v4;
  v9 = 12;
  v8 = &v6;
  return EtwTraceKernelEvent((int)&v8, 1, 0x400u, v2, 22026499);
}
