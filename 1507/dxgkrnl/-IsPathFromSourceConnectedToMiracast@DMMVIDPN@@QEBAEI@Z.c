/*
 * XREFs of ?IsPathFromSourceConnectedToMiracast@DMMVIDPN@@QEBAEI@Z @ 0x1C017C540
 * Callers:
 *     ?AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D3DKMDT_VIDPN_SOURCE_MODE@@@Z @ 0x1C00888F0 (-AddMode@DXGK_VIDPNSOURCEMODESET_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNSOURCEMODESET__@@QEAU_D.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall DMMVIDPN::IsPathFromSourceConnectedToMiracast(DMMVIDPN *this, int a2)
{
  _QWORD *v2; // r8
  _QWORD *v3; // r8
  DMMVIDPN *v4; // r8

  v2 = (_QWORD *)((char *)this + 120);
  if ( (_QWORD *)*v2 == v2 )
    return 0;
  v3 = (_QWORD *)(*v2 - 8LL);
  if ( !v3 )
    return 0;
  while ( *(_DWORD *)(v3[11] + 24LL) != a2 || *(_DWORD *)(*(_QWORD *)(v3[12] + 96LL) + 76LL) != 15 )
  {
    v4 = (DMMVIDPN *)v3[1];
    if ( v4 == (DMMVIDPN *)((char *)this + 120) )
      v3 = 0LL;
    else
      v3 = (_QWORD *)((char *)v4 - 8);
    if ( !v3 )
      return 0;
  }
  return 1;
}
