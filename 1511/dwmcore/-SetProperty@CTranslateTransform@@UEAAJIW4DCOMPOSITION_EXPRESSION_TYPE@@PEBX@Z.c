/*
 * XREFs of ?SetProperty@CTranslateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800860B0
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x180083FD0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180067870 (-OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180067890 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180067DFC (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180067E90 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTranslateTransform::SetProperty(double *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // esi
  double *v6; // rax
  unsigned int v8; // eax
  __int64 (__fastcall *v9)(__int64); // rbx
  unsigned int Count; // eax
  unsigned __int64 v12; // rbx
  __int64 v13; // rbp
  _DWORD *v14; // r12
  __int64 (__fastcall *v15)(CCompositionSurfaceBitmap *, _DWORD *); // r15

  v4 = 0;
  if ( a3 != 18 )
    goto LABEL_22;
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_22;
    v6 = a1 + 16;
  }
  else
  {
    v6 = a1 + 15;
  }
  if ( !v6 )
  {
LABEL_22:
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xABAu);
    return v4;
  }
  if ( *v6 != *a4 )
  {
    *v6 = *a4;
    v8 = *((_DWORD *)a1 + 8) ^ (*((_DWORD *)a1 + 8) ^ (((_DWORD)a1[4] & 0xFFFFFFFE) + 2)) & 6;
    *((_DWORD *)a1 + 8) = v8;
    if ( (v8 & 6) == 2 )
    {
      v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 96LL);
      if ( v9 == CTransform3D::OnChanged
         ? CTransform3D::OnChanged((__int64)a1)
         : ((unsigned int (__fastcall *)(double *, _QWORD, _QWORD))v9)(a1, 0LL, 0LL) )
      {
        Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(a1 + 3));
        if ( Count )
        {
          v12 = 0LL;
          v13 = Count;
          do
          {
            v14 = (_DWORD *)CPtrArrayBase::operator[]((__int64 *)a1 + 3, v12);
            v15 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *, _DWORD *))(*(_QWORD *)a1 + 64LL);
            if ( v15 == CTransform3D::NotifyListenerOfChange )
              CTransform3D::NotifyListenerOfChange((CCompositionSurfaceBitmap *)a1, v14);
            else
              ((void (__fastcall *)(double *, _DWORD *, _QWORD, _QWORD))v15)(a1, v14, 0LL, 0LL);
            ++v12;
            --v13;
          }
          while ( v13 );
        }
      }
    }
    (*(void (__fastcall **)(double *))(*(_QWORD *)a1 + 72LL))(a1);
    *((_DWORD *)a1 + 8) ^= (*((_DWORD *)a1 + 8) ^ (2 * (*((_DWORD *)a1 + 8) >> 1) - 2)) & 6;
  }
  return v4;
}
