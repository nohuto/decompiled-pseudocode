/*
 * XREFs of MmAllocateMdlForIoSpace @ 0x1401E4184
 * Callers:
 *     <none>
 * Callees:
 *     IoAllocateMdl @ 0x14002EB10 (IoAllocateMdl.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 */

__int64 __fastcall MmAllocateMdlForIoSpace(__int64 a1, unsigned __int64 a2, PMDL *a3)
{
  unsigned __int64 v3; // rdi
  _QWORD *v5; // rbx
  _DWORD *v6; // r9
  int v7; // r8d
  unsigned __int64 v8; // rdx
  _QWORD *v9; // r9
  int v10; // r10d
  unsigned __int64 v11; // rcx
  PMDL Mdl; // rax
  PMDL v13; // rcx
  __int64 result; // rax
  unsigned int v15; // r8d
  struct _MDL *i; // r11
  unsigned int v17; // r10d
  unsigned __int64 v18; // r9
  struct _MDL *v19; // rdx

  v3 = a2;
  LODWORD(a2) = 0;
  v5 = (_QWORD *)a1;
  if ( v3 )
  {
    v6 = (_DWORD *)(a1 + 8);
    v7 = 4095;
    while ( (v7 & *v6) == 0 )
    {
      if ( (v7 & *(v6 - 2)) != 0 )
        break;
      if ( MiIsPfnInline(*((_QWORD *)v6 - 1) >> 12) )
        break;
      v11 = v8 + *v9;
      if ( v11 < v8 )
        break;
      a2 = v8 + *v9;
      if ( v11 > 0xFFFFFFFF )
        break;
      v6 = v9 + 2;
      if ( (unsigned int)(v10 + 1) >= v3 )
        goto LABEL_9;
    }
    return 3221225711LL;
  }
  else
  {
LABEL_9:
    Mdl = IoAllocateMdl(0LL, a2, 0, 0, 0LL);
    v13 = Mdl;
    if ( Mdl )
    {
      v15 = 0;
      for ( i = Mdl + 1; v15 < v3; v5 += 2 )
      {
        v17 = 0;
        v18 = v5[1] >> 12;
        v19 = (struct _MDL *)(*v5 >> 12);
        if ( v18 )
        {
          do
          {
            ++v17;
            i->Next = v19;
            i = (struct _MDL *)((char *)i + 8);
            v19 = (struct _MDL *)((char *)v19 + 1);
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
