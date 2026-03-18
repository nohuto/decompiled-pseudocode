/*
 * XREFs of ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x1C0093090
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008B8AC (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ @ 0x1C000FC84 (--1DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@111K@Z @ 0x1C001D768 (--0VIDMM_MAPPED_VA_RANGE@@QEAA@PEAUVIDMM_VAD@@_K1IPEAX1W4VIDMM_VAD_OWNER_TYPE@@U_D3DDDIGPUVIRTUA.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x1C001DA5C (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ??2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z @ 0x1C00925FC (--2VIDMM_MAPPED_VA_RANGE@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::BuildVaRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        struct VIDMM_VAD *a3,
        unsigned int a4,
        struct _LIST_ENTRY *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  __int64 v9; // rsi
  unsigned int v10; // ebx
  __int64 **v11; // r12
  __int64 *i; // rdi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r15
  PSLIST_ENTRY v15; // rax
  __int64 v16; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _LIST_ENTRY *v18; // rax
  __int64 **v19; // r12
  __int64 *j; // rdi
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // r15
  PSLIST_ENTRY v23; // rax
  __int64 v24; // rax
  struct _LIST_ENTRY *v25; // rcx
  struct _LIST_ENTRY *v26; // rax
  _BYTE v28[32]; // [rsp+70h] [rbp-48h] BYREF
  char v30; // [rsp+D8h] [rbp+20h]
  unsigned __int64 v31; // [rsp+F8h] [rbp+40h]

  v30 = a4;
  v9 = a4;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v28, this + 5);
  v31 = a8 - a6;
  v10 = 0;
  if ( EvaluateCurrentState((const struct reg_FeatureDescriptor *)&reg_FeatureDescriptors_a) )
  {
    v11 = (__int64 **)((char *)a2 + 32 * v9 + 96);
    for ( i = *v11; i != (__int64 *)v11; i = (__int64 *)*i )
    {
      v13 = i[11];
      if ( a7 <= v13 )
        break;
      v14 = i[12];
      if ( a6 < v14 )
      {
        if ( a6 > v13 )
          v13 = a6;
        if ( a7 < v14 )
          v14 = a7;
        v15 = VIDMM_MAPPED_VA_RANGE::operator new();
        if ( v15 )
          v16 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                  (__int64)v15,
                  (__int64)a3,
                  v13 + v31,
                  v14 + v31,
                  v30,
                  i[6],
                  v13 + i[8] - i[11],
                  (int)(*((_DWORD *)i + 14) << 28) >> 28,
                  i[10],
                  i[9],
                  i[14],
                  i[13],
                  0);
        else
          v16 = 0LL;
        if ( !v16 )
          goto LABEL_34;
        Blink = a5->Blink;
        v18 = (struct _LIST_ENTRY *)(v16 + 8);
        if ( Blink->Flink != a5 )
          __fastfail(3u);
        v18->Flink = a5;
        v18->Blink = Blink;
        Blink->Flink = v18;
        a5->Blink = v18;
      }
    }
  }
  else
  {
    v19 = (__int64 **)((char *)a2 + 16 * v9 + 96);
    for ( j = *v19; j != (__int64 *)v19; j = (__int64 *)*j )
    {
      v21 = j[11];
      if ( a7 <= v21 )
        break;
      v22 = j[12];
      if ( a6 < v22 )
      {
        if ( a6 > v21 )
          v21 = a6;
        if ( a7 < v22 )
          v22 = a7;
        v23 = VIDMM_MAPPED_VA_RANGE::operator new();
        if ( v23 )
          v24 = VIDMM_MAPPED_VA_RANGE::VIDMM_MAPPED_VA_RANGE(
                  (__int64)v23,
                  (__int64)a3,
                  v21 + v31,
                  v22 + v31,
                  v30,
                  j[6],
                  v21 + j[8] - j[11],
                  (int)(*((_DWORD *)j + 14) << 28) >> 28,
                  j[10],
                  j[9],
                  j[14],
                  j[13],
                  0);
        else
          v24 = 0LL;
        if ( !v24 )
        {
LABEL_34:
          v10 = -1073741801;
          break;
        }
        v25 = a5->Blink;
        v26 = (struct _LIST_ENTRY *)(v24 + 8);
        if ( v25->Flink != a5 )
          __fastfail(3u);
        v26->Flink = a5;
        v26->Blink = v25;
        v25->Flink = v26;
        a5->Blink = v26;
      }
    }
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::~DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v28);
  return v10;
}
