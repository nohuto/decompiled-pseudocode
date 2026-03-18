/*
 * XREFs of ?ReportInertiaStart@CInteraction@@QEAAJW4InputType@@MM@Z @ 0x1801455A4
 * Callers:
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18014C474 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ @ 0x180006040 (-InternalRelease@-$ComPtr@UID2D1Bitmap1@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ @ 0x1800A4E20 (-GetVisual@CInteraction@@QEBAPEAVCVisual@@XZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     ceilf_0 @ 0x1800BF5DE (ceilf_0.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::InputTypeToInertiaSourceType @ 0x1801453A4 (_anonymous_namespace_--InputTypeToInertiaSourceType.c)
 */

__int64 __fastcall CInteraction::ReportInertiaStart(CInteraction *a1, int a2, float a3, float a4)
{
  unsigned int v6; // edi
  struct CVisual *Visual; // rax
  const __m128i *v8; // rbx
  __m128 v9; // xmm6
  float v10; // xmm0_4
  __int64 v11; // rcx
  int v12; // xmm0_4
  int v13; // xmm1_4
  int v14; // xmm0_4
  signed int LastError; // eax
  __int128 v17; // [rsp+38h] [rbp-49h]
  struct CVisual *v18; // [rsp+48h] [rbp-39h] BYREF
  _DWORD v19[4]; // [rsp+50h] [rbp-31h] BYREF
  __int128 v20; // [rsp+60h] [rbp-21h] BYREF
  int v21; // [rsp+70h] [rbp-11h]
  int v22; // [rsp+74h] [rbp-Dh]
  int v23; // [rsp+78h] [rbp-9h]
  int v24; // [rsp+7Ch] [rbp-5h]
  int v25; // [rsp+80h] [rbp-1h]
  int v26; // [rsp+84h] [rbp+3h]

  v6 = 0;
  Visual = CInteraction::GetVisual(a1);
  v18 = Visual;
  v8 = (const __m128i *)Visual;
  if ( Visual )
  {
    (*(void (__fastcall **)(struct CVisual *))(*(_QWORD *)Visual + 8LL))(Visual);
    memset_0(&v20, 0, 0x28uLL);
    *(float *)v19 = a3;
    *(float *)&v19[1] = a4;
    v19[2] = anonymous_namespace_::InputTypeToInertiaSourceType(a2);
    v9 = (__m128)_mm_loadu_si128(v8 + 14);
    LODWORD(v17) = (int)ceilf_0(v9.m128_f32[0]);
    DWORD1(v17) = (int)ceilf_0(_mm_shuffle_ps(v9, v9, 85).m128_f32[0]);
    DWORD2(v17) = (int)ceilf_0(_mm_shuffle_ps(v9, v9, 170).m128_f32[0]);
    v10 = ceilf_0(_mm_shuffle_ps(v9, v9, 255).m128_f32[0]);
    v11 = *((unsigned int *)a1 + 336);
    HIDWORD(v17) = (int)v10;
    v21 = *((_DWORD *)a1 + 86);
    v12 = *((_DWORD *)a1 + 90);
    v20 = v17;
    v22 = *((_DWORD *)a1 + 87);
    v24 = *((_DWORD *)a1 + 91);
    v13 = *((_DWORD *)a1 + 99);
    v23 = v12;
    v14 = *((_DWORD *)a1 + 98);
    v26 = v13;
    v25 = v14;
    if ( !(unsigned int)ReportInertia(v11, 5LL, 0LL, v19, &v20) )
    {
      LastError = GetLastError();
      if ( LastError > 0 )
        v6 = (unsigned __int16)LastError | 0x80070000;
      else
        v6 = LastError;
    }
  }
  Microsoft::WRL::ComPtr<ID2D1Bitmap1>::InternalRelease((__int64 *)&v18);
  return v6;
}
