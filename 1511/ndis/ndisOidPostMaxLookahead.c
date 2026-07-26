/*
 * XREFs of ndisOidPostMaxLookahead @ 0x1C0043230
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 */

void __fastcall ndisOidPostMaxLookahead(_DWORD *a1)
{
  __int64 v1; // rdi
  char v3; // dl

  v1 = *((_QWORD *)a1 + 4);
  v3 = byte_1C0083712;
  if ( (unsigned __int8)byte_1C0083712 >= 4u )
  {
    WPP_SF_qq(0x54u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, *(_QWORD *)a1, v1);
    v3 = byte_1C0083712;
  }
  if ( *(_QWORD *)a1 && (*(_DWORD *)(v1 + 4) & 0xFFFFFFFD) == 0 )
  {
    a1[10] = 0;
    if ( *(_DWORD *)(v1 + 48) < 4u )
    {
      *(_DWORD *)(v1 + 56) = 4;
      a1[10] = -1073676268;
    }
    if ( !a1[10] )
    {
      *(_DWORD *)(*(_QWORD *)a1 + 596LL) = **(_DWORD **)(v1 + 40);
      *(_DWORD *)(v1 + 52) = 4;
    }
  }
  if ( (unsigned __int8)v3 >= 4u )
    WPP_SF_qq(0x55u, &WPP_7d93857a3aef6cac0cffd1e7320acdf9_Traceguids, *(_QWORD *)a1, v1);
}
