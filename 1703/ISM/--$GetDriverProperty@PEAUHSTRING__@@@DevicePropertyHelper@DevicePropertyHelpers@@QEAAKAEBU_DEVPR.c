/*
 * XREFs of ??$GetDriverProperty@PEAUHSTRING__@@@DevicePropertyHelper@DevicePropertyHelpers@@QEAAKAEBU_DEVPROPKEY@@PEAPEAUHSTRING__@@@Z @ 0x180075DC4
 * Callers:
 *     ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x18007691C (--0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 *     ??2@YAPEAX_K@Z @ 0x18009DFE0 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DevicePropertyHelpers::DevicePropertyHelper::GetDriverProperty<HSTRING__ *>(
        _DWORD *a1,
        const DEVPROPKEY *a2,
        HSTRING *a3)
{
  CONFIGRET DevNode_PropertyW; // ebx
  char *v7; // rsi
  size_t v8; // rbx
  void *v9; // rax
  _QWORD *v10; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  ULONG PropertyBufferSize; // [rsp+80h] [rbp+30h] BYREF
  DEVPROPTYPE PropertyType; // [rsp+98h] [rbp+48h] BYREF

  PropertyBufferSize = 0;
  if ( *a1 )
  {
    DevNode_PropertyW = CM_Get_DevNode_PropertyW(a1[4], a2, &PropertyType, 0LL, &PropertyBufferSize, 0);
    if ( !DevNode_PropertyW )
      DevNode_PropertyW = PropertyType != 18 ? 0x26 : 0;
    if ( DevNode_PropertyW == 26 && PropertyBufferSize )
    {
      v7 = 0LL;
      if ( (unsigned __int64)PropertyBufferSize >> 1 )
      {
        v8 = 2 * ((unsigned __int64)PropertyBufferSize >> 1);
        if ( v8 < 0x1000 )
        {
          v10 = operator new(v8);
        }
        else
        {
          if ( v8 + 39 < v8 )
          {
            std::_Xbad_alloc();
            __debugbreak();
          }
          v9 = operator new(v8 + 39);
          v10 = (_QWORD *)(((unsigned __int64)v9 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
          *(v10 - 1) = v9;
        }
        v7 = (char *)v10 + v8;
        memset(v10, 0, v8);
      }
      else
      {
        v10 = 0LL;
      }
      if ( *a1 )
      {
        DevNode_PropertyW = CM_Get_DevNode_PropertyW(a1[4], a2, &PropertyType, (PBYTE)v10, &PropertyBufferSize, 0);
        if ( !DevNode_PropertyW )
          DevNode_PropertyW = PropertyType != 18 ? 0x26 : 0;
        if ( !DevNode_PropertyW )
          WindowsCreateString((PCNZWCH)v10, PropertyBufferSize >> 1, a3);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x49,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\devicepropertyhelpers.h",
          (const char *)0x8007139FLL);
        DevNode_PropertyW = -2147019873;
      }
      if ( v10 )
        std::_Deallocate((char *)v10, (v7 - (char *)v10) >> 1, 2uLL);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x49,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\devicepropertyhelpers.h",
      (const char *)0x8007139FLL);
    return (CONFIGRET)-2147019873;
  }
  return DevNode_PropertyW;
}
