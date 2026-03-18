/*
 * XREFs of ?BuildMdlFromRange@VIDMM_CPU_HOST_APERTURE@@QEBAPEAU_MDL@@PEAXPEBUVIDMM_CPU_HOST_APERTURE_RANGE@@_K2@Z @ 0x1C0011524
 * Callers:
 *     ?BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTURE@@PEAPEAU_MDL@@@Z @ 0x1C004B9E4 (-BuildMdlForAllocInCpuHostAperture@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@PEAVVIDMM_CPU_HOST_APERTU.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C006D5E0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
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
  __int64 v13; // r10
  unsigned __int64 v14; // rdx
  CSHORT *p_Size; // r8
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  CSHORT *v18; // r8
  __int64 v19; // rcx
  unsigned int v20; // r11d
  unsigned int v21; // ebp
  __int64 v22; // rsi
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // r10

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
      v13 = (unsigned int)v11;
      v14 = *((_QWORD *)this + 4);
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8LL) + 24LL) + 284LL) & 4) != 0 )
      {
        v10->Next = *(struct _MDL **)(v14 + 8 * v11 + 48);
        p_Size = &Mdl[1].Size;
        if ( (_DWORD)v11 != v12 )
        {
          do
          {
            v16 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v13);
            v13 = v16;
            *(_QWORD *)p_Size = *(_QWORD *)(v14 + 8 * v16 + 48);
            p_Size += 4;
          }
          while ( (_DWORD)v16 != v12 );
        }
      }
      else
      {
        v17 = v14 >> 12;
        v10->Next = (struct _MDL *)(v11 + v17);
        v18 = &Mdl[1].Size;
        if ( (_DWORD)v11 != v12 )
        {
          do
          {
            v19 = *(unsigned int *)(*((_QWORD *)this + 5) + 4 * v13);
            v13 = v19;
            *(_QWORD *)v18 = v19 + v17;
            v18 += 4;
          }
          while ( (_DWORD)v19 != v12 );
        }
      }
    }
    else
    {
      v20 = 0;
      v21 = a4 >> 12;
      v22 = *((_QWORD *)this + 4) >> 12;
      v23 = v22 + (unsigned int)(16 * v11) + v21;
      v24 = 16 - v21;
      if ( (unsigned int)(a5 >> 12) )
      {
        v25 = 0LL;
        do
        {
          if ( !v24 )
          {
            LODWORD(v11) = *(_DWORD *)(*((_QWORD *)this + 5) + 4LL * (unsigned int)v11);
            v24 = 16;
            v23 = v22 + (unsigned int)(16 * v11);
          }
          ++v20;
          *((_QWORD *)&v10->Next + v25) = v23;
          v25 = v20;
          ++v23;
          --v24;
        }
        while ( v20 < (unsigned __int64)(unsigned int)(a5 >> 12) );
      }
    }
  }
  return Mdl;
}
