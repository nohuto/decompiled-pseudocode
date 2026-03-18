/*
 * XREFs of ?ReferenceAllocationList@VIDMM_DEVICE@@QEAAJPEAPEAUVIDMM_ALLOC@@_K_NPEA_K@Z @ 0x1C0058EC8
 * Callers:
 *     ?MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z @ 0x1C004F3F0 (-MakeResident@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAU_VIDMM_MULTI_ALLOC@@_KKPEA_K3@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z @ 0x1C0058204 (-GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO@@QEAAXPEA_K_N1@Z.c)
 */

__int64 __fastcall VIDMM_DEVICE::ReferenceAllocationList(
        VIDMM_DEVICE *this,
        struct VIDMM_ALLOC **a2,
        __int64 a3,
        bool a4,
        unsigned __int64 *a5)
{
  _QWORD *v9; // r10
  unsigned int v10; // ebx
  unsigned int i; // edx
  __int64 v12; // rax
  _QWORD *v13; // rcx
  struct VIDMM_ALLOC **v14; // rsi
  struct VIDMM_ALLOC **j; // r8
  struct VIDMM_ALLOC *v16; // rdx
  __int64 v17; // r10
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned int v20; // eax
  struct VIDMM_ALLOC **v21; // rdx
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  struct VIDMM_ALLOC *v24; // rax
  struct VIDMM_ALLOC *v25; // rdx
  __int64 v26; // r10
  __int64 v27; // r8
  VIDMM_DEVICE *v28; // rax
  VIDMM_DEVICE *v29; // r9
  VIDMM_DEVICE **v30; // rcx
  VIDMM_DEVICE **v31; // r9
  __int64 v32; // rcx
  _QWORD *v33; // r9
  unsigned int k; // r8d
  __int64 v35; // rax
  _QWORD *v36; // rdx
  __int64 v37; // rcx
  _BYTE v39[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v39,
    (struct DXGPUSHLOCK *const)(*((_QWORD *)this + 2) + 304LL));
  v9 = (_QWORD *)*((_QWORD *)this + 2);
  v10 = 0;
  for ( i = 0; i < *(_DWORD *)(*v9 + 6416LL); v13[16] = v13[12] )
  {
    v12 = i++;
    v13 = (_QWORD *)(v9[6] + 240 * v12);
    v13[13] = v13[9];
    v13[14] = v13[10];
    v13[15] = v13[11];
  }
  v14 = &a2[a3];
  for ( j = a2; j != v14; ++j )
  {
    v16 = *j;
    v17 = **(_QWORD **)*j;
    if ( !(*((_BYTE *)*j + 25) & 1 | *((_DWORD *)*j + 38)) && !*((_BYTE *)v16 + 27) )
    {
      v19 = **(_QWORD **)v16;
      if ( (*((_BYTE *)v16 + 36) & 1) != 0 && (*(_DWORD *)(v19 + 76) & 0x78000) == 0x10000 )
        v20 = 0;
      else
        v20 = (*(_DWORD *)(v19 + 76) >> 15) & 0xF;
      v18 = *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) + 240LL * (*(_DWORD *)(v17 + 76) & 0x3F);
      *(_QWORD *)(v18 + 8LL * v20 + 104) += *(_QWORD *)(v17 + 16);
      *((_BYTE *)v16 + 27) = 1;
    }
  }
  VIDMM_PROCESS_ADAPTER_INFO::GetNumBytesToTrim(*((struct VIDMM_GLOBAL ***)this + 2), a5, a4, 0);
  v21 = a2;
  v22 = 0LL;
  v23 = (unsigned __int64)((char *)v14 - (char *)a2 + 7) >> 3;
  if ( a2 > v14 )
    v23 = 0LL;
  if ( v23 )
  {
    do
    {
      v24 = *v21;
      ++v22;
      ++v21;
      *((_BYTE *)v24 + 27) = 0;
    }
    while ( v22 != v23 );
  }
  if ( *a5 )
  {
    v10 = -1073741801;
  }
  else
  {
    while ( a2 != v14 )
    {
      v25 = *a2;
      v26 = **(_QWORD **)*a2;
      v27 = *(_QWORD *)(*((_QWORD *)this + 2) + 48LL) + 240LL * (*(_DWORD *)(v26 + 76) & 0x3F);
      if ( !(*((_BYTE *)*a2 + 25) & 1 | *((_DWORD *)*a2 + 38)) )
      {
        v28 = (struct VIDMM_ALLOC *)((char *)v25 + 112);
        v29 = (VIDMM_DEVICE *)*((_QWORD *)v25 + 14);
        v30 = (VIDMM_DEVICE **)*((_QWORD *)v25 + 15);
        if ( *((struct VIDMM_ALLOC **)v29 + 1) != (struct VIDMM_ALLOC *)((char *)v25 + 112) || *v30 != v28 )
          __fastfail(3u);
        *v30 = v29;
        *((_QWORD *)v29 + 1) = v30;
        v31 = (VIDMM_DEVICE **)*((_QWORD *)this + 18);
        *(_QWORD *)v28 = (char *)this + 136;
        *((_QWORD *)v25 + 15) = v31;
        if ( *v31 != (VIDMM_DEVICE *)((char *)this + 136) )
          __fastfail(3u);
        *v31 = v28;
        *((_QWORD *)this + 18) = v28;
        v32 = (*(_DWORD *)(v26 + 76) >> 11) & 0xF;
        *(_QWORD *)(v27 + 8 * v32 + 136) += *(_QWORD *)(v26 + 16);
      }
      ++*((_DWORD *)v25 + 38);
      ++a2;
    }
    v33 = (_QWORD *)*((_QWORD *)this + 2);
    for ( k = 0; k < *(_DWORD *)(*v33 + 6416LL); v36[12] = v37 )
    {
      v35 = k++;
      v36 = (_QWORD *)(v33[6] + 240 * v35);
      v37 = v36[16];
      v36[9] = v36[13];
      v36[10] = v36[14];
      v36[11] = v36[15];
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v39);
  return v10;
}
