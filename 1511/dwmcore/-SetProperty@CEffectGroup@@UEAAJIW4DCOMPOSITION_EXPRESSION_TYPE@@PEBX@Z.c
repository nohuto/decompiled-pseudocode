/*
 * XREFs of ?SetProperty@CEffectGroup@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18004E5D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetCount@CPtrArrayBase@@IEBA_KXZ @ 0x180067DFC (-GetCount@CPtrArrayBase@@IEBA_KXZ.c)
 *     ??ACPtrArrayBase@@IEBA_K_K@Z @ 0x180067E90 (--ACPtrArrayBase@@IEBA_K_K@Z.c)
 *     ?NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180085A00 (-NotifyListenerOfChange@CResource@@UEAAXPEAV1@W4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CEffectGroup::SetProperty(double *a1, int a2, int a3, float *a4)
{
  unsigned int v4; // esi
  double *v6; // rax
  unsigned int v8; // eax
  unsigned int Count; // eax
  __int64 v10; // rbx
  __int64 v11; // rbp
  __int64 v12; // r12
  void (__fastcall *v13)(double *, __int64, _QWORD, _QWORD); // r15

  v4 = 0;
  if ( a3 != 18 || a2 || (v6 = a1 + 7, a1 == (double *)-56LL) )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x67u);
  }
  else if ( *v6 != *a4 )
  {
    *v6 = *a4;
    v8 = *((_DWORD *)a1 + 8) ^ (*((_DWORD *)a1 + 8) ^ (((_DWORD)a1[4] & 0xFFFFFFFE) + 2)) & 6;
    *((_DWORD *)a1 + 8) = v8;
    if ( (v8 & 6) == 2 )
    {
      if ( (*(unsigned int (__fastcall **)(double *, _QWORD, _QWORD))(*(_QWORD *)a1 + 96LL))(a1, 0LL, 0LL) )
      {
        Count = CPtrArrayBase::GetCount((CPtrArrayBase *)(a1 + 3));
        if ( Count )
        {
          v10 = 0LL;
          v11 = Count;
          do
          {
            v12 = CPtrArrayBase::operator[](a1 + 3, v10);
            v13 = *(void (__fastcall **)(double *, __int64, _QWORD, _QWORD))(*(_QWORD *)a1 + 64LL);
            if ( (char *)v13 == (char *)CResource::NotifyListenerOfChange )
              CResource::NotifyListenerOfChange(a1, v12, 0LL, 0LL);
            else
              v13(a1, v12, 0LL, 0LL);
            ++v10;
            --v11;
          }
          while ( v11 );
        }
      }
    }
    (*(void (__fastcall **)(double *))(*(_QWORD *)a1 + 72LL))(a1);
    *((_DWORD *)a1 + 8) ^= (*((_DWORD *)a1 + 8) ^ (2 * (*((_DWORD *)a1 + 8) >> 1) - 2)) & 6;
  }
  return v4;
}
