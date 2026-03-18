/*
 * XREFs of ?vTighten@RGNOBJ@@QEAAXXZ @ 0x1C002D570
 * Callers:
 *     ?vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1C00310F0 (-vCreate@RGNMEMOBJ@@QEAAXAEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     GreExtCreateRegion @ 0x1C006EC30 (GreExtCreateRegion.c)
 * Callees:
 *     <none>
 */

void __fastcall RGNOBJ::vTighten(RGNOBJ *this)
{
  __int64 v1; // r9
  int v2; // r8d
  int *v3; // r10
  int v4; // r11d
  signed int v5; // ebx
  int v6; // edi
  __int64 v7; // rax
  __int128 v8; // [rsp+0h] [rbp-18h]

  v1 = *(_QWORD *)this;
  v2 = *(_DWORD *)(*(_QWORD *)this + 84LL);
  if ( v2 == 1 )
  {
    *(_DWORD *)(v1 + 88) = 0;
    *(_DWORD *)(*(_QWORD *)this + 100LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 96LL) = 0;
    *(_DWORD *)(*(_QWORD *)this + 92LL) = 0;
  }
  else
  {
    v3 = (int *)(v1 + 104);
    v4 = 0x7FFFFFFF;
    v5 = 0x80000000;
    LODWORD(v8) = 0x7FFFFFFF;
    DWORD2(v8) = 0x80000000;
    if ( !v2 )
      goto LABEL_13;
    do
    {
      v6 = *v3;
      --v2;
      if ( *v3 )
      {
        v7 = (unsigned int)(v6 - 1);
        if ( v4 > v3[3] )
          v4 = v3[3];
        LODWORD(v8) = v4;
        if ( v5 < v3[v7 + 3] )
          v5 = v3[v7 + 3];
        DWORD2(v8) = v5;
      }
      v3 = (int *)((char *)v3 + (unsigned int)(4 * v6 + 16));
    }
    while ( v2 );
    if ( v4 >= v5 )
    {
LABEL_13:
      LODWORD(v8) = 0;
      DWORD2(v8) = 0;
    }
    DWORD1(v8) = *(_DWORD *)(v1 + 112);
    HIDWORD(v8) = *(_DWORD *)(*(_QWORD *)(v1 + 40)
                            - 4LL
                            - (unsigned int)(4 * *(_DWORD *)(*(_QWORD *)(v1 + 40) - 4LL) + 16)
                            + 8);
    *(_OWORD *)(v1 + 88) = v8;
  }
}
