/*
 * XREFs of PnpQueryDeviceText @ 0x140489BE0
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiNormalizeDeviceText @ 0x1404D48B4 (PiNormalizeDeviceText.c)
 *     IopSynchronousCall @ 0x140505B9C (IopSynchronousCall.c)
 */

__int64 __fastcall PnpQueryDeviceText(int a1, int a2, __int64 a3, PVOID *a4)
{
  int v7; // r9d
  int v8; // eax
  PVOID v9; // rbx
  int v10; // edi
  _DWORD v12[18]; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+A8h] [rbp+20h] BYREF

  P = 0LL;
  *a4 = 0LL;
  memset(v12, 0, sizeof(v12));
  v12[4] = PsDefaultSystemLocaleId;
  LOWORD(v12[0]) = 3099;
  v12[2] = a2;
  v8 = IopSynchronousCall(a1, (unsigned int)v12, -1073741637, v7, (__int64)&P);
  v9 = P;
  v10 = v8;
  if ( !P )
    v10 = -1073741637;
  if ( v10 >= 0 )
  {
    *a4 = P;
    if ( (int)PiNormalizeDeviceText(v9) >= 0 )
    {
      if ( P )
      {
        *a4 = P;
        ExFreePoolWithTag(v9, 0);
      }
    }
  }
  return (unsigned int)v10;
}
