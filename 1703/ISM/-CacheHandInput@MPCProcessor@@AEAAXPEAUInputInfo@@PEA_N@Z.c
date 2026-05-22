/*
 * XREFs of ?CacheHandInput@MPCProcessor@@AEAAXPEAUInputInfo@@PEA_N@Z @ 0x18004789C
 * Callers:
 *     ?Process2DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800472D0 (-Process2DInput@MPCProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?hfxOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180047310 (-hfxOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?hydroOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z @ 0x180047480 (-hydroOnInputReport@MPCProcessor@@AEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@std@@@std@@@2@@Z @ 0x1800484A0 (-erase@-$_Tree@V-$_Tmap_traits@IUInputData@MPCProcessor@@U-$less@I@std@@V-$allocator@U-$pair@$$C.c)
 *     ??$_Buynode@AEAIAEAUInputData@MPCProcessor@@@?$_Tree_comp_alloc@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@AEAIAEAUInputData@MPCProcessor@@@Z @ 0x180048CF0 (--$_Buynode@AEAIAEAUInputData@MPCProcessor@@@-$_Tree_comp_alloc@V-$_Tmap_traits@IUInputData@MPCP.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUInputData@MPCProcessor@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIUInputData@MPCProcessor@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAX@1@@Z @ 0x180048DC4 (--$_Insert_nohint@AEAU-$pair@$$CBIUInputData@MPCProcessor@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIU.c)
 *     memset @ 0x18009D814 (memset.c)
 */

void __fastcall MPCProcessor::CacheHandInput(MPCProcessor *this, struct InputInfo *a2, bool *a3)
{
  struct InputInfo *v3; // rdi
  int v4; // esi
  unsigned int v5; // edx
  char *v6; // r14
  __int64 *v7; // rax
  __int64 *v8; // rbx
  __int64 *v9; // rcx
  _OWORD *v10; // rax
  __int64 v11; // rdx
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  void *v24; // rax
  int v25; // r8d
  __int64 v26; // rdx
  _OWORD *v27; // rax
  __int64 v28; // r8
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm1
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  char v41; // al
  _OWORD *v42; // rbx
  _OWORD *v43; // rax
  __int128 v44; // xmm1
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm0
  __int128 v50; // xmm1
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int64 v56; // rax
  int v57; // [rsp+38h] [rbp-D0h] BYREF
  _BYTE v58[1904]; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v59; // [rsp+7E0h] [rbp+6D8h] BYREF

  v3 = a2;
  *a3 = 0;
  v4 = *((_DWORD *)a2 + 176);
  if ( (unsigned int)(v4 - 2) <= 4 && *((_DWORD *)a2 + 324) && *(_DWORD *)a2 == 512 )
  {
    v5 = *((_DWORD *)a2 + 325);
    v6 = (char *)this + 168;
    v7 = (__int64 *)*((_QWORD *)this + 21);
    v59 = v5;
    v8 = v7;
    v9 = (__int64 *)v7[1];
    while ( !*((_BYTE *)v9 + 25) )
    {
      if ( *((_DWORD *)v9 + 8) >= v5 )
      {
        v8 = v9;
        v9 = (__int64 *)*v9;
      }
      else
      {
        v9 = (__int64 *)v9[2];
      }
    }
    if ( v8 == v7 || v5 < *((_DWORD *)v8 + 8) )
      v8 = v7;
    if ( v8 == v7 )
    {
      if ( v4 == 5 )
      {
        memset(v58, 0, 0x768uLL);
        v10 = v58;
        v11 = 14LL;
        do
        {
          v12 = *((_OWORD *)v3 + 1);
          *v10 = *(_OWORD *)v3;
          v13 = *((_OWORD *)v3 + 2);
          v10[1] = v12;
          v14 = *((_OWORD *)v3 + 3);
          v10[2] = v13;
          v15 = *((_OWORD *)v3 + 4);
          v10[3] = v14;
          v16 = *((_OWORD *)v3 + 5);
          v10[4] = v15;
          v17 = *((_OWORD *)v3 + 6);
          v10[5] = v16;
          v18 = *((_OWORD *)v3 + 7);
          v3 = (struct InputInfo *)((char *)v3 + 128);
          v10[6] = v17;
          v10 += 8;
          *(v10 - 1) = v18;
          --v11;
        }
        while ( v11 );
        v19 = *((_OWORD *)v3 + 1);
        *v10 = *(_OWORD *)v3;
        v20 = *((_OWORD *)v3 + 2);
        v10[1] = v19;
        v21 = *((_OWORD *)v3 + 3);
        v10[2] = v20;
        v22 = *((_OWORD *)v3 + 4);
        v10[3] = v21;
        v23 = *((_OWORD *)v3 + 5);
        v10[4] = v22;
        v10[5] = v23;
        v58[1888] = 0;
        v24 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Buynode<unsigned int &,MPCProcessor::InputData &>(
                        v6,
                        &v59,
                        v58);
        std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::_Insert_nohint<std::pair<unsigned int const,MPCProcessor::InputData> &,std::_Tree_node<std::pair<unsigned int const,MPCProcessor::InputData>,void *> *>(
          (int)v6,
          (int)&v57,
          v25,
          (_DWORD)v24 + 32,
          v24);
      }
      else
      {
        *a3 = 1;
      }
    }
    else if ( v4 == 4 )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,MPCProcessor::InputData,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,MPCProcessor::InputData>>,0>>::erase(
        v6,
        &v59,
        v8);
    }
    else
    {
      memset(v58, 0, 0x768uLL);
      v26 = 14LL;
      v27 = v58;
      v28 = 14LL;
      do
      {
        v29 = *((_OWORD *)v3 + 1);
        *v27 = *(_OWORD *)v3;
        v30 = *((_OWORD *)v3 + 2);
        v27[1] = v29;
        v31 = *((_OWORD *)v3 + 3);
        v27[2] = v30;
        v32 = *((_OWORD *)v3 + 4);
        v27[3] = v31;
        v33 = *((_OWORD *)v3 + 5);
        v27[4] = v32;
        v34 = *((_OWORD *)v3 + 6);
        v27[5] = v33;
        v35 = *((_OWORD *)v3 + 7);
        v3 = (struct InputInfo *)((char *)v3 + 128);
        v27[6] = v34;
        v27 += 8;
        *(v27 - 1) = v35;
        --v28;
      }
      while ( v28 );
      v36 = *((_OWORD *)v3 + 1);
      *v27 = *(_OWORD *)v3;
      v37 = *((_OWORD *)v3 + 2);
      v27[1] = v36;
      v38 = *((_OWORD *)v3 + 3);
      v27[2] = v37;
      v39 = *((_OWORD *)v3 + 4);
      v27[3] = v38;
      v40 = *((_OWORD *)v3 + 5);
      v27[4] = v39;
      v27[5] = v40;
      if ( v4 == 2 )
      {
        v58[1888] = 1;
      }
      else
      {
        v41 = *((_BYTE *)v8 + 1928);
        if ( v4 == 3 )
          v41 = 0;
        v58[1888] = v41;
      }
      v42 = v8 + 5;
      v43 = v58;
      do
      {
        v44 = v43[1];
        *v42 = *v43;
        v45 = v43[2];
        v42[1] = v44;
        v46 = v43[3];
        v42[2] = v45;
        v47 = v43[4];
        v42[3] = v46;
        v48 = v43[5];
        v42[4] = v47;
        v49 = v43[6];
        v42[5] = v48;
        v50 = v43[7];
        v43 += 8;
        v42[6] = v49;
        v42 += 8;
        *(v42 - 1) = v50;
        --v26;
      }
      while ( v26 );
      v51 = v43[1];
      *v42 = *v43;
      v52 = v43[2];
      v42[1] = v51;
      v53 = v43[3];
      v42[2] = v52;
      v54 = v43[4];
      v42[3] = v53;
      v55 = v43[5];
      v56 = *((_QWORD *)v43 + 12);
      v42[4] = v54;
      v42[5] = v55;
      *((_QWORD *)v42 + 12) = v56;
    }
  }
}
