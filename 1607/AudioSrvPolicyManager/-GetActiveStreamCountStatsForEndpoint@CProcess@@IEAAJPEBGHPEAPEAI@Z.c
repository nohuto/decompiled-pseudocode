/*
 * XREFs of ?GetActiveStreamCountStatsForEndpoint@CProcess@@IEAAJPEBGHPEAPEAI@Z @ 0x18000E19C
 * Callers:
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18000EE3C (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 * Callees:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000A428 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x1800104C8 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180010DA4 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     _recalloc @ 0x180024480 (_recalloc.c)
 *     memset_0 @ 0x180024558 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CProcess::GetActiveStreamCountStatsForEndpoint(
        CProcess *this,
        const unsigned __int16 *a2,
        int a3,
        unsigned int **a4)
{
  unsigned int v5; // edi
  char *v6; // rsi
  unsigned int v7; // edx
  signed int v8; // ecx
  int v9; // ebp
  unsigned __int16 **v10; // r10
  unsigned __int16 *v11; // rdx
  __int64 v12; // r9
  unsigned __int16 v13; // r8
  unsigned int *v14; // rbx
  _QWORD *v15; // rdx
  HANDLE ProcessHeap; // rax
  void *v17; // rax
  void *v18; // rbx
  HANDLE v19; // rax
  void *v20; // r8
  void *v21; // rax
  void *v22; // rax
  __int64 v23; // r14
  _QWORD *v24; // rcx
  volatile signed __int32 *v25; // rdx
  HANDLE v26; // rax
  void *v28; // [rsp+20h] [rbp-58h]
  _QWORD v29[3]; // [rsp+28h] [rbp-50h] BYREF
  _QWORD *v30; // [rsp+40h] [rbp-38h]
  volatile signed __int32 *v31; // [rsp+80h] [rbp+8h] BYREF
  int v32; // [rsp+90h] [rbp+18h]

  v29[1] = -2LL;
  v5 = 0;
  v6 = (char *)this + 256;
  if ( a3 )
    v6 = (char *)this + 280;
  v29[2] = v6;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v29);
  v8 = 0;
  v9 = 1;
  if ( *((int *)v6 + 4) <= 0 )
  {
LABEL_15:
    v8 = -1;
  }
  else
  {
    v10 = *(unsigned __int16 ***)v6;
    while ( 1 )
    {
      if ( !v29[0] )
        ATL::AtlThrowImpl(-2147467259);
      v11 = *v10;
      v12 = v29[0] - (_QWORD)*v10;
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 != *(unsigned __int16 *)((char *)v11 + v12) )
          break;
        ++v11;
        if ( !v13 )
        {
          v7 = 0;
          goto LABEL_11;
        }
      }
      v7 = v13 < *(unsigned __int16 *)((char *)v11 + v12) ? -1 : 1;
LABEL_11:
      if ( !v7 )
        break;
      ++v8;
      ++v10;
      if ( v8 >= *((_DWORD *)v6 + 4) )
        goto LABEL_15;
    }
  }
  if ( v8 == -1 )
  {
    v14 = 0LL;
  }
  else
  {
    if ( v8 < 0 || v8 >= *((_DWORD *)v6 + 4) )
    {
      ATL::_AtlRaiseException(v8, v7);
      __debugbreak();
    }
    v14 = *(unsigned int **)(*((_QWORD *)v6 + 1) + 8LL * v8);
  }
  v15 = (_QWORD *)(v29[0] - 24LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v29[0] - 24LL + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 8LL))(*v15);
  if ( v14 )
    goto LABEL_40;
  ProcessHeap = GetProcessHeap();
  v17 = HeapAlloc(ProcessHeap, 0, 0x54uLL);
  v18 = v17;
  v28 = v17;
  if ( v17 )
  {
    memset_0(v17, 0, 0x54uLL);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v31);
    v21 = _recalloc(*(void **)v6, *((_DWORD *)v6 + 4) + 1, 8uLL);
    if ( v21 && (*(_QWORD *)v6 = v21, (v22 = _recalloc(*((void **)v6 + 1), *((_DWORD *)v6 + 4) + 1, 8uLL)) != 0LL) )
    {
      *((_QWORD *)v6 + 1) = v22;
      v32 = *((_DWORD *)v6 + 4);
      v23 = v32;
      v30 = (_QWORD *)(*(_QWORD *)v6 + 8LL * v32);
      if ( v30 )
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
          v30,
          (const void **)&v31);
      v24 = (_QWORD *)(*((_QWORD *)v6 + 1) + 8 * v23);
      v30 = v24;
      if ( v24 )
        *v24 = v18;
      ++*((_DWORD *)v6 + 4);
    }
    else
    {
      v9 = 0;
    }
    v25 = v31 - 6;
    if ( _InterlockedExchangeAdd(v31 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v25 + 8LL))(*(_QWORD *)v25);
    if ( !v9 )
    {
      v5 = -2147024882;
      v19 = GetProcessHeap();
      v20 = v28;
      goto LABEL_26;
    }
    v14 = (unsigned int *)v28;
    v26 = GetProcessHeap();
    HeapFree(v26, 0, 0LL);
LABEL_40:
    *a4 = v14;
    return v5;
  }
  v5 = -2147024882;
  v19 = GetProcessHeap();
  v20 = 0LL;
LABEL_26:
  HeapFree(v19, 0, v20);
  return v5;
}
