/*
 * XREFs of MmAllocateMdlForIoSpace @ 0x1401D3B0C
 * Callers:
 *     <none>
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 */

__int64 __fastcall MmAllocateMdlForIoSpace(__int64 *a1, unsigned __int64 a2, PMDL *a3)
{
  unsigned __int64 v3; // r10
  __int64 *v6; // rbx
  __int64 *v7; // r9
  _QWORD *v8; // r9
  unsigned __int64 v9; // r10
  int v10; // r11d
  unsigned __int64 v11; // rcx
  PMDL Mdl; // rax
  PMDL v13; // rcx
  __int64 result; // rax
  unsigned int v15; // r8d
  struct _MDL *i; // r11
  unsigned int v17; // r10d
  unsigned __int64 v18; // r9
  __int64 v19; // rdx

  LODWORD(v3) = 0;
  v6 = a1;
  if ( a2 )
  {
    v7 = a1 + 1;
    while ( (*(_DWORD *)v7 & 0xFFF) == 0 )
    {
      if ( (*(_DWORD *)(v7 - 1) & 0xFFF) != 0 )
        break;
      if ( MI_IS_PFN(*(v7 - 1) >> 12) )
        break;
      v11 = v9 + *v8;
      if ( v11 < v9 )
        break;
      v3 = v9 + *v8;
      if ( v11 > 0xFFFFFFFF )
        break;
      v7 = v8 + 2;
      if ( (unsigned int)(v10 + 1) >= a2 )
        goto LABEL_9;
    }
    return 3221225711LL;
  }
  else
  {
LABEL_9:
    Mdl = IoAllocateMdl(0LL, v3, 0, 0, 0LL);
    v13 = Mdl;
    if ( Mdl )
    {
      v15 = 0;
      for ( i = Mdl + 1; v15 < a2; v6 += 2 )
      {
        v17 = 0;
        v18 = (unsigned __int64)v6[1] >> 12;
        v19 = *v6 >> 12;
        if ( v18 )
        {
          do
          {
            ++v17;
            i->Next = (struct _MDL *)v19;
            i = (struct _MDL *)((char *)i + 8);
            ++v19;
          }
          while ( v17 < v18 );
        }
        ++v15;
      }
      Mdl->Process = 0LL;
      Mdl->MdlFlags |= 0x802u;
      result = 0LL;
      *a3 = v13;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
