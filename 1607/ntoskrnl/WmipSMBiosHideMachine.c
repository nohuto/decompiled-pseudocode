/*
 * XREFs of WmipSMBiosHideMachine @ 0x14069DD0C
 * Callers:
 *     WmipGetSMBiosTableData @ 0x1404AA510 (WmipGetSMBiosTableData.c)
 * Callees:
 *     WmipSMBiosFindStringAndZero @ 0x14069DC0C (WmipSMBiosFindStringAndZero.c)
 *     WmipSMBiosFindStructure @ 0x14069DC8C (WmipSMBiosFindStructure.c)
 */

void __fastcall WmipSMBiosHideMachine(_BYTE *a1, int a2)
{
  unsigned int v4; // ebx
  _BYTE *v5; // rdi
  unsigned __int8 v6; // si
  unsigned int v7; // esi
  unsigned __int8 *v8; // rbx
  unsigned __int8 v9; // di
  unsigned int v10; // edi
  _BYTE *v11; // rbx
  unsigned __int8 v12; // si
  unsigned int v13; // edi
  _BYTE *v14; // rbx
  unsigned __int8 v15; // si
  unsigned int v16; // [rsp+60h] [rbp+30h] BYREF
  _BYTE *v17; // [rsp+70h] [rbp+40h] BYREF

  if ( a1 && a2 )
  {
    v4 = 0;
    while ( (int)WmipSMBiosFindStructure(0, v4, &v17, &v16, a1, a2) >= 0 )
    {
      if ( v4 )
        return;
      v5 = v17;
      v4 = 1;
      v6 = v17[1];
      if ( v6 > 4u )
        WmipSMBiosFindStringAndZero((__int64)v17, (unsigned __int8)v17[4], v16);
      if ( v6 > 5u )
        WmipSMBiosFindStringAndZero((__int64)v5, (unsigned __int8)v5[5], v16);
    }
    v7 = 0;
    while ( (int)WmipSMBiosFindStructure(1, v7, &v17, &v16, a1, a2) >= 0 )
    {
      if ( v7 )
        return;
      v8 = v17;
      v7 = 1;
      v9 = v17[1];
      if ( v9 > 4u )
        WmipSMBiosFindStringAndZero((__int64)v17, (unsigned __int8)v17[4], v16);
      if ( v9 > 5u )
        WmipSMBiosFindStringAndZero((__int64)v8, v8[5], v16);
      if ( v9 > 0x1Au )
        WmipSMBiosFindStringAndZero((__int64)v8, v8[26], v16);
      if ( v9 > 0x19u )
        WmipSMBiosFindStringAndZero((__int64)v8, v8[25], v16);
    }
    v10 = 0;
    while ( (int)WmipSMBiosFindStructure(2, v10, &v17, &v16, a1, a2) >= 0 )
    {
      v11 = v17;
      ++v10;
      v12 = v17[1];
      if ( v12 > 4u )
        WmipSMBiosFindStringAndZero((__int64)v17, (unsigned __int8)v17[4], v16);
      if ( v12 > 5u )
        WmipSMBiosFindStringAndZero((__int64)v11, (unsigned __int8)v11[5], v16);
    }
    v13 = 0;
    while ( (int)WmipSMBiosFindStructure(4, v13, &v17, &v16, a1, a2) >= 0 )
    {
      v14 = v17;
      ++v13;
      v15 = v17[1];
      if ( v15 > 7u )
        WmipSMBiosFindStringAndZero((__int64)v17, (unsigned __int8)v17[7], v16);
      if ( v15 > 0x10u )
        WmipSMBiosFindStringAndZero((__int64)v14, (unsigned __int8)v14[16], v16);
    }
  }
}
