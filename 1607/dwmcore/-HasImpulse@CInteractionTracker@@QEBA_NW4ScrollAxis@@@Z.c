/*
 * XREFs of ?HasImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z @ 0x18014AC9C
 * Callers:
 *     ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x18014ACFC (-HasImpulse@CInteractionTracker@@QEBA_NXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@IEBAXXZ @ 0x180132B34 (-InternalAddRef@-$ComPtr@UID3D11PixelShader@@@WRL@Microsoft@@IEBAXXZ.c)
 */

char __fastcall CInteractionTracker::HasImpulse(__int64 a1, int a2)
{
  char v2; // di
  __int64 v3; // rbx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  v5 = *(_QWORD *)(a1 + 8LL * a2 + 416);
  v3 = v5;
  Microsoft::WRL::ComPtr<ID3D11PixelShader>::InternalAddRef(&v5);
  if ( v3 )
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 192LL))(v3);
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease(&v5);
  return v2;
}
