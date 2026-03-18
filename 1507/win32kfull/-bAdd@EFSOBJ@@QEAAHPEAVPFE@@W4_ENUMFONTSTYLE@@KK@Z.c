/*
 * XREFs of ?bAdd@EFSOBJ@@QEAAHPEAVPFE@@W4_ENUMFONTSTYLE@@KK@Z @ 0x1C00302F0
 * Callers:
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z @ 0x1C0031660 (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@PEBGKPEAU_EFFILTER_INFO@@@Z.c)
 *     ?bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z @ 0x1C003177C (-bScanLists@FHOBJ@@QEAAHPEAVEFSOBJ@@KPEAU_EFFILTER_INFO@@@Z.c)
 * Callees:
 *     ?WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z @ 0x1C0030118 (-WriteEFE@EFSOBJ@@QEAAXAEBU_EFENTRY@@AEAVPFEOBJ@@@Z.c)
 */

__int64 __fastcall EFSOBJ::bAdd(EFSOBJ *a1, __int64 a2, int a3, char a4, int a5)
{
  __int64 v5; // rax
  int v7; // r15d
  __int64 v10; // rdx
  char *v11; // rdi
  unsigned __int64 v12; // r14
  int v13; // esi
  unsigned __int8 v15; // al
  unsigned __int8 *i; // rbx
  unsigned __int8 v17; // cl
  unsigned int v18; // r14d
  __int64 v19; // rcx
  _QWORD v20[2]; // [rsp+20h] [rbp-10h] BYREF
  int v21; // [rsp+68h] [rbp+38h] BYREF
  char v22; // [rsp+6Ch] [rbp+3Ch]
  unsigned __int8 v23; // [rsp+6Dh] [rbp+3Dh]
  __int16 v24; // [rsp+6Eh] [rbp+3Eh]

  v5 = *(_QWORD *)(a2 + 32);
  v7 = a5;
  v20[0] = a2;
  v21 = a3;
  v10 = *(int *)(v5 + 40);
  v22 = 0;
  v23 = a5;
  v11 = (char *)(v5 + v10);
  v12 = v5 + v10 + 16;
  v13 = a4 & 2;
  if ( (a4 & 2) != 0 )
  {
    v22 = 2;
    if ( a5 == 1 )
    {
      if ( (_DWORD)v10 )
        v15 = *v11;
      else
        v15 = *(_BYTE *)(v5 + 44);
      v23 = v15;
    }
  }
  EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v21, (struct PFEOBJ *)v20);
  if ( v13 )
  {
    if ( v7 == 1 && *(_DWORD *)(*(_QWORD *)(a2 + 32) + 40LL) )
    {
      for ( i = (unsigned __int8 *)(v11 + 1); ; ++i )
      {
        v17 = *i;
        if ( *i == 1 || v17 > 0xFDu || (unsigned __int64)i >= v12 )
          break;
        v24 = 0;
        v23 = v17;
        v21 = a3;
        v22 = 2;
        EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v21, (struct PFEOBJ *)v20);
      }
    }
  }
  else if ( *(_DWORD *)(a2 + 136) )
  {
    v18 = 0;
    do
    {
      v21 = a3;
      v22 = 3;
      v19 = *(unsigned __int8 *)(v18 + a2 + 144);
      v24 = *(unsigned __int8 *)(v18 + a2 + 144);
      v23 = *((_BYTE *)gpfsTable + 196 * v19 + 128);
      EFSOBJ::WriteEFE(a1, (const struct _EFENTRY *)&v21, (struct PFEOBJ *)v20);
      ++v18;
    }
    while ( v18 < *(_DWORD *)(a2 + 136) );
  }
  return 1LL;
}
