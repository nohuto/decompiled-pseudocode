/*
 * XREFs of ?GetCaps@LPMDisplayCtrl@@QEAAJPEAU_D3DKMT_LPMD_CAPS@@@Z @ 0x1C016ACC4
 * Callers:
 *     DxgkLPMDisplayControl @ 0x1C016B3D0 (DxgkLPMDisplayControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LPMDisplayCtrl::GetCaps(LPMDisplayCtrl *this, struct _D3DKMT_LPMD_CAPS *a2)
{
  PFILE_OBJECT *v3; // rcx
  int v4; // eax
  int v5; // r9d

  if ( !a2 )
    return 3221225485LL;
  v3 = FileObject;
  *((_DWORD *)a2 + 1) = *((unsigned __int16 *)FileObject + 34);
  *((_DWORD *)a2 + 2) = *((unsigned __int16 *)v3 + 35);
  v4 = 2;
  if ( *((_DWORD *)v3 + 16) == 1 )
    v4 = 4;
  v5 = v4 | (*((_DWORD *)v3 + 8) != 0);
  switch ( *((_DWORD *)v3 + 15) )
  {
    case 1:
      v5 |= 8u;
      goto LABEL_13;
    case 2:
      *((_DWORD *)a2 + 3) = 2;
      goto LABEL_14;
    case 3:
      *((_DWORD *)a2 + 3) = 3;
      goto LABEL_14;
    case 4:
LABEL_13:
      *((_DWORD *)a2 + 3) = 1;
      goto LABEL_14;
  }
  *((_DWORD *)a2 + 3) = 0;
LABEL_14:
  *(_DWORD *)a2 = v5;
  return 0LL;
}
