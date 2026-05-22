/*
 * XREFs of ?GetTopLevelCollectionInformation@SpatialInteractionDevice@@UEAAJPEAG0@Z @ 0x1800648F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SpatialInteractionDevice::GetTopLevelCollectionInformation(
        SpatialInteractionDevice *this,
        unsigned __int16 *a2,
        unsigned __int16 *a3)
{
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 )
  {
    v3 = 245LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
      (const char *)0x80004003LL);
    return 2147500035LL;
  }
  if ( !a3 )
  {
    v3 = 246LL;
    goto LABEL_3;
  }
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
  {
    *a2 = *(_WORD *)(v5 + 104);
    result = 0LL;
    *a3 = *(_WORD *)(*((_QWORD *)this + 9) + 106LL);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF7,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\lib\\spatialinteractiondevice.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  return result;
}
