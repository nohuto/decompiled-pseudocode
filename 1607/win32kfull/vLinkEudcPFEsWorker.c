/*
 * XREFs of vLinkEudcPFEsWorker @ 0x1C01084AC
 * Callers:
 *     vLinkEudcPFEs @ 0x1C010841C (vLinkEudcPFEs.c)
 * Callees:
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C0027C7C (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C0060E0C (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x1C025A35C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

struct PFF *__fastcall vLinkEudcPFEsWorker(__int64 a1, struct PFF *a2)
{
  struct PFF *result; // rax
  unsigned int v4; // esi
  __int64 v5; // rbx
  struct _FLENTRY *BaseFontEntry; // rbp
  int v7; // eax
  __int64 v8; // rcx
  BOOL v9; // r12d
  wchar_t *v10; // r15
  __int64 v11; // rax
  struct PFF *v12; // rdi
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  for ( result = SkipInvalidPff(a2); ; result = SkipInvalidPff(*((struct PFF **)v12 + 1)) )
  {
    v12 = result;
    if ( !result )
      break;
    if ( (*((_DWORD *)result + 13) & 8) == 0 )
    {
      v4 = 0;
      if ( *((_DWORD *)result + 36) )
      {
        while ( 1 )
        {
          v5 = *((_QWORD *)v12 + v4 + 28);
          v13 = v5;
          if ( v5 )
            break;
LABEL_16:
          if ( ++v4 >= *((_DWORD *)v12 + 36) )
            goto LABEL_17;
        }
        BaseFontEntry = (struct _FLENTRY *)a1;
        if ( a1 )
        {
          v7 = PFEOBJ::bCheckFamilyName((PFEOBJ *)&v13, (const unsigned __int16 *)(a1 + 32), 0, 0LL);
          goto LABEL_13;
        }
        v8 = *(_QWORD *)(v5 + 32);
        v9 = (*(_DWORD *)(v8 + 48) & 0x8000000) != 0;
        v10 = (wchar_t *)(v8 + *(int *)(v8 + 8));
        BaseFontEntry = FindBaseFontEntry(v10);
        if ( BaseFontEntry )
          goto LABEL_15;
        if ( v9 )
        {
          v11 = -1LL;
          do
            ++v11;
          while ( v10[v11] );
          BaseFontEntry = FindBaseFontEntry(&v10[v11 + 1]);
          if ( BaseFontEntry )
          {
LABEL_15:
            *(_QWORD *)(v5 + 128) = BaseFontEntry;
            goto LABEL_16;
          }
          v7 = 0;
LABEL_13:
          if ( v7 )
            goto LABEL_15;
        }
        *(_QWORD *)(v5 + 128) = 0LL;
        goto LABEL_16;
      }
    }
LABEL_17:
    ;
  }
  return result;
}
