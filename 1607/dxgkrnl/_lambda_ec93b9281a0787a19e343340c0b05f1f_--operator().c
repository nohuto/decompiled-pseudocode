/*
 * XREFs of _lambda_ec93b9281a0787a19e343340c0b05f1f_::operator() @ 0x1C01AC284
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01AC31C (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     D3DKMDT_VPPR_GET_CONTENT_ROTATION @ 0x1C0005D54 (D3DKMDT_VPPR_GET_CONTENT_ROTATION.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x1C0089D20 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBU_D3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 */

__int64 __fastcall lambda_ec93b9281a0787a19e343340c0b05f1f_::operator()(CCD_TOPOLOGY **a1, _DWORD *a2, unsigned int a3)
{
  const struct _D3DKMT_PATHMODALITY_DESCRIPTOR *PathDescriptor; // r10
  __int64 result; // rax
  unsigned int *v6; // r10
  int v7; // r11d
  unsigned int v8; // ecx
  unsigned int v9; // edx
  unsigned int v10; // r8d

  PathDescriptor = CCD_TOPOLOGY::GetPathDescriptor(*a1, a3);
  result = 0x40000LL;
  if ( (*a2 & 0x40000) != 0
    && (*(_DWORD *)PathDescriptor & 0x40000) != 0
    && a2[50] == *((_DWORD *)PathDescriptor + 50)
    && (*(_DWORD *)PathDescriptor & 0x20000) != 0 )
  {
    if ( ((D3DKMDT_VPPR_GET_CONTENT_ROTATION(*((D3DKMDT_VIDPN_PRESENT_PATH_ROTATION *)PathDescriptor + 31)) - 1) & 0xFFFFFFFD) != 0 )
    {
      v8 = v6[37];
      result = v6[36];
    }
    else
    {
      v8 = v6[36];
      result = v6[37];
    }
    v9 = v6[22];
    if ( v8 > v9 || (v10 = v6[23], (unsigned int)result > v10) || v8 != v9 || (_DWORD)result != v10 )
      *v6 = v7 & 0xFF7DFE78;
  }
  return result;
}
