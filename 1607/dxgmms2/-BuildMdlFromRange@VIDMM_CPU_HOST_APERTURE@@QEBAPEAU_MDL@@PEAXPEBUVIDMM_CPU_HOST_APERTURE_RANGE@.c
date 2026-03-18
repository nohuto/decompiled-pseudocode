/*
 * XREFs of ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1C00127F8
 * Callers:
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00629C0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C006D5D0 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 * Callees:
 *     <none>
 */

PMDL __fastcall VIDMM_CPU_HOST_APERTURE::BuildMdlFromRange(
        VIDMM_CPU_HOST_APERTURE *this,
        void *a2,
        const struct VIDMM_CPU_HOST_APERTURE_RANGE *a3,
        unsigned __int16 a4,
        unsigned __int64 a5)
{
  int v8; // r14d
  PMDL Mdl; // rdi
  struct _MDL *v10; // r8
  __int64 v11; // r9
  int v12; // r11d
  unsigned int v13; // r11d
  unsigned int v14; // ebp
  __int64 v15; // rsi
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // r10
  __int64 v20; // r10
  unsigned __int64 v21; // rdx
  CSHORT *p_Size; // r8
  __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  CSHORT *v25; // r8
  __int64 v26; // rcx

  v8 = *(_DWORD *)(*((_QWORD *)this + 6) + 368LL);
  Mdl = IoAllocateMdl(a2, (unsigned int)(a5 >> 12) << 12, 0, 0, 0LL);
  if ( Mdl )
  {
    v10 = Mdl + 1;
    Mdl->MdlFlags |= 0x802u;
    v11 = *(unsigned int *)a3;
    v12 = *((_DWORD *)a3 + 1);
    if ( v8 == 4096 )
    {
      v20 = *(unsigned int *)a3;
      v21 = *((_QWORD *)this + 4);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL) + 24LL) + 300LL) & 8) != 0 )
      {
        v10->Next = *(struct _MDL **)(v21 + 8 * v11 + 48);
        p_Size = &Mdl[1].Size;
        if ( (_DWORD)v11 != v12 )
        {
          do
          {
            v23 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v20);
            v20 = v23;
            *(_QWORD *)p_Size = *(_QWORD *)(v21 + 8 * v23 + 48);
            p_Size += 4;
          }
          while ( (_DWORD)v23 != v12 );
        }
      }
      else
      {
        v24 = v21 >> 12;
        v10->Next = (struct _MDL *)(v11 + v24);
        v25 = &Mdl[1].Size;
        if ( (_DWORD)v11 != v12 )
        {
          do
          {
            v26 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v20);
            v20 = v26;
            *(_QWORD *)v25 = v26 + v24;
            v25 += 4;
          }
          while ( (_DWORD)v26 != v12 );
        }
      }
    }
    else
    {
      v13 = 0;
      v14 = a4 >> 12;
      v15 = *((_QWORD *)this + 4) >> 12;
      v16 = v15 + (unsigned int)(16 * v11) + v14;
      v17 = 16 - v14;
      if ( (unsigned int)(a5 >> 12) )
      {
        v18 = 0LL;
        do
        {
          if ( !v17 )
          {
            LODWORD(v11) = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * (unsigned int)v11);
            v17 = 16;
            v16 = v15 + (unsigned int)(16 * v11);
          }
          ++v13;
          *((_QWORD *)&v10->Next + v18) = v16;
          v18 = v13;
          ++v16;
          --v17;
        }
        while ( v13 < (unsigned __int64)(unsigned int)(a5 >> 12) );
      }
    }
  }
  return Mdl;
}
