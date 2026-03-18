/*
 * XREFs of ?PinResources@CD3DDeviceLevel1@@QEAAJPEAPEAUIDXGIResource@@I@Z @ 0x180003138
 * Callers:
 *     ?PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z @ 0x180005028 (-PinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJU_LUID@@@Z.c)
 * Callees:
 *     ?TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180018EDC (-TranslateDriverError@CD3DDeviceLevel1@@AEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::PinResources(CD3DDeviceLevel1 *this, struct IDXGIResource **a2, unsigned int a3)
{
  unsigned int v3; // edi
  unsigned int v4; // ebp
  __int64 v7; // r12
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 i; // r8
  int v12; // eax
  _QWORD v14[32]; // [rsp+30h] [rbp-138h] BYREF

  v3 = 0;
  v4 = 0;
  if ( a3 )
  {
    v7 = a3;
    do
    {
      v8 = *((unsigned int *)this + 262);
      v9 = 0LL;
      v10 = (__int64)*a2;
      for ( i = *((_QWORD *)this + 128); (unsigned int)v9 < (unsigned int)v8; v9 = (unsigned int)(v9 + 1) )
      {
        if ( v10 == *(_QWORD *)(i + 8 * v9) )
          break;
      }
      if ( (unsigned int)v9 < (unsigned int)v8 )
      {
        if ( (unsigned int)v9 < (int)v8 - 1 )
        {
          do
          {
            v8 = (unsigned int)(v9 + 1);
            *(_QWORD *)(i + 8 * v9) = *(_QWORD *)(i + 8 * v8);
            v9 = v8;
          }
          while ( (unsigned int)v8 < *((_DWORD *)this + 262) - 1 );
        }
        --*((_DWORD *)this + 262);
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v10 + 16LL))(v10, v8, i);
      }
      else
      {
        v14[v4++] = v10;
      }
      ++a2;
      --v7;
    }
    while ( v7 );
    if ( v4 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**((_QWORD **)this + 65) + 48LL))(
              *((_QWORD *)this + 65),
              v14,
              v4);
      v3 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, &dword_18016B894, 1u, v12, 0x109Bu);
    }
  }
  return CD3DDeviceLevel1::TranslateDriverError(this, v3, 0LL);
}
