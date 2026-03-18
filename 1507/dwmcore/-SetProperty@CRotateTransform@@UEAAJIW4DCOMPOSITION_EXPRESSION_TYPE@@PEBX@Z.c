/*
 * XREFs of ?SetProperty@CRotateTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18001A6E0
 * Callers:
 *     ?UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z @ 0x1800470D0 (-UpdateAnimateValues@CAnimation@@UEAA_NPEAUFRAME_TIME_INFO@@@Z.c)
 * Callees:
 *     ?OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001ACF0 (-OnChanged@CTransform3D@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18001AD10 (-NotifyListenerOfChange@CTransform3D@@UEAAXPEAVCResource@@W4Flags@NotificationEventArgs@@PEAUIUn.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CRotateTransform::SetProperty(double *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // esi
  double *v6; // rax
  unsigned int v7; // eax
  __int64 (__fastcall *v8)(double *, _QWORD, _QWORD); // rbx
  __int64 v10; // rax
  unsigned __int64 v11; // rbp
  __int64 v12; // r12
  __int64 v13; // r14
  __int64 v14; // rbx
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // rbx
  void (__fastcall *v17)(double *, unsigned __int64, _QWORD, _QWORD); // r15
  int v19; // edx

  v4 = 0;
  if ( a3 != 17 )
    goto LABEL_33;
  if ( a2 )
  {
    v19 = a2 - 1;
    if ( v19 )
    {
      if ( v19 != 1 )
        goto LABEL_33;
      v6 = a1 + 15;
    }
    else
    {
      v6 = a1 + 14;
    }
  }
  else
  {
    v6 = a1 + 13;
  }
  if ( !v6 )
  {
LABEL_33:
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xB99u);
    return v4;
  }
  if ( *v6 != *a4 )
  {
    *v6 = *a4;
    v7 = *((_DWORD *)a1 + 8) ^ (*((_DWORD *)a1 + 8) ^ (((_DWORD)a1[4] & 0xFFFFFFFE) + 2)) & 6;
    *((_DWORD *)a1 + 8) = v7;
    if ( (v7 & 6) == 2 )
    {
      v8 = *(__int64 (__fastcall **)(double *, _QWORD, _QWORD))(*(_QWORD *)a1 + 88LL);
      if ( (char *)v8 == (char *)CTransform3D::OnChanged
         ? CTransform3D::OnChanged(a1, 0LL, 0LL)
         : (unsigned int)v8(a1, 0LL, 0LL) )
      {
        v10 = *((_QWORD *)a1 + 3);
        if ( (v10 & 2) != 0 )
          v10 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFCuLL);
        else
          LODWORD(v10) = v10 & 1;
        if ( (_DWORD)v10 )
        {
          v11 = 0LL;
          v12 = (unsigned int)v10;
          v13 = 16LL;
          do
          {
            v14 = *((_QWORD *)a1 + 3);
            if ( (v14 & 2) != 0 )
              v15 = *(_QWORD *)(v14 & 0xFFFFFFFFFFFFFFFCuLL);
            else
              v15 = (_QWORD)a1[3] & 1LL;
            if ( v11 >= v15 )
            {
              v16 = 0LL;
            }
            else
            {
              v16 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
              if ( v15 != 1 )
                v16 = *(_QWORD *)(v16 + v13);
            }
            v17 = *(void (__fastcall **)(double *, unsigned __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 64LL);
            if ( (char *)v17 == (char *)CTransform3D::NotifyListenerOfChange )
              CTransform3D::NotifyListenerOfChange(a1, v16, 0LL, 0LL);
            else
              v17(a1, v16, 0LL, 0LL);
            ++v11;
            v13 += 8LL;
            --v12;
          }
          while ( v12 );
        }
      }
    }
    (*(void (__fastcall **)(double *))(*(_QWORD *)a1 + 72LL))(a1);
    *((_DWORD *)a1 + 8) ^= (*((_DWORD *)a1 + 8) ^ (2 * (*((_DWORD *)a1 + 8) >> 1) - 2)) & 6;
  }
  return v4;
}
