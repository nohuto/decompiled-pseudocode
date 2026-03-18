/*
 * XREFs of vLinkEudcPFEsWorker @ 0x1C000F40C
 * Callers:
 *     vLinkEudcPFEs @ 0x1C000F37C (vLinkEudcPFEs.c)
 * Callees:
 *     ?FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z @ 0x1C00184CC (-FindBaseFontEntry@@YAPEAU_FLENTRY@@PEBG@Z.c)
 *     ?bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z @ 0x1C001E468 (-bCheckFamilyName@PFEOBJ@@QEAAHPEBGHPEAH@Z.c)
 */

void __fastcall vLinkEudcPFEsWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v4; // esi
  __int64 v5; // rbx
  struct _FLENTRY *BaseFontEntry; // rbp
  __int64 v7; // rcx
  BOOL v8; // r12d
  wchar_t *v9; // r15
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    v2 = a2;
    while ( 1 )
    {
      if ( (*(_DWORD *)(v2 + 52) & 8) == 0 )
      {
        v4 = 0;
        if ( *(_DWORD *)(v2 + 144) )
          break;
      }
LABEL_11:
      v2 = *(_QWORD *)(v2 + 8);
      if ( !v2 )
        return;
    }
    while ( 1 )
    {
      v5 = *(_QWORD *)(v2 + 8LL * v4 + 216);
      v12 = v5;
      if ( v5 )
        break;
LABEL_10:
      if ( ++v4 >= *(_DWORD *)(v2 + 144) )
        goto LABEL_11;
    }
    BaseFontEntry = (struct _FLENTRY *)a1;
    if ( a1 )
    {
      v11 = PFEOBJ::bCheckFamilyName((PFEOBJ *)&v12, (const unsigned __int16 *)(a1 + 32), 0, 0LL);
    }
    else
    {
      v7 = *(_QWORD *)(v5 + 32);
      v8 = (*(_DWORD *)(v7 + 48) & 0x8000000) != 0;
      v9 = (wchar_t *)(v7 + *(int *)(v7 + 8));
      BaseFontEntry = FindBaseFontEntry(v9);
      if ( BaseFontEntry )
        goto LABEL_13;
      if ( !v8 )
      {
LABEL_9:
        *(_QWORD *)(v5 + 128) = 0LL;
        goto LABEL_10;
      }
      v10 = -1LL;
      do
        ++v10;
      while ( v9[v10] );
      BaseFontEntry = FindBaseFontEntry(&v9[v10 + 1]);
      if ( BaseFontEntry )
      {
LABEL_13:
        *(_QWORD *)(v5 + 128) = BaseFontEntry;
        goto LABEL_10;
      }
      v11 = 0;
    }
    if ( v11 )
      goto LABEL_13;
    goto LABEL_9;
  }
}
