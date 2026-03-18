/*
 * XREFs of sub_1404AE888 @ 0x1404AE888
 * Callers:
 *     sub_1404AE668 @ 0x1404AE668 (sub_1404AE668.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutEx @ 0x14002C380 (KeExpandKernelStackAndCalloutEx.c)
 */

NTSTATUS __fastcall sub_1404AE888(__int64 a1, int a2, int a3, _QWORD *a4, _DWORD *a5)
{
  NTSTATUS result; // eax
  __int64 v7; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+3Ch] [rbp-1Ch]
  __int64 v10; // [rsp+40h] [rbp-18h]
  int v11; // [rsp+48h] [rbp-10h]
  int v12; // [rsp+4Ch] [rbp-Ch]

  v10 = 0LL;
  v11 = 0;
  v12 = 0;
  v7 = a1;
  v8 = a2;
  v9 = a3;
  result = KeExpandKernelStackAndCalloutEx(Callout, &v7, 0x4C00uLL, 0, 0LL);
  if ( result >= 0 )
  {
    *a4 = v10;
    *a5 = v11;
    return v12;
  }
  return result;
}
