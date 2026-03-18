/*
 * XREFs of ?BuildVaRangeList@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_VAD@@0IPEAU_LIST_ENTRY@@_K22@Z @ 0x1C008136C
 * Callers:
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007C784 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0011B34 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0013D4C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::BuildVaRangeList(
        struct _KTHREAD **this,
        struct VIDMM_VAD *a2,
        struct VIDMM_VAD *a3,
        __int64 a4,
        struct _LIST_ENTRY *a5,
        unsigned __int64 a6,
        unsigned __int64 a7,
        unsigned __int64 a8)
{
  __int64 v9; // r12
  unsigned int v10; // edi
  __int64 **v11; // r12
  __int64 *i; // rbx
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // r15
  char *v15; // r11
  __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // r9
  int v19; // r8d
  __int64 v20; // r10
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *v22; // r11
  _BYTE v24[72]; // [rsp+20h] [rbp-48h] BYREF
  char v26; // [rsp+88h] [rbp+20h]
  unsigned __int64 v27; // [rsp+A8h] [rbp+40h]

  v26 = a4;
  v9 = (unsigned int)a4;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v24, this + 5, (__int64)a3, a4);
  v27 = a8 - a6;
  v10 = 0;
  v11 = (__int64 **)((char *)a2 + 16 * v9 + 96);
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
      v15 = (char *)operator new(0x78uLL, 0x39346956u, PagedPool);
      if ( v15 )
      {
        v16 = i[6];
        v17 = i[10];
        v18 = v13 + i[8] - i[11];
        v19 = *((_DWORD *)i + 14);
        v20 = i[9];
        *(_QWORD *)v15 = a3;
        *((_QWORD *)v15 + 7) = v16;
        LODWORD(v16) = *((_DWORD *)v15 + 16);
        *((_QWORD *)v15 + 11) = v17;
        *((_QWORD *)v15 + 9) = v18;
        *((_QWORD *)v15 + 10) = v20;
        *((_DWORD *)v15 + 16) = v16 & 0xFFFFE000 | (v19 << 28 >> 28) & 0xF | (16 * (v26 & 0x3F));
        *((_QWORD *)v15 + 12) = v13 + v27;
        *((_QWORD *)v15 + 13) = v14 + v27;
        *((_DWORD *)v15 + 28) = 1;
        *((_QWORD *)v15 + 1) = 0LL;
        *((_QWORD *)v15 + 2) = 0LL;
        *((_QWORD *)v15 + 3) = 0LL;
        *((_QWORD *)v15 + 4) = 0LL;
        *((_QWORD *)v15 + 5) = 0LL;
        *((_QWORD *)v15 + 6) = 0LL;
      }
      else
      {
        v15 = 0LL;
      }
      if ( !v15 )
      {
        v10 = -1073741801;
        break;
      }
      Blink = a5->Blink;
      v22 = (struct _LIST_ENTRY *)(v15 + 8);
      v22->Flink = a5;
      v22->Blink = Blink;
      if ( Blink->Flink != a5 )
        __fastfail(3u);
      Blink->Flink = v22;
      a5->Blink = v22;
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
  return v10;
}
