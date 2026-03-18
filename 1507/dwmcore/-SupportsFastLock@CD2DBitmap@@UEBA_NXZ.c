/*
 * XREFs of ?SupportsFastLock@CD2DBitmap@@UEBA_NXZ @ 0x18013E700
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z @ 0x18013E768 (-TryFastWarpLock@CD2DBitmap@@IEBA_NPEAPEAEPEAI1PEAPEAUIUnknown@@@Z.c)
 */

bool __fastcall CD2DBitmap::SupportsFastLock(CD2DBitmap *this)
{
  unsigned int v3; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v4; // [rsp+58h] [rbp+10h] BYREF
  struct IUnknown *v5; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int8 *v6; // [rsp+68h] [rbp+20h] BYREF

  v5 = 0LL;
  if ( CD2DBitmap::TryFastWarpLock((CD2DBitmap *)((char *)this - 112), &v6, &v4, &v3, &v5) && v5 )
    ((void (__fastcall *)(struct IUnknown *))v5->lpVtbl->Release)(v5);
  return *((_BYTE *)this + 144);
}
