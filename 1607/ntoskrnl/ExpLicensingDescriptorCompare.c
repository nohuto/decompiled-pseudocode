/*
 * XREFs of ExpLicensingDescriptorCompare @ 0x140497C30
 * Callers:
 *     ExUpdateLicenseDataInternal @ 0x140496F04 (ExUpdateLicenseDataInternal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpLicensingDescriptorCompare(_QWORD *a1, _QWORD *a2)
{
  bool v2; // zf
  __int16 *v3; // rcx
  unsigned __int16 *v4; // rax
  unsigned __int16 v5; // r8
  __int16 *v6; // rcx
  unsigned __int16 v7; // dx
  __int16 *v8; // r9
  unsigned __int64 v9; // r10
  unsigned __int64 v10; // r11
  unsigned __int64 v11; // rcx
  unsigned __int16 *v12; // r8
  __int64 v13; // r9
  int v14; // ecx
  int v15; // edx
  int v16; // ecx

  v2 = *(_BYTE *)a1 == 2;
  v3 = (__int16 *)a1[1];
  if ( v2 )
  {
    v5 = v3[1];
    v4 = (unsigned __int16 *)(v3 + 8);
  }
  else
  {
    v4 = (unsigned __int16 *)*((_QWORD *)v3 + 1);
    v5 = *v3;
  }
  v6 = (__int16 *)a2[1];
  if ( *(_BYTE *)a2 == 2 )
  {
    v7 = v6[1];
    v8 = v6 + 8;
  }
  else
  {
    v8 = (__int16 *)*((_QWORD *)v6 + 1);
    v7 = *v6;
  }
  v9 = (unsigned __int64)v5 >> 1;
  v10 = (unsigned __int64)v7 >> 1;
  v11 = v10;
  if ( v9 <= v10 )
    v11 = (unsigned __int64)v5 >> 1;
  v12 = &v4[v11];
  if ( v4 >= v12 )
  {
LABEL_11:
    v16 = v9 - v10;
  }
  else
  {
    v13 = (char *)v8 - (char *)v4;
    while ( 1 )
    {
      v14 = *v4;
      v15 = *(unsigned __int16 *)((char *)v4 + v13);
      if ( v14 != v15 )
        break;
      if ( ++v4 >= v12 )
        goto LABEL_11;
    }
    v16 = v14 - v15;
  }
  if ( v16 > 0 )
    return 1LL;
  else
    return (unsigned int)(v16 >= 0) - 1;
}
