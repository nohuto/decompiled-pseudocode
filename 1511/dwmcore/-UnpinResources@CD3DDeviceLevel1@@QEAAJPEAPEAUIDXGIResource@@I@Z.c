/*
 * XREFs of ?UnpinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x180011CFC
 * Callers:
 *     ?UnpinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z @ 0x180011230 (-UnpinResources@CD3DDeviceManager@@QEAAJAEBU_GUID@@U_LUID@@PEAPEAUIDXGIResource@@I@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180076E18 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD3DDeviceLevel1::UnpinResources(CD3DDeviceLevel1 *this, struct IDXGIResource **a2, unsigned int a3)
{
  unsigned int v3; // r12d
  unsigned int v6; // esi
  char *v7; // r14
  unsigned int v8; // eax
  unsigned int v9; // edx
  int v11; // eax
  int v12; // ebx
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v3 = 0;
  v6 = -2147467259;
  if ( a3 )
  {
    v7 = (char *)this + 976;
    while ( 1 )
    {
      v13 = (__int64)*a2;
      v8 = *((_DWORD *)v7 + 6);
      v9 = v8 + 1;
      if ( v8 + 1 < v8 )
        break;
      v6 = 0;
      if ( v9 > *((_DWORD *)v7 + 5) )
      {
        v11 = DynArrayImpl<0>::AddMultipleAndSet(v7, 8LL, 1LL, &v13);
        v12 = v11;
        if ( v11 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
        v6 = v12;
        if ( v12 < 0 )
          goto LABEL_13;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v7 + 8LL * v8) = v13;
        *((_DWORD *)v7 + 6) = v9;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
      ++v3;
      ++a2;
      if ( v3 >= a3 )
        return v6;
    }
    v12 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    v6 = -2147024362;
LABEL_13:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1120u);
  }
  return v6;
}
