/*
 * XREFs of PnpQueryDeviceText @ 0x140512360
 * Callers:
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PiNormalizeDeviceText @ 0x1404B7EB8 (PiNormalizeDeviceText.c)
 *     IopSynchronousCall @ 0x1404E8B2C (IopSynchronousCall.c)
 */

__int64 __fastcall PnpQueryDeviceText(struct _DEVICE_OBJECT *a1, int a2, __int64 a3, PVOID *a4)
{
  __int64 v7; // r9
  int v8; // eax
  PVOID v9; // rbx
  int v10; // edi
  _DWORD v12[20]; // [rsp+30h] [rbp-58h] BYREF
  PVOID P; // [rsp+A8h] [rbp+20h] BYREF

  P = 0LL;
  *a4 = 0LL;
  memset(v12, 0, 0x48uLL);
  v12[4] = PsDefaultSystemLocaleId;
  LOWORD(v12[0]) = 3099;
  v12[2] = a2;
  v8 = IopSynchronousCall(a1, (__int64)v12, -1073741637, v7, &P);
  v9 = P;
  v10 = v8;
  if ( !P )
    v10 = -1073741637;
  if ( v10 >= 0 )
  {
    *a4 = P;
    if ( (int)PiNormalizeDeviceText((const WCHAR *)v9, (wchar_t **)&P) >= 0 )
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
