/*
 * XREFs of ?CreateBlockAndRange@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@_KIE@Z @ 0x1C0065F48
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z @ 0x1C00652AC (-Allocate@VIDMM_RECYCLE_HEAP@@QEAAJ_KIPEAPEAX1PEAEE@Z.c)
 * Callees:
 *     ??_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z @ 0x1C0010858 (--_GVIDMM_RECYCLE_BLOCK@@QEAAPEAXI@Z.c)
 *     ?GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C0010878 (-GetSmallAllocationBlockSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     ?GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z @ 0x1C00108B4 (-GetSmallAllocationSize@VIDMM_RECYCLE_HEAP_MGR@@QEAA_KE@Z.c)
 *     Template_pppppppqq @ 0x1C001099C (Template_pppppppqq.c)
 *     ?AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTIRANGE@@@Z @ 0x1C0064C2C (-AddMultirangeToTree@VIDMM_RECYCLE_HEAP@@QEAAXW4VIDMM_RECYCLE_HEAP_TREE@@PEAVVIDMM_RECYCLE_MULTI.c)
 *     ?CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z @ 0x1C0066098 (-CreateBlockForType@VIDMM_RECYCLE_HEAP@@AEAAPEAVVIDMM_RECYCLE_BLOCK@@_KE@Z.c)
 *     ?CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULTIRANGE_STATE@@PEAVVIDMM_RECYCLE_BLOCK@@_K2@Z @ 0x1C0066150 (-CreateMultirange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_MULTIRANGE@@W4VIDMM_RECYCLE_MULT.c)
 *     ?CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z @ 0x1C00661E8 (-CreateRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAPEAVVIDMM_RECYCLE_RANGE@@PEAVVIDMM_RECYCLE_BLOCK@@_K1@Z.c)
 *     ?DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0066784 (-DestroyRange@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_HEAP::CreateBlockAndRange(VIDMM_RECYCLE_HEAP_MGR **this)
{
  unsigned __int64 SmallAllocationSize; // rax
  char v3; // dl
  VIDMM_RECYCLE_HEAP_MGR *v4; // rcx
  unsigned __int8 v5; // r9
  unsigned __int64 SmallAllocationBlockSize; // r10
  unsigned __int64 *BlockForType; // rax
  unsigned __int64 *v8; // rbx
  struct VIDMM_RECYCLE_RANGE *Range; // rax
  struct VIDMM_RECYCLE_RANGE *v11; // rdi
  _QWORD *v12; // rax
  unsigned __int64 v13; // r9
  __int64 Multirange; // rax
  __int64 v15; // rbp
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8

  SmallAllocationSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationSize(
                          (VIDMM_RECYCLE_HEAP_MGR *)this,
                          (unsigned int)(*(_DWORD *)this - 5) <= 1);
  if ( SmallAllocationSize > SmallAllocationBlockSize )
    SmallAllocationBlockSize = VIDMM_RECYCLE_HEAP_MGR::GetSmallAllocationBlockSize(v4, v3);
  BlockForType = (unsigned __int64 *)VIDMM_RECYCLE_HEAP::CreateBlockForType(v4, SmallAllocationBlockSize, v5);
  v8 = BlockForType;
  if ( !BlockForType )
    return 0LL;
  Range = VIDMM_RECYCLE_HEAP_MGR::CreateRange(
            this[1],
            (struct VIDMM_RECYCLE_BLOCK *)BlockForType,
            BlockForType[5],
            BlockForType[6]);
  v11 = Range;
  if ( !Range )
  {
    VIDMM_RECYCLE_BLOCK::`scalar deleting destructor'((VIDMM_RECYCLE_BLOCK *)v8);
    return 0LL;
  }
  *((_QWORD *)Range + 16) = v8 + 9;
  v12 = (_QWORD *)((char *)Range + 120);
  *v12 = v8 + 9;
  v13 = v8[5];
  v8[10] = (unsigned __int64)v12;
  v8[9] = (unsigned __int64)v12;
  Multirange = VIDMM_RECYCLE_HEAP_MGR::CreateMultirange(this[1], 0LL, v8, v13, v8[6]);
  v15 = Multirange;
  if ( !Multirange )
  {
    VIDMM_RECYCLE_HEAP_MGR::DestroyRange(this[1], v11);
    return 0LL;
  }
  *(_QWORD *)(Multirange + 64) = v11;
  *(_QWORD *)(Multirange + 72) = v11;
  VIDMM_RECYCLE_HEAP::AddMultirangeToTree((_QWORD *)v8[4], 2LL, Multirange);
  *((_QWORD *)v11 + 17) = v15;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    Template_pppppppqq(
      v17,
      v16,
      v18,
      **((_QWORD **)this[1] + 1),
      v11,
      v8,
      v8[7],
      this,
      *((_QWORD *)v11 + 4),
      *((_QWORD *)v11 + 5),
      *(_DWORD *)this,
      *((_DWORD *)v11 + 16));
  return (struct VIDMM_RECYCLE_MULTIRANGE *)v15;
}
