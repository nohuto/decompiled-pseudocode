/*
 * XREFs of WmipProcessWmiRegInfo @ 0x1405374C4
 * Callers:
 *     WmipRegisterOrUpdateDS @ 0x140537360 (WmipRegisterOrUpdateDS.c)
 * Callees:
 *     WmipAddDataSource @ 0x1405375B4 (WmipAddDataSource.c)
 *     WmipValidateWmiRegInfoString @ 0x140537B98 (WmipValidateWmiRegInfoString.c)
 *     WmipUpdateDataSource @ 0x14069F4A4 (WmipUpdateDataSource.c)
 */

__int64 __fastcall WmipProcessWmiRegInfo(__int64 a1, unsigned int *a2, unsigned int a3, char a4)
{
  unsigned int v5; // edi
  unsigned int *v6; // rbx
  int v8; // esi
  __int64 v9; // rdx
  int v10; // ecx
  int updated; // eax
  __int64 v12; // rax
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v5 = a3;
  v6 = a2;
  v8 = 0;
  if ( *a2 > a3 )
  {
LABEL_17:
    v10 = -1073741811;
  }
  else
  {
    while ( 1 )
    {
      v10 = WmipValidateWmiRegInfoString(v6, v5, v6[2], v14);
      if ( v10 < 0 )
        break;
      v10 = WmipValidateWmiRegInfoString(v6, v9, v6[3], &v15);
      if ( v10 < 0 )
        break;
      if ( 32 * v6[4] + 24 > v5 )
        goto LABEL_17;
      if ( a4 )
        updated = WmipUpdateDataSource(a1, v6, v5);
      else
        updated = WmipAddDataSource(a1, (_DWORD)v6, v5, v14[0], v15);
      v10 = updated;
      if ( updated >= 0 )
        ++v8;
      v12 = v6[1];
      if ( !(_DWORD)v12 )
        break;
      if ( v5 < (unsigned int)v12 )
        break;
      v5 -= v12;
      if ( v5 < 0x18 )
        break;
      v6 = (unsigned int *)((char *)v6 + v12);
      if ( (unsigned int *)(((unsigned __int64)v6 + 7) & 0xFFFFFFFFFFFFFFF8uLL) != v6 )
        break;
      if ( *v6 > v5 )
        goto LABEL_17;
    }
  }
  if ( v8 )
    return 0;
  return (unsigned int)v10;
}
