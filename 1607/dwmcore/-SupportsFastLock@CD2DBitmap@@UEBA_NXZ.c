/*
 * XREFs of ?SupportsFastLock@CD2DBitmap@@UEBA_NXZ @ 0x1800109A0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x180010868 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall CD2DBitmap::SupportsFastLock(CD2DBitmap *this)
{
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+48h] [rbp+10h] BYREF
  struct IUnknown *v5; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int8 *v6; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0LL;
  if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)((char *)this - 112), &v6, &v4, &v3, &v5) && v5 )
    ((void (__fastcall *)(struct IUnknown *))v5->lpVtbl->Release)(v5);
  return *((_BYTE *)this + 144);
}
