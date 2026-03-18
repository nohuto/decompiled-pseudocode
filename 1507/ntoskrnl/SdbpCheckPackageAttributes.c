/*
 * XREFs of SdbpCheckPackageAttributes @ 0x1407031D8
 * Callers:
 *     <none>
 * Callees:
 *     SdbReadDWORDTag @ 0x1405778E0 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x140577C74 (SdbFindFirstTag.c)
 *     AslStringPatternMatchW @ 0x1405A9E4C (AslStringPatternMatchW.c)
 *     SdbGetStringTagPtr @ 0x1405ABAB8 (SdbGetStringTagPtr.c)
 *     SdbReadQWORDTag @ 0x1405C6BBC (SdbReadQWORDTag.c)
 *     SdbpCheckFromVersion @ 0x140704D80 (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoVersion @ 0x140704DBC (SdbpCheckUptoVersion.c)
 *     SdbpCheckVersion @ 0x140704DF8 (SdbpCheckVersion.c)
 */

__int64 __fastcall SdbpCheckPackageAttributes(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v6; // ebx
  int v9; // esi
  unsigned __int64 v10; // r14
  unsigned __int64 *v11; // r13
  unsigned int FirstTag; // r10d
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // r8
  unsigned __int16 v15; // r11
  unsigned __int64 v16; // rdi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  WCHAR *StringTagPtr; // rax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 QWORDTag; // rax
  int DWORDTag; // ecx

  v6 = 0;
  v9 = 1;
  v10 = 0LL;
  v11 = *(unsigned __int64 **)(a6 + 88);
  *a1 = 0;
  do
  {
    FirstTag = SdbFindFirstTag(*(_QWORD *)(a2 + 8), a5, *(_WORD *)((char *)&unk_1402AD750 + v10));
    if ( !FirstTag )
      goto LABEL_33;
    v13 = v11[2];
    v14 = 0LL;
    if ( !v13 )
      return v6;
    v15 = *(_WORD *)((char *)&unk_1402AD750 + v10);
    do
    {
      v16 = 0LL;
      if ( v14 < v13 )
      {
        v17 = v11[1] * v14;
        if ( !is_mul_ok(v11[1], v14) || (v18 = v11[5], v16 = v18 + v17, v18 + v17 < v18) )
          v16 = 0LL;
      }
      if ( *(_WORD *)v16 == v15 )
        break;
      ++v14;
    }
    while ( v14 < v13 );
    switch ( v15 )
    {
      case 0x4045u:
        DWORDTag = SdbReadDWORDTag(*(_QWORD *)(a2 + 8), FirstTag, 0xFFFFFFFF);
        if ( DWORDTag == -1 )
          return v6;
        v20 = DWORDTag == *(_DWORD *)(v16 + 8);
        goto LABEL_30;
      case 0x5014u:
LABEL_26:
        QWORDTag = SdbReadQWORDTag(*(_QWORD *)(a2 + 8), FirstTag, -1LL);
        if ( QWORDTag == -1 )
          return v6;
        v20 = SdbpCheckVersion(QWORDTag, *(_QWORD *)(v16 + 8));
        goto LABEL_30;
      case 0x5015u:
LABEL_24:
        v22 = SdbReadQWORDTag(*(_QWORD *)(a2 + 8), FirstTag, -1LL);
        if ( v22 == -1 )
          return v6;
        v20 = SdbpCheckFromVersion(v22, *(_QWORD *)(v16 + 8));
        goto LABEL_30;
    }
    if ( v15 != 20502 )
    {
      if ( v15 == 20503 )
        goto LABEL_26;
      if ( v15 == 20504 )
        goto LABEL_24;
      if ( v15 != 20505 )
      {
        if ( v15 <= 0x6028u )
          return v6;
        if ( v15 > 0x602Bu )
          return v6;
        StringTagPtr = (WCHAR *)SdbGetStringTagPtr(*(_QWORD *)(a2 + 8), FirstTag);
        if ( !StringTagPtr )
          return v6;
        v20 = AslStringPatternMatchW(StringTagPtr, *(WCHAR **)(v16 + 8));
        goto LABEL_30;
      }
    }
    v21 = SdbReadQWORDTag(*(_QWORD *)(a2 + 8), FirstTag, -1LL);
    if ( v21 == -1 )
      return v6;
    v20 = SdbpCheckUptoVersion(v21, *(_QWORD *)(v16 + 8));
LABEL_30:
    if ( !v9 || (v9 = 1, !v20) )
      v9 = 0;
LABEL_33:
    v10 += 2LL;
  }
  while ( v10 < 0x14 );
  *a1 = v9;
  return 1;
}
