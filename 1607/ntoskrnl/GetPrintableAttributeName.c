/*
 * XREFs of GetPrintableAttributeName @ 0x1406CD7FC
 * Callers:
 *     LocalpGetStringForCondition @ 0x1406CFDC0 (LocalpGetStringForCondition.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     SddlpFree @ 0x1404BA0C0 (SddlpFree.c)
 *     SddlpAlloc @ 0x1404BAB78 (SddlpAlloc.c)
 *     EncodeAttributeName @ 0x1406CCAA8 (EncodeAttributeName.c)
 */

__int64 __fastcall GetPrintableAttributeName(__int64 a1, int a2, char a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // ebp
  void *v8; // r15
  size_t v9; // r13
  unsigned int v10; // eax
  __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned __int64 v14; // r14
  char *v15; // rdi
  const wchar_t *v16; // rdx
  size_t v17; // r8
  const void *v18; // rdx
  void *v20; // [rsp+20h] [rbp-48h] BYREF
  __int64 v21; // [rsp+28h] [rbp-40h]

  LODWORD(v21) = 0;
  v20 = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0LL;
  if ( a1 && a4 && a2 )
  {
    *a5 = 1;
    if ( (unsigned int)(a2 - 1) < 4 || (v9 = *(unsigned int *)(a1 + 1), *a5 = 5, a2 - 5 < (unsigned int)v9) )
    {
      v6 = 1336;
    }
    else
    {
      if ( a3 == -8 )
      {
        v12 = v9 + 2;
        if ( (int)v9 + 2 >= (unsigned int)v9 )
        {
LABEL_21:
          v14 = v12;
          v15 = (char *)SddlpAlloc(v12);
          *a4 = v15;
          if ( !v15 )
          {
            v6 = 8;
            goto LABEL_35;
          }
          if ( a3 == -5 )
          {
            v16 = L"@DEVICE.";
          }
          else
          {
            if ( a3 != -7 )
            {
              if ( a3 == -6 )
                memmove(v15, L"@RESOURCE.", v7);
              if ( a3 == -8 )
              {
                v17 = v9;
                v18 = (const void *)(a1 + (unsigned int)*a5);
                goto LABEL_33;
              }
LABEL_31:
              v17 = (unsigned int)v21;
              v18 = v8;
LABEL_33:
              memmove(&v15[v7], v18, v17);
              *a5 += v9;
              *(_WORD *)&v15[2 * (v14 >> 1) - 2] = 0;
              goto LABEL_35;
            }
            v16 = L"@USER.";
          }
          memmove(v15, v16, v7);
          goto LABEL_31;
        }
LABEL_34:
        v6 = 534;
        goto LABEL_35;
      }
      v10 = EncodeAttributeName((unsigned __int16 *)(a1 + 5), v9, (__int64 *)&v20);
      v8 = v20;
      v6 = v10;
      if ( !v10 )
      {
        v11 = -1LL;
        do
          ++v11;
        while ( *((_WORD *)v20 + v11) );
        v21 = (unsigned int)(2 * v11);
        v12 = v21 + 2;
        if ( (int)v21 + 2 >= (unsigned int)v21 )
        {
          switch ( a3 )
          {
            case -5:
              v7 = 16;
              v13 = v21 + 18;
              break;
            case -7:
              v7 = 12;
              v13 = v21 + 14;
              break;
            case -6:
              v7 = 20;
              v13 = v21 + 22;
              break;
            default:
              goto LABEL_21;
          }
          if ( v13 >= v12 )
          {
            v12 = v13;
            goto LABEL_21;
          }
        }
        goto LABEL_34;
      }
    }
LABEL_35:
    SddlpFree(v8);
    return v6;
  }
  return 87LL;
}
