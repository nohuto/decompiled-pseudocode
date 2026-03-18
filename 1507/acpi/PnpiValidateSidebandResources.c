/*
 * XREFs of PnpiValidateSidebandResources @ 0x1C007E31C
 * Callers:
 *     PnpiAddSidebandResources @ 0x1C007D384 (PnpiAddSidebandResources.c)
 * Callees:
 *     <none>
 */

char __fastcall PnpiValidateSidebandResources(__int64 a1, __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // r8
  int v4; // ebx
  _QWORD *v5; // rax
  char v6; // dl
  unsigned int v7; // r10d
  unsigned int v8; // esi
  char v9; // bp
  __int64 v10; // rdx
  int v11; // ebp
  unsigned int v12; // r13d
  __int64 v13; // r11
  int v14; // r15d
  unsigned int v15; // edi
  unsigned int v16; // r14d
  _QWORD *v17; // r9
  bool v18; // zf
  __int16 v20; // cx
  unsigned int v21; // eax
  __int64 v22; // [rsp+40h] [rbp+8h]

  v22 = a1;
  v2 = *(_DWORD *)(a2 + 28);
  v3 = a2 + 32;
  v4 = 0;
  if ( v2 )
  {
    v5 = AcpiInformation;
    v6 = AcpiGlobalFlags;
    while ( 1 )
    {
      v7 = *(_DWORD *)(v3 + 4);
      v8 = 0;
      if ( !v7 )
        goto LABEL_33;
      v9 = v6;
      v10 = v3 + 9;
      v11 = v9 & 2;
      do
      {
        if ( (v11 || *(_BYTE *)(v5[1] + 8LL) >= 5u) && *(_BYTE *)v10 != 2
          || *(_DWORD *)(v10 + 7) == *(_DWORD *)(v10 + 11) )
        {
          v12 = *(_DWORD *)(a1 + 28);
          v13 = a1 + 32;
          v14 = 0;
          if ( v12 )
          {
            while ( 1 )
            {
              v15 = *(_DWORD *)(v13 + 4);
              v16 = 0;
              if ( v15 )
                break;
LABEL_27:
              v13 += 40LL;
              if ( v15 > 1 )
                v13 += 32LL * (v15 - 1);
              if ( ++v14 >= v12 )
              {
                a1 = v22;
                goto LABEL_31;
              }
            }
            v17 = (_QWORD *)(v13 + 24);
            while ( 2 )
            {
              switch ( *((_BYTE *)v17 - 15) )
              {
                case 2:
                  if ( *(_BYTE *)v10 == 2 )
                  {
                    v20 = *(_WORD *)(v10 + 3);
                    if ( (v20 & 2) == 0 )
                    {
                      v21 = *(_DWORD *)(v10 + 7);
                      if ( v21 >= *((_DWORD *)v17 - 2) && v21 <= *((_DWORD *)v17 - 1) && (v20 & 0x20) == 0 )
                        return 0;
                    }
                  }
                  break;
                case 3:
                  v18 = *(_BYTE *)v10 == 3;
LABEL_16:
                  if ( v18 && (*(_QWORD *)(v10 + 15) <= *v17 || *(_QWORD *)(v10 + 23) >= *v17) )
                    return 0;
                  break;
                case 7:
                  v18 = *(_BYTE *)v10 == 7;
                  goto LABEL_16;
              }
              ++v16;
              v17 += 4;
              if ( v16 >= v15 )
                goto LABEL_27;
              continue;
            }
          }
        }
LABEL_31:
        v5 = AcpiInformation;
        ++v8;
        v10 += 32LL;
      }
      while ( v8 < v7 );
      v6 = AcpiGlobalFlags;
LABEL_33:
      v3 += 40LL;
      if ( v7 > 1 )
        v3 += 32LL * (v7 - 1);
      if ( ++v4 >= v2 )
        return 1;
      a1 = v22;
      v5 = AcpiInformation;
    }
  }
  return 1;
}
