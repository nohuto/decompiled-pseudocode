/*
 * XREFs of SdbpCheckPackageAttributes @ 0x1406C2FFC
 * Callers:
 *     <none>
 * Callees:
 *     ULongLongMult @ 0x1401B7468 (ULongLongMult.c)
 *     SdbReadDWORDTag @ 0x1404CCBB0 (SdbReadDWORDTag.c)
 *     SdbFindFirstTag @ 0x1404E7954 (SdbFindFirstTag.c)
 *     SdbReadQWORDTag @ 0x140574150 (SdbReadQWORDTag.c)
 *     SdbGetStringTagPtr @ 0x140574250 (SdbGetStringTagPtr.c)
 *     AslStringPatternMatchW @ 0x140579274 (AslStringPatternMatchW.c)
 *     SdbpCheckFromVersion @ 0x1406C5004 (SdbpCheckFromVersion.c)
 *     SdbpCheckUptoVersion @ 0x1406C5040 (SdbpCheckUptoVersion.c)
 *     SdbpCheckVersion @ 0x1406C507C (SdbpCheckVersion.c)
 */

__int64 __fastcall SdbpCheckPackageAttributes(
        int *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        ULONGLONG pullResult)
{
  unsigned int v6; // ebx
  int v9; // esi
  unsigned __int64 v10; // r14
  ULONGLONG *v11; // r15
  unsigned int FirstTag; // r11d
  ULONGLONG v13; // rax
  ULONGLONG v14; // r9
  unsigned __int16 v15; // r10
  ULONGLONG v16; // rdi
  WCHAR *StringTagPtr; // rax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 QWORDTag; // rax
  int DWORDTag; // ecx

  v6 = 0;
  v9 = 1;
  v10 = 0LL;
  v11 = *(ULONGLONG **)(pullResult + 88);
  *a1 = 0;
  do
  {
    FirstTag = SdbFindFirstTag(*(_QWORD *)(a2 + 8), a5, *(_WORD *)((char *)&unk_140287250 + v10));
    if ( !FirstTag )
      goto LABEL_33;
    v13 = v11[2];
    v14 = 0LL;
    if ( !v13 )
      return v6;
    v15 = *(_WORD *)((char *)&unk_140287250 + v10);
    do
    {
      v16 = 0LL;
      if ( v14 < v13 )
      {
        if ( ULongLongMult(v11[1], v14, &pullResult) < 0 || (v16 = v11[5] + pullResult, v16 < v11[5]) )
          v16 = 0LL;
      }
      if ( *(_WORD *)v16 == v15 )
        break;
      v13 = v11[2];
      ++v14;
    }
    while ( v14 < v13 );
    switch ( v15 )
    {
      case 0x4045u:
        DWORDTag = SdbReadDWORDTag(*(_QWORD *)(a2 + 8), FirstTag, 0xFFFFFFFF);
        if ( DWORDTag == -1 )
          return v6;
        v18 = DWORDTag == *(_DWORD *)(v16 + 8);
        goto LABEL_30;
      case 0x5014u:
LABEL_26:
        QWORDTag = SdbReadQWORDTag(*(_QWORD *)(a2 + 8), FirstTag, -1LL);
        if ( QWORDTag == -1 )
          return v6;
        v18 = SdbpCheckVersion(QWORDTag, *(_QWORD *)(v16 + 8));
        goto LABEL_30;
      case 0x5015u:
LABEL_24:
        v20 = SdbReadQWORDTag(*(_QWORD *)(a2 + 8), FirstTag, -1LL);
        if ( v20 == -1 )
          return v6;
        v18 = SdbpCheckFromVersion(v20, *(_QWORD *)(v16 + 8));
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
        v18 = AslStringPatternMatchW(StringTagPtr, *(WCHAR **)(v16 + 8));
        goto LABEL_30;
      }
    }
    v19 = SdbReadQWORDTag(*(_QWORD *)(a2 + 8), FirstTag, -1LL);
    if ( v19 == -1 )
      return v6;
    v18 = SdbpCheckUptoVersion(v19, *(_QWORD *)(v16 + 8));
LABEL_30:
    if ( !v9 || (v9 = 1, !v18) )
      v9 = 0;
LABEL_33:
    v10 += 2LL;
  }
  while ( v10 < 0x14 );
  *a1 = v9;
  return 1;
}
