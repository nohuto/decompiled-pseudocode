/*
 * XREFs of ?vInitBuffer@@YAXPEAU_STRRUN@@PEAU_RECTL@@K@Z @ 0x1C0039B48
 * Callers:
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1C003718C (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x1C027E58C (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     <none>
 */

void __fastcall vInitBuffer(struct _STRRUN *a1, struct _RECTL *a2, unsigned int a3)
{
  char *v3; // r9
  int v4; // edx
  unsigned __int64 v5; // r10

  v3 = (char *)a1 + 16;
  *((_DWORD *)a1 + 2) = a2->left;
  v4 = a2->right - a2->left;
  *((_DWORD *)a1 + 3) = v4;
  v5 = (unsigned __int64)(4 * v4) >> 2;
  if ( v5 )
  {
    if ( ((unsigned __int8)v3 & 4) != 0 )
    {
      *(_DWORD *)v3 = a3;
      if ( !--v5 )
        return;
      v3 = (char *)a1 + 20;
    }
    memset64(v3, a3 | ((unsigned __int64)a3 << 32), v5 >> 1);
    if ( (v5 & 1) != 0 )
      *(_DWORD *)&v3[4 * v5 - 4] = a3;
  }
}
