/*
 * XREFs of ?DpiDdiGetResourceForBar@@YAJPEAXGGPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C002EDE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAX@Z @ 0x1C002A200 (--0CInterfaceCallContext@@QEAA@PEAX@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002A2A8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 *     DxgkDdiGetResourceForBar @ 0x1C015A864 (DxgkDdiGetResourceForBar.c)
 */

__int64 __fastcall DpiDdiGetResourceForBar(
        _QWORD *a1,
        unsigned __int16 a2,
        unsigned __int16 a3,
        struct _CM_PARTIAL_RESOURCE_DESCRIPTOR *a4)
{
  unsigned int ResourceForBar; // ebx
  _BYTE v9[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+30h] [rbp-18h]

  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v9, a1);
  ResourceForBar = v11;
  if ( v11 >= 0 )
  {
    ResourceForBar = DxgkDdiGetResourceForBar(*(_QWORD *)(v10 + 3688), a2, a3, a4);
    v11 = ResourceForBar;
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v9);
  return ResourceForBar;
}
