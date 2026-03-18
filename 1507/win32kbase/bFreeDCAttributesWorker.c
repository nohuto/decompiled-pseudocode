/*
 * XREFs of bFreeDCAttributesWorker @ 0x1C00BFBF0
 * Callers:
 *     <none>
 * Callees:
 *     HmgFreeDcAttr @ 0x1C005A7F8 (HmgFreeDcAttr.c)
 */

__int64 __fastcall bFreeDCAttributesWorker(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  unsigned int v3; // edi
  __int64 v5; // r8
  _OWORD *v6; // rax
  _OWORD *v7; // rcx
  __int128 v8; // xmm1
  __int64 v9; // rcx
  __int64 v10; // rcx

  v1 = *(_QWORD *)(a1 + 80);
  v2 = a1 + 536;
  v3 = 0;
  if ( v1 != a1 + 536 )
  {
    v5 = 3LL;
    v6 = (_OWORD *)(a1 + 536);
    v7 = *(_OWORD **)(a1 + 80);
    do
    {
      *v6 = *v7;
      v6[1] = v7[1];
      v6[2] = v7[2];
      v6[3] = v7[3];
      v6[4] = v7[4];
      v6[5] = v7[5];
      v6[6] = v7[6];
      v6 += 8;
      v8 = v7[7];
      v7 += 8;
      *(v6 - 1) = v8;
      --v5;
    }
    while ( v5 );
    *v6 = *v7;
    v6[1] = v7[1];
    if ( v1 == a1 + 960 )
      v9 = *(_QWORD *)(a1 + 952);
    else
      v9 = v1;
    HmgFreeDcAttr(v9);
    v10 = (unsigned __int16)*(_DWORD *)a1;
    *(_QWORD *)(a1 + 80) = v2;
    *(_QWORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24 * v10 + 16) = 0LL;
    return 1;
  }
  return v3;
}
